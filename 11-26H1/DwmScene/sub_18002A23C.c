/*
 * XREFs of sub_18002A23C @ 0x18002A23C
 * Callers:
 *     sub_18002AB68 @ 0x18002AB68 (sub_18002AB68.c)
 *     sub_18002AE68 @ 0x18002AE68 (sub_18002AE68.c)
 *     sub_18002AECC @ 0x18002AECC (sub_18002AECC.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 */

__int64 sub_18002A23C()
{
  __int64 result; // rax

  result = sub_180011790(0x58uLL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
