/*
 * XREFs of Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline @ 0x14027714C
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401B2F08 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1401D2B2C (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x140247CC0 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     ?SetDebugHotKeys@@YAXXZ @ 0x140275EA0 (-SetDebugHotKeys@@YAXXZ.c)
 * Callees:
 *     Feature_ReserveSystemKeyCombination__private_IsEnabledFallback @ 0x140277184 (Feature_ReserveSystemKeyCombination__private_IsEnabledFallback.c)
 */

__int64 Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ReserveSystemKeyCombination__private_featureState & 0x10) != 0 )
    return Feature_ReserveSystemKeyCombination__private_featureState & 1;
  else
    return Feature_ReserveSystemKeyCombination__private_IsEnabledFallback(
             (unsigned int)Feature_ReserveSystemKeyCombination__private_featureState,
             3LL);
}
