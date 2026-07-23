/*
 * XREFs of LdrpCodeAuthzInitialize @ 0x18002FA10
 * Callers:
 *     LdrpInitializeKernel32Functions @ 0x18007CC48 (LdrpInitializeKernel32Functions.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180026E60 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     LdrLoadDll @ 0x18002DF80 (LdrLoadDll.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     LdrUnloadDll @ 0x18003F930 (LdrUnloadDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     ZwQueryKey @ 0x18015F100 (ZwQueryKey.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 LdrpCodeAuthzInitialize()
{
  unsigned int v0; // ebx
  int v1; // esi
  unsigned __int16 Subsystem; // cx
  PVOID v3; // rdi
  unsigned int Length; // r14d
  wchar_t *Buffer; // r15
  char *v6; // r12
  size_t v7; // rax
  unsigned int v8; // r14d
  char *v9; // r12
  NTSTATUS v10; // edi
  NTSTATUS v12; // edi
  NTSTATUS v13; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  PVOID BaseAddress[2]; // [rsp+40h] [rbp-C0h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp-B0h] BYREF
  PVOID DllHandle; // [rsp+58h] [rbp-A8h] BYREF
  PVOID ProcedureAddress; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING CurrentUserKeyPath; // [rsp+68h] [rbp-98h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  __int128 KeyInformation; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v23; // [rsp+B8h] [rbp-48h]
  __int128 v24; // [rsp+C8h] [rbp-38h]
  _BYTE KeyValueInformation[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v26; // [rsp+E4h] [rbp-1Ch]
  int v27; // [rsp+E8h] [rbp-18h]
  unsigned int v28; // [rsp+ECh] [rbp-14h]
  PVOID *Callback; // [rsp+168h] [rbp+68h]

  v0 = 0;
  v1 = 0;
  DllHandle = 0LL;
  ProcedureAddress = 0LL;
  OutHeaders = 0LL;
  if ( !LdrpIsSecureProcess )
  {
    RtlImageNtHeaderEx(3u, NtCurrentPeb()->ImageBaseAddress, 0LL, &OutHeaders);
    Subsystem = OutHeaders->OptionalHeader.Subsystem;
    if ( Subsystem == 3 || Subsystem == 2 )
    {
      KeyHandle = 0LL;
      ResultLength = 0;
      if ( NtOpenKey(&KeyHandle, 3u, (POBJECT_ATTRIBUTES)&::ObjectAttributes) >= 0 )
      {
        v13 = NtQueryValueKey(
                KeyHandle,
                (PUNICODE_STRING)&stru_1801701A0,
                KeyValuePartialInformation,
                KeyValueInformation,
                0x50u,
                &ResultLength);
        NtClose(KeyHandle);
        if ( v13 >= 0 && v28 && v26 == 4 && v27 == 4 )
          return v0;
      }
      OutHeaders = 0LL;
      ResultLength = 0;
      KeyHandle = 0LL;
      KeyInformation = 0LL;
      v23 = 0LL;
      v24 = 0LL;
      if ( NtOpenKey((PHANDLE)&OutHeaders, 0x20019u, &stru_1801C47D8) >= 0 )
      {
        v12 = ZwQueryKey(OutHeaders, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
        NtClose(OutHeaders);
        if ( (int)(v12 + 0x80000000) < 0 || v12 == -2147483643 )
        {
          if ( DWORD1(v23) )
            v1 = 2;
        }
      }
      if ( NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_1801700B0) >= 0 )
      {
        if ( NtQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x50u,
               &ResultLength) >= 0
          && v26 == 4
          && v27 == 4
          && v28 > 1 )
        {
          v1 = 1;
        }
        NtClose(KeyHandle);
      }
      if ( v1 == 1
        || (CurrentUserKeyPath = 0LL,
            *(_OWORD *)BaseAddress = 0LL,
            memset(&ObjectAttributes, 0, 44),
            RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath) < 0) )
      {
LABEL_7:
        if ( v1 )
        {
          if ( v1 == 2 )
          {
            LdrpSaferIsDllAllowedRoutine = __ROR8__(
                                             (unsigned __int64)LdrpCodeAuthzCheckDllAllowedSrpV2 ^ MEMORY[0x7FFE0330],
                                             MEMORY[0x7FFE0330] & 0x3F);
            LdrpAdvapi32DllHandle = 0x180000000uLL;
          }
          else if ( LdrLoadDll(0LL, 0LL, (PUNICODE_STRING)&DllName, &DllHandle) < 0 )
          {
            return (unsigned int)-1073741515;
          }
          else
          {
            v3 = DllHandle;
            if ( LdrGetProcedureAddressForCaller(
                   DllHandle,
                   (PANSI_STRING)&ProcedureName,
                   0,
                   &ProcedureAddress,
                   0,
                   Callback) >= 0
              && ProcedureAddress )
            {
              LdrpAdvapi32DllHandle = (__int64)v3;
              LdrpSaferIsDllAllowedRoutine = __ROR8__(
                                               (unsigned __int64)ProcedureAddress ^ MEMORY[0x7FFE0330],
                                               MEMORY[0x7FFE0330] & 0x3F);
            }
            else
            {
              LdrUnloadDll(v3);
              return (unsigned int)-1073741511;
            }
          }
        }
        return v0;
      }
      Length = CurrentUserKeyPath.Length;
      Buffer = CurrentUserKeyPath.Buffer;
      if ( (unsigned int)CurrentUserKeyPath.Length + 120 > 0xFFFE
        || (WORD1(BaseAddress[0]) = CurrentUserKeyPath.Length + 120,
            (BaseAddress[1] = RtlAllocateHeap_0(
                                NtCurrentPeb()->ProcessHeap,
                                NtdllBaseTag + 1572864,
                                (unsigned __int16)(CurrentUserKeyPath.Length + 120))) == 0LL) )
      {
LABEL_31:
        if ( Buffer )
          RtlpSysVolFree(Buffer);
        goto LABEL_7;
      }
      if ( (_WORD)Length )
      {
        if ( Length + LOWORD(BaseAddress[0]) > WORD1(BaseAddress[0]) )
        {
LABEL_30:
          RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress[1]);
          goto LABEL_31;
        }
        v6 = (char *)BaseAddress[1] + 2 * ((unsigned __int64)LOWORD(BaseAddress[0]) >> 1);
        memmove(v6, Buffer, Length);
        LOWORD(BaseAddress[0]) += Length;
        if ( (unsigned int)LOWORD(BaseAddress[0]) + 1 < WORD1(BaseAddress[0]) )
          *(_WORD *)&v6[2 * ((unsigned __int64)Length >> 1)] = 0;
      }
      v7 = wcslen(L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers");
      if ( v7 <= 0x7FFE )
      {
        v8 = (unsigned __int16)(2 * v7);
        if ( v8 + LOWORD(BaseAddress[0]) <= WORD1(BaseAddress[0]) )
        {
          v9 = (char *)BaseAddress[1] + 2 * ((unsigned __int64)LOWORD(BaseAddress[0]) >> 1);
          memmove(v9, L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers", (unsigned __int16)(2 * v7));
          LOWORD(BaseAddress[0]) += v8;
          if ( (unsigned int)LOWORD(BaseAddress[0]) + 1 < WORD1(BaseAddress[0]) )
            *(_WORD *)&v9[2 * ((unsigned __int64)v8 >> 1)] = 0;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( NtOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
          {
            v10 = NtQueryValueKey(
                    KeyHandle,
                    (PUNICODE_STRING)&ValueName,
                    KeyValuePartialInformation,
                    KeyValueInformation,
                    0x50u,
                    &ResultLength);
            NtClose(KeyHandle);
            if ( v10 >= 0 && v26 == 4 && v27 == 4 && v28 > 1 )
              v1 = 1;
          }
        }
      }
      goto LABEL_30;
    }
  }
  return 0LL;
}
