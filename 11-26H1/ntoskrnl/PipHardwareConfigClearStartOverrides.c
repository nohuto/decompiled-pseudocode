/*
 * XREFs of PipHardwareConfigClearStartOverrides @ 0x14079E448
 * Callers:
 *     PipHardwareConfigInit @ 0x140CC7CBC (PipHardwareConfigInit.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PiOpenDriverRedirectedStateRootKey @ 0x1407A40EC (PiOpenDriverRedirectedStateRootKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140B226B8 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall PipHardwareConfigClearStartOverrides(__int64 a1)
{
  HANDLE v1; // rdi
  int v2; // ebp
  int v3; // eax
  NTSTATUS v4; // esi
  HANDLE v5; // rbx
  int CachedContextBaseKey; // eax
  HANDLE Handle; // [rsp+40h] [rbp-A8h] BYREF
  void *v9; // [rsp+48h] [rbp-A0h] BYREF
  wchar_t pszDest[64]; // [rsp+50h] [rbp-98h] BYREF

  v1 = 0LL;
  v9 = 0LL;
  v2 = a1;
  Handle = 0LL;
  v3 = PiOpenDriverRedirectedStateRootKey(a1, &Handle);
  if ( v3 == -1073741275 )
  {
    v4 = 0;
LABEL_3:
    v5 = Handle;
    goto LABEL_10;
  }
  if ( v3 >= 0 )
  {
    v5 = Handle;
  }
  else
  {
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD *)&PiPnpRtlCtx, 6LL, &v9);
    v1 = v9;
    v4 = CachedContextBaseKey;
    if ( CachedContextBaseKey < 0 )
      goto LABEL_3;
    v5 = v9;
  }
  v4 = RtlStringCchPrintfExW(pszDest, 0x40uLL, 0LL, 0LL, 0x800u, L"%d", v2);
  if ( v4 >= 0 )
    v4 = PnpCtxRegEnumKeyWithCallback(*(_QWORD *)&PiPnpRtlCtx, v5, PipHardwareConfigClearStartOverrideCallback, pszDest);
LABEL_10:
  if ( v5 && v5 != v1 )
    ZwClose(v5);
  return (unsigned int)v4;
}
