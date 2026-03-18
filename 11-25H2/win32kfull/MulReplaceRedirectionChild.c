/*
 * XREFs of MulReplaceRedirectionChild @ 0x140334320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MulReplaceRedirectionChild(__int64 ****a1, SURFOBJ *a2, __int64 a3)
{
  unsigned int v5; // r9d
  __int64 **i; // rbx
  SURFOBJ *v7; // rdi

  v5 = 0;
  for ( i = **a1; i; i = (__int64 **)*i )
  {
    v7 = (SURFOBJ *)a1[1][*((unsigned int *)i + 4)];
    if ( v7 == a2 )
    {
      GreMarkDeletableBitmap(v7->hsurf);
      EngUnlockSurface(v7);
      EngLockSurface(*(HSURF *)(a3 + 8));
      GreMarkUndeletableBitmap(*(_QWORD *)(a3 + 8));
      v5 = 1;
      a1[1][*((unsigned int *)i + 4)] = (__int64 **)a3;
      return v5;
    }
  }
  return v5;
}
