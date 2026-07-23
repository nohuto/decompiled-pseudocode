/*
 * XREFs of RtlpHpSegPageRangeComputeLargePageCost @ 0x1800E94C0
 * Callers:
 *     RtlpHpSegFreeRangeInsert @ 0x18008B1C8 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegAlloc @ 0x1800DD93C (RtlpHpSegAlloc.c)
 *     RtlpHpSegSubAllocate @ 0x180117AE0 (RtlpHpSegSubAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegPageRangeComputeLargePageCost(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r11
  __int16 *v9; // r8
  unsigned int v10; // r9d
  unsigned int v11; // edx
  int v12; // ecx
  int v13; // r10d

  v3 = a3;
  v4 = *a1 & a2;
  v5 = (unsigned int)(a2 - v4);
  v6 = *(_QWORD *)(v4 + 24);
  v7 = (unsigned __int64)((unsigned int)v5 + a3 - 1) >> 21;
  v8 = v6 + 2 * v7;
  v9 = (__int16 *)(v6 + 2 * (v5 >> 21));
  v10 = ((__int64)(2 * v7 - 2 * (v5 >> 21)) >> 1) + 1;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  while ( (unsigned __int64)v9 <= v8 )
  {
    if ( (*v9 & 0x7FF) != 0 )
    {
      if ( *v9 < 0 )
        ++v12;
    }
    else
    {
      ++v13;
    }
    ++v9;
  }
  if ( v12 == v10 )
  {
    LOBYTE(v11) = v10 > (unsigned __int64)(v3 + 0x1FFFFF) >> 21;
  }
  else if ( v12 )
  {
    return 2;
  }
  else
  {
    return 4 - (unsigned int)(v13 != 0);
  }
  return v11;
}
