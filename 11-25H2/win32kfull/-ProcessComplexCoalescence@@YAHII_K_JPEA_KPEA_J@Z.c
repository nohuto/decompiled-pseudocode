/*
 * XREFs of ?ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z @ 0x14019DAD4
 * Callers:
 *     ProcessSuspendedSendMessage @ 0x14019D800 (ProcessSuspendedSendMessage.c)
 *     ProcessSuspendedPostMessage @ 0x14019D8D8 (ProcessSuspendedPostMessage.c)
 *     ProcessSuspendedEventMessage @ 0x14019D9D8 (ProcessSuspendedEventMessage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ProcessComplexCoalescence(
        int a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        __int64 *a6)
{
  int v6; // ecx
  __int64 v8; // rcx

  v6 = a1 - 2;
  if ( !v6 )
  {
    if ( a3 == *a5 )
      return a4 != *a6;
    return 1LL;
  }
  if ( v6 == 1 )
  {
    v8 = *a5;
    if ( a2 == 536 )
      return v8 != a3 || (a3 & 0x8000) != 0 || *a6 != a4;
    if ( v8 || a3 )
      return 1LL;
    *a5 = 0LL;
  }
  else
  {
    *a5 = a3;
  }
  *a6 = a4;
  return 0LL;
}
