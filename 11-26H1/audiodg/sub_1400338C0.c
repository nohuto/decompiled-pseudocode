/*
 * XREFs of sub_1400338C0 @ 0x1400338C0
 * Callers:
 *     sub_140005E68 @ 0x140005E68 (sub_140005E68.c)
 *     sub_140006060 @ 0x140006060 (sub_140006060.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall sub_1400338C0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rbx

  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 40);
    if ( v5 == 2 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 40LL);
      if ( v6 )
        sub_1400B6010(v6);
      sub_1400B6010(a2);
      if ( v6 )
        sub_1400B6010(v6);
    }
    else if ( ((v5 - 1) & 0xFFFFFFFD) == 0 )
    {
      if ( (int)sub_1400B6010(**(_QWORD **)(v4 + 32)) < 0 )
        return;
      sub_1400B6010(a2);
    }
  }
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 40);
    if ( v8 == 2 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 40LL);
      if ( v9 )
        sub_1400B6010(v9);
      sub_1400B6010(a2);
      if ( v9 )
        sub_1400B6010(v9);
    }
    else if ( ((v8 - 1) & 0xFFFFFFF9) == 0 && v8 != 7 && (int)sub_1400B6010(**(_QWORD **)(v7 + 32)) >= 0 )
    {
      sub_1400B6010(a2);
    }
  }
}
