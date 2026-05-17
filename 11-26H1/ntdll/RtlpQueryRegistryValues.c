/*
 * XREFs of RtlpQueryRegistryValues @ 0x180059B20
 * Callers:
 *     RtlQueryRegistryValuesEx @ 0x180059910 (RtlQueryRegistryValuesEx.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1800FC670 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlpFindRegTziForCurrentYear @ 0x1801005AC (RtlpFindRegTziForCurrentYear.c)
 *     RtlCheckPortableOperatingSystem @ 0x1801010E0 (RtlCheckPortableOperatingSystem.c)
 *     RtlQueryRegistryValues @ 0x18010D490 (RtlQueryRegistryValues.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x1801487D4 (RtlpEtcGetDwordFromRegistry.c)
 * Callees:
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlpCallQueryRegistryRoutine @ 0x18005A26C (RtlpCallQueryRegistryRoutine.c)
 *     RtlpGetRegistryHandle @ 0x18005A6B8 (RtlpGetRegistryHandle.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x18015F1A0 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 *     ZwDeleteValueKey @ 0x180160B10 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpQueryRegistryValues(__int64 a1, const wchar_t *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // r15
  int v9; // r13d
  __int64 result; // rax
  size_t v11; // rax
  int v12; // edi
  __int64 v13; // rsi
  HANDLE v14; // r8
  HANDLE v15; // r10
  unsigned int v16; // r12d
  int v17; // edx
  int v18; // eax
  const wchar_t *v19; // rcx
  int v20; // r15d
  unsigned int i; // r14d
  int v22; // eax
  int v23; // eax
  int v24; // r14d
  size_t v25; // rax
  int v26; // eax
  int v27; // eax
  size_t v28; // rax
  int v29; // eax
  unsigned int v30; // [rsp+40h] [rbp-99h] BYREF
  HANDLE v31; // [rsp+48h] [rbp-91h] BYREF
  __int64 v32; // [rsp+50h] [rbp-89h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-81h] BYREF
  __int64 v34; // [rsp+60h] [rbp-79h] BYREF
  const wchar_t *v35; // [rsp+68h] [rbp-71h]
  __int128 v36; // [rsp+70h] [rbp-69h] BYREF
  __int64 v37; // [rsp+80h] [rbp-59h] BYREF
  __int64 v38; // [rsp+88h] [rbp-51h] BYREF
  __int64 v39; // [rsp+90h] [rbp-49h] BYREF
  __int64 v40; // [rsp+98h] [rbp-41h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-29h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-21h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-19h] BYREF
  __int64 v46; // [rsp+C8h] [rbp-11h] BYREF
  __int128 v47; // [rsp+D0h] [rbp-9h] BYREF
  __int128 v48; // [rsp+E0h] [rbp+7h]
  __int128 v49; // [rsp+F0h] [rbp+17h]

  v6 = a4;
  *(_QWORD *)&v49 = 0LL;
  DWORD2(v49) = 0;
  Handle = 0LL;
  v47 = 0LL;
  v30 = 0;
  v48 = 0LL;
  v9 = a1;
  v36 = 0LL;
  result = RtlpGetRegistryHandle(a1, a2, 0LL, &Handle);
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
  v32 = 4096LL;
  v37 = 0LL;
  v12 = ZwAllocateVirtualMemory(-1LL, &v37, 0LL, &v32, 4096, 4);
  if ( v12 >= 0 )
  {
    v13 = v37;
  }
  else
  {
    v13 = 0LL;
    v37 = 0LL;
  }
  if ( !v13 )
  {
    if ( (v9 & 0x40000000) == 0 )
      NtClose(Handle);
    return (unsigned int)v12;
  }
  *(_DWORD *)(v13 + 8) = 0;
  v14 = Handle;
  v15 = Handle;
  v16 = v32 - 2;
  v31 = Handle;
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
      v14 = Handle;
      v15 = Handle;
      v31 = Handle;
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
      LODWORD(v47) = 48;
      DWORD2(v48) = 576;
      if ( v28 >= 0xFFFE )
        LOWORD(v28) = -4;
      LOWORD(v34) = v28;
      WORD1(v34) = v28 + 2;
      *((_QWORD *)&v47 + 1) = Handle;
      *(_QWORD *)&v48 = &v34;
      v49 = 0LL;
      v12 = NtOpenKey(&v31, 0x2000000LL, &v47);
      if ( v12 < 0 )
        goto LABEL_63;
      if ( !*(_QWORD *)a3 )
      {
LABEL_64:
        v14 = Handle;
        a3 += 56LL;
        v15 = v31;
        continue;
      }
      v15 = v31;
      goto LABEL_18;
    }
    break;
  }
  if ( v19 )
  {
    v24 = 0;
    *((_QWORD *)&v36 + 1) = *(_QWORD *)(a3 + 16);
    *(_QWORD *)&v36 = 0LL;
    v25 = 2 * wcslen(v19);
    if ( v25 >= 0xFFFE )
      LOWORD(v25) = -4;
    LOWORD(v36) = v25;
    WORD1(v36) = v25 + 2;
    while ( 1 )
    {
      v26 = v24++;
      if ( v26 > 4 )
      {
        DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1459);
        goto LABEL_41;
      }
      v27 = NtQueryValueKey(v31, &v36, 1LL, v13, v16, &v30);
      v12 = v27;
      if ( v27 == -2147483643 )
        goto LABEL_32;
      if ( v27 < 0 )
        break;
      if ( *(_DWORD *)(v13 + 4) == 7 )
      {
        *(_WORD *)(v30 + v13) = 0;
        *(_DWORD *)(v13 + 12) += 2;
      }
      v30 = v16;
      v29 = RtlpCallQueryRegistryRoutine((_DWORD)v31, a3, v13, (unsigned int)&v30, v6, a5, a6);
      v12 = v29;
      if ( v29 != -1073741789 )
      {
        if ( v29 < 0 )
          goto LABEL_41;
        if ( (*(_BYTE *)(a3 + 8) & 0x40) == 0 )
          goto LABEL_64;
        ZwDeleteValueKey(v31, &v36);
        v14 = Handle;
        a3 += 56LL;
        v15 = v31;
        goto LABEL_12;
      }
      v44 = v13;
      v32 = v30 + 10LL;
      v43 = v32;
      v38 = 0LL;
      ZwFreeVirtualMemory(-1LL, &v44, &v43, 0x8000LL);
      v12 = ZwAllocateVirtualMemory(-1LL, &v38, 0LL, &v32, 4096, 4);
      if ( v12 >= 0 )
      {
        v13 = v38;
      }
      else
      {
        v13 = 0LL;
        v38 = 0LL;
      }
LABEL_36:
      if ( !v13 )
        goto LABEL_41;
      *(_DWORD *)(v13 + 8) = 0;
      v16 = v32 - 2;
    }
    if ( v27 == -1073741772 )
    {
      *(_DWORD *)(v13 + 4) = 0;
      *(_DWORD *)(v13 + 12) = 0;
      v30 = v16;
      v27 = RtlpCallQueryRegistryRoutine((_DWORD)v31, a3, v13, (unsigned int)&v30, v6, a5, a6);
      v12 = v27;
    }
    if ( v27 != -1073741789 )
      goto LABEL_63;
LABEL_32:
    v46 = v13;
    v32 = v30 + 10LL;
    v45 = v32;
    v39 = 0LL;
    if ( v13 )
      ZwFreeVirtualMemory(-1LL, &v46, &v45, 0x8000LL);
    v12 = ZwAllocateVirtualMemory(-1LL, &v39, 0LL, &v32, 4096, 4);
    if ( v12 >= 0 )
    {
      v13 = v39;
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
    v22 = ZwEnumerateValueKey(v15, i, 1LL, v13, v16, &v30);
    v12 = v22;
    if ( v22 == -2147483643 )
      goto LABEL_20;
    if ( v22 == -2147483622 )
      break;
    if ( v22 >= 0 )
    {
      v30 = v16;
      v22 = RtlpCallQueryRegistryRoutine((_DWORD)v31, a3, v13, (unsigned int)&v30, a4, a5, a6);
      v12 = v22;
    }
    if ( v22 != -1073741789 )
    {
      if ( v22 < 0 )
        goto LABEL_62;
      v20 = 0;
      if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
      {
        *((_QWORD *)&v36 + 1) = v13 + 20;
        LOWORD(v36) = *(_WORD *)(v13 + 16);
        WORD1(v36) = *(_WORD *)(v13 + 16);
        if ( (int)ZwDeleteValueKey(v31, &v36) >= 0 )
          --i;
      }
      goto LABEL_75;
    }
LABEL_20:
    v42 = v13;
    v32 = v30 + 10LL;
    v41 = v32;
    v40 = 0LL;
    if ( v13 )
      ZwFreeVirtualMemory(-1LL, &v42, &v41, 0x8000LL);
    v12 = ZwAllocateVirtualMemory(-1LL, &v40, 0LL, &v32, 4096, 4);
    if ( v12 >= 0 )
    {
      v13 = v40;
    }
    else
    {
      v13 = 0LL;
      v40 = 0LL;
    }
    if ( !v13 )
      goto LABEL_62;
    *(_DWORD *)(v13 + 8) = 0;
    --i;
    v23 = v20;
    v16 = v32 - 2;
    ++v20;
    if ( v23 > 4 )
    {
      DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1646);
      goto LABEL_62;
    }
LABEL_75:
    v15 = v31;
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
  v15 = v31;
  v14 = Handle;
LABEL_42:
  if ( v14 && (v9 & 0x40000000) == 0 )
  {
    NtClose(v14);
    v14 = Handle;
    v15 = v31;
  }
  if ( v15 && v15 != v14 )
    NtClose(v15);
  v42 = v32;
  v41 = v13;
  if ( v13 )
    ZwFreeVirtualMemory(-1LL, &v41, &v42, 0x8000LL);
  return (unsigned int)v12;
}
