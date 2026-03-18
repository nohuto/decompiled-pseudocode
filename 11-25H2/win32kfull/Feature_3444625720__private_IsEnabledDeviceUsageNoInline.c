/*
 * XREFs of Feature_3444625720__private_IsEnabledDeviceUsageNoInline @ 0x140272058
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 *     xxxSetWindowPosAndBand @ 0x140236EBC (xxxSetWindowPosAndBand.c)
 *     ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1402C9B7C (-xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     ?xxxInterceptSetWindowPos@WindowActions@@YAXPEAUtagSMWP@@@Z @ 0x1402D1FC8 (-xxxInterceptSetWindowPos@WindowActions@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     Feature_3444625720__private_IsEnabledFallback @ 0x140272090 (Feature_3444625720__private_IsEnabledFallback.c)
 */

__int64 Feature_3444625720__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_3444625720__private_featureState & 0x10) != 0 )
    return Feature_3444625720__private_featureState & 1;
  else
    return Feature_3444625720__private_IsEnabledFallback((unsigned int)Feature_3444625720__private_featureState, 3LL);
}
