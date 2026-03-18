/*
 * XREFs of VidSchReportHwQueue @ 0x140122E20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003EE84 (McTemplateK0ppp_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall VidSchReportHwQueue(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r9
  NTSTATUS result; // eax

  if ( bTracingEnabled && !*(_QWORD *)(a1 + 48) )
  {
    v1 = *(_QWORD *)(a1 + 40);
    v2 = *(_QWORD *)(v1 + 24);
    if ( !v2 || (result = *(_DWORD *)(v1 + 56), (result & 0x40) != 0) )
      v2 = *(_QWORD *)(a1 + 40);
    if ( (byte_14008A201 & 8) != 0 )
      return McTemplateK0ppp_EtwWriteTransfer(a1, &EventReportHwQueue, 0LL, v2, 0LL, a1);
  }
  return result;
}
