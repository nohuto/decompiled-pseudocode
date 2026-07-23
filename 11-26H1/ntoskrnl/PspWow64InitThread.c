/*
 * XREFs of PspWow64InitThread @ 0x1409E712C
 * Callers:
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     RtlInitializeExtendedContext2 @ 0x1403D9690 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PspWow64GetSharedInformation @ 0x1409E6F34 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x1409E6F4C (PsWow64GetProcessNtdllType.c)
 *     PspWow64InitThreadGuestx86 @ 0x1409E6F68 (PspWow64InitThreadGuestx86.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409E70D0 (RtlWow64GetCpuAreaEnabledFeatures.c)
 *     RtlpArchContextFlagFromMachine @ 0x1409E72A0 (RtlpArchContextFlagFromMachine.c)
 *     PsWow64GetProcessMachine @ 0x1409E8360 (PsWow64GetProcessMachine.c)
 */

__int64 __fastcall PspWow64InitThread(_KPROCESS *BugCheckParameter1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // edi
  __int64 v8; // rsi
  unsigned __int16 ProcessNtdllType; // ax
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // r15
  ULONG64 CpuAreaEnabledFeatures; // rax
  unsigned __int16 ProcessMachine; // [rsp+30h] [rbp-98h]
  ULONG ContextFlags[3]; // [rsp+34h] [rbp-94h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+40h] [rbp-88h] BYREF
  __int64 v18; // [rsp+48h] [rbp-80h]
  __int64 v19; // [rsp+50h] [rbp-78h]
  _OWORD v20[3]; // [rsp+58h] [rbp-70h] BYREF

  v18 = a4;
  memset(v20, 0, sizeof(v20));
  v7 = 0;
  ContextEx = 0LL;
  ProcessMachine = PsWow64GetProcessMachine(BugCheckParameter1);
  ContextFlags[0] = RtlpArchContextFlagFromMachine(ProcessMachine);
  if ( !ContextFlags[0] )
    return 3221225485LL;
  v8 = a3[31];
  if ( v8 == stru_140FC11F0.TracingPrivate[0] )
  {
    ProcessNtdllType = PsWow64GetProcessNtdllType((__int64)BugCheckParameter1);
    v8 = *((_QWORD *)PspWow64GetSharedInformation(ProcessNtdllType) + 4);
  }
  v10 = a3[16];
  v11 = a3[17];
  v19 = *(_QWORD *)(a2 + 40);
  v12 = *(_QWORD *)(a2 + 16);
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v20);
  *(_QWORD *)(v18 + 5256) = v12;
  *(_DWORD *)v12 = ProcessMachine << 16;
  CpuAreaEnabledFeatures = RtlWow64GetCpuAreaEnabledFeatures((int *)ContextFlags);
  RtlInitializeExtendedContext2((PCONTEXT)(v12 + 4), ContextFlags[0], &ContextEx, CpuAreaEnabledFeatures);
  if ( ProcessMachine == 332 )
  {
    PspWow64InitThreadGuestx86((__int64)BugCheckParameter1, (__int64)ContextEx, v8, v19, v10, v11);
  }
  else
  {
    v7 = -1073741811;
    ContextFlags[1] = -1073741811;
  }
  KiUnstackDetachProcess((__int64)v20, 0);
  return v7;
}
