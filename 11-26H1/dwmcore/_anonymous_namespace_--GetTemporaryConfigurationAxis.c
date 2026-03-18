/*
 * XREFs of _anonymous_namespace_::GetTemporaryConfigurationAxis @ 0x18013C4C4
 * Callers:
 *     CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_13_::_lambda_4___ @ 0x18013BD90 (CChainingHelper--RunForAllAxes__CChainingHelper--UpdateConfigurationIfDirty_--_13_--_lambda_4___.c)
 *     CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_10_::_lambda_3___ @ 0x18013BE08 (CChainingHelper--RunForAllAxes__CChainingHelper--UpdateConfigurationIfDirty_--_10_--_lambda_3___.c)
 *     CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_8_::_lambda_2___ @ 0x18028F2CC (CChainingHelper--RunForAllAxes__CChainingHelper--UpdateConfigurationIfDirty_--_8_--_lambda_2___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::GetTemporaryConfigurationAxis(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return 0LL;
  v1 = a1 - 1;
  if ( !v1 )
    return 1LL;
  if ( v1 == 1 )
    return 2LL;
  else
    return 0LL;
}
