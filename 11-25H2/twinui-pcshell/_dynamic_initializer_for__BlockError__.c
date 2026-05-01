/*
 * XREFs of _dynamic_initializer_for__BlockError__ @ 0x180220A70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Buy_nonzero@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x180029E88 (-_Buy_nonzero@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z.c)
 */

int dynamic_initializer_for__BlockError__()
{
  __int64 v0; // rcx

  std::vector<Windows::UI::Color>::_Buy_nonzero(&BlockError, 1uLL);
  v0 = BlockError;
  *(_DWORD *)BlockError = 0xFFFF;
  qword_18089A000 = v0 + 4;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__BlockError__);
}
