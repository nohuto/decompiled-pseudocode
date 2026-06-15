/*
 * XREFs of sub_140056158 @ 0x140056158
 * Callers:
 *     sub_1400B194C @ 0x1400B194C (sub_1400B194C.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_140056158(_BYTE *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = *(_QWORD *)a1;
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
    if ( v2 )
    {
      *(_QWORD *)(v1 + 144) = 0LL;
      sub_1400B6010(v2);
    }
  }
}
