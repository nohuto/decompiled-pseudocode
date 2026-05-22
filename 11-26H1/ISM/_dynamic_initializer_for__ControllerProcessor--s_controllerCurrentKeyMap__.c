/*
 * XREFs of _dynamic_initializer_for__ControllerProcessor::s_controllerCurrentKeyMap__ @ 0x18000A1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@1@AEBV?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@1@@Z @ 0x18004DE90 (--0-$_Hash@V-$_Umap_traits@W4GameInputGamepadButtons@@GV-$_Uhash_compare@W4GameInputGamepadButto.c)
 */

int __fastcall dynamic_initializer_for__ControllerProcessor::s_controllerCurrentKeyMap__(__int64 a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>(
    a1,
    &v2);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__ControllerProcessor::s_controllerCurrentKeyMap__);
}
