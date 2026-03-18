/*
 * XREFs of ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400300B0
 * Callers:
 *     ?bUnMapImmediate@SURFACE@@QEAAHXZ @ 0x14002FF8C (-bUnMapImmediate@SURFACE@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFACE::bRedirectionBitmap(SURFACE *this)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( *((_QWORD *)this + 31) || (*((_DWORD *)this + 29) & 1) != 0 )
    return 1;
  return v1;
}
