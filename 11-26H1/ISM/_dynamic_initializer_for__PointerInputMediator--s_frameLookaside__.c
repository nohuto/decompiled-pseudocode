/*
 * XREFs of _dynamic_initializer_for__PointerInputMediator::s_frameLookaside__ @ 0x18000A270
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x1800880AC (--$_Alloc_proxy@V-$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV-$a.c)
 */

int dynamic_initializer_for__PointerInputMediator::s_frameLookaside__()
{
  std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>(&PointerInputMediator::s_frameLookaside);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__PointerInputMediator::s_frameLookaside__);
}
