/*
 * XREFs of ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x140161490
 * Callers:
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x140161350 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x140161680 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 *     ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1401622F0 (--$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@A.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_BIND_LINK_BASE::LinkToDriver(NDIS_BIND_LINK_BASE *this, struct NDIS_BIND_DRIVER_BASE *a2)
{
  __int64 v2; // rsi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *p_BindLinks; // rax
  _LIST_ENTRY *p_DriverLinkage; // rbx

  v2 = qword_14011F6D8;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2 + 8, 0LL);
  Flink = a2->BindLinks.Flink;
  p_BindLinks = &a2->BindLinks;
  p_DriverLinkage = &this->DriverLinkage;
  if ( Flink->Blink != &a2->BindLinks )
    __fastfail(3u);
  p_DriverLinkage->Flink = Flink;
  p_DriverLinkage->Blink = p_BindLinks;
  Flink->Blink = p_DriverLinkage;
  p_BindLinks->Flink = p_DriverLinkage;
  ExReleasePushLockExclusiveEx(v2 + 8, 0LL);
  KeLeaveCriticalRegion();
}
