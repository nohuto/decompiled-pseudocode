/*
 * XREFs of Feature_MSRC99194_58219321__private_IsEnabledNoReportingNoInline @ 0x140082084
 * Callers:
 *     NtDxgkCreateNativeFenceInternal @ 0x140200CD8 (NtDxgkCreateNativeFenceInternal.c)
 * Callees:
 *     Feature_MSRC99194_58219321__private_IsEnabledFallback @ 0x140082068 (Feature_MSRC99194_58219321__private_IsEnabledFallback.c)
 */

__int64 Feature_MSRC99194_58219321__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_MSRC99194_58219321__private_featureState & 2) != 0 )
    return Feature_MSRC99194_58219321__private_featureState & 1;
  else
    return Feature_MSRC99194_58219321__private_IsEnabledFallback(
             (unsigned int)Feature_MSRC99194_58219321__private_featureState,
             0);
}
