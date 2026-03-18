/*
 * XREFs of ?bRedirHooked@SURFACE@@QEAAHXZ @ 0x1401B7D74
 * Callers:
 *     EngDrawStream @ 0x1401B7B20 (EngDrawStream.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFACE::bRedirHooked(SURFACE *this)
{
  unsigned int v1; // edx

  v1 = 1;
  if ( (*((_DWORD *)this + 29) & 1) != 0 || (*((_DWORD *)this + 28) & 0x800) == 0 || *((_WORD *)this + 50) != 3 )
    return 0;
  return v1;
}
