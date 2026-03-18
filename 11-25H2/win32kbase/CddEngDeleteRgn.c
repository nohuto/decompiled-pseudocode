/*
 * XREFs of CddEngDeleteRgn @ 0x14014C530
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x14001E180 (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 */

void __fastcall CddEngDeleteRgn(Win32kRS *a1, struct REGION_CORE *a2)
{
  Win32kRS *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  if ( a1 )
    RGNCOREOBJ::vDeleteRGNCOREOBJ(&v2, a2);
}
