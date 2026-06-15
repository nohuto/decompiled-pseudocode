/*
 * XREFs of sub_14002B664 @ 0x14002B664
 * Callers:
 *     sub_14002B60C @ 0x14002B60C (sub_14002B60C.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_14000A8A0 @ 0x14000A8A0 (sub_14000A8A0.c)
 *     sub_14000CB10 @ 0x14000CB10 (sub_14000CB10.c)
 *     sub_14000D938 @ 0x14000D938 (sub_14000D938.c)
 *     sub_14000E590 @ 0x14000E590 (sub_14000E590.c)
 *     sub_14002B828 @ 0x14002B828 (sub_14002B828.c)
 *     sub_14002B868 @ 0x14002B868 (sub_14002B868.c)
 *     sub_14002B8B0 @ 0x14002B8B0 (sub_14002B8B0.c)
 *     sub_14002BDD0 @ 0x14002BDD0 (sub_14002BDD0.c)
 *     sub_1400861E0 @ 0x1400861E0 (sub_1400861E0.c)
 */

void __fastcall sub_14002B664(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 **v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)a1 = &off_1400F5158;
  *(_QWORD *)(a1 + 8) = &off_1400F5038;
  *(_QWORD *)(a1 + 16) = &off_1400F5118;
  v13 = 0LL;
  *(_BYTE *)(a1 + 779) = 1;
  if ( *(_BYTE *)(a1 + 776) )
  {
    v2 = *(_QWORD *)(a1 + 768);
    if ( v2 )
    {
      sub_1400861E0(a1, *(_QWORD *)(v2 + 16));
      v2 = *(_QWORD *)(a1 + 768);
    }
    if ( *(_BYTE *)(a1 + 778) )
    {
      v10 = 1000LL;
      if ( v2 )
        v10 = *(_QWORD *)(v2 + 16);
      v13 = v10;
      sub_14000CB10(a1, v10);
    }
    sub_14002B8B0(a1, &v13);
    v4 = **(_QWORD ***)(a1 + 768);
    while ( v4[2] )
    {
      v11 = (__int64 **)sub_14000E590(v4, v3);
      sub_14000A8A0(a1, v13, **v11);
    }
    v5 = **(_QWORD **)(a1 + 768);
    while ( *(_QWORD *)(v5 + 64) )
    {
      v12 = sub_140009AA8((_QWORD *)(v5 + 48), v3);
      sub_14002BDD0(a1, v13, *(_QWORD *)(*(_QWORD *)v12 + 120LL));
    }
    v6 = **(_QWORD **)(a1 + 768);
    while ( *(_QWORD *)(v6 + 112) )
    {
      v9 = sub_140009AA8((_QWORD *)(v6 + 96), v3);
      sub_14002BDD0(a1, v13, *(_QWORD *)(*(_QWORD *)v9 + 120LL));
    }
    sub_14000CB10(a1, v13);
  }
  sub_140003238((__int64 *)(a1 + 792));
  sub_140003238((__int64 *)(a1 + 784));
  sub_14002B868(a1 + 384);
  sub_14002B828(a1 + 224);
  sub_14000D938(a1 + 176, v7);
  sub_14000D938(a1 + 128, v8);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 88));
  sub_140006B48(a1 + 32);
}
