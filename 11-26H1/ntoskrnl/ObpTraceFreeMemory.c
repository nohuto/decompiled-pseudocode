/*
 * XREFs of ObpTraceFreeMemory @ 0x140532F70
 * Callers:
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 *     ObQueryRefTraceInformationEx @ 0x1407C72AC (ObQueryRefTraceInformationEx.c)
 *     ObSetRefTraceInformationEx @ 0x1407C7628 (ObSetRefTraceInformationEx.c)
 *     ObpCleanupObjectRefsByStack @ 0x1407C789C (ObpCleanupObjectRefsByStack.c)
 *     ObpDestroyObjectRefsByStack @ 0x1407C7A50 (ObpDestroyObjectRefsByStack.c)
 *     ObpDestroyStackAndObjectTables @ 0x1407C7A74 (ObpDestroyStackAndObjectTables.c)
 *     ObpGetObjectRefInfo @ 0x1407C7B64 (ObpGetObjectRefInfo.c)
 *     ObpInitStackAndObjectTables @ 0x1407C7C48 (ObpInitStackAndObjectTables.c)
 *     ObpProcessPushStackInfoList @ 0x1407C7FB8 (ObpProcessPushStackInfoList.c)
 *     ObpSetPoolTags @ 0x1407C8138 (ObpSetPoolTags.c)
 *     ObpStackDbFreeRoutine @ 0x1407C8230 (ObpStackDbFreeRoutine.c)
 *     ObpStartRuntimeStackTrace @ 0x1407C8248 (ObpStartRuntimeStackTrace.c)
 *     ObpStartRuntimeStackTraceEx @ 0x1407C8434 (ObpStartRuntimeStackTraceEx.c)
 *     ObpStopRuntimeStackTrace @ 0x1407C85E8 (ObpStopRuntimeStackTrace.c)
 *     ObpObjectRefsByStackAddTrace @ 0x140AB76B0 (ObpObjectRefsByStackAddTrace.c)
 *     ObQueryRefTraceInformation @ 0x140B618D0 (ObQueryRefTraceInformation.c)
 *     ObpInitStackTrace @ 0x140CD3FDC (ObpInitStackTrace.c)
 * Callees:
 *     ExpSizeHeapPool @ 0x1404FDF40 (ExpSizeHeapPool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ObpTraceFreeMemory(PVOID P)
{
  __int64 v2; // rdi

  v2 = ExpSizeHeapPool((unsigned __int64)P);
  ExFreePoolWithTag(P, 0x7452624Fu);
  _InterlockedAdd64((volatile signed __int64 *)&stru_140E66D40.WaitBlock[0].Thread, -v2);
}
