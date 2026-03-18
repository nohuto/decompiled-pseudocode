/*
 * XREFs of HUBMISC_LogDescriptorValidationWarningForDevice @ 0x140031000
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x14001CDA0 (McTemplateK0ppqq_EtwWriteTransfer.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1400341F4 (HUBMISC_VerifierDbgBreak.c)
 */

void __fastcall HUBMISC_LogDescriptorValidationWarningForDevice(__int64 a1, ULONG a2)
{
  int v4; // [rsp+28h] [rbp-20h]

  if ( a1 )
  {
    if ( byte_140070D4A < 0 )
    {
      v4 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 200LL);
      McTemplateK0ppqq_EtwWriteTransfer(
        a1,
        &USBHUB3_ETW_EVENT_DESCRIPTOR_VALIDATION_WARNING,
        (const GUID *)(a1 + 1524),
        *(_QWORD *)(*(_QWORD *)a1 + 248LL),
        *(_QWORD *)(a1 + 24),
        v4,
        a2);
    }
    if ( (*(_DWORD *)(a1 + 2444) & 2) != 0 )
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierDescriptorValidationFailure", a1 + 512);
    RtlSetBit((PRTL_BITMAP)(a1 + 2600), a2);
  }
}
