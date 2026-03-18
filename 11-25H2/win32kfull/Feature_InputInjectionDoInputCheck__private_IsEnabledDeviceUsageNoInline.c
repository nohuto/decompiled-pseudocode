/*
 * XREFs of Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline @ 0x1402770A4
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x140237B0C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInjectTouchInput @ 0x14023D0FC (xxxInjectTouchInput.c)
 *     EditionIsRIMInjectionBlocked @ 0x140243D30 (EditionIsRIMInjectionBlocked.c)
 *     ?xxxInternalKeyEventDirect@@YA_NEGKK_K@Z @ 0x14027603C (-xxxInternalKeyEventDirect@@YA_NEGKK_K@Z.c)
 *     ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x140276408 (-xxxSendInput@@YAIIPEAUtagINPUT@@@Z.c)
 * Callees:
 *     Feature_InputInjectionDoInputCheck__private_IsEnabledFallback @ 0x1402770DC (Feature_InputInjectionDoInputCheck__private_IsEnabledFallback.c)
 */

__int64 Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_InputInjectionDoInputCheck__private_featureState & 0x10) != 0 )
    return Feature_InputInjectionDoInputCheck__private_featureState & 1;
  else
    return Feature_InputInjectionDoInputCheck__private_IsEnabledFallback(
             (unsigned int)Feature_InputInjectionDoInputCheck__private_featureState,
             3LL);
}
