/*
 * XREFs of sub_140026FE0 @ 0x140026FE0
 * Callers:
 *     sub_140003E20 @ 0x140003E20 (sub_140003E20.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_140026FE0(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  char v7; // di

  v5 = 0LL;
  *a3 = a2;
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 && *(_DWORD *)(v6 + 40) == 2 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 40LL);
    if ( v5 )
    {
      sub_1400B6010(v5);
      v7 = 0;
    }
    else
    {
      v7 = 1;
    }
    if ( !v7 && v5 )
      sub_1400B6010(v5);
  }
  *(_DWORD *)(a1 + 40) = *a3;
  if ( v5 )
    sub_1400B6010(v5);
  return 0LL;
}
