/*
 * XREFs of sub_18006D1CC @ 0x18006D1CC
 * Callers:
 *     sub_18006C83C @ 0x18006C83C (sub_18006C83C.c)
 *     sub_18006D1CC @ 0x18006D1CC (sub_18006D1CC.c)
 *     sub_18009BCD8 @ 0x18009BCD8 (sub_18009BCD8.c)
 * Callees:
 *     sub_18006CAEC @ 0x18006CAEC (sub_18006CAEC.c)
 *     sub_18006CBE0 @ 0x18006CBE0 (sub_18006CBE0.c)
 *     sub_18006CD60 @ 0x18006CD60 (sub_18006CD60.c)
 *     sub_18006D0E4 @ 0x18006D0E4 (sub_18006D0E4.c)
 *     sub_18006D1CC @ 0x18006D1CC (sub_18006D1CC.c)
 */

__int64 *__fastcall sub_18006D1CC(
        __int64 *a1,
        char *a2,
        __int64 a3,
        unsigned __int8 (__fastcall *a4)(__int64, __int64))
{
  char *v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-10h]

  while ( (__int64)((a2 - (char *)a1) & 0xFFFFFFFFFFFFFFF0uLL) > 512 )
  {
    if ( a3 <= 0 )
    {
      sub_18006CBE0((__int64)a1, (__int64)a2, (__int64)a4);
      return (__int64 *)sub_18006D0E4(a1, (__int64)a2, a4);
    }
    sub_18006CD60(&v9, (unsigned __int64)a1, a2, (unsigned __int8 (__fastcall *)(_QWORD *, _QWORD *))a4);
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)((v9 - (char *)a1) & 0xFFFFFFFFFFFFFFF0uLL) >= (__int64)((a2 - (char *)v10) & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      sub_18006D1CC(v10, a2, a3, a4, (_DWORD)v9);
      a2 = v9;
    }
    else
    {
      sub_18006D1CC(a1, v9, a3, a4, (_DWORD)v9);
      a1 = v10;
    }
  }
  return sub_18006CAEC(a1, (__int64 *)a2, (__int64 (__fastcall *)(__int64 *, __int64 *))a4);
}
