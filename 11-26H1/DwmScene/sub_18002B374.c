/*
 * XREFs of sub_18002B374 @ 0x18002B374
 * Callers:
 *     sub_18002AE68 @ 0x18002AE68 (sub_18002AE68.c)
 *     sub_1800D93D0 @ 0x1800D93D0 (sub_1800D93D0.c)
 * Callees:
 *     sub_18002A8A0 @ 0x18002A8A0 (sub_18002A8A0.c)
 */

__int64 __fastcall sub_18002B374(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18002A8A0(*(void ***)(a1 + 8), *(_QWORD *)a1);
  return result;
}
