/*
 * XREFs of ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x14015BFA0
 * Callers:
 *     ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x14014B3E0 (-SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z @ 0x14015BF00 (-SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     _lambda_062918d3b118b4760965b8092450098c_::operator_void_(__cdecl_)(NDIS_BIND_LINK_BASE__) @ 0x14014B328 (_lambda_062918d3b118b4760965b8092450098c_--operator_void_(__cdecl_)(NDIS_BIND_LINK_BASE__).c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x14015C000 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x14015C390 (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 */

void __fastcall NDIS_BIND_DRIVER_BASE::SetRunningDriverIsReady(
        NDIS_BIND_DRIVER_BASE *this,
        bool a2,
        enum CallRunMode a3)
{
  void (*v5)(struct NDIS_BIND_LINK_BASE *); // rax
  NDIS_BIND_DRIVER_BASE *v6; // rcx
  void (*v7)(struct NDIS_BIND_LINK_BASE *); // rdx

  this->DriverReady = a2;
  _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
  v5 = (void (*)(struct NDIS_BIND_LINK_BASE *))lambda_062918d3b118b4760965b8092450098c_::operator_void____cdecl___NDIS_BIND_LINK_BASE___();
  NDIS_BIND_DRIVER_BASE::ForEachLink(v6, v5);
  v7 = (void (*)(struct NDIS_BIND_LINK_BASE *))lambda_b246ce06b62e0fe260ebdade75b833fa_::_lambda_invoker_cdecl_;
  if ( a3 )
    v7 = (void (*)(struct NDIS_BIND_LINK_BASE *))lambda_f04dbbba9fe6a1cf15f4fb42f8ba953a_::_lambda_invoker_cdecl_;
  NDIS_BIND_DRIVER_BASE::ForEachLink(this, v7);
  Ndis::BindEngine::EndBindOperation();
}
