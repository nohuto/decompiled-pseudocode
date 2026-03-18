/*
 * XREFs of ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1403670F4
 * Callers:
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x140366EE4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x140054270 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14036E800 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403FD55C (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::GetCddDeviceAndContext(
        struct DXGADAPTER **this,
        struct DXGDEVICE **a2,
        struct DXGCONTEXT **a3,
        struct DXGHWQUEUE **a4,
        char a5)
{
  struct DXGDEVICE *v6; // r13
  DXGADAPTER *v7; // r14
  __int64 v8; // r15
  struct DXGADAPTER **v9; // rax
  int PairingAdapters; // edi
  DXGADAPTER *v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rdi
  int CddDevice; // r14d
  struct DXGDEVICE *v15; // rdx
  struct DXGADAPTER *v17; // rdx
  struct DXGADAPTER **v18; // rax
  volatile signed __int64 **v19; // rax
  volatile signed __int64 *v20; // rax
  struct DXGHWQUEUE **v21; // rax
  struct DXGHWQUEUE *v22; // rcx
  unsigned __int64 *v23; // [rsp+28h] [rbp-48h]
  DXGADAPTER *v24; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v25; // [rsp+58h] [rbp-18h] BYREF
  DXGADAPTER *v26; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-8h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v6 )
    {
      SESSION_ADAPTER::DestroyCddDeviceAndContext((SESSION_ADAPTER *)this, v6);
      v6 = 0LL;
    }
    v8 = *((_QWORD *)*this + 2333);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v8 + 216, 0LL);
    *(_QWORD *)(v8 + 224) = KeGetCurrentThread();
    v24 = 0LL;
    v9 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v24);
    PairingAdapters = DxgkpGetPairingAdapters(this[2], 0, v9, &v25, 0LL, 0LL, a5);
    if ( PairingAdapters < 0 )
      break;
    v11 = v24;
    if ( !v24 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2680;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"RenderAdapterRef", 2680LL, 0LL, 0LL, 0LL, 0LL);
      v11 = v24;
    }
    if ( v7 == v11 )
    {
      CddDevice = -1073741275;
      WdLogSingleEntry3(1LL, v11, this[2], -1073741275LL);
      v23 = (unsigned __int64 *)this[2];
      WdLogGlobalForLineNumber = 2692;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DxgkpGetPairingAdapters keeps returning same disabled adapter 0x%I64x for display adapter 0x%I64x, returning 0x%I64x.",
        (__int64)v24,
        (__int64)v23,
        -1073741275LL,
        0LL,
        0LL);
      if ( v24 )
        DXGADAPTER::ReleaseReference(v24);
      v24 = 0LL;
LABEL_38:
      *(_QWORD *)(v8 + 224) = 0LL;
LABEL_17:
      ExReleasePushLockExclusiveEx(v8 + 216, 0LL);
      KeLeaveCriticalRegion();
      return (unsigned int)CddDevice;
    }
    v12 = *((_QWORD *)v11 + 396);
    v13 = v12 + 48;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v12 + 48, 0LL);
    CddDevice = 0;
    *(_QWORD *)(v12 + 56) = KeGetCurrentThread();
    v15 = this[7];
    if ( v15 )
    {
      if ( *(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL) == v24 )
      {
        if ( a2 )
        {
          *a2 = v15;
          _InterlockedIncrement64((volatile signed __int64 *)this[7] + 8);
        }
        if ( a3 )
        {
          v19 = (volatile signed __int64 **)(this + 8);
          if ( *((_DWORD *)this + 13) != 1 )
            v19 = (volatile signed __int64 **)*v19;
          v20 = *v19;
          *a3 = (struct DXGCONTEXT *)v20;
          _InterlockedIncrement64(v20 + 4);
        }
        if ( a4 )
        {
          v21 = (struct DXGHWQUEUE **)this[9];
          v22 = *v21;
          *a4 = *v21;
          if ( v22 )
            _InterlockedIncrement64((volatile signed __int64 *)v22 + 14);
        }
LABEL_14:
        *(_QWORD *)(v12 + 56) = 0LL;
        ExReleasePushLockExclusiveEx(v12 + 48, 0LL);
        KeLeaveCriticalRegion();
        if ( v24 )
          DXGADAPTER::ReleaseReference(v24);
        v24 = 0LL;
        *(_QWORD *)(v8 + 224) = 0LL;
        goto LABEL_17;
      }
      if ( !a5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2773;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"AllowPairingChanged", 2773LL, 0LL, 0LL, 0LL, 0LL);
      }
      v6 = this[7];
      v7 = *(DXGADAPTER **)(*((_QWORD *)v6 + 2) + 16LL);
    }
    else
    {
      v17 = v24;
      if ( v24 != this[2] )
      {
        v26 = 0LL;
        v18 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v26);
        CddDevice = DxgkpGetPairingAdapters(this[2], 0, v18, &v27, 0LL, 0LL, a5);
        if ( CddDevice < 0 )
        {
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v26, 0LL);
          *(_QWORD *)(v12 + 56) = 0LL;
          ExReleasePushLockExclusiveEx(v12 + 48, 0LL);
          KeLeaveCriticalRegion();
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v24, 0LL);
          *(_QWORD *)(v8 + 224) = 0LL;
          goto LABEL_17;
        }
        v7 = v24;
        if ( v24 != v26 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 2726;
          if ( v26 )
            DXGADAPTER::ReleaseReference(v26);
          v26 = 0LL;
          goto LABEL_21;
        }
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v26, 0LL);
        v17 = v24;
      }
      CddDevice = SESSION_ADAPTER::CreateCddDevice((SESSION_ADAPTER *)this, v17, a2, a3, a4);
      if ( CddDevice != -1073741267 )
        goto LABEL_14;
      if ( !a5 )
      {
        CddDevice = -1073741130;
        WdLogSingleEntry2(3LL, v24, -1073741130LL);
        WdLogGlobalForLineNumber = 2754;
        *(_QWORD *)(v12 + 56) = 0LL;
        ExReleasePushLockExclusiveEx(v13, 0LL);
        KeLeaveCriticalRegion();
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v24, 0LL);
        goto LABEL_38;
      }
      v7 = v24;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 2741;
    }
LABEL_21:
    *(_QWORD *)(v12 + 56) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
    if ( v24 )
      DXGADAPTER::ReleaseReference(v24);
    v24 = 0LL;
    *(_QWORD *)(v8 + 224) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 216, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v24, 0LL);
  *(_QWORD *)(v8 + 224) = 0LL;
  ExReleasePushLockExclusiveEx(v8 + 216, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)PairingAdapters;
}
