/*
 * XREFs of RtlIntersectBitMapsEx @ 0x14045CFB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlIntersectBitMapsEx(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rcx
  __int64 i; // r9
  unsigned __int64 v6; // r8

  result = *a2;
  v4 = *a1;
  if ( v4 >= *a2 )
    v4 = *a2;
  if ( v4 )
  {
    for ( i = 0LL; ; i += 8LL )
    {
      v6 = a1[1];
      result = a2[1];
      if ( v4 < 0x40 )
        break;
      *(_QWORD *)(v6 + i) &= *(_QWORD *)(result + i);
      v4 -= 64LL;
      if ( !v4 )
        return result;
    }
    *(_QWORD *)(v6 + i) &= *(_QWORD *)(result + i) | ~((1LL << v4) - 1);
  }
  return result;
}
