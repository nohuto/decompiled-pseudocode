/*
 * XREFs of GetCertificateLengthAndMonitorPDO @ 0x1401C956C
 * Callers:
 *     NtGdiGetCertificate @ 0x1401C9760 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1401C98B0 (NtGdiGetCertificateSize.c)
 * Callees:
 *     CallMonitor @ 0x140083470 (CallMonitor.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1401CE744 (DrvPVPGetFirstActiveMonitor.c)
 */

__int64 __fastcall GetCertificateLengthAndMonitorPDO(__int64 a1, __int64 a2, void *a3, PVOID *a4)
{
  __int64 result; // rax
  int v7; // edi
  PVOID Object[3]; // [rsp+30h] [rbp-18h] BYREF
  int InputBuffer; // [rsp+58h] [rbp+10h] BYREF

  InputBuffer = a2;
  Object[0] = 0LL;
  result = DrvPVPGetFirstActiveMonitor(a1, a2, Object);
  if ( (int)result >= 0 )
  {
    v7 = CallMonitor((PDEVICE_OBJECT)Object[0], 0x232483u, &InputBuffer, 4u, a3, 4u);
    if ( v7 >= 0 )
    {
      if ( a4 )
        *a4 = Object[0];
      else
        ObfDereferenceObject(Object[0]);
      return 0LL;
    }
    else
    {
      ObfDereferenceObject(Object[0]);
      return (unsigned int)v7;
    }
  }
  return result;
}
