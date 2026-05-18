/*
 * XREFs of sub_18001F9C0 @ 0x18001F9C0
 * Callers:
 *     sub_180031F38 @ 0x180031F38 (sub_180031F38.c)
 *     sub_18003412C @ 0x18003412C (sub_18003412C.c)
 *     sub_180050B20 @ 0x180050B20 (sub_180050B20.c)
 *     sub_1800BABD4 @ 0x1800BABD4 (sub_1800BABD4.c)
 * Callees:
 *     memmove @ 0x18000D92D (memmove.c)
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_18001EBB8 @ 0x18001EBB8 (sub_18001EBB8.c)
 */

__int64 __fastcall sub_18001F9C0(__int64 a1, const void *a2, unsigned __int64 a3)
{
  char *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  char *v7; // rdi
  const void *v8; // rdx

  if ( a3 > *(_QWORD *)(a1 + 24) )
    return sub_18001EBB8(a1, a3, a3, a2);
  v4 = (char *)sub_1800141BC(a1);
  v6 = 2 * v5;
  *(_QWORD *)(a1 + 16) = v5;
  v7 = v4;
  memmove(v4, v8, 2 * v5);
  *(_WORD *)&v7[v6] = 0;
  return a1;
}
