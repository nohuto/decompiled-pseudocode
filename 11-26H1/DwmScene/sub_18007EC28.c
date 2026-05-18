/*
 * XREFs of sub_18007EC28 @ 0x18007EC28
 * Callers:
 *     sub_18004ED60 @ 0x18004ED60 (sub_18004ED60.c)
 *     sub_18007A6E0 @ 0x18007A6E0 (sub_18007A6E0.c)
 *     sub_180093040 @ 0x180093040 (sub_180093040.c)
 * Callees:
 *     memcmp @ 0x18000CEC4 (memcmp.c)
 *     sub_18007C6F4 @ 0x18007C6F4 (sub_18007C6F4.c)
 *     sub_18007E978 @ 0x18007E978 (sub_18007E978.c)
 */

int __fastcall sub_18007EC28(__int64 a1, __int64 a2, _OWORD *a3)
{
  unsigned __int16 v5; // ax
  _OWORD *v6; // rdi
  int result; // eax

  v5 = sub_18007C6F4(*(_QWORD *)(a1 + 16), a2);
  v6 = (_OWORD *)sub_18007E978(a1, v5, 7);
  result = memcmp(v6, a3, 0x40uLL);
  if ( result )
  {
    *v6 = *a3;
    v6[1] = a3[1];
    v6[2] = a3[2];
    v6[3] = a3[3];
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
