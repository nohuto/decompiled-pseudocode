/*
 * XREFs of ApplyGatheredKeyboardDeviceCount @ 0x14013E670
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x14013E9E8 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     ?ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z @ 0x140217770 (-ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z.c)
 */

void __fastcall ApplyGatheredKeyboardDeviceCount(unsigned int a1)
{
  CKeyboardProcessor *KeyboardProcessor; // rax

  KeyboardProcessor = (CKeyboardProcessor *)anonymous_namespace_::GetKeyboardProcessor();
  if ( KeyboardProcessor )
    CKeyboardProcessor::ApplyGatheredKeyboardDeviceCount(KeyboardProcessor, a1);
}
