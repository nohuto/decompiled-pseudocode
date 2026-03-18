/*
 * XREFs of ?BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1401BDF5C
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1401BFD70 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x140041AB0 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14004A520 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1400589B4 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x140059690 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1401FC2B8 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1403F64D4 (-IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::BindCompositionSurfaceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE *a2,
        struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN *a3)
{
  struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN *v3; // r13
  __int64 v6; // rsi
  DxgkCompositionObject *v7; // r15
  int v8; // ecx
  struct DXGPROCESS *Current; // rax
  struct DXGFASTMUTEX *v10; // rax
  DxgkCompositionObject *v11; // rax
  struct _KPROCESS *v12; // rdx
  __int64 v13; // rbx
  char v14; // r12
  __int64 v15; // rcx
  HANDLE v16; // rcx
  NTSTATUS v17; // esi
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rax
  bool v25; // zf
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rbx
  HANDLE v29; // rcx
  __int64 Object; // [rsp+20h] [rbp-E0h]
  __int64 v32; // [rsp+30h] [rbp-D0h]
  __int64 v33; // [rsp+38h] [rbp-C8h]
  PVOID v35; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v36[16]; // [rsp+60h] [rbp-A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-90h] BYREF
  char v38; // [rsp+A0h] [rbp-60h]
  HANDLE Handle[32]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = a3;
  LODWORD(v6) = -1073741811;
  v7 = 0LL;
  memset(Handle, 0, sizeof(Handle));
  v8 = 31;
  if ( *((_DWORD *)a2 + 47) < 0x1Fu )
    v8 = *((_DWORD *)a2 + 47);
  *((_DWORD *)a2 + 47) = v8;
  Current = DXGPROCESS::GetCurrent();
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 232LL))() )
  {
    v10 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v36, v10, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
    v11 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                                     *((_QWORD *)this + 1),
                                     *((unsigned int *)a2 + 3),
                                     17LL);
    if ( v11 )
    {
      v7 = v11;
      DxgkCompositionObject::AddRef(v11);
    }
    else
    {
      WdLogSingleEntry2(3LL, *((unsigned int *)a2 + 3), -1073741811LL);
      WdLogGlobalForLineNumber = 378;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v36);
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 383;
  }
  if ( !v7 )
    goto LABEL_34;
  v12 = (struct _KPROCESS *)*((_QWORD *)this + 5);
  v38 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v12);
  LODWORD(v6) = DxgkExtractRemoteBundleObject(
                  *((_DWORD *)a2 + 334),
                  *((_DWORD *)a2 + 47) + 1,
                  Handle,
                  *((struct _EPROCESS **)this + 3));
  CPROCESSATTACHHELPER::Detach(&ApcState);
  if ( (int)v6 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 485;
  }
  else
  {
    v13 = 0LL;
    v14 = DXGVAILOBJECT::IsIFlipFeatureEnabled() != 0;
    while ( 1 )
    {
      v15 = *((unsigned int *)a2 + 47);
      if ( (unsigned int)v13 >= (unsigned int)v15 )
        break;
      v16 = Handle[v13];
      *((_QWORD *)a2 + 4 * (unsigned int)v13 + 24) = v16;
      if ( v14 )
      {
        v35 = 0LL;
        v17 = ObReferenceObjectByHandle(v16, 0xF0000u, g_pDxgkSharedAllocationObjectType, 1, &v35, 0LL);
        if ( v17 < 0 || (v18 = *((_QWORD *)v35 + 2)) == 0 || *(_DWORD *)(v18 + 132) != 1 )
        {
          if ( v35 )
            ObfDereferenceObject(v35);
          LODWORD(v6) = -1073741811;
          goto LABEL_27;
        }
        v14 &= (*(_DWORD *)(*(_QWORD *)(v18 + 136) - 44LL) & 0x2000) != 0;
        ObfDereferenceObject(v35);
      }
      v13 = (unsigned int)(v13 + 1);
    }
    v19 = *((_DWORD *)a2 + 44);
    v20 = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 150) = Handle[v15];
    v21 = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)(16 * v14)) & 0x10u;
    v22 = (unsigned int)v21 ^ ((unsigned __int8)(v19 ^ (v19 ^ (16 * v14)) & 0x10) ^ (unsigned __int8)(v14 << 6)) & 0x40;
    *((_DWORD *)a2 + 44) = v22;
    v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v22);
    v23[3] = *((unsigned int *)a2 + 3);
    v23[4] = v7;
    v23[5] = *((int *)a2 + 4);
    v23[6] = *((_QWORD *)a2 + 4);
    v24 = *((_QWORD *)v7 + 4);
    v25 = *((_DWORD *)a2 + 4) == 0;
    WdLogGlobalForLineNumber = 450;
    LOBYTE(v26) = !v25;
    v27 = (*(__int64 (__fastcall **)(_QWORD *, char *, __int64, char *))(v24 + 24))(
            (_QWORD *)v7 + 4,
            (char *)a2 + 24,
            v26,
            (char *)a3 + 16);
    v6 = v27;
    if ( v27 >= 0 )
    {
      if ( v20 != *((_QWORD *)a3 + 2) )
      {
        WdLogSingleEntry4(3LL, *((unsigned int *)a2 + 3), v7, *((_QWORD *)a2 + 4), *((_QWORD *)a3 + 2));
        WdLogGlobalForLineNumber = 471;
      }
    }
    else
    {
      WdLogSingleEntry5(2LL, *((unsigned int *)a2 + 3), v7, *((int *)a2 + 4), *((_QWORD *)a2 + 4), v27);
      v33 = *((_QWORD *)a2 + 4);
      v32 = *((int *)a2 + 4);
      Object = *((unsigned int *)a2 + 3);
      WdLogGlobalForLineNumber = 462;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"PairedBind(0x%I64x = 0x%I64x, 0x%I64x, 0x%I64x) failed. Returning 0x%I64x",
        Object,
        (__int64)v7,
        v32,
        v33,
        v6);
    }
    v3 = a3;
LABEL_27:
    v28 = 0LL;
    if ( *((_DWORD *)a2 + 47) != -1 )
    {
      do
      {
        v29 = Handle[v28];
        if ( v29 )
          ObCloseHandle(v29, 1);
        v28 = (unsigned int)(v28 + 1);
      }
      while ( (unsigned int)v28 < *((_DWORD *)a2 + 47) + 1 );
    }
  }
  DxgkCompositionObject::Release(v7);
  if ( (int)v6 < 0 )
  {
LABEL_34:
    WdLogSingleEntry2(3LL, *((unsigned int *)a2 + 3), (int)v6);
    WdLogGlobalForLineNumber = 494;
  }
  *((_DWORD *)v3 + 1) = v6;
  return (unsigned int)v6;
}
