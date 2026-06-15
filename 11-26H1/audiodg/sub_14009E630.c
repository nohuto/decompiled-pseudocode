/*
 * XREFs of sub_14009E630 @ 0x14009E630
 * Callers:
 *     sub_14009E4F0 @ 0x14009E4F0 (sub_14009E4F0.c)
 * Callees:
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     sub_14009D41C @ 0x14009D41C (sub_14009D41C.c)
 *     sub_1400A2D44 @ 0x1400A2D44 (sub_1400A2D44.c)
 *     sub_1400A2E00 @ 0x1400A2E00 (sub_1400A2E00.c)
 */

void __fastcall sub_14009E630(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  signed __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rbx
  unsigned int v11; // ebp
  _DWORD *v12; // r15
  int v13; // r8d
  __int64 v14; // rax
  unsigned int v15; // edx
  double v16; // xmm1_8
  __int64 v17; // rcx

  v2 = a1 - 8;
  v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 - 8 + 88) + 16LL), 0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 80);
  v7 = v5;
  v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 24), 0LL, 0LL);
  v9 = *(_QWORD *)(v2 + 88);
  v10 = v8;
  if ( v7 >= 0 && v8 >= 0 )
  {
    if ( v7 >= v8 )
    {
      v11 = v7 - v8;
    }
    else
    {
      if ( (byte_1400E8401 & 4) != 0 )
        sub_1400A2D44(v6, (_DWORD)a2, v2, 4, 0, v7, v8, 0);
      v11 = 0;
      ShipAssert(65537LL, 0LL);
    }
    v12 = (_DWORD *)(a1 + 96);
    if ( (byte_1400E8401 & 4) != 0 )
      sub_1400A2D44(
        v10 / (unsigned int)*v12,
        v7 % (unsigned int)*v12,
        v2,
        3,
        0,
        v7 / (unsigned int)*v12,
        v10 / (unsigned int)*v12,
        v11 / *v12);
    v13 = v11 / *v12;
    v14 = *(_QWORD *)(a1 + 88);
    v15 = *(_DWORD *)(v14 + 188) % (unsigned int)*(unsigned __int16 *)(v14 + 192);
    v16 = (double)v13
        * 10000000.0
        / (double)(int)(*(_DWORD *)(v14 + 188) / (unsigned int)*(unsigned __int16 *)(v14 + 192))
        + 0.5;
    v17 = (unsigned int)(int)v16;
    *a2 = v17;
    if ( (byte_1400E8401 & 4) != 0 )
      sub_1400A2E00(v17, v15, 0, 100, v7, v10, (int)v16, v13, 0, 0, 0, 0);
  }
  else
  {
    if ( (byte_1400E8401 & 4) != 0 )
      sub_14009D41C(v6, (__int64)a2, v2);
    sub_140048108();
    _InterlockedAnd((volatile signed __int32 *)(v9 + 164), 0xFFFFFFFE);
    *a2 = 0LL;
  }
}
