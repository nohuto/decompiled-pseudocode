/*
 * XREFs of sub_140012430 @ 0x140012430
 * Callers:
 *     sub_140011F40 @ 0x140011F40 (sub_140011F40.c)
 * Callees:
 *     sub_140011318 @ 0x140011318 (sub_140011318.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

void __fastcall sub_140012430(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  int v4; // r8d
  _QWORD *i; // rdx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v2 = sub_140011318((_QWORD *)(a1 + 24), *(unsigned int *)(a1 + 40), 0x18uLL);
    if ( !v2 )
      sub_14004639C(2147942414LL, v3);
    v4 = *(_DWORD *)(a1 + 40) - 1;
    for ( i = &v2[2 * v4 + 1 + (unsigned int)v4]; v4 >= 0; --v4 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
      i -= 3;
    }
  }
}
