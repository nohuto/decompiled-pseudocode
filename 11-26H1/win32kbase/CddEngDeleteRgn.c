/*
 * XREFs of CddEngDeleteRgn @ 0x140183890
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x140043780 (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 */

void __fastcall CddEngDeleteRgn(char **a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  if ( a1 )
    RGNCOREOBJ::vDeleteRGNCOREOBJ(&v4, a2, a3, a4);
}
