/*
 * XREFs of sub_18006444C @ 0x18006444C
 * Callers:
 *     sub_180063B80 @ 0x180063B80 (sub_180063B80.c)
 * Callees:
 *     sub_18000D954 @ 0x18000D954 (sub_18000D954.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18006444C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 (__fastcall *v3)(__int64, _QWORD *); // r8
  __int64 v4; // r9
  _QWORD v6[7]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v7; // [rsp+58h] [rbp-10h]
  __int64 v8; // [rsp+78h] [rbp+10h] BYREF

  sub_180033D14(a1, 1);
  v7 = 0LL;
  v6[0] = &std::_Func_impl_no_alloc<_lambda_7df625487201977a352489cf8de9dd55_,void,std::wstring const &>::`vftable';
  v2 = *sub_18000D954(&v8, a1);
  v7 = v6;
  v6[1] = v2;
  return v3(v4, v6);
}
