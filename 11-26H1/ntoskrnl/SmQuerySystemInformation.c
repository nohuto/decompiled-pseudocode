/*
 * XREFs of SmQuerySystemInformation @ 0x140526D44
 * Callers:
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1404B7FC0 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140723AB0 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall SmQuerySystemInformation(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int SystemInformation; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  if ( (a1 & 1) != 0 )
    a1 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFFFFEuLL) + 3200);
  KeStackAttachProcess(*(PRKPROCESS *)(a1 + 2280), &ApcState);
  SystemInformation = ZwQuerySystemInformation(182LL, a3, 56LL, 0LL);
  KiUnstackDetachProcess((__int64)&ApcState, 0);
  return SystemInformation;
}
