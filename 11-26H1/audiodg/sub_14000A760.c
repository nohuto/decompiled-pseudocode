/*
 * XREFs of sub_14000A760 @ 0x14000A760
 * Callers:
 *     sub_14000A8A0 @ 0x14000A8A0 (sub_14000A8A0.c)
 *     sub_14002BDD0 @ 0x14002BDD0 (sub_14002BDD0.c)
 *     sub_140031EE0 @ 0x140031EE0 (sub_140031EE0.c)
 *     sub_1400350A0 @ 0x1400350A0 (sub_1400350A0.c)
 *     sub_140085AA0 @ 0x140085AA0 (sub_140085AA0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_14000A760(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 768);
  if ( !v2 )
  {
    v4 = 1909LL;
    goto LABEL_8;
  }
  if ( a2 != *(_QWORD *)(v2 + 16) )
  {
    v4 = 1912LL;
LABEL_8:
    sub_14000C2A8(retaddr, v4, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", 2147942406LL);
    return 2147942406LL;
  }
  if ( *(_BYTE *)(a1 + 777) )
  {
    sub_14000C2A8(retaddr, 1915LL, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", 2289827889LL);
    return 2289827889LL;
  }
  else if ( *(_BYTE *)(a1 + 778) )
  {
    sub_14000C2A8(retaddr, 1916LL, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", 2289827890LL);
    return 2289827890LL;
  }
  else
  {
    return 0LL;
  }
}
