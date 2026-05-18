/*
 * XREFs of sub_1800D5364 @ 0x1800D5364
 * Callers:
 *     sub_18002544C @ 0x18002544C (sub_18002544C.c)
 *     sub_180029AC0 @ 0x180029AC0 (sub_180029AC0.c)
 *     sub_18002D9B4 @ 0x18002D9B4 (sub_18002D9B4.c)
 *     sub_18003EFE4 @ 0x18003EFE4 (sub_18003EFE4.c)
 *     sub_18003F094 @ 0x18003F094 (sub_18003F094.c)
 *     sub_18005C9D8 @ 0x18005C9D8 (sub_18005C9D8.c)
 *     sub_18009820C @ 0x18009820C (sub_18009820C.c)
 *     sub_180099D84 @ 0x180099D84 (sub_180099D84.c)
 *     sub_180099E4C @ 0x180099E4C (sub_180099E4C.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180025874 @ 0x180025874 (sub_180025874.c)
 *     sub_180031294 @ 0x180031294 (sub_180031294.c)
 */

__int64 *__fastcall sub_1800D5364(__int64 *a1)
{
  void *v2; // rax
  __int64 v3; // rdi
  __int64 *result; // rax

  v2 = (void *)sub_18001C514(232LL);
  v3 = (__int64)v2;
  if ( v2 )
  {
    memset(v2, 0, 0xE8uLL);
    sub_180025874(v3);
    memset((void *)(v3 + 80), 0, 0x48uLL);
    sub_180031294(v3 + 80);
    memset((void *)(v3 + 152), 0, 0x48uLL);
    sub_180031294(v3 + 152);
    *(_DWORD *)(v3 + 224) = 0;
    *(_BYTE *)(v3 + 228) = 0;
  }
  else
  {
    v3 = 0LL;
  }
  result = a1;
  *a1 = v3;
  return result;
}
