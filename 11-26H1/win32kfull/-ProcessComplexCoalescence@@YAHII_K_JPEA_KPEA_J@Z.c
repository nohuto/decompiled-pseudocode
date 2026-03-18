/*
 * XREFs of ?ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z @ 0x1401F5FF8
 * Callers:
 *     ProcessSuspendedEventMessage @ 0x1402A7174 (ProcessSuspendedEventMessage.c)
 *     ProcessSuspendedPostMessage @ 0x1402A7248 (ProcessSuspendedPostMessage.c)
 *     ProcessSuspendedSendMessage @ 0x1402A730C (ProcessSuspendedSendMessage.c)
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
