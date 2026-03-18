/*
 * XREFs of MiClearPhysicalMemoryEverRemoved @ 0x1406E7DD8
 * Callers:
 *     MiAddMemoryDpcTarget @ 0x1406E7B40 (MiAddMemoryDpcTarget.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14024EFA0 (RtlClearBitsEx.c)
 */

unsigned __int64 MiClearPhysicalMemoryEverRemoved()
{
  unsigned __int64 i; // rbx
  unsigned __int64 result; // rax
  __int64 v2; // r10
  unsigned __int64 v3; // r11
  unsigned __int64 *v4; // r9
  unsigned __int64 v5; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // r8
  __int64 v10; // r9

  for ( i = 0LL; ; RtlClearBitsEx((__int64)&qword_140E2D7B8, v7, i - v7) )
  {
    result = qword_140E2D7B8;
    if ( qword_140E2D7B8 <= i )
      break;
    v2 = 0LL;
    v3 = qword_140E2D7C0 + 8 * ((unsigned __int64)(qword_140E2D7B8 - 1) >> 6);
    v4 = (unsigned __int64 *)(qword_140E2D7C0 + 8 * (i >> 6));
    v5 = *v4 & ~((1LL << i) - 1);
    result = (unsigned __int64)(v4 + 1);
    while ( !v5 )
    {
      if ( result > v3 )
        return result;
      ++v4;
      result += 8LL;
      v5 = *v4;
    }
    _BitScanForward64((unsigned __int64 *)&v6, v5);
    result = (unsigned int)v6;
    v7 = (unsigned int)v6 + (((__int64)v4 - qword_140E2D7C0) >> 3 << 6);
    if ( v7 > qword_140E2D7B8 )
      break;
    v8 = ((1LL << v6) - 1) | v5;
    while ( 1 )
    {
      v9 = ~v8;
      if ( v9 )
        break;
      v2 += 64LL;
      if ( (unsigned __int64)(v4 + 1) > v3 )
      {
        result = 64LL;
        goto LABEL_14;
      }
      v8 = v4[1];
      ++v4;
    }
    _BitScanForward64(&result, v9);
LABEL_14:
    i = qword_140E2D7B8;
    v10 = ((__int64)v4 - qword_140E2D7C0) >> 3 << 6;
    if ( v10 + (unsigned __int64)(unsigned int)result <= qword_140E2D7B8 )
      i = v10 + (unsigned int)result;
    if ( i == v7 )
      break;
  }
  return result;
}
