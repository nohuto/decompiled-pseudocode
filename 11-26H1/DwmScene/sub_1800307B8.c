/*
 * XREFs of sub_1800307B8 @ 0x1800307B8
 * Callers:
 *     sub_18002D24C @ 0x18002D24C (sub_18002D24C.c)
 * Callees:
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     memmove @ 0x18000D92D (memmove.c)
 *     sub_180012A10 @ 0x180012A10 (sub_180012A10.c)
 *     sub_180012FA4 @ 0x180012FA4 (sub_180012FA4.c)
 *     sub_180014014 @ 0x180014014 (sub_180014014.c)
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_18001F8D4 @ 0x18001F8D4 (sub_18001F8D4.c)
 */

__int64 __fastcall sub_1800307B8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // r9
  const void *v12; // rdx
  void *v13; // rcx
  size_t v14; // r8
  void *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rcx
  char *v18; // rdi
  size_t v19; // rbx
  const void *v20; // rax
  const void *v21; // rax
  size_t v22; // r8
  unsigned __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v7 = *(_QWORD *)(a3 + 16);
  v8 = *(_QWORD *)(a4 + 16);
  v9 = *(_QWORD *)(a4 + 24);
  v10 = v8 + v7;
  if ( v8 <= *(_QWORD *)(a3 + 24) - v7 && v9 <= *(_QWORD *)(a3 + 24) )
  {
    sub_18001F8D4((_OWORD *)a1, a3);
    sub_1800141BC(v11);
    v13 = (void *)(sub_1800141BC(a1) + 2 * v7);
LABEL_4:
    memcpy(v13, v12, v14);
    *(_QWORD *)(a1 + 16) = v10;
    return a1;
  }
  if ( v7 <= v9 - v8 )
  {
    sub_18001F8D4((_OWORD *)a1, a4);
    v15 = *(void **)a1;
    v16 = 2 * v7;
    memmove((void *)(*(_QWORD *)a1 + v16), *(const void **)a1, 2 * v8 + 2);
    v12 = (const void *)sub_1800141BC(a3);
    v13 = v15;
    v14 = v16;
    goto LABEL_4;
  }
  if ( 0x7FFFFFFFFFFFFFFELL - v7 < v8 )
    sub_180012A10();
  v24 = sub_180014014(v8 + v7, 7uLL, 0x7FFFFFFFFFFFFFFEuLL);
  v18 = (char *)sub_180012FA4(v17, &v24);
  *(_QWORD *)(a1 + 24) = v24;
  v19 = 2 * v7;
  *(_QWORD *)a1 = v18;
  *(_QWORD *)(a1 + 16) = v10;
  v20 = (const void *)sub_1800141BC(a3);
  memcpy(v18, v20, v19);
  v21 = (const void *)sub_1800141BC(a4);
  memcpy(&v18[v19], v21, v22);
  return a1;
}
