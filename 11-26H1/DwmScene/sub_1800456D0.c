/*
 * XREFs of sub_1800456D0 @ 0x1800456D0
 * Callers:
 *     sub_1800777B0 @ 0x1800777B0 (sub_1800777B0.c)
 *     sub_1800793B0 @ 0x1800793B0 (sub_1800793B0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18004DE2C @ 0x18004DE2C (sub_18004DE2C.c)
 *     sub_18005E244 @ 0x18005E244 (sub_18005E244.c)
 *     sub_18007B9FC @ 0x18007B9FC (sub_18007B9FC.c)
 *     sub_18007C50C @ 0x18007C50C (sub_18007C50C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800456D0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  sub_18004DE2C(a1, &v7, 8LL);
  sub_18007B9FC(v7, &unk_1801CCDB8, 7LL, 256LL);
  sub_18007C50C(v7);
  v3 = sub_180012C40(v9, &v7);
  result = sub_18005E244(v4, v3);
  if ( v8 )
    result = sub_180010EC8(v8);
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 )
    return sub_180010EC8(v6);
  return result;
}
