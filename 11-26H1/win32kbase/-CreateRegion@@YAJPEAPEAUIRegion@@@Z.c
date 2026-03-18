/*
 * XREFs of ?CreateRegion@@YAJPEAPEAUIRegion@@@Z @ 0x140120620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreateRegion(struct IRegion **a1)
{
  __int64 Pool2; // rdx

  Pool2 = ExAllocatePool2(256LL, 24LL, 1852273223LL);
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 8) = 1LL;
    *(_QWORD *)Pool2 = &CRegion::`vftable';
    *(_QWORD *)(Pool2 + 16) = 0LL;
  }
  else
  {
    Pool2 = 0LL;
  }
  *a1 = (struct IRegion *)Pool2;
  return Pool2 == 0 ? 0xC0000017 : 0;
}
