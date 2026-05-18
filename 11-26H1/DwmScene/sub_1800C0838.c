/*
 * XREFs of sub_1800C0838 @ 0x1800C0838
 * Callers:
 *     sub_1800C0910 @ 0x1800C0910 (sub_1800C0910.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800BEF90 @ 0x1800BEF90 (sub_1800BEF90.c)
 *     sub_1800BF0A0 @ 0x1800BF0A0 (sub_1800BF0A0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800C0838(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int128 v4; // xmm0
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int128 v7; // [rsp+30h] [rbp-58h]
  _BYTE v8[16]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v9; // [rsp+50h] [rbp-38h] BYREF
  __int128 v10; // [rsp+60h] [rbp-28h]

  v2 = a1[63];
  v9 = 0LL;
  v10 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v2 + 128LL))(v2, &v9);
  if ( !(_DWORD)result )
  {
    if ( (_DWORD)v9 )
    {
      v7 = v10;
      v4 = v9;
      v5 = *(_QWORD *)sub_1800BF0A0(a1 + 206, (__int64)v8, &v9);
      *(_OWORD *)(v5 + 40) = v4;
      *(_OWORD *)(v5 + 56) = v7;
      v6 = *(_QWORD *)sub_1800BEF90(a1 + 208, (__int64)v8, (_DWORD *)&v9 + 2);
      result = v10;
      *(_QWORD *)(v6 + 40) = v10;
    }
  }
  return result;
}
