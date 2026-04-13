/*
 * XREFs of ??0?$ComPtr@VContentManagementService@ContentManagement@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x18004AED4
 * Callers:
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_42fbd5d3fb16a796ab83ae5a767075fb___ @ 0x180047DD4 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_42fbd5d3fb16a796ab83ae5a7.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_822b4fd04ca4bb1472820328fff37fc1___ @ 0x180047E74 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_822b4fd04ca4bb1472820328f.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_986e623d0ce256a5f32fdc507965e6c2___ @ 0x180047F14 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_986e623d0ce256a5f32fdc507.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_9a39556507fda819c9b6a4dbd5757ff2___ @ 0x180047FC4 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_9a39556507fda819c9b6a4dbd.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_c97e64c4f30df1a9790a17330dc1441c___ @ 0x180048064 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_c97e64c4f30df1a9790a17330.c)
 *     _lambda_cdeb3b86346b203bd3e87afbcbd1e510_::_lambda_cdeb3b86346b203bd3e87afbcbd1e510_ @ 0x180049EF0 (_lambda_cdeb3b86346b203bd3e87afbcbd1e510_--_lambda_cdeb3b86346b203bd3e87afbcbd1e510_.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<ContentManagement::ContentManagementService>::ComPtr<ContentManagement::ContentManagementService>(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = 0LL;
  if ( a1 != a2 )
  {
    *a1 = *a2;
    *a2 = 0LL;
  }
  return a1;
}
