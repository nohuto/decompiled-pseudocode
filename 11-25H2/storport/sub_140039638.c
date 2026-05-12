/*
 * XREFs of sub_140039638 @ 0x140039638
 * Callers:
 *     sub_1401B259C @ 0x1401B259C (sub_1401B259C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140039638(unsigned __int8 a1)
{
  __int64 result; // rax

  result = (unsigned int)(1 << (a1 & 0x1F));
  dword_140168728[(unsigned __int64)a1 >> 5] |= result;
  return result;
}
