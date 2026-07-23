/*
 * XREFs of PiDevCfgMakeServiceBootStart @ 0x1407ACBF0
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140A43BF0 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PnpValidateStringData @ 0x1404E663C (PnpValidateStringData.c)
 *     PnpValidateRegistryDword @ 0x1404F64F8 (PnpValidateRegistryDword.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     PipOpenServiceEnumKeys @ 0x140A114F8 (PipOpenServiceEnumKeys.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 *     PnpRegSzToString @ 0x140ADB15C (PnpRegSzToString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgMakeServiceBootStart(PCWSTR SourceString)
{
  NTSTATUS RegistryValue; // ebx
  char *v2; // rdi
  void *v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int16 v7; // ax
  char *v8; // rbx
  char Data; // [rsp+20h] [rbp-40h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING v12; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+50h] [rbp-10h] BYREF
  int v14; // [rsp+98h] [rbp+38h] BYREF
  PVOID P; // [rsp+A0h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+48h] BYREF

  v14 = 4;
  KeyHandle = 0LL;
  P = 0LL;
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  *(_QWORD *)&v12.Length = 0LL;
  DestinationString = 0LL;
  v12.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  Data = 0;
  RegistryValue = PipOpenServiceEnumKeys(&DestinationString, 131103LL, &KeyHandle, 0LL, Data);
  if ( RegistryValue < 0 )
    goto LABEL_18;
  RegistryValue = IopGetRegistryValue(KeyHandle);
  if ( RegistryValue < 0 )
    goto LABEL_15;
  v2 = (char *)P;
  if ( !PnpValidateRegistryDword((__int64)P) )
  {
LABEL_4:
    RegistryValue = -1073741823;
    goto LABEL_16;
  }
  v14 = *(_DWORD *)&v2[*((unsigned int *)v2 + 2)];
  ExFreePoolWithTag(v3, 0);
  P = 0LL;
  if ( (v14 & 0xFFFFFFFB) == 0 )
    goto LABEL_18;
  RegistryValue = IopGetRegistryValue(KeyHandle);
  if ( RegistryValue < 0 )
  {
LABEL_15:
    v2 = (char *)P;
  }
  else
  {
    v2 = (char *)P;
    v4 = *((_DWORD *)P + 1);
    if ( v4 != 1 && v4 != 2 || !PnpValidateStringData((__int64)P + *((unsigned int *)P + 2), *((_DWORD *)P + 3)) )
      goto LABEL_4;
    LODWORD(P) = 0;
    PnpRegSzToString(v6, v5, &P);
    v7 = *((_WORD *)v2 + 6);
    v8 = &v2[*((unsigned int *)v2 + 2)];
    String2.Length = (unsigned __int16)P;
    String2.Buffer = (wchar_t *)v8;
    String2.MaximumLength = v7;
    if ( RtlPrefixUnicodeString(&PiDevCfgSystemRoot, &String2, 1u) )
    {
      RtlInitUnicodeString(&v12, (PCWSTR)v8 + 12);
      *(_DWORD *)&DestinationString.Length = 1310738;
      DestinationString.Buffer = L"ImagePath";
      RegistryValue = ZwSetValueKey(KeyHandle, &DestinationString, 0, *((_DWORD *)v2 + 1), v12.Buffer, v12.Length + 2);
      if ( RegistryValue < 0 )
        goto LABEL_16;
    }
    else if ( !RtlPrefixUnicodeString(&PiDevCfgSystem32, &String2, 1u) )
    {
      goto LABEL_4;
    }
    *(_DWORD *)&DestinationString.Length = 786442;
    DestinationString.Buffer = L"Start";
    v14 = 0;
    RegistryValue = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v14, 4u);
  }
LABEL_16:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
LABEL_18:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)RegistryValue;
}
