/*
 * XREFs of HUBDSM_GettingSerialNumberStringDescriptorWhileRenuemrating @ 0x140023020
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer @ 0x14002BB90 (HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_GettingSerialNumberStringDescriptorWhileRenuemrating(__int64 a1)
{
  HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
