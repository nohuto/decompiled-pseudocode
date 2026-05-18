/*
 * XREFs of sub_18001490C @ 0x18001490C
 * Callers:
 *     sub_1800143E4 @ 0x1800143E4 (sub_1800143E4.c)
 *     sub_18002110C @ 0x18002110C (sub_18002110C.c)
 *     sub_180021AE8 @ 0x180021AE8 (sub_180021AE8.c)
 *     sub_180027EC8 @ 0x180027EC8 (sub_180027EC8.c)
 *     sub_18004CEF4 @ 0x18004CEF4 (sub_18004CEF4.c)
 *     sub_18005DDC8 @ 0x18005DDC8 (sub_18005DDC8.c)
 *     sub_18006C198 @ 0x18006C198 (sub_18006C198.c)
 *     sub_1800946C4 @ 0x1800946C4 (sub_1800946C4.c)
 *     sub_1800C2320 @ 0x1800C2320 (sub_1800C2320.c)
 *     sub_1800DA389 @ 0x1800DA389 (sub_1800DA389.c)
 * Callees:
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     memmove @ 0x18000D92D (memmove.c)
 *     sub_1800117C4 @ 0x1800117C4 (sub_1800117C4.c)
 *     sub_18001275C @ 0x18001275C (sub_18001275C.c)
 *     sub_180012848 @ 0x180012848 (sub_180012848.c)
 *     sub_180012A10 @ 0x180012A10 (sub_180012A10.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 */

__int64 __fastcall sub_18001490C(__int64 a1, const void *a2, size_t a3)
{
  unsigned __int64 v3; // rbx
  _BYTE *v7; // rax
  size_t v8; // r8
  _BYTE *v9; // rbx
  const void *v10; // rdx
  __int64 v11; // rcx
  _BYTE *v12; // rax
  _BYTE *v13; // r14
  __int64 v14; // rcx
  unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  if ( a3 > v3 )
  {
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      sub_180012A10();
    v16 = sub_18001275C(a3, *(_QWORD *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v12 = (_BYTE *)sub_1800117C4(v11, &v16);
    *(_QWORD *)(a1 + 24) = v16;
    *(_QWORD *)(a1 + 16) = a3;
    v13 = v12;
    memcpy(v12, a2, a3);
    v13[a3] = 0;
    if ( v3 > 0xF )
      sub_180012848(v14, *(void **)a1, v3);
    *(_QWORD *)a1 = v13;
  }
  else
  {
    v7 = (_BYTE *)sub_1800148EC(a1);
    *(_QWORD *)(a1 + 16) = v8;
    v9 = v7;
    memmove(v7, v10, v8);
    v9[a3] = 0;
  }
  return a1;
}
