/*
 * XREFs of PopFxDirectedWorkOrderWatchdog @ 0x1406077D0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PopInternalSaveStackToDumpFile @ 0x140603390 (PopInternalSaveStackToDumpFile.c)
 */

void __fastcall __noreturn PopFxDirectedWorkOrderWatchdog(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx
  ULONG_PTR v3; // r8
  ULONG_PTR BugCheckParameter4[5]; // [rsp+30h] [rbp-50h] BYREF
  int v5; // [rsp+58h] [rbp-28h]
  int v6; // [rsp+5Ch] [rbp-24h]
  __int64 v7; // [rsp+60h] [rbp-20h]
  __int64 v8; // [rsp+68h] [rbp-18h]
  int v9; // [rsp+70h] [rbp-10h]
  int v10; // [rsp+74h] [rbp-Ch]

  v2 = a2 - 1016;
  PopInternalSaveStackToDumpFile(*(_QWORD *)(a2 - 1016 + 96));
  BugCheckParameter4[0] = 98309LL;
  BugCheckParameter4[1] = (ULONG_PTR)&PpmIdlePolicyLock.WaitBlockList;
  v6 = 0;
  BugCheckParameter4[2] = (ULONG_PTR)&PopIrpThreadList;
  BugCheckParameter4[3] = *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[64];
  BugCheckParameter4[4] = (ULONG_PTR)ExSaPageGroupDescriptorArrayLock.WaitBlock[1].WaitListEntry.Blink;
  v9 = *(_DWORD *)(v2 + 32);
  v3 = *(_QWORD *)(v2 + 96);
  v10 = *(_DWORD *)(v2 + 1200);
  v5 = *(_DWORD *)(v2 + 956);
  v7 = *(_QWORD *)(v2 + 1176);
  v8 = *(_QWORD *)(v2 + 1184);
  KeBugCheckEx(0x9Fu, 5uLL, v3, v2, (ULONG_PTR)BugCheckParameter4);
}
