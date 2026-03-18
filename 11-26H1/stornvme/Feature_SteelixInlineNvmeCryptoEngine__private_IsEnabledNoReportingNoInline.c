/*
 * XREFs of Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline @ 0x140012230
 * Callers:
 *     SetPrpFromSrb @ 0x140003380 (SetPrpFromSrb.c)
 *     NVMeSplitIoCommand @ 0x14002015C (NVMeSplitIoCommand.c)
 *     NVMeSplitIoCommandCompletion @ 0x1400202F0 (NVMeSplitIoCommandCompletion.c)
 *     NVMeIceIoStart @ 0x1400272C4 (NVMeIceIoStart.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback @ 0x140012214 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback.c)
 */

__int64 Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_SteelixInlineNvmeCryptoEngine__private_featureState & 2) != 0 )
    return Feature_SteelixInlineNvmeCryptoEngine__private_featureState & 1;
  else
    return Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback(
             (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_featureState,
             0LL);
}
