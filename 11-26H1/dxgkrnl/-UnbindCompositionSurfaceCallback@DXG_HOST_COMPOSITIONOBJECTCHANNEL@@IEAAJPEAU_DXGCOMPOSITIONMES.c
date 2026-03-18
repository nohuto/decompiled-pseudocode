/*
 * XREFs of ?UnbindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1401C133C
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1401BFD70 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x14000CCF4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x140041AB0 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14004A520 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::UnbindCompositionSurfaceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE *a2,
        struct _DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN *a3)
{
  int v6; // ebx
  DxgkCompositionObject *v7; // rsi
  BOOL v8; // ebp
  struct DXGPROCESS *Current; // rax
  struct DXGFASTMUTEX *v10; // rax
  DxgkCompositionObject *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rdx
  int v18; // eax
  _BYTE v20[16]; // [rsp+50h] [rbp-28h] BYREF

  v6 = -1073741811;
  v7 = 0LL;
  v8 = 0;
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v20);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( (*((_DWORD *)Current + 102) & 0x800) == 0 )
      v8 = (*(__int64 (**)(void))(*((_QWORD *)Current + 11) + 232LL))() != 0;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 520;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
  if ( !v8 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 553;
LABEL_15:
    WdLogSingleEntry3(3LL, *((unsigned int *)a2 + 3), *((int *)a2 + 4), v6);
    WdLogGlobalForLineNumber = 579;
    goto LABEL_16;
  }
  v10 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, v10, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
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
    WdLogGlobalForLineNumber = 548;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
  if ( !v7 )
    goto LABEL_15;
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12);
  v14[3] = *((unsigned int *)a2 + 3);
  v14[4] = v7;
  v14[5] = *((int *)a2 + 4);
  v15 = *((_QWORD *)v7 + 4);
  v16 = *((_DWORD *)a2 + 4) == 0;
  WdLogGlobalForLineNumber = 561;
  LOBYTE(v17) = !v16;
  v18 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(v15 + 32))((_QWORD *)v7 + 4, v17);
  v6 = v18;
  if ( v18 < 0 )
  {
    WdLogSingleEntry4(3LL, *((unsigned int *)a2 + 3), v7, *((int *)a2 + 4), v18);
    WdLogGlobalForLineNumber = 569;
  }
  DxgkCompositionObject::Release(v7);
  if ( v6 < 0 )
    goto LABEL_15;
LABEL_16:
  *((_DWORD *)a3 + 1) = v6;
  return (unsigned int)v6;
}
