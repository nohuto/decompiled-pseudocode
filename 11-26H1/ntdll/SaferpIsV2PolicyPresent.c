/*
 * XREFs of SaferpIsV2PolicyPresent @ 0x1800E2640
 * Callers:
 *     LdrpCodeAuthzCheckDllAllowedSrpV2 @ 0x1800E25F0 (LdrpCodeAuthzCheckDllAllowedSrpV2.c)
 * Callees:
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     NtOpenFile @ 0x18015F4A0 (NtOpenFile.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall SaferpIsV2PolicyPresent(_DWORD *a1)
{
  NTSTATUS v2; // ebx
  NTSTATUS v3; // eax
  HANDLE v4; // rcx
  ULONG ResultLength; // [rsp+38h] [rbp-39h] BYREF
  HANDLE FileHandle; // [rsp+40h] [rbp-31h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-29h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-21h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+68h] [rbp-9h] BYREF
  int v11; // [rsp+6Ch] [rbp-5h]
  int v12; // [rsp+70h] [rbp-1h]
  int v13; // [rsp+74h] [rbp+3h]

  *a1 = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  v2 = NtOpenKey(&KeyHandle, 0x20119u, (POBJECT_ATTRIBUTES)&stru_180170ED8);
  if ( v2 >= 0 )
  {
    v3 = NtQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&stru_180170F08,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x50u,
           &ResultLength);
    if ( v3 >= 0 )
    {
      if ( v11 == 4 && v12 == 4 )
        *a1 = v13 != 0;
      goto LABEL_8;
    }
    if ( v3 != -1073741431 )
    {
LABEL_8:
      if ( !*a1 )
      {
        FileHandle = 0LL;
        IoStatusBlock = 0LL;
        if ( NtOpenFile(&FileHandle, 0x100000u, (POBJECT_ATTRIBUTES)&stru_180171EB8, &IoStatusBlock, 7u, 0x4021u) >= 0 )
        {
          v4 = FileHandle;
          *a1 = 1;
          NtClose(v4);
        }
      }
      v2 = 0;
LABEL_12:
      dword_1801CA600 = *a1 != 0;
      goto LABEL_13;
    }
LABEL_7:
    *a1 = dword_1801CA600 != 0;
    goto LABEL_8;
  }
  if ( v2 == -1073741431 )
    goto LABEL_7;
  if ( v2 == -1073741772 )
    v2 = 0;
  if ( v2 >= 0 )
    goto LABEL_12;
LABEL_13:
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)v2;
}
