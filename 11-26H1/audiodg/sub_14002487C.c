/*
 * XREFs of sub_14002487C @ 0x14002487C
 * Callers:
 *     sub_140023FE0 @ 0x140023FE0 (sub_140023FE0.c)
 *     sub_140024540 @ 0x140024540 (sub_140024540.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_14002487C(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rbx

  v1 = *(_QWORD *)(a1 + 24);
  while ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 16);
    v1 = *(_QWORD *)(v1 + 8);
    if ( *(_DWORD *)(v2 + 40) == 2 )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 40LL);
      if ( v3 )
        sub_1400B6010(v3);
      if ( (int)sub_1400B6010(v3) >= 0 )
        sub_1400B6010(0LL);
      if ( v3 )
        sub_1400B6010(v3);
    }
  }
}
