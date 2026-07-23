/*
 * XREFs of PspChangeProcessExecutionState @ 0x140ADB89C
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x1404B4BC0 (PspExecuteJobFreezeThawCallback.c)
 *     PsSwapProcessWorkingSet @ 0x1407F67E8 (PsSwapProcessWorkingSet.c)
 *     PspRemoveProcessFromJobChain @ 0x1409FEEF8 (PspRemoveProcessFromJobChain.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 *     PspAssignProcessToJob @ 0x140AC79B8 (PspAssignProcessToJob.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     MmOutSwapWorkingSet @ 0x1404BC104 (MmOutSwapWorkingSet.c)
 *     MmInSwapWorkingSet @ 0x1404CF090 (MmInSwapWorkingSet.c)
 *     PsThawMultiProcess @ 0x1405130EC (PsThawMultiProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PsFreezeProcess @ 0x14077E180 (PsFreezeProcess.c)
 *     PsRemoveDeepFreezeOptimizations @ 0x140ADBB34 (PsRemoveDeepFreezeOptimizations.c)
 *     PsApplyDeepFreezeOptimizations @ 0x140ADBBC0 (PsApplyDeepFreezeOptimizations.c)
 */

__int64 __fastcall PspChangeProcessExecutionState(PEPROCESS Process, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // r12d
  char v6; // r13
  signed __int32 i; // eax
  unsigned int v8; // esi
  unsigned int v9; // ecx
  char v11; // r15
  unsigned __int8 v12; // bl
  char v13; // bl
  char v14; // di
  unsigned __int32 j; // eax
  unsigned __int32 v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  unsigned __int32 v19; // [rsp+20h] [rbp-50h] BYREF
  signed __int32 v20; // [rsp+24h] [rbp-4Ch]
  char v21; // [rsp+28h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-40h] BYREF

  v21 = 0;
  v4 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v6 = 0;
  _m_prefetchw(&Process[4].Padding[3]);
  for ( i = Process[4].Padding[3]; ; i = v20 )
  {
    v19 = i;
    if ( (i & 1) != 0 )
      break;
    v8 = HIBYTE(v19);
    v9 = HIWORD(v19);
    if ( HIBYTE(v19) == BYTE2(v19) )
      break;
    v20 = _InterlockedCompareExchange((volatile signed __int32 *)&Process[4].Padding[3], v19 | 1, v19);
    if ( v20 == v19 )
    {
LABEL_6:
      v11 = 0;
      v12 = v9 ^ v8;
      if ( !v6 )
      {
        KeStackAttachProcess(Process, &ApcState);
        v6 = 1;
      }
      if ( (v12 & 2) != 0 )
      {
        if ( (v8 & 2) != 0 )
          v11 = 1;
        else
          MmInSwapWorkingSet(Process);
      }
      if ( ((v12 >> 2) & (unsigned __int8)~((unsigned __int8)v8 >> 2) & 1) != 0 )
      {
        v19 = 1;
        PsRemoveDeepFreezeOptimizations(Process, &v19);
      }
      if ( (v12 & 1) != 0 )
      {
        v21 = 1;
        if ( (v8 & 1) != 0 )
          PsFreezeProcess((__int64)Process, 1);
        else
          PsThawMultiProcess((__int64)Process, 1, 1LL, a4);
      }
      if ( ((unsigned __int8)v8 & v12 & 4) != 0 )
      {
        v19 = 1;
        PsApplyDeepFreezeOptimizations(Process, &v19);
      }
      v13 = v8;
      v14 = v8;
      if ( v11 )
      {
        v18 = MmOutSwapWorkingSet(Process, PspOutSwapSharedPages != 0);
        if ( v18 < 0 )
        {
          if ( v18 == -1073741671 )
            v4 = -1073741671;
          v13 = v8 & 0xFD;
        }
      }
      _m_prefetchw(&Process[4].Padding[3]);
      for ( j = Process[4].Padding[3]; ; j = v20 )
      {
        v19 = j;
        v16 = HIBYTE(j);
        LOBYTE(v8) = v16;
        if ( (_BYTE)v16 != v14 && (_BYTE)v16 != v13 )
        {
          LOBYTE(v9) = v13;
          goto LABEL_6;
        }
        BYTE2(v20) = v13;
        LOWORD(v20) = v20 & 0xFFFE;
        HIBYTE(v20) = v13;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)&Process[4].Padding[3], v20, v19);
        if ( v20 == v19 )
          break;
      }
      KiUnstackDetachProcess((__int64)&ApcState, 0);
      if ( v21 && ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost) )
      {
        guard_dispatch_icall_no_overrides((__int64)Process, v17);
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
      }
      return v4;
    }
  }
  return v4;
}
