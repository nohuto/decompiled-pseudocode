/*
 * XREFs of sub_18001DFB0 @ 0x18001DFB0
 * Callers:
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001DF88 @ 0x18001DF88 (sub_18001DF88.c)
 *     sub_18004EE08 @ 0x18004EE08 (sub_18004EE08.c)
 *     sub_1800C31E8 @ 0x1800C31E8 (sub_1800C31E8.c)
 *     sub_1800C4100 @ 0x1800C4100 (sub_1800C4100.c)
 *     sub_1800C4B58 @ 0x1800C4B58 (sub_1800C4B58.c)
 *     sub_1800C94A0 @ 0x1800C94A0 (sub_1800C94A0.c)
 * Callees:
 *     memmove @ 0x18000D92D (memmove.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001CD80 @ 0x18001CD80 (sub_18001CD80.c)
 */

void **__fastcall sub_18001DFB0(__int64 a1, const void *a2, unsigned __int64 a3)
{
  __int64 v4; // r8
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  const void *v9; // rdx
  void **result; // rax

  v4 = *(_QWORD *)(a1 + 16);
  if ( a3 > *(_QWORD *)(a1 + 24) - v4 )
    return sub_18001CD80((void **)a1, a3, v4, a2, a3);
  *(_QWORD *)(a1 + 16) = v4 + a3;
  v6 = sub_1800148EC(a1);
  v8 = v6 + v7;
  memmove((void *)(v6 + v7), v9, a3);
  result = (void **)a1;
  *(_BYTE *)(v8 + a3) = 0;
  return result;
}
