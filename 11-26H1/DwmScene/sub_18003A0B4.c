/*
 * XREFs of sub_18003A0B4 @ 0x18003A0B4
 * Callers:
 *     sub_18003A0B4 @ 0x18003A0B4 (sub_18003A0B4.c)
 *     sub_18003A374 @ 0x18003A374 (sub_18003A374.c)
 *     sub_180060724 @ 0x180060724 (sub_180060724.c)
 * Callees:
 *     sub_180039550 @ 0x180039550 (sub_180039550.c)
 *     sub_18003970C @ 0x18003970C (sub_18003970C.c)
 *     sub_180039E8C @ 0x180039E8C (sub_180039E8C.c)
 *     sub_18003A0B4 @ 0x18003A0B4 (sub_18003A0B4.c)
 */

void __fastcall sub_18003A0B4(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 (__fastcall *a6)(__int64, unsigned __int64))
{
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rdx

  if ( a3 > 32 )
  {
    v9 = (unsigned __int64)a3 >> 1;
    v10 = a3 - ((unsigned __int64)a3 >> 1);
    v11 = (__int64)&a1[2 * v10];
    if ( v10 > a5 )
    {
      sub_18003A0B4((_DWORD)a1, v11, v10, a4, a5, (__int64)a6);
      sub_18003A0B4((_DWORD)a1 + 16 * v10, (_DWORD)a2, v9, a4, a5, (__int64)a6);
    }
    else
    {
      sub_18003970C((__int64)a1, v11, v10, a4, (__int64)a6);
      sub_18003970C((__int64)&a1[2 * v10], (__int64)a2, v9, a4, (__int64)a6);
    }
    sub_180039550(a1, &a1[2 * v10], a2, v10, v9, a4, a5, a6);
  }
  else
  {
    sub_180039E8C(a1, a2, (__int64 (__fastcall *)(__int64 *, __int64 *))a6);
  }
}
