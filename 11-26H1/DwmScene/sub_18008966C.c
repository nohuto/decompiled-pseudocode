/*
 * XREFs of sub_18008966C @ 0x18008966C
 * Callers:
 *     sub_1800887D8 @ 0x1800887D8 (sub_1800887D8.c)
 * Callees:
 *     sub_18000D954 @ 0x18000D954 (sub_18000D954.c)
 *     sub_1800885D8 @ 0x1800885D8 (sub_1800885D8.c)
 */

void __fastcall sub_18008966C(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD v3[7]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v4; // [rsp+58h] [rbp-10h]
  __int64 v5; // [rsp+78h] [rbp+10h] BYREF

  v5 = a2;
  if ( *(_QWORD *)(a1 + 136) != 8LL )
  {
    v4 = 0LL;
    v3[0] = &std::_Func_impl_no_alloc<_lambda_e4386f35b8603616d8ddd0087d6df351_,Spectre::Utils::Math::Color,Spectre::Utils::Math::Color>::`vftable';
    v3[1] = *sub_18000D954(&v5, a1);
    v4 = v3;
    sub_1800885D8(v2, v2, (__int64)v3);
  }
}
