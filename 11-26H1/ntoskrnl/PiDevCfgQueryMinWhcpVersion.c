/*
 * XREFs of PiDevCfgQueryMinWhcpVersion @ 0x1407AD8E8
 * Callers:
 *     PiDevCfgReadDriverPolicy @ 0x1407ADD30 (PiDevCfgReadDriverPolicy.c)
 * Callees:
 *     PnpValidateRegistryString @ 0x1404E6600 (PnpValidateRegistryString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PiDevCfgParseVersionString @ 0x1407ACFE8 (PiDevCfgParseVersionString.c)
 *     IopOpenRegistryKeyEx @ 0x1409DC0A0 (IopOpenRegistryKeyEx.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryMinWhcpVersion(HANDLE a1)
{
  HANDLE v1; // rdi
  int RegistryValue; // eax
  unsigned int *v3; // rbx
  __int128 v5; // [rsp+20h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+20h] BYREF
  __int64 v7; // [rsp+60h] [rbp+30h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h]

  Handle = 0LL;
  P = 0LL;
  v7 = -1LL;
  v1 = a1;
  v5 = 0LL;
  if ( a1 )
  {
    Handle = a1;
  }
  else
  {
    LODWORD(v5) = 9699474;
    *((_QWORD *)&v5 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP\\DriverRestrictions";
    if ( (int)IopOpenRegistryKeyEx(&Handle, 0LL, &v5, 131097LL) < 0 )
      goto LABEL_11;
    a1 = Handle;
  }
  RegistryValue = IopGetRegistryValue(a1);
  v3 = (unsigned int *)P;
  if ( RegistryValue >= 0
    && PnpValidateRegistryString(P)
    && !PiDevCfgParseVersionString((const wchar_t *)((char *)v3 + v3[2]), 0, &v7) )
  {
    v7 = -1LL;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
LABEL_11:
  if ( Handle && Handle != v1 )
    ZwClose(Handle);
  return v7;
}
