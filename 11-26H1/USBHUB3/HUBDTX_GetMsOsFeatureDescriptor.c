/*
 * XREFs of HUBDTX_GetMsOsFeatureDescriptor @ 0x14002BA20
 * Callers:
 *     HUBDSM_GetMsOs20DescriptorSet @ 0x1400224C0 (HUBDSM_GetMsOs20DescriptorSet.c)
 *     HUBDSM_GettingMSOSContainerIdDescriptor @ 0x140022A00 (HUBDSM_GettingMSOSContainerIdDescriptor.c)
 *     HUBDSM_GettingMSOSContainerIdHeaderDescriptor @ 0x140022AA0 (HUBDSM_GettingMSOSContainerIdHeaderDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptor @ 0x140022BE0 (HUBDSM_GettingMSOSExtendedDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptorHeader @ 0x140022CE0 (HUBDSM_GettingMSOSExtendedDescriptorHeader.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptor @ 0x140022DA0 (HUBDSM_GettingMSOSExtendedPropertyDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader @ 0x140022E40 (HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader.c)
 * Callees:
 *     HUBMISC_ControlTransfer @ 0x14002EE1C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDTX_GetMsOsFeatureDescriptor(__int64 a1, char a2, __int64 a3, __int16 a4, __int64 a5, __int64 a6)
{
  *(_BYTE *)(a1 + 408) = a2 & 3 | 0xC0;
  *(_BYTE *)(a1 + 409) = *(_BYTE *)(a1 + 2060);
  *(_WORD *)(a1 + 410) = 0;
  *(_WORD *)(a1 + 412) = a4;
  *(_WORD *)(a1 + 414) = a6;
  return HUBMISC_ControlTransfer(
           *(_QWORD *)a1,
           *(_QWORD *)(a1 + 24),
           a1,
           (int)a1 + 256,
           (__int64)HUBDTX_ControlTransferComplete,
           a5,
           a6,
           1,
           *(_BYTE *)(a1 + 1520));
}
