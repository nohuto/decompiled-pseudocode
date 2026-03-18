/*
 * XREFs of UnlockQueue @ 0x1401CAD60
 * Callers:
 *     <none>
 * Callees:
 *     FreeQueue @ 0x1400B7FDC (FreeQueue.c)
 */

void __fastcall UnlockQueue(_DWORD *a1, int a2, int a3)
{
  if ( a1[110]-- == 1 && (a1[109] & 0x4000000) != 0 )
    FreeQueue(a1, a2, a3);
}
