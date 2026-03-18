/*
 * XREFs of ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x14029A994
 * Callers:
 *     DestroyThreadHidObjects @ 0x140171050 (DestroyThreadHidObjects.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x14029AC88 (UnregisterModernAppThreadForRawKeyboard.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HasRawKeyboardPerThreadRegistration(const struct tagPROCESSINFO *a1)
{
  __int64 i; // rdx

  for ( i = *((_QWORD *)a1 + 41); i; i = *(_QWORD *)(i + 696) )
  {
    if ( (*(_DWORD *)(i + 1360) & 0x200000) != 0 )
      return 1LL;
  }
  return 0LL;
}
