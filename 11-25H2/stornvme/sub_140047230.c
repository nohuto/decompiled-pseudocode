/*
 * XREFs of sub_140047230 @ 0x140047230
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400323F4 @ 0x1400323F4 (sub_1400323F4.c)
 *     sub_14003241C @ 0x14003241C (sub_14003241C.c)
 */

void __fastcall sub_140047230(int a1)
{
  _QWORD *i; // rcx
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  if ( a1 == 1 && _InterlockedExchange(&dword_140042178, 0) )
  {
    for ( i = &off_140041188; ; i = v3 + 7 )
    {
      v2 = sub_1400323F4(i);
      v3 = v2;
      if ( !v2 )
        break;
      if ( (*(_DWORD *)v2[1] & 1) != 0 )
        sub_14003241C(*((_DWORD *)v2 + 6), v2[1]);
    }
  }
}
