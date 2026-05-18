/*
 * XREFs of sub_180040AAC @ 0x180040AAC
 * Callers:
 *     sub_180015650 @ 0x180015650 (sub_180015650.c)
 *     sub_180015D60 @ 0x180015D60 (sub_180015D60.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_1800403B8 @ 0x1800403B8 (sub_1800403B8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180040AAC(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+28h] [rbp-40h]
  _QWORD v8[5]; // [rsp+30h] [rbp-38h] BYREF

  v8[4] = a2;
  v4 = sub_180013440(v8, a2);
  *(_BYTE *)(*sub_1800403B8(a1, &v6, (__int64)v4) + 72LL) = 1;
  if ( v7 )
    sub_180010EC8(v7);
  return sub_180014244(a2);
}
