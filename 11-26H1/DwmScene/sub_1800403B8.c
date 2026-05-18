/*
 * XREFs of sub_1800403B8 @ 0x1800403B8
 * Callers:
 *     sub_18002D6A0 @ 0x18002D6A0 (sub_18002D6A0.c)
 *     sub_18003FC1C @ 0x18003FC1C (sub_18003FC1C.c)
 *     sub_18004025C @ 0x18004025C (sub_18004025C.c)
 *     sub_180040308 @ 0x180040308 (sub_180040308.c)
 *     sub_180040570 @ 0x180040570 (sub_180040570.c)
 *     sub_180040AAC @ 0x180040AAC (sub_180040AAC.c)
 *     sub_180040F4C @ 0x180040F4C (sub_180040F4C.c)
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 *     sub_180063580 @ 0x180063580 (sub_180063580.c)
 *     sub_18006382C @ 0x18006382C (sub_18006382C.c)
 *     sub_180066AA4 @ 0x180066AA4 (sub_180066AA4.c)
 *     sub_180086D20 @ 0x180086D20 (sub_180086D20.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_180029E54 @ 0x180029E54 (sub_180029E54.c)
 *     sub_18003E864 @ 0x18003E864 (sub_18003E864.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800403B8(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  __int128 *v7; // rax
  char v8; // bl
  __int64 v10; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  __int128 v12; // [rsp+38h] [rbp-30h] BYREF

  *(_QWORD *)&v12 = a3;
  sub_180029E54(a1 + 16);
  v6 = sub_18003E864(a1 + 88, a3);
  if ( v6 == *(_QWORD *)(a1 + 88) )
  {
    v12 = 0LL;
    v7 = &v12;
    v8 = 5;
  }
  else
  {
    v7 = (__int128 *)sub_180012C40(&v10, (_QWORD *)(v6 + 64));
    v8 = 6;
  }
  sub_180012C40(a2, v7);
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v11 )
      sub_180010EC8(v11);
  }
  if ( (v8 & 1) != 0 && *((_QWORD *)&v12 + 1) )
    sub_180010EC8(*((__int64 *)&v12 + 1));
  sub_180014244(a3);
  return a2;
}
