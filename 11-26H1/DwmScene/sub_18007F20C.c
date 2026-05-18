/*
 * XREFs of sub_18007F20C @ 0x18007F20C
 * Callers:
 *     sub_1800778D0 @ 0x1800778D0 (sub_1800778D0.c)
 *     sub_18007A430 @ 0x18007A430 (sub_18007A430.c)
 * Callees:
 *     memcmp @ 0x18000CEC4 (memcmp.c)
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     sub_18007C6F4 @ 0x18007C6F4 (sub_18007C6F4.c)
 *     sub_18007E978 @ 0x18007E978 (sub_18007E978.c)
 */

int __fastcall sub_18007F20C(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v5; // ax
  const void *v6; // rsi
  size_t v7; // rbx
  void *v8; // rbp
  int result; // eax

  v5 = sub_18007C6F4(*(_QWORD *)(a1 + 16), a2);
  v6 = *(const void **)a3;
  v7 = 16LL * (unsigned int)((__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 4);
  v8 = (void *)sub_18007E978(a1, v5, 5);
  result = memcmp(v8, v6, v7);
  if ( result )
  {
    result = (unsigned int)memcpy(v8, v6, v7);
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
