/*
 * XREFs of IsDeallocateSupported @ 0x1400015C0
 * Callers:
 *     FormInquiryBlockLimitsData @ 0x140001010 (FormInquiryBlockLimitsData.c)
 *     FormInquiryBlockProvisioningData @ 0x14001AA78 (FormInquiryBlockProvisioningData.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDeallocateSupported(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 1) == 0
      && ((*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 520LL) & 4) != 0 || *(_BYTE *)(a1 + 4075));
}
