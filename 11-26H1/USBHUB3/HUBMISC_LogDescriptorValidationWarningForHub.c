/*
 * XREFs of HUBMISC_LogDescriptorValidationWarningForHub @ 0x1400310A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x14001CDA0 (McTemplateK0ppqq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall HUBMISC_LogDescriptorValidationWarningForHub(__int64 a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    if ( byte_140070D4A < 0 )
      return McTemplateK0ppqq_EtwWriteTransfer(a1, &USBHUB3_ETW_EVENT_DESCRIPTOR_VALIDATION_WARNING, 0LL);
  }
  return result;
}
