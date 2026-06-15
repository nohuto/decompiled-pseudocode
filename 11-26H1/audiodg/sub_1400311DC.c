/*
 * XREFs of sub_1400311DC @ 0x1400311DC
 * Callers:
 *     sub_1400310E0 @ 0x1400310E0 (sub_1400310E0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_1400311DC(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 24);
  while ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 16);
    v1 = *(_QWORD *)(v1 + 8);
    if ( *(_DWORD *)(v2 + 40) == 3 )
      sub_1400B6010(**(_QWORD **)(v2 + 32));
  }
}
