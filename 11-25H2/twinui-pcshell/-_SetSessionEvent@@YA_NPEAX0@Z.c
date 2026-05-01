/*
 * XREFs of ?_SetSessionEvent@@YA_NPEAX0@Z @ 0x18065EC40
 * Callers:
 *     ?_SetSessionEvent@@YA_NPEBG@Z @ 0x18065ECC8 (-_SetSessionEvent@@YA_NPEBG@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall _SetSessionEvent(HANDLE hObject, HANDLE a2)
{
  bool v2; // di

  v2 = 0;
  if ( hObject )
  {
    if ( a2 && SetEvent(a2) )
      v2 = SetEvent(hObject);
    CloseHandle(hObject);
  }
  if ( a2 )
    CloseHandle(a2);
  return v2;
}
