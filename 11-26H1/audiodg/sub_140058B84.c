/*
 * XREFs of sub_140058B84 @ 0x140058B84
 * Callers:
 *     sub_140058AF0 @ 0x140058AF0 (sub_140058AF0.c)
 * Callees:
 *     sub_14001FC40 @ 0x14001FC40 (sub_14001FC40.c)
 *     sub_1400257E4 @ 0x1400257E4 (sub_1400257E4.c)
 *     sub_14004DB08 @ 0x14004DB08 (sub_14004DB08.c)
 *     sub_14004E670 @ 0x14004E670 (sub_14004E670.c)
 *     sub_140058C44 @ 0x140058C44 (sub_140058C44.c)
 */

char __fastcall sub_140058B84(_QWORD *a1, unsigned __int64 a2)
{
  SIZE_T v4; // rsi
  char *v5; // rax
  char *v6; // rdi
  __int64 v8; // r14
  void *v9; // rcx
  char v10; // [rsp+30h] [rbp+8h] BYREF

  if ( a1[2] - *a1 < a2 )
  {
    sub_1400257E4((__int64)&v10);
    v4 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    v5 = (char *)sub_14004E670(0, v4);
    v6 = v5;
    if ( !v5 )
    {
      sub_14001FC40((__int64)&v10);
      return 0;
    }
    v8 = a1[1] - *a1;
    sub_140058C44(v5, v4, *a1, v8);
    v9 = (void *)a1[3];
    a1[3] = v6;
    if ( v9 )
      sub_14004DB08(v9);
    *a1 = v6;
    a1[1] = &v6[v8];
    a1[2] = &v6[v4];
    sub_14001FC40((__int64)&v10);
  }
  return 1;
}
