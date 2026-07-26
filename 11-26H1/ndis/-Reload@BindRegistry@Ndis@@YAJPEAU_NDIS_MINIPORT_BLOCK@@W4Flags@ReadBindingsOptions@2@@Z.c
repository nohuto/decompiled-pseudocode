/*
 * XREFs of ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x140164210
 * Callers:
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1400BB184 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisHandleBindNotification @ 0x14013BCE4 (ndisHandleBindNotification.c)
 *     ndisPnpRefresh @ 0x14016B150 (ndisPnpRefresh.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x14014E098 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140157B40 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140158AB0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x140160770 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x140161FF0 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 *     ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x140162090 (-UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UND.c)
 *     ??0BindState@Ndis@@QEAA@XZ @ 0x1401642E0 (--0BindState@Ndis@@QEAA@XZ.c)
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x140168610 (--1BindStack@Ndis@@QEAA@XZ.c)
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140169C00 (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 */

__int64 __fastcall Ndis::BindRegistry::Reload(
        Ndis::BindRegistry *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        enum Ndis::ReadBindingsOptions::Flags a3)
{
  unsigned int v4; // ebp
  enum NetSetupSubkeyType v5; // r8d
  enum CallRunMode v7; // r8d
  Ndis::BindStack v8; // [rsp+20h] [rbp-78h] BYREF

  memset(&v8, 0, 32);
  v4 = (unsigned int)a2;
  Ndis::BindState::BindState(&v8.Miniport);
  v8.ChangeEpoch = 0;
  if ( *((_BYTE *)qword_14011F6E0 + 97)
    && !(unsigned int)ndisBuildBindings((const struct _GUID *)((char *)this + 4008), &v8)
    || Ndis::BindStack::ReadV2InterfaceBindings(&v8, (const struct _GUID *)((char *)this + 4008), v5) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 5144, 0LL);
    Ndis::BindRegistry::UpdateProtocols((__int64)this, (__int64)this + 5016, (__int64)&v8, v4);
    Ndis::BindRegistry::UpdateFilters((__int64)this, (unsigned int *)this + 1258, (__int64)&v8.Filters, v4);
    ++*((_DWORD *)this + 1278);
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)((char *)this + 5120));
    Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)((char *)this + 5120), RunSynchronous, 0);
    Ndis::Initmode::DisableIfNeeded(this, 0LL, v7);
    Ndis::BindStack::~BindStack(&v8);
    return 0LL;
  }
  else
  {
    Ndis::BindStack::~BindStack(&v8);
    return 3221225473LL;
  }
}
