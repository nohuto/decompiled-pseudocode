/*
 * XREFs of ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180007D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800AA844 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int ATL::_dynamic_initializer_for___AtlWinModule__()
{
  if ( (int)ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_1801D5838) < 0 )
  {
    ATL::CAtlBaseModule::m_bInitFailed = 1;
    ATL::_AtlWinModule = 0;
  }
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for___AtlWinModule__);
}
