/*
 * XREFs of sub_1400DFFEC @ 0x1400DFFEC
 * Callers:
 *     sub_1400DCB68 @ 0x1400DCB68 (sub_1400DCB68.c)
 *     sub_1400E22C0 @ 0x1400E22C0 (sub_1400E22C0.c)
 *     sub_1400E3658 @ 0x1400E3658 (sub_1400E3658.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400DFFEC(_QWORD **a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v2[1] != a1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    ExFreePoolWithTag(v2, 0x52436152u);
  }
}
