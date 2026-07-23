/*
 * XREFs of RtlpHpSegPageRangeComputeLargePageCost @ 0x140351280
 * Callers:
 *     RtlpHpSegAlloc @ 0x14034D14C (RtlpHpSegAlloc.c)
 *     RtlpHpSegFreeRangeInsert @ 0x14034D30C (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegPageRangeShrink @ 0x14034FBC0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegSubAllocate @ 0x1404D8FC4 (RtlpHpSegSubAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegPageRangeComputeLargePageCost(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  unsigned __int64 v7; // r10
  __int16 *v8; // rcx
  unsigned int v9; // r9d
  int v10; // edx
  unsigned int v11; // r11d
  int i; // r8d

  v3 = a3;
  v4 = *a1 & a2;
  v5 = (unsigned int)(a2 - v4);
  v6 = *(_QWORD *)(v4 + 24);
  v7 = v6 + 2 * ((unsigned __int64)((unsigned int)v5 + a3 - 1) >> 21);
  v8 = (__int16 *)(v6 + 2 * (v5 >> 21));
  v9 = 0;
  v10 = 0;
  v11 = ((__int64)(v7 - (_QWORD)v8) >> 1) + 1;
  for ( i = 0; (unsigned __int64)v8 <= v7; ++v8 )
  {
    if ( (*v8 & 0x7FF) != 0 )
    {
      if ( *v8 < 0 )
        ++v10;
    }
    else
    {
      ++i;
    }
  }
  if ( v10 == v11 )
  {
    LOBYTE(v9) = v11 > (unsigned __int64)(v3 + 0x1FFFFF) >> 21;
    return v9;
  }
  else if ( v10 )
  {
    return 2LL;
  }
  else
  {
    LOBYTE(v9) = i == 0;
    return v9 + 3;
  }
}
