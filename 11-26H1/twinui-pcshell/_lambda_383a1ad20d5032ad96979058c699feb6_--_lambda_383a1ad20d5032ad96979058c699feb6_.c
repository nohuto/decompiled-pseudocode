/*
 * XREFs of _lambda_383a1ad20d5032ad96979058c699feb6_::_lambda_383a1ad20d5032ad96979058c699feb6_ @ 0x1802DA37C
 * Callers:
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x1800D6AD4 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 *     ?RegisterForCompositionCapabilitiesChange@AcrylicPolicyManager@@AEAAJXZ @ 0x180108CDC (-RegisterForCompositionCapabilitiesChange@AcrylicPolicyManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall lambda_383a1ad20d5032ad96979058c699feb6_::_lambda_383a1ad20d5032ad96979058c699feb6_(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}
