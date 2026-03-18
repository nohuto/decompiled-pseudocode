/*
 * XREFs of NtGdiGetCertificateSizeByHandle @ 0x1400090B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x14000942C (-GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 *     SafelyCopyKernelModeDataToUserModeData_unsigned_long_ @ 0x14000A724 (SafelyCopyKernelModeDataToUserModeData_unsigned_long_.c)
 */

int __fastcall NtGdiGetCertificateSizeByHandle(void *a1, enum _DXGKMDT_CERTIFICATE_TYPE a2, __int64 a3)
{
  __int64 SessionState; // rax
  int result; // eax
  unsigned int v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  SessionState = W32GetSessionState(a1);
  result = COPM::GetCertificateSize(*(COPM **)(*(_QWORD *)(SessionState + 88) + 3728LL), a1, a2, &v8);
  if ( result >= 0 )
  {
    result = SafelyCopyKernelModeDataToUserModeData_unsigned_long_(a3, &v8);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
