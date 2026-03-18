/*
 * XREFs of ParsePackageLen @ 0x1400309E0
 * Callers:
 *     ParseFieldConnection @ 0x140054000 (ParseFieldConnection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ParsePackageLen(_QWORD *a1, _QWORD *a2)
{
  unsigned int v3; // r8d
  unsigned __int8 *v4; // r11
  unsigned int v5; // r10d
  __int64 result; // rax
  unsigned __int8 v7; // bl
  unsigned __int8 v8; // cl

  if ( a2 )
    *a2 = *a1;
  v3 = *(unsigned __int8 *)*a1;
  v4 = (unsigned __int8 *)(*a1 + 1LL);
  *a1 = v4;
  v5 = v3 >> 6;
  if ( (unsigned __int8)(v3 >> 6) )
  {
    v3 &= 0xFu;
    v7 = 0;
    do
    {
      v8 = v7++;
      v3 |= *v4++ << (8 * v8 + 4);
      *a1 = v4;
    }
    while ( v7 < (unsigned __int8)v5 );
  }
  result = v3;
  if ( a2 )
    *a2 += v3;
  return result;
}
