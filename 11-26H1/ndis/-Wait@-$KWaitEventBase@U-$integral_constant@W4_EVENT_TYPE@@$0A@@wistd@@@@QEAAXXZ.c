/*
 * XREFs of ?Wait@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ @ 0x140138EA0
 * Callers:
 *     ?ndisStackExpansionAddProcessor@@YAXK@Z @ 0x1400C7E3C (-ndisStackExpansionAddProcessor@@YAXK@Z.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x140145760 (-ReferenceWdi@@YA_NXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140157B40 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1401666C0 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ??1BindEngine@Ndis@@QEAA@XZ @ 0x140169130 (--1BindEngine@Ndis@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::Wait(void *a1)
{
  return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
}
