/*
 * XREFs of ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C2B8
 * Callers:
 *     ?ndisFSetRestartAttributes@@YAHPEAXPEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@@Z @ 0x140064D50 (-ndisFSetRestartAttributes@@YAHPEAXPEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@@Z.c)
 *     _lambda_6b9a11642f9024760fce603cfec52f9a_::operator() @ 0x14009BE28 (_lambda_6b9a11642f9024760fce603cfec52f9a_--operator().c)
 *     ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140137280 (-ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1401379C0 (-MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z.c)
 *     ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140137EA0 (-UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1401572B0 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x140159690 (-UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?PauseMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x140159A50 (-PauseMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x140159E20 (-CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x14015A130 (-UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x14015A5C0 (-RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x14015A7E0 (-PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x14015AB80 (-UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14015AF20 (-ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x14015B690 (-ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x14015B8E0 (-CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckMissingModifyingFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x14015BC80 (-CheckMissingModifyingFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x140160EB0 (Ndis--BindRegistry--UpdateFiltersInner.c)
 *     Ndis::BindRegistry::RemoveBindingsInSpan @ 0x1401610C0 (Ndis--BindRegistry--RemoveBindingsInSpan.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x140161350 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140163ED0 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140164010 (-ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTE.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14017C1A0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ @ 0x14005A630 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ.c)
 */

void __fastcall ndisGetBindLinkNameForTracing(struct NDIS_BIND_FILTER_LINK *a1, struct _UNICODE_STRING *a2)
{
  struct _UNICODE_STRING *v2; // r12
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rax
  unsigned __int64 v6; // r8

  a2[1].MaximumLength = 128;
  v2 = a2 + 1;
  a2[1].Length = 0;
  a2[1].Buffer = &a2[2].Length;
  p = a1->BindDriver._p;
  v6 = *(_QWORD *)p->_t.Guid.Data4;
  RtlUnicodeStringPrintf(
    a2 + 1,
    L"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}-%04d",
    *(_QWORD *)&p->_t.Guid.Data1,
    (unsigned __int16)WORD2(*(_QWORD *)&p->_t.Guid.Data1),
    HIWORD(*(_QWORD *)&p->_t.Guid.Data1),
    (unsigned __int8)v6,
    BYTE1(v6),
    BYTE2(v6),
    BYTE3(v6),
    BYTE4(v6),
    BYTE5(v6),
    BYTE6(v6),
    HIBYTE(v6),
    a1->FilterIndex);
  *(_QWORD *)&a2->Length = a1->BindState.Miniport;
  a2->Buffer = &v2->Length;
}
