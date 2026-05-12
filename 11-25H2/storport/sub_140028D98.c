/*
 * XREFs of sub_140028D98 @ 0x140028D98
 * Callers:
 *     sub_140027FB4 @ 0x140027FB4 (sub_140027FB4.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_1401B1FDC @ 0x1401B1FDC (sub_1401B1FDC.c)
 */

__int64 __fastcall sub_140028D98(_DWORD *a1)
{
  __int64 result; // rax

  memset_0(a1, 0, 0xE40uLL);
  *a1 = 1431193940;
  sub_1401B1FDC(a1 + 144);
  *((_BYTE *)a1 + 556) = 0;
  *((_QWORD *)a1 + 68) = 1LL;
  a1[26] = -1;
  result = 134684677LL;
  a1[360] = 134684677;
  a1[380] = 134684677;
  a1[400] = 134684677;
  a1[420] = 134684677;
  a1[440] = 134684677;
  *(_QWORD *)(a1 + 137) = 1LL;
  a1[348] = 10;
  return result;
}
