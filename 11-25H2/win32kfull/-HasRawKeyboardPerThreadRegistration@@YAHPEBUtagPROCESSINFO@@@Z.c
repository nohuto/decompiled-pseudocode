/*
 * XREFs of ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x140274598
 * Callers:
 *     DestroyThreadHidObjects @ 0x14011C130 (DestroyThreadHidObjects.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x140275284 (UnregisterModernAppThreadForRawKeyboard.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HasRawKeyboardPerThreadRegistration(const struct tagPROCESSINFO *a1)
{
  __int64 i; // rdx

  for ( i = *((_QWORD *)a1 + 40); i; i = *(_QWORD *)(i + 704) )
  {
    if ( (*(_DWORD *)(i + 1360) & 0x200000) != 0 )
      return 1LL;
  }
  return 0LL;
}
