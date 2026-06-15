/*
 * XREFs of sub_140029734 @ 0x140029734
 * Callers:
 *     sub_14002C870 @ 0x14002C870 (sub_14002C870.c)
 *     sub_14002DD08 @ 0x14002DD08 (sub_14002DD08.c)
 * Callees:
 *     sub_140029B30 @ 0x140029B30 (sub_140029B30.c)
 *     sub_14002A170 @ 0x14002A170 (sub_14002A170.c)
 *     sub_14002A258 @ 0x14002A258 (sub_14002A258.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memcmp @ 0x14004A694 (memcmp.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_140029734(int a1, __int64 a2, __int64 a3, __int128 *a4, int a5, int a6)
{
  bool v10; // cl
  __int128 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edi
  int v16[4]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v17[6]; // [rsp+B0h] [rbp-50h] BYREF

  memset(v17, 0, 88);
  v10 = memcmp(a4, &xmmword_1400C5548, 0x10uLL) != 0;
  v11 = a4;
  if ( !v10 )
    v11 = &xmmword_1400C6878;
  *a4 = *v11;
  if ( (int)sub_1400B6010(a2) >= 0 || (int)sub_1400B6010(a2) >= 0 || (int)sub_1400B6010(a2) >= 0 )
  {
    *(_OWORD *)v16 = *a4;
    v14 = sub_140029B30(a1, a3, (int)v16, 0, a6, v17);
    if ( v14 < 0 )
      goto LABEL_8;
    if ( (byte_1400E8401 & 2) != 0 )
      sub_14002A258(v13, v12, a3, a4);
  }
  v14 = 0;
LABEL_8:
  if ( *((_QWORD *)&v17[1] + 1) )
  {
    sub_1400B6010(*((_QWORD *)&v17[1] + 1));
    *((_QWORD *)&v17[1] + 1) = 0LL;
  }
  if ( *(_QWORD *)&v17[2] )
  {
    sub_1400B6010(*(_QWORD *)&v17[2]);
    *(_QWORD *)&v17[2] = 0LL;
  }
  if ( *(_QWORD *)&v17[3] )
  {
    sub_1400B6010(*(_QWORD *)&v17[3]);
    *(_QWORD *)&v17[3] = 0LL;
  }
  return (unsigned int)v14;
}
