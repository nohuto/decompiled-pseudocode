/*
 * XREFs of Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline @ 0x1402750BC
 * Callers:
 *     xxxProcessHidInput @ 0x1400388A0 (xxxProcessHidInput.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x14011C948 (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x14011CC7C (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     AllocateHidData @ 0x140120CE4 (AllocateHidData.c)
 *     EditionPostRawMouseInputMessage @ 0x1402386D0 (EditionPostRawMouseInputMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     Feature_FixMisdeliveredRawInput__private_IsEnabledFallback @ 0x1402750F4 (Feature_FixMisdeliveredRawInput__private_IsEnabledFallback.c)
 */

__int64 Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixMisdeliveredRawInput__private_featureState & 0x10) != 0 )
    return Feature_FixMisdeliveredRawInput__private_featureState & 1;
  else
    return Feature_FixMisdeliveredRawInput__private_IsEnabledFallback(
             (unsigned int)Feature_FixMisdeliveredRawInput__private_featureState,
             3LL);
}
