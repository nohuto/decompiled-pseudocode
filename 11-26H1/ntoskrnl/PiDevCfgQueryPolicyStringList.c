/*
 * XREFs of PiDevCfgQueryPolicyStringList @ 0x1407ADA4C
 * Callers:
 *     PiDevCfgEnforceDevicePolicy @ 0x140B1D234 (PiDevCfgEnforceDevicePolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCchCopyExW @ 0x140454380 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     PnpValidateRegistryString @ 0x1404E6600 (PnpValidateRegistryString.c)
 *     PnpValidateRegistryDword @ 0x1404F64F8 (PnpValidateRegistryDword.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwEnumerateValueKey @ 0x140728220 (ZwEnumerateValueKey.c)
 *     NtQueryKey @ 0x140924BC0 (NtQueryKey.c)
 *     IopOpenRegistryKeyEx @ 0x1409DC0A0 (IopOpenRegistryKeyEx.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryPolicyStringList(void *a1, const WCHAR *a2, _QWORD *a3)
{
  ULONG v3; // r12d
  int v4; // edi
  void *v5; // r15
  NTSTATUS RegistryValue; // ebx
  unsigned int *v9; // rcx
  int v10; // ebx
  unsigned int *Pool2; // rsi
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // r14d
  unsigned int v15; // r13d
  NTSTATUS v16; // eax
  unsigned int v17; // r14d
  ULONG v19; // [rsp+30h] [rbp-39h]
  ULONG ResultLength; // [rsp+38h] [rbp-31h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-21h] BYREF
  _QWORD *v23; // [rsp+58h] [rbp-11h]
  __int128 KeyInformation; // [rsp+60h] [rbp-9h] BYREF
  __int128 v25; // [rsp+70h] [rbp+7h]
  __int64 v26; // [rsp+80h] [rbp+17h]

  v3 = 0;
  v23 = a3;
  KeyHandle = 0LL;
  v26 = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  v4 = 0;
  v5 = 0LL;
  KeyInformation = 0LL;
  v25 = 0LL;
  RegistryValue = IopGetRegistryValue(a1);
  if ( RegistryValue < 0 )
  {
    Pool2 = 0LL;
LABEL_35:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    goto LABEL_37;
  }
  if ( PnpValidateRegistryDword(0LL) )
    v4 = *(unsigned int *)((char *)v9 + v9[2]);
  ExFreePoolWithTag(v9, 0);
  if ( v4 != 1 )
    goto LABEL_5;
  RtlInitUnicodeString(&DestinationString, a2);
  RegistryValue = IopOpenRegistryKeyEx(&KeyHandle, a1, &DestinationString, 131097LL);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = NtQueryKey(KeyHandle, KeyCachedInformation, &KeyInformation, 0x28u, &ResultLength);
    if ( RegistryValue >= 0 )
    {
      if ( !DWORD1(v25) )
      {
LABEL_5:
        RegistryValue = -1073741275;
        goto LABEL_37;
      }
      v10 = HIDWORD(v25) + 2 * (DWORD2(v25) + 12);
      v19 = v10;
      Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        goto LABEL_10;
      v12 = DWORD1(v25) * HIDWORD(v25) + 2;
      while ( 2 )
      {
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        v5 = (void *)ExAllocatePool2(0x100uLL);
        if ( v5 )
        {
          v13 = v12 >> 1;
          v14 = 0;
          v15 = 0;
          while ( 1 )
          {
            v16 = ZwEnumerateValueKey(KeyHandle, v3, KeyValueFullInformation, Pool2, v10, &ResultLength);
            RegistryValue = v16;
            if ( v16 == -2147483622 )
              break;
            if ( v16 == -2147483643 )
            {
              ExFreePoolWithTag(Pool2, 0);
              v10 = ResultLength;
              v19 = ResultLength;
              Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL);
              if ( !Pool2 )
              {
                RegistryValue = -1073741670;
LABEL_33:
                ExFreePoolWithTag(v5, 0);
                goto LABEL_35;
              }
              --v3;
            }
            else
            {
              if ( v16 < 0 )
                goto LABEL_33;
              if ( PnpValidateRegistryString(Pool2) )
              {
                RegistryValue = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)((char *)Pool2 + Pool2[2]));
                if ( RegistryValue < 0 )
                  goto LABEL_33;
                v14 += DestinationString.MaximumLength >> 1;
                if ( v13 > v14 )
                {
                  RtlStringCchCopyExW((NTSTRSAFE_PWSTR)v5 + v15, v13 - v15, DestinationString.Buffer, 0LL, 0LL, 0x900u);
                  v15 += DestinationString.MaximumLength >> 1;
                }
              }
              v10 = v19;
            }
            ++v3;
          }
          v3 = 0;
          RegistryValue = 0;
          if ( !v14 )
          {
            RegistryValue = -1073741275;
            goto LABEL_33;
          }
          v17 = v14 + 1;
          if ( v13 < v17 )
          {
            v10 = v19;
            v12 = 2 * v17;
            continue;
          }
          *((_WORD *)v5 + v15) = 0;
          *v23 = v5;
        }
        else
        {
LABEL_10:
          RegistryValue = -1073741670;
        }
        goto LABEL_35;
      }
    }
  }
LABEL_37:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)RegistryValue;
}
