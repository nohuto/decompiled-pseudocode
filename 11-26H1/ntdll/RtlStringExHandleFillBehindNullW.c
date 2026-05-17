/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x18014755C
 * Callers:
 *     RtlStringCchPrintfExW @ 0x1800496E0 (RtlStringCchPrintfExW.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlStringExHandleFillBehindNullW(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  if ( a2 > 2 )
    memset_thunk_772440563353939046((void *)(a1 + 2), a3, a2 - 2);
  return 0LL;
}
