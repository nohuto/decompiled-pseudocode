/*
 * XREFs of WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800D67AC
 * Callers:
 *     WerEscalationLazyInit @ 0x1800D6160 (WerEscalationLazyInit.c)
 *     LdrpRecordUnloadEvent @ 0x1800D65A0 (LdrpRecordUnloadEvent.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x1800D6820 (WerEscalationReadImageVersionInfoForModuleBase.c)
 */

__int64 __fastcall WerEscalationReadImageVersionInfoForModuleBaseSafe(unsigned __int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( a2 || (result = RtlImageNtHeaderEx(3, a1, 0LL, &v6), (int)result >= 0) )
  {
    WerEscalationReadImageVersionInfoForModuleBase(a1, a3);
    return 0LL;
  }
  return result;
}
