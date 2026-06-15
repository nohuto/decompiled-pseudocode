/*
 * XREFs of sub_140080AC4 @ 0x140080AC4
 * Callers:
 *     sub_140056088 @ 0x140056088 (sub_140056088.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_14000D938 @ 0x14000D938 (sub_14000D938.c)
 *     sub_14000E590 @ 0x14000E590 (sub_14000E590.c)
 *     sub_14002B828 @ 0x14002B828 (sub_14002B828.c)
 *     sub_14002B868 @ 0x14002B868 (sub_14002B868.c)
 *     sub_1400560EC @ 0x1400560EC (sub_1400560EC.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_1400825E0 @ 0x1400825E0 (sub_1400825E0.c)
 *     sub_140082A00 @ 0x140082A00 (sub_140082A00.c)
 *     sub_140082DA0 @ 0x140082DA0 (sub_140082DA0.c)
 *     sub_1400837C0 @ 0x1400837C0 (sub_1400837C0.c)
 *     sub_140083A90 @ 0x140083A90 (sub_140083A90.c)
 */

void __fastcall sub_140080AC4(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  _QWORD **v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)a1 = off_1400F5090;
  *(_QWORD *)(a1 + 8) = off_1400F5000;
  *(_QWORD *)(a1 + 16) = off_1400F5070;
  *(_QWORD *)(a1 + 24) = off_1400F5138;
  v13 = 0LL;
  *(_BYTE *)(a1 + 787) = 1;
  if ( *(_BYTE *)(a1 + 784) )
  {
    v2 = *(_QWORD *)(a1 + 776);
    if ( v2 )
    {
      sub_140082A00(a1, *(_QWORD *)(v2 + 16));
      v2 = *(_QWORD *)(a1 + 776);
    }
    if ( *(_BYTE *)(a1 + 786) )
    {
      v3 = 1000LL;
      if ( v2 )
        v3 = *(_QWORD *)(v2 + 16);
      v13 = v3;
      sub_140082DA0(a1);
    }
    sub_1400825E0(a1, &v13);
    v5 = **(_QWORD ***)(a1 + 776);
    while ( v5[2] )
    {
      v6 = (_QWORD **)sub_14000E590(v5, v4);
      sub_1400837C0(a1, v13, **v6);
    }
    v7 = **(_QWORD **)(a1 + 776);
    while ( *(_QWORD *)(v7 + 64) )
    {
      v8 = sub_140009AA8((_QWORD *)(v7 + 48), v4);
      sub_140083A90(a1, v13, *(_QWORD *)(*(_QWORD *)v8 + 120LL));
    }
    v9 = **(_QWORD **)(a1 + 776);
    while ( *(_QWORD *)(v9 + 112) )
    {
      v10 = sub_140009AA8((_QWORD *)(v9 + 96), v4);
      sub_140083A90(a1, v13, *(_QWORD *)(*(_QWORD *)v10 + 120LL));
    }
    sub_140082DA0(a1);
  }
  sub_140056130((__int64 *)(a1 + 1072));
  sub_1400560EC(a1 + 832);
  sub_140003238((__int64 *)(a1 + 800));
  sub_140003238((__int64 *)(a1 + 792));
  sub_14002B868(a1 + 392);
  sub_14002B828((struct _RTL_CRITICAL_SECTION *)(a1 + 232));
  sub_14000D938(a1 + 184, v11);
  sub_14000D938(a1 + 136, v12);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  sub_140006B48(a1 + 40);
}
