/*
 * XREFs of RtlpQueryRegistryValues @ 0x1800440A0
 * Callers:
 *     RtlQueryRegistryValuesEx @ 0x180043E90 (RtlQueryRegistryValuesEx.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1800FBDC0 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlpFindRegTziForCurrentYear @ 0x1800FFCFC (RtlpFindRegTziForCurrentYear.c)
 *     RtlCheckPortableOperatingSystem @ 0x180100830 (RtlCheckPortableOperatingSystem.c)
 *     RtlQueryRegistryValues @ 0x18010CFE0 (RtlQueryRegistryValues.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x180148684 (RtlpEtcGetDwordFromRegistry.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpCallQueryRegistryRoutine @ 0x1800447EC (RtlpCallQueryRegistryRoutine.c)
 *     RtlpGetRegistryHandle @ 0x180044C38 (RtlpGetRegistryHandle.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x18015F0A0 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 *     ZwDeleteValueKey @ 0x180160A10 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpQueryRegistryValues(
        __int64 a1,
        const wchar_t *a2,
        __int64 a3,
        __int64 a4,
        PVOID Environment,
        char a6)
{
  __int64 v6; // r15
  int v9; // r13d
  __int64 result; // rax
  size_t v11; // rax
  NTSTATUS v12; // edi
  char *v13; // rsi
  HANDLE v14; // r8
  HANDLE v15; // r10
  ULONG v16; // r12d
  int v17; // edx
  int v18; // eax
  const wchar_t *v19; // rcx
  int v20; // r15d
  ULONG i; // r14d
  NTSTATUS v22; // eax
  int v23; // eax
  int v24; // r14d
  size_t v25; // rax
  int v26; // eax
  NTSTATUS v27; // eax
  size_t v28; // rax
  int v29; // eax
  ULONG ResultLength; // [rsp+40h] [rbp-99h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-91h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-81h] BYREF
  __int64 v34; // [rsp+60h] [rbp-79h] BYREF
  const wchar_t *v35; // [rsp+68h] [rbp-71h]
  _UNICODE_STRING ValueName; // [rsp+70h] [rbp-69h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp-59h] BYREF
  PVOID v38; // [rsp+88h] [rbp-51h] BYREF
  PVOID v39; // [rsp+90h] [rbp-49h] BYREF
  PVOID v40; // [rsp+98h] [rbp-41h] BYREF
  ULONG_PTR v41; // [rsp+A0h] [rbp-39h] BYREF
  PVOID v42; // [rsp+A8h] [rbp-31h] BYREF
  ULONG_PTR v43; // [rsp+B0h] [rbp-29h] BYREF
  PVOID v44; // [rsp+B8h] [rbp-21h] BYREF
  ULONG_PTR v45; // [rsp+C0h] [rbp-19h] BYREF
  PVOID v46; // [rsp+C8h] [rbp-11h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-9h] BYREF

  v6 = a4;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  ResultLength = 0;
  v9 = a1;
  ValueName = 0LL;
  result = RtlpGetRegistryHandle(a1, a2, 0LL, &KeyHandle);
  if ( (int)result < 0 )
    return result;
  v34 = 0LL;
  if ( (v9 & 0x40000000) != 0 )
  {
    v35 = 0LL;
  }
  else
  {
    v35 = a2;
    if ( a2 )
    {
      v11 = 2 * wcslen(a2);
      if ( v11 >= 0xFFFE )
        LOWORD(v11) = -4;
      LOWORD(v34) = v11;
      WORD1(v34) = v11 + 2;
    }
  }
  RegionSize = 4096LL;
  BaseAddress = 0LL;
  v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  if ( v12 >= 0 )
  {
    v13 = (char *)BaseAddress;
  }
  else
  {
    v13 = 0LL;
    BaseAddress = 0LL;
  }
  if ( !v13 )
  {
    if ( (v9 & 0x40000000) == 0 )
      NtClose(KeyHandle);
    return (unsigned int)v12;
  }
  *((_DWORD *)v13 + 2) = 0;
  v14 = KeyHandle;
  v15 = KeyHandle;
  v16 = RegionSize - 2;
  Handle = KeyHandle;
LABEL_12:
  while ( 2 )
  {
    if ( !*(_QWORD *)a3 && (*(_BYTE *)(a3 + 8) & 0x21) == 0 )
      goto LABEL_42;
    v17 = *(_DWORD *)(a3 + 8);
    if ( (v17 & 0x20) != 0 && (!*(_QWORD *)(a3 + 16) || (v17 & 1) != 0 || *(_QWORD *)a3) )
    {
LABEL_70:
      v12 = -1073741811;
      goto LABEL_42;
    }
    if ( (v17 & 3) != 0 && v15 != v14 )
    {
      NtClose(v15);
      v14 = KeyHandle;
      v15 = KeyHandle;
      Handle = KeyHandle;
    }
    v18 = *(_DWORD *)(a3 + 8);
    v19 = *(const wchar_t **)(a3 + 16);
    if ( (v18 & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_70;
      v35 = *(const wchar_t **)(a3 + 16);
      v34 = 0LL;
      v28 = 2 * wcslen(v19);
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      if ( v28 >= 0xFFFE )
        LOWORD(v28) = -4;
      LOWORD(v34) = v28;
      WORD1(v34) = v28 + 2;
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v34;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v12 = NtOpenKey(&Handle, 0x2000000u, &ObjectAttributes);
      if ( v12 < 0 )
        goto LABEL_63;
      if ( !*(_QWORD *)a3 )
      {
LABEL_64:
        v14 = KeyHandle;
        a3 += 56LL;
        v15 = Handle;
        continue;
      }
      v15 = Handle;
      goto LABEL_18;
    }
    break;
  }
  if ( v19 )
  {
    v24 = 0;
    ValueName.Buffer = *(wchar_t **)(a3 + 16);
    *(_QWORD *)&ValueName.Length = 0LL;
    v25 = 2 * wcslen(v19);
    if ( v25 >= 0xFFFE )
      LOWORD(v25) = -4;
    ValueName.Length = v25;
    ValueName.MaximumLength = v25 + 2;
    while ( 1 )
    {
      v26 = v24++;
      if ( v26 > 4 )
      {
        DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1459);
        goto LABEL_41;
      }
      v27 = NtQueryValueKey(Handle, &ValueName, KeyValueFullInformation, v13, v16, &ResultLength);
      v12 = v27;
      if ( v27 == -2147483643 )
        goto LABEL_32;
      if ( v27 < 0 )
        break;
      if ( *((_DWORD *)v13 + 1) == 7 )
      {
        *(_WORD *)&v13[ResultLength] = 0;
        *((_DWORD *)v13 + 3) += 2;
      }
      ResultLength = v16;
      v29 = RtlpCallQueryRegistryRoutine((int)Handle, a3, (int)v13, (int)&ResultLength, v6, Environment, a6);
      v12 = v29;
      if ( v29 != -1073741789 )
      {
        if ( v29 < 0 )
          goto LABEL_41;
        if ( (*(_BYTE *)(a3 + 8) & 0x40) == 0 )
          goto LABEL_64;
        ZwDeleteValueKey(Handle, &ValueName);
        v14 = KeyHandle;
        a3 += 56LL;
        v15 = Handle;
        goto LABEL_12;
      }
      v44 = v13;
      RegionSize = ResultLength + 10LL;
      v43 = RegionSize;
      v38 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v44, &v43, 0x8000u);
      v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v38, 0LL, &RegionSize, 0x1000u, 4u);
      if ( v12 >= 0 )
      {
        v13 = (char *)v38;
      }
      else
      {
        v13 = 0LL;
        v38 = 0LL;
      }
LABEL_36:
      if ( !v13 )
        goto LABEL_41;
      *((_DWORD *)v13 + 2) = 0;
      v16 = RegionSize - 2;
    }
    if ( v27 == -1073741772 )
    {
      *((_DWORD *)v13 + 1) = 0;
      *((_DWORD *)v13 + 3) = 0;
      ResultLength = v16;
      v27 = RtlpCallQueryRegistryRoutine((int)Handle, a3, (int)v13, (int)&ResultLength, v6, Environment, a6);
      v12 = v27;
    }
    if ( v27 != -1073741789 )
      goto LABEL_63;
LABEL_32:
    v46 = v13;
    RegionSize = ResultLength + 10LL;
    v45 = RegionSize;
    v39 = 0LL;
    if ( v13 )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v46, &v45, 0x8000u);
    v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v39, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v12 >= 0 )
    {
      v13 = (char *)v39;
    }
    else
    {
      v13 = 0LL;
      v39 = 0LL;
    }
    goto LABEL_36;
  }
  if ( (v18 & 8) != 0 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _QWORD))a3)(
            0LL,
            0LL,
            0LL,
            0LL,
            v6,
            *(_QWORD *)(a3 + 24));
    goto LABEL_63;
  }
LABEL_18:
  v20 = 0;
  for ( i = 0; ; ++i )
  {
    v22 = ZwEnumerateValueKey(v15, i, KeyValueFullInformation, v13, v16, &ResultLength);
    v12 = v22;
    if ( v22 == -2147483643 )
      goto LABEL_20;
    if ( v22 == -2147483622 )
      break;
    if ( v22 >= 0 )
    {
      ResultLength = v16;
      v22 = RtlpCallQueryRegistryRoutine((int)Handle, a3, (int)v13, (int)&ResultLength, a4, Environment, a6);
      v12 = v22;
    }
    if ( v22 != -1073741789 )
    {
      if ( v22 < 0 )
        goto LABEL_62;
      v20 = 0;
      if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
      {
        ValueName.Buffer = (wchar_t *)(v13 + 20);
        ValueName.Length = *((_WORD *)v13 + 8);
        ValueName.MaximumLength = *((_WORD *)v13 + 8);
        if ( ZwDeleteValueKey(Handle, &ValueName) >= 0 )
          --i;
      }
      goto LABEL_75;
    }
LABEL_20:
    v42 = v13;
    RegionSize = ResultLength + 10LL;
    v41 = RegionSize;
    v40 = 0LL;
    if ( v13 )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v42, &v41, 0x8000u);
    v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v40, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v12 >= 0 )
    {
      v13 = (char *)v40;
    }
    else
    {
      v13 = 0LL;
      v40 = 0LL;
    }
    if ( !v13 )
      goto LABEL_62;
    *((_DWORD *)v13 + 2) = 0;
    --i;
    v23 = v20;
    v16 = RegionSize - 2;
    ++v20;
    if ( v23 > 4 )
    {
      DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1646);
      goto LABEL_62;
    }
LABEL_75:
    v15 = Handle;
  }
  if ( i || (*(_BYTE *)(a3 + 8) & 4) == 0 )
    v12 = 0;
  else
    v12 = -1073741772;
LABEL_62:
  v6 = a4;
LABEL_63:
  if ( v12 >= 0 )
    goto LABEL_64;
LABEL_41:
  v15 = Handle;
  v14 = KeyHandle;
LABEL_42:
  if ( v14 && (v9 & 0x40000000) == 0 )
  {
    NtClose(v14);
    v14 = KeyHandle;
    v15 = Handle;
  }
  if ( v15 && v15 != v14 )
    NtClose(v15);
  v42 = (PVOID)RegionSize;
  v41 = (ULONG_PTR)v13;
  if ( v13 )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&v41, (PSIZE_T)&v42, 0x8000u);
  return (unsigned int)v12;
}
