/*
 * XREFs of EtwpCheckForStackTracingExtension @ 0x140AB1F2C
 * Callers:
 *     EtwpUpdateTrace @ 0x140AB081C (EtwpUpdateTrace.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 * Callees:
 *     EtwpGetFlagExtension @ 0x140AB1FF0 (EtwpGetFlagExtension.c)
 *     EtwpUpdateStackTracing @ 0x140AB2624 (EtwpUpdateStackTracing.c)
 *     EtwpEnableStackCaching @ 0x140AC00AC (EtwpEnableStackCaching.c)
 */

__int64 __fastcall EtwpCheckForStackTracingExtension(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _WORD *FlagExtension; // rax
  __int64 v6; // rax
  __int64 v7; // r9
  int updated; // r11d

  v2 = 0LL;
  FlagExtension = (_WORD *)EtwpGetFlagExtension(a1, 3LL);
  if ( FlagExtension )
  {
    updated = EtwpUpdateStackTracing(a2, FlagExtension + 2, (unsigned __int16)(4 * *FlagExtension - 4) >> 2, 0LL);
    if ( updated < 0 )
      return (unsigned int)updated;
    v2 = EtwpGetFlagExtension(a1, 5LL);
  }
  v6 = EtwpGetFlagExtension(a1, 7LL);
  if ( v2 )
  {
    if ( v6 )
      return (unsigned int)-1073741053;
  }
  else
  {
    if ( !v6 )
      return (unsigned int)updated;
    v2 = v6;
  }
  if ( 4 * *(_WORD *)v2 == 12 )
  {
    LOBYTE(v7) = v6 != 0;
    return (unsigned int)EtwpEnableStackCaching(a2, *(unsigned int *)(v2 + 4), *(unsigned int *)(v2 + 8), v7);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
