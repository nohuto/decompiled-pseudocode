/*
 * XREFs of sub_18007D898 @ 0x18007D898
 * Callers:
 *     sub_18007E4C4 @ 0x18007E4C4 (sub_18007E4C4.c)
 * Callees:
 *     memmove @ 0x18000D92D (memmove.c)
 */

_QWORD *__fastcall sub_18007D898(_QWORD *a1, const void *a2, __int64 a3, char *a4)
{
  __int64 v5; // rbx

  v5 = a3 - (_QWORD)a2;
  memmove(a4, a2, a3 - (_QWORD)a2);
  *a1 = &a4[v5];
  return a1;
}
