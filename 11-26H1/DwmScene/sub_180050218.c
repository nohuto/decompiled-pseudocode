/*
 * XREFs of sub_180050218 @ 0x180050218
 * Callers:
 *     sub_18004F4C4 @ 0x18004F4C4 (sub_18004F4C4.c)
 * Callees:
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     sub_1800117B4 @ 0x1800117B4 (sub_1800117B4.c)
 */

void __fastcall sub_180050218(__int64 a1, const void *a2, size_t a3, int a4)
{
  unsigned int v5; // ebx
  char *v8; // rsi
  char *v9; // r8
  size_t v10; // [rsp+50h] [rbp+18h] BYREF

  v5 = a4 & 0xFFFFFFDF;
  if ( a3 > 0x7FFFFFFF )
  {
    std::_Xbad_alloc();
    __debugbreak();
  }
  if ( !a3 || (v5 & 6) == 6 )
  {
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  else
  {
    v10 = a3;
    v8 = (char *)sub_1800117B4(a1, &v10);
    memcpy(v8, a2, a3);
    *(_QWORD *)(a1 + 104) = &v8[a3];
    if ( (v5 & 4) == 0 )
      std::streambuf::setg(a1, v8, v8, &v8[a3]);
    if ( (v5 & 2) == 0 )
    {
      v9 = v8;
      if ( (v5 & 0x18) != 0 )
        v9 = *(char **)(a1 + 104);
      std::streambuf::setp(a1, v8, v9, *(_QWORD *)(a1 + 104));
      if ( (v5 & 4) != 0 )
        std::streambuf::setg(a1, v8, v8, v8);
    }
    v5 |= 1u;
  }
  *(_DWORD *)(a1 + 112) = v5;
}
