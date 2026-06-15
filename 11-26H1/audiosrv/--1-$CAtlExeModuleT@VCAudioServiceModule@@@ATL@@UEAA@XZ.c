/*
 * XREFs of ??1?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@UEAA@XZ @ 0x1800D72D8
 * Callers:
 *     ??_GCAudioServiceModule@@UEAAPEAXI@Z @ 0x1800D7980 (--_GCAudioServiceModule@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x1800880D0 (-Term@CAtlComModule@ATL@@QEAAXXZ.c)
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x1800D834C (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 *     ?Term@CAtlModule@ATL@@QEAAXXZ @ 0x1800DA938 (-Term@CAtlModule@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CAtlExeModuleT<CAudioServiceModule>::~CAtlExeModuleT<CAudioServiceModule>(ATL::CAtlModule *this)
{
  ATL::CAtlComModule::ExecuteObjectMain(this, 0);
  ATL::CAtlModule::Term(this);
  ATL::CAtlComModule::Term((ATL::CAtlComModule *)&ATL::_AtlComModule);
  ATL::CAtlModule::Term(this);
}
