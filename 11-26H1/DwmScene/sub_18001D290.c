/*
 * XREFs of sub_18001D290 @ 0x18001D290
 * Callers:
 *     sub_18001C858 @ 0x18001C858 (sub_18001C858.c)
 * Callees:
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     memmove @ 0x18000D92D (memmove.c)
 *     sub_1800117C4 @ 0x1800117C4 (sub_1800117C4.c)
 *     sub_18001275C @ 0x18001275C (sub_18001275C.c)
 *     sub_180012A10 @ 0x180012A10 (sub_180012A10.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001BCDC @ 0x18001BCDC (sub_18001BCDC.c)
 */

__int64 __fastcall sub_18001D290(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  size_t v7; // rsi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r12
  __int64 v11; // r9
  const void *v12; // rdx
  void *v13; // rcx
  size_t v14; // r8
  void *v15; // rbx
  __int64 v16; // rcx
  char *v17; // rbx
  const void *v18; // rax
  const void *v19; // rax
  size_t v20; // r8
  unsigned __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v7 = *(_QWORD *)(a3 + 16);
  v8 = *(_QWORD *)(a4 + 16);
  v9 = *(_QWORD *)(a4 + 24);
  v10 = v8 + v7;
  if ( v8 <= *(_QWORD *)(a3 + 24) - v7 && v9 <= *(_QWORD *)(a3 + 24) )
  {
    sub_18001BCDC((_OWORD *)a1, a3);
    sub_1800148EC(v11);
    v13 = (void *)(v7 + sub_1800148EC(a1));
LABEL_4:
    memcpy(v13, v12, v14);
    *(_QWORD *)(a1 + 16) = v10;
    return a1;
  }
  if ( v7 <= v9 - v8 )
  {
    sub_18001BCDC((_OWORD *)a1, a4);
    v15 = *(void **)a1;
    memmove((void *)(*(_QWORD *)a1 + v7), *(const void **)a1, v8 + 1);
    v12 = (const void *)sub_1800148EC(a3);
    v13 = v15;
    v14 = v7;
    goto LABEL_4;
  }
  if ( 0x7FFFFFFFFFFFFFFFLL - v7 < v8 )
    sub_180012A10();
  v22 = sub_18001275C(v8 + v7, 0xFuLL, 0x7FFFFFFFFFFFFFFFuLL);
  v17 = (char *)sub_1800117C4(v16, &v22);
  *(_QWORD *)(a1 + 24) = v22;
  *(_QWORD *)a1 = v17;
  *(_QWORD *)(a1 + 16) = v10;
  v18 = (const void *)sub_1800148EC(a3);
  memcpy(v17, v18, v7);
  v19 = (const void *)sub_1800148EC(a4);
  memcpy(&v17[v7], v19, v20);
  return a1;
}
