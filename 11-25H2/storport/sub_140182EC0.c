/*
 * XREFs of sub_140182EC0 @ 0x140182EC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400A59C4 @ 0x1400A59C4 (sub_1400A59C4.c)
 *     sub_1400A59F0 @ 0x1400A59F0 (sub_1400A59F0.c)
 */

void __fastcall sub_140182EC0(int a1)
{
  _QWORD *i; // rcx
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  if ( a1 == 1 && _InterlockedExchange(&dword_140168608, 0) )
  {
    for ( i = &off_140166B78; ; i = v3 + 7 )
    {
      v2 = sub_1400A59C4(i);
      v3 = v2;
      if ( !v2 )
        break;
      if ( (*(_DWORD *)v2[1] & 1) != 0 )
        sub_1400A59F0(*((_DWORD *)v2 + 6), v2[1]);
    }
  }
}
