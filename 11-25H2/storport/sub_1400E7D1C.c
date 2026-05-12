/*
 * XREFs of sub_1400E7D1C @ 0x1400E7D1C
 * Callers:
 *     sub_1400ED960 @ 0x1400ED960 (sub_1400ED960.c)
 *     sub_1400F1278 @ 0x1400F1278 (sub_1400F1278.c)
 *     sub_1400F2658 @ 0x1400F2658 (sub_1400F2658.c)
 * Callees:
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_140120864 @ 0x140120864 (sub_140120864.c)
 */

void __fastcall sub_1400E7D1C(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rsi
  int v6; // r14d
  int v7; // ebp
  void *v8; // rcx
  __int64 v9; // r9
  void *v10; // rcx
  void *v11; // rcx
  int v12; // r8d
  void *v13; // rcx

  v3 = *(_QWORD **)(a1 + 712);
  v4 = *(_QWORD **)(a1 + 856);
  v6 = 16 * *(unsigned __int16 *)(a1 + 6);
  v7 = *(unsigned __int16 *)(a1 + 6) << 6;
  if ( v3 )
  {
    if ( *(_BYTE *)(a1 + 1728) == 1 )
    {
      v8 = (void *)v3[7];
      if ( v8 )
      {
        ExFreePoolWithTag(v8, 0x51496152u);
        v3[7] = 0LL;
      }
      v9 = v3[5];
      if ( v9 )
      {
        sub_1400F5FEC(a1, *(_DWORD *)(*(_QWORD *)(a1 + 1648) + 12LL) * *(unsigned __int16 *)(a1 + 6), a3, v9, v3[6]);
        v3[5] = 0LL;
        v3[6] = 0LL;
      }
    }
    v10 = (void *)v3[3];
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0x51496152u);
      v3[3] = 0LL;
    }
    v11 = (void *)v3[4];
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0x51496152u);
      v3[4] = 0LL;
    }
    sub_140120864(v3);
    if ( *v3 )
    {
      sub_1400F5FEC(a1, v7, v12, **(_QWORD **)(a1 + 712), *(_QWORD *)(*(_QWORD *)(a1 + 712) + 8LL));
      **(_QWORD **)(a1 + 712) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 712) + 8LL) = 0LL;
    }
    ExFreePoolWithTag(v3, 0x51496152u);
    *(_QWORD *)(a1 + 712) = 0LL;
  }
  if ( v4 )
  {
    if ( *v4 )
    {
      sub_1400F5FEC(a1, v6, a3, **(_QWORD **)(a1 + 856), *(_QWORD *)(*(_QWORD *)(a1 + 856) + 8LL));
      **(_QWORD **)(a1 + 856) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 856) + 8LL) = 0LL;
    }
    v13 = (void *)v4[8];
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0x72446152u);
      v4[8] = 0LL;
      v4[9] = 0LL;
    }
    ExFreePoolWithTag(v4, 0x51496152u);
    *(_QWORD *)(a1 + 856) = 0LL;
  }
}
