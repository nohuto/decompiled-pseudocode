/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlComModule__ @ 0x18016CDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x1800880D0 (-Term@CAtlComModule@ATL@@QEAAXXZ.c)
 */

void ATL::_dynamic_atexit_destructor_for___AtlComModule__()
{
  ATL::CAtlComModule::Term((ATL::CAtlComModule *)&ATL::_AtlComModule);
  CVolumeControlBase::ReloadVolumeState((CVolumeControlBase *)&ATL::_AtlComModule);
}
