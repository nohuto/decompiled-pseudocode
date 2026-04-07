/*
 * XREFs of ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x18007438C
 * Callers:
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180055060 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FastRegion::Internal::CStripe::IsEqualToPrevious(FastRegion::Internal::CStripe *this)
{
  char *v1; // rdx
  char *v2; // r9
  __int64 v3; // r8
  __int64 i; // rcx

  v1 = (char *)this + *((int *)this + 1);
  v2 = (char *)this + *((int *)this - 1) - 8;
  v3 = (int)((*((int *)this + 1) - (*((int *)this - 1) - 8LL)) >> 2);
  if ( v3 != (*((int *)this + 3) - (__int64)*((int *)this + 1) + 8) >> 2 )
    return 0;
  for ( i = 0LL; i < v3; ++i )
  {
    if ( *(_DWORD *)&v1[4 * i] != *(_DWORD *)&v2[4 * i] )
      return 0;
  }
  return 1;
}
