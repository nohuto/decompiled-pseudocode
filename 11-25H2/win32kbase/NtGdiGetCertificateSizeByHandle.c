/*
 * XREFs of NtGdiGetCertificateSizeByHandle @ 0x140152B80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x140082B38 (-GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 *     SafelyCopyKernelModeDataToUserModeData_unsigned_long_ @ 0x1401C93F4 (SafelyCopyKernelModeDataToUserModeData_unsigned_long_.c)
 */

__int64 __fastcall NtGdiGetCertificateSizeByHandle(void *a1, enum _DXGKMDT_CERTIFICATE_TYPE a2, __int64 a3)
{
  __int64 SessionState; // rax
  __int64 result; // rax
  unsigned int v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  SessionState = W32GetSessionState(a1);
  result = COPM::GetCertificateSize(*(COPM **)(*(_QWORD *)(SessionState + 88) + 3648LL), a1, a2, &v8);
  if ( (int)result >= 0 )
  {
    result = SafelyCopyKernelModeDataToUserModeData_unsigned_long_(a3, &v8);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
