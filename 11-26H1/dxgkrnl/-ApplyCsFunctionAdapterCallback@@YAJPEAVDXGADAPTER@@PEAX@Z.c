/*
 * XREFs of ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14037E8BC
 * Callers:
 *     ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x14037E71C (-ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SetCsStartRunningTime@DXGPROCESS@@QEAAXI_K@Z @ 0x140055D30 (-SetCsStartRunningTime@DXGPROCESS@@QEAAXI_K@Z.c)
 *     ?GetCsStartRunningTime@DXGPROCESS@@QEBA_KI@Z @ 0x140058530 (-GetCsStartRunningTime@DXGPROCESS@@QEBA_KI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?EnableCoreDripsBlockerAccountingForProcess@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x14037ECA8 (-EnableCoreDripsBlockerAccountingForProcess@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 *     ?AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0@Z @ 0x140423F70 (-AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0@Z.c)
 */

__int64 __fastcall ApplyCsFunctionAdapterCallback(struct DXGADAPTER *this, int *a2)
{
  __int64 v2; // rbx
  __int64 v4; // r12
  volatile signed __int32 *v5; // r15
  int v6; // eax
  unsigned int v7; // r14d
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v11; // rbp
  int v12; // eax
  unsigned __int64 CsStartRunningTime; // rbp
  DXGGLOBAL *Global; // rax
  bool v16; // r9
  unsigned int i; // ebp
  __int64 v18; // rcx
  DXGGLOBAL *v19; // rax
  __int64 v20; // [rsp+50h] [rbp-298h]
  __int64 v21; // [rsp+58h] [rbp-290h]
  _QWORD v22[2]; // [rsp+60h] [rbp-288h] BYREF
  char v23; // [rsp+70h] [rbp-278h]
  _DWORD v24[68]; // [rsp+80h] [rbp-268h] BYREF
  _QWORD v25[34]; // [rsp+190h] [rbp-158h] BYREF

  v2 = *(_QWORD *)a2;
  v4 = a2[2];
  v22[1] = this;
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  v22[0] = -1LL;
  v5 = (volatile signed __int32 *)((char *)this + 136);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v5, 0LL);
  _InterlockedIncrement(v5 + 4);
  v6 = *((_DWORD *)this + 50);
  v23 = 1;
  if ( v6 != 1 )
    goto LABEL_14;
  v7 = *((_DWORD *)this + 60);
  if ( v7 >= 6 )
    goto LABEL_14;
  v8 = *((_QWORD *)this + 396);
  v9 = 0LL;
  v10 = *(_QWORD *)(v8 + 736);
  v21 = *(_QWORD *)(v8 + 744);
  if ( !v10 )
  {
    v12 = -1073741438;
LABEL_7:
    WdLogSingleEntry4(3LL, v4, v2, this, v12);
    WdLogGlobalForLineNumber = 5901;
    _InterlockedDecrement(v5 + 4);
    ExReleasePushLockSharedEx(v5, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference(this);
    return 0LL;
  }
  memset(v24, 0, sizeof(v24));
  memset(v25, 0, sizeof(v25));
  v11 = *(_QWORD *)(v2 + 64);
  if ( !v11 || (v11 = *(_QWORD *)(v11 + 8LL * (unsigned int)(*(_DWORD *)v10 - 1) + 16)) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1334;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidSchProcess", 1334LL, 0LL, 0LL, 0LL, 0LL);
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)(v10 + 8) + 744LL))(v21, v11, v24);
  if ( v12 < 0 )
    goto LABEL_7;
  for ( i = 0; i < v24[1]; ++i )
  {
    v18 = *(_QWORD *)(v2 + 64);
    if ( v18 )
    {
      v20 = *(_QWORD *)(v18 + 8LL * (unsigned int)(*(_DWORD *)v10 - 1) + 16);
      if ( v20 )
        goto LABEL_19;
    }
    else
    {
      v20 = 0LL;
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1348;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidSchProcess", 1348LL, 0LL, 0LL, 0LL, 0LL);
LABEL_19:
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *))(*(_QWORD *)(v10 + 8) + 752LL))(
            v21,
            0xFFFFLL,
            i,
            v20,
            v25);
    if ( v12 < 0 )
      goto LABEL_7;
    v9 += v25[0];
  }
  if ( (_DWORD)v4 == 1 )
  {
    DXGPROCESS::SetCsStartRunningTime((DXGPROCESS *)v2, v7, v9);
    *(_DWORD *)(v2 + 80) = 1;
    Global = DXGGLOBAL::GetGlobal();
    v16 = 1;
    goto LABEL_13;
  }
  if ( (_DWORD)v4 == 2 )
  {
    CsStartRunningTime = DXGPROCESS::GetCsStartRunningTime((DXGPROCESS *)v2, v7);
    if ( v9 > CsStartRunningTime && *(_DWORD *)(v2 + 80) )
    {
      v19 = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::AddGPUTimeCoreDripsBlockerTracking(
        v19,
        *((_QWORD *)this + 29),
        *(struct _EPROCESS **)(v2 + 56),
        v9 - CsStartRunningTime);
    }
    DXGPROCESS::SetCsStartRunningTime((DXGPROCESS *)v2, v7, 0LL);
    *(_DWORD *)(v2 + 80) = 0;
    Global = DXGGLOBAL::GetGlobal();
    v16 = 0;
LABEL_13:
    DXGGLOBAL::EnableCoreDripsBlockerAccountingForProcess(
      Global,
      *((_QWORD *)this + 29),
      *(struct _EPROCESS **)(v2 + 56),
      v16);
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5928;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ApplyCsFunctionAdapterCallback:: Unsupported fn Type: %d",
      v4,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_14:
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
  return 0LL;
}
