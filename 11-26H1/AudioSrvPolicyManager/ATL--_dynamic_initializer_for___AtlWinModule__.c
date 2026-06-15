/*
 * XREFs of ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18002E730 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int ATL::_dynamic_initializer_for___AtlWinModule__()
{
  if ( (int)ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_180067EC8) < 0 )
    ATL::_AtlWinModule = 0;
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for___AtlWinModule__);
}
