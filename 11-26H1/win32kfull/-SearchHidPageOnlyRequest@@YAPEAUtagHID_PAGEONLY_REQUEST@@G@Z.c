/*
 * XREFs of ?SearchHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x140172BE0
 * Callers:
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1401715D0 (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 * Callees:
 *     <none>
 */

struct tagHID_PAGEONLY_REQUEST *__fastcall SearchHidPageOnlyRequest(__int64 a1, __int64 a2)
{
  __int16 v2; // di
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 *i; // rbx

  v2 = a1;
  for ( i = *(__int64 **)(W32GetUserSessionState(a1, a2) + 208);
        i != (__int64 *)(W32GetUserSessionState(v4, v3) + 208);
        i = (__int64 *)*i )
  {
    if ( *((_WORD *)i + 8) == v2 )
      return (struct tagHID_PAGEONLY_REQUEST *)i;
  }
  return 0LL;
}
