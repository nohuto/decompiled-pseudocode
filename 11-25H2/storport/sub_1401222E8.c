/*
 * XREFs of sub_1401222E8 @ 0x1401222E8
 * Callers:
 *     sub_1400E9554 @ 0x1400E9554 (sub_1400E9554.c)
 *     sub_1400F7E54 @ 0x1400F7E54 (sub_1400F7E54.c)
 *     sub_1401223BC @ 0x1401223BC (sub_1401223BC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140087BF4 @ 0x140087BF4 (sub_140087BF4.c)
 *     sub_140122570 @ 0x140122570 (sub_140122570.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

PHYSICAL_ADDRESS *__fastcall sub_1401222E8(__int64 a1)
{
  __int64 v1; // r9
  PHYSICAL_ADDRESS *v3; // rbx
  __int64 v4; // rax
  void *v5; // rax
  PHYSICAL_ADDRESS v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 128);
  v7.QuadPart = 0LL;
  v3 = (PHYSICAL_ADDRESS *)sub_1400143E0(72LL, 128LL, 1380147538LL, *(_QWORD *)(v1 + 8));
  if ( v3
    && ((*(_QWORD *)(a1 + 136) & 0x100000000LL) != 0
     || (v4 = sub_1400143E0(74LL, 584LL, 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL)),
         (v3[7].QuadPart = v4) != 0))
    && (v5 = sub_140087BF4(0x10B0u, *(_QWORD **)(a1 + 128), 0x80000000, &v7), (v3->QuadPart = (LONGLONG)v5) != 0) )
  {
    v3[1] = v7;
    memset_0(v5, 0, 0x10B0uLL);
    return v3;
  }
  else
  {
    sub_140122570(a1, v3);
    return 0LL;
  }
}
