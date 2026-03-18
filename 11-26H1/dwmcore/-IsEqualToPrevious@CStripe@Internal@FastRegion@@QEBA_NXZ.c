/*
 * XREFs of ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x1800ED070
 * Callers:
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180075F40 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800EBC90 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18012E3B0 (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FastRegion::Internal::CStripe::IsEqualToPrevious(FastRegion::Internal::CStripe *this)
{
  __int64 v1; // r8
  __int64 i; // rax

  v1 = (int)((*((int *)this + 1) - (*((int *)this - 1) - 8LL)) >> 2);
  if ( v1 != (*((int *)this + 3) - (__int64)*((int *)this + 1) + 8) >> 2 )
    return 0;
  for ( i = 0LL; i < v1; ++i )
  {
    if ( *(_DWORD *)((char *)this + 4 * i + *((int *)this + 1)) != *(_DWORD *)((char *)this
                                                                             + 4 * i
                                                                             + *((int *)this - 1)
                                                                             - 8) )
      return 0;
  }
  return 1;
}
