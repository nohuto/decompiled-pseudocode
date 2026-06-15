/*
 * XREFs of ?DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ @ 0x180083398
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_6ce6f5b5c48dd15f085b9d66d99ef51d__long_CEndpointCharacteristics___::_Do_call @ 0x180104190 (std--_Func_impl_no_alloc__lambda_6ce6f5b5c48dd15f085b9d66d99ef51d__long_CEndpointCh_ea_180104190.c)
 *     ?RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18013BAF0 (-RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x18013C178 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV-$basic_string@GU-$char_traits@G@std@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     wil::scope_exit__lambda_b04dcad4e52f0d96382020bfb06775ad___ @ 0x1800C3D60 (wil--scope_exit__lambda_b04dcad4e52f0d96382020bfb06775ad___.c)
 *     _lambda_b04dcad4e52f0d96382020bfb06775ad_::_lambda_b04dcad4e52f0d96382020bfb06775ad_ @ 0x1800C3DE8 (_lambda_b04dcad4e52f0d96382020bfb06775ad_--_lambda_b04dcad4e52f0d96382020bfb06775ad_.c)
 *     wil::details::lambda_call__lambda_1c51ba029875d16c5c5a23cee02b4c3a___::_lambda_call__lambda_1c51ba029875d16c5c5a23cee02b4c3a___ @ 0x180135238 (wil--details--lambda_call__lambda_1c51ba029875d16c5c5a23cee02b4c3a___--_lambda_call__lambda_1c51.c)
 *     _lambda_9690ae725cbb2a29975841b6bdf2d8b3_::operator() @ 0x18013688C (_lambda_9690ae725cbb2a29975841b6bdf2d8b3_--operator().c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::DetermineCurrentEffectPack(CEndpointCharacteristics *this)
{
  __int64 v1; // rax
  int v2; // r10d
  __int64 v3; // rax
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+30h] [rbp-49h] BYREF
  std::_Ref_count_base *v7[2]; // [rsp+38h] [rbp-41h] BYREF
  _BYTE v8[40]; // [rsp+48h] [rbp-31h] BYREF
  char v9; // [rsp+70h] [rbp-9h] BYREF
  char v10; // [rsp+90h] [rbp+17h] BYREF
  GUID v11; // [rsp+B0h] [rbp+37h] BYREF

  v6 = 0;
  *(_OWORD *)v7 = 0LL;
  v11 = GUID_00000000_0000_0000_0000_000000000000;
  v1 = lambda_b04dcad4e52f0d96382020bfb06775ad_::_lambda_b04dcad4e52f0d96382020bfb06775ad_(
         (unsigned int)&v9,
         (_DWORD)this,
         (unsigned int)v7,
         (unsigned int)&v11,
         (__int64)&v6);
  wil::scope_exit__lambda_b04dcad4e52f0d96382020bfb06775ad___(v8, v1);
  v3 = lambda_b04dcad4e52f0d96382020bfb06775ad_::_lambda_b04dcad4e52f0d96382020bfb06775ad_(
         (unsigned int)&v10,
         v2,
         (unsigned int)&v6,
         (unsigned int)&v11,
         (__int64)v7);
  v4 = lambda_9690ae725cbb2a29975841b6bdf2d8b3_::operator()(v3);
  v6 = v4;
  wil::details::lambda_call__lambda_1c51ba029875d16c5c5a23cee02b4c3a___::_lambda_call__lambda_1c51ba029875d16c5c5a23cee02b4c3a___(v8);
  if ( v7[1] )
    std::_Ref_count_base::_Decref(v7[1]);
  return v4;
}
