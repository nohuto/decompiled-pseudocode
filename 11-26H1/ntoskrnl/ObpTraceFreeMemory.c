/*
 * XREFs of ObpTraceFreeMemory @ 0x140530A70
 * Callers:
 *     ObpDeregisterObject @ 0x140779D4C (ObpDeregisterObject.c)
 *     ObQueryRefTraceInformationEx @ 0x1407C424C (ObQueryRefTraceInformationEx.c)
 *     ObSetRefTraceInformationEx @ 0x1407C45C8 (ObSetRefTraceInformationEx.c)
 *     ObpCleanupObjectRefsByStack @ 0x1407C483C (ObpCleanupObjectRefsByStack.c)
 *     ObpDestroyObjectRefsByStack @ 0x1407C49F0 (ObpDestroyObjectRefsByStack.c)
 *     ObpDestroyStackAndObjectTables @ 0x1407C4A14 (ObpDestroyStackAndObjectTables.c)
 *     ObpGetObjectRefInfo @ 0x1407C4B04 (ObpGetObjectRefInfo.c)
 *     ObpInitStackAndObjectTables @ 0x1407C4BE8 (ObpInitStackAndObjectTables.c)
 *     ObpProcessPushStackInfoList @ 0x1407C4F58 (ObpProcessPushStackInfoList.c)
 *     ObpSetPoolTags @ 0x1407C50D8 (ObpSetPoolTags.c)
 *     ObpStackDbFreeRoutine @ 0x1407C51D0 (ObpStackDbFreeRoutine.c)
 *     ObpStartRuntimeStackTrace @ 0x1407C51E8 (ObpStartRuntimeStackTrace.c)
 *     ObpStartRuntimeStackTraceEx @ 0x1407C53D4 (ObpStartRuntimeStackTraceEx.c)
 *     ObpStopRuntimeStackTrace @ 0x1407C5588 (ObpStopRuntimeStackTrace.c)
 *     ObpObjectRefsByStackAddTrace @ 0x140AB6310 (ObpObjectRefsByStackAddTrace.c)
 *     ObQueryRefTraceInformation @ 0x140B5E750 (ObQueryRefTraceInformation.c)
 *     ObpInitStackTrace @ 0x140CCDE7C (ObpInitStackTrace.c)
 * Callees:
 *     ExpSizeHeapPool @ 0x14025ECFC (ExpSizeHeapPool.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall ObpTraceFreeMemory(PVOID P)
{
  __int64 v2; // rdi

  v2 = ExpSizeHeapPool((__int64)P);
  ExFreePoolWithTag(P, 0x7452624Fu);
  _InterlockedAdd64((volatile signed __int64 *)&stru_140E66B30.WaitBlock[0].Thread, -v2);
}
