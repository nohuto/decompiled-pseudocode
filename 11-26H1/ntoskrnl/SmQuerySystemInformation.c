/*
 * XREFs of SmQuerySystemInformation @ 0x1405293B4
 * Callers:
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1404B17F0 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140728680 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall SmQuerySystemInformation(__int64 a1, __int64 a2, void *a3)
{
  unsigned int SystemInformation; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  if ( (a1 & 1) != 0 )
    a1 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFFFFEuLL) + 3200);
  KeStackAttachProcess(*(PRKPROCESS *)(a1 + 2280), &ApcState);
  SystemInformation = ZwQuerySystemInformation(SystemMemoryUsageInformation, a3, 0x38u, 0LL);
  KiUnstackDetachProcess((__int64)&ApcState, 0);
  return SystemInformation;
}
