/*
 * XREFs of MiClearPhysicalMemoryEverRemoved @ 0x1406ECA88
 * Callers:
 *     MiAddMemoryDpcTarget @ 0x1406EC7F0 (MiAddMemoryDpcTarget.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 */

unsigned __int64 MiClearPhysicalMemoryEverRemoved()
{
  unsigned __int64 i; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v2; // r10
  unsigned __int64 *v3; // r9
  unsigned __int64 v4; // r8
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // r8
  __int64 v9; // r9

  for ( i = 0LL; ; RtlClearBitsEx((__int64)&qword_140E2D938, v6, i - v6) )
  {
    result = qword_140E2D938;
    if ( qword_140E2D938 <= i )
      break;
    v2 = qword_140E2D940 + 8 * ((unsigned __int64)(qword_140E2D938 - 1) >> 6);
    v3 = (unsigned __int64 *)(qword_140E2D940 + 8 * (i >> 6));
    v4 = *v3 & ~((1LL << i) - 1);
    result = (unsigned __int64)(v3 + 1);
    while ( !v4 )
    {
      if ( result > v2 )
        return result;
      ++v3;
      result += 8LL;
      v4 = *v3;
    }
    _BitScanForward64((unsigned __int64 *)&v5, v4);
    result = (unsigned int)v5;
    v6 = (unsigned int)v5 + (((__int64)v3 - qword_140E2D940) >> 3 << 6);
    if ( v6 > qword_140E2D938 )
      break;
    v7 = ((1LL << v5) - 1) | v4;
    while ( 1 )
    {
      v8 = ~v7;
      if ( v8 )
        break;
      if ( (unsigned __int64)(v3 + 1) > v2 )
      {
        result = 64LL;
        goto LABEL_14;
      }
      v7 = v3[1];
      ++v3;
    }
    _BitScanForward64(&result, v8);
LABEL_14:
    i = qword_140E2D938;
    v9 = ((__int64)v3 - qword_140E2D940) >> 3 << 6;
    if ( v9 + (unsigned __int64)(unsigned int)result <= qword_140E2D938 )
      i = v9 + (unsigned int)result;
    if ( i == v6 )
      break;
  }
  return result;
}
