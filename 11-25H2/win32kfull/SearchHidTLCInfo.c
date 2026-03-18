/*
 * XREFs of SearchHidTLCInfo @ 0x14020063C
 * Callers:
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x14011F03C (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall SearchHidTLCInfo(__int64 a1, __int64 a2)
{
  __int16 v2; // di
  __int16 v3; // si
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *i; // rbx

  v2 = a2;
  v3 = a1;
  for ( i = *(__int64 **)(W32GetUserSessionState(a1, a2) + 192);
        i != (__int64 *)(W32GetUserSessionState(v5, v4) + 192);
        i = (__int64 *)*i )
  {
    if ( *((_WORD *)i + 8) == v3 && *((_WORD *)i + 9) == v2 )
      return i;
  }
  return 0LL;
}
