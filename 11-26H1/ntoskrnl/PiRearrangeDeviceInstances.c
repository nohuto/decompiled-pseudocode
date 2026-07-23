/*
 * XREFs of PiRearrangeDeviceInstances @ 0x140AD2A0C
 * Callers:
 *     PiProcessDriverInstance @ 0x140AD2500 (PiProcessDriverInstance.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryKey @ 0x140728280 (ZwQueryKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140729BA0 (ZwDeleteValueKey.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiRearrangeDeviceInstances(HANDLE KeyHandle, int a2, int a3)
{
  signed __int64 v6; // rax
  PVOID v7; // rcx
  signed __int64 v8; // rax
  PVOID v9; // rbx
  __int64 v10; // [rsp+30h] [rbp-59h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-41h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-31h] BYREF
  PVOID P; // [rsp+60h] [rbp-29h] BYREF
  _OWORD KeyInformation[3]; // [rsp+68h] [rbp-21h] BYREF
  wchar_t pszDest[12]; // [rsp+98h] [rbp+Fh] BYREF

  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  ResultLength = 0;
  P = 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  ppszDestEnd = pszDest;
  RtlStringCchPrintfExW(pszDest, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", a2);
  v6 = ppszDestEnd - pszDest;
  ValueName.MaximumLength = 20;
  if ( (_DWORD)v6 == -1 )
    ValueName.Length = 20;
  else
    ValueName.Length = 2 * v6;
  ValueName.Buffer = pszDest;
  if ( IopGetRegistryValue(KeyHandle, pszDest, 0, &P) >= 0 )
  {
    ZwDeleteValueKey(KeyHandle, &ValueName);
    LODWORD(v10) = a3;
    ppszDestEnd = pszDest;
    RtlStringCchPrintfExW(pszDest, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", v10);
    ValueName.MaximumLength = 20;
    v8 = ppszDestEnd - pszDest;
    if ( (_DWORD)v8 == -1 )
      ValueName.Length = 20;
    else
      ValueName.Length = 2 * v8;
    v9 = P;
    ValueName.Buffer = pszDest;
    ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, (char *)P + *((unsigned int *)P + 2), *((_DWORD *)P + 3));
    ExFreePoolWithTag(v9, 0);
    v7 = 0LL;
  }
  else
  {
    v7 = P;
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
