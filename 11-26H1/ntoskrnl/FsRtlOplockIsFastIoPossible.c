/*
 * XREFs of FsRtlOplockIsFastIoPossible @ 0x140A77950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlOplockIsFastIoPossible(POPLOCK Oplock)
{
  BOOLEAN result; // al
  int v2; // ecx

  result = 1;
  if ( *Oplock )
  {
    v2 = *((_DWORD *)*Oplock + 36);
    if ( v2 != 1 && ((v2 & 0x40) == 0 || (v2 & 0x1F00F00) != 0) )
      return 0;
  }
  return result;
}
