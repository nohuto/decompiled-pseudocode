/*
 * XREFs of LdrpFindKnownDll @ 0x180082BE0
 * Callers:
 *     LdrpLoadKnownDll @ 0x180082910 (LdrpLoadKnownDll.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1800323C0 (RtlAppendUnicodeToString.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     RtlAppendUnicodeStringToString @ 0x180058DC0 (RtlAppendUnicodeStringToString.c)
 *     LdrpAllocateUnicodeString @ 0x180099220 (LdrpAllocateUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x1800A4880 (RtlInitUnicodeStringEx.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenSection @ 0x18015F620 (NtOpenSection.c)
 */

__int64 __fastcall LdrpFindKnownDll(const void **ArgList, __int64 a2, unsigned __int16 *a3, HANDLE *a4)
{
  int v8; // eax
  int UnicodeString; // ebx
  __int64 v11; // rbx
  int v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h]
  const void **v14; // [rsp+40h] [rbp-28h]
  int v15; // [rsp+48h] [rbp-20h]
  __int128 v16; // [rsp+50h] [rbp-18h]

  DWORD2(v16) = 0;
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrmap.c",
    1859,
    (__int64)"LdrpFindKnownDll",
    3,
    "DLL name: %wZ\n",
    ArgList,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    *((_QWORD *)&v16 + 1));
  LdrpLogInternal((int)"minkernel\\ldr\\ldrmap.c", 1860, (__int64)"LdrpFindKnownDll", 5, "%wZ\n", ArgList);
  if ( !LdrpKnownDllDirectoryHandle )
    goto LABEL_4;
  v12 = 48;
  v13 = LdrpKnownDllDirectoryHandle;
  v15 = 64;
  v14 = ArgList;
  v16 = 0LL;
  v8 = NtOpenSection(a4, 13LL, &v12);
  UnicodeString = v8;
  if ( v8 >= 0 )
  {
    UnicodeString = LdrpAllocateUnicodeString(
                      a3,
                      *(unsigned __int16 *)ArgList + (unsigned int)(unsigned __int16)LdrpKnownDllPath + 2);
    if ( UnicodeString < 0 )
    {
      NtClose(*a4);
    }
    else
    {
      RtlAppendUnicodeStringToString(a3, (const void **)&LdrpKnownDllPath);
      RtlAppendUnicodeToString(a3, L"\\");
      v11 = *a3 + *((_QWORD *)a3 + 1);
      RtlAppendUnicodeStringToString(a3, ArgList);
      RtlInitUnicodeStringEx(a2, v11);
      UnicodeString = 0;
    }
  }
  else if ( v8 == -1073741772 )
  {
LABEL_4:
    UnicodeString = -1073741515;
  }
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrmap.c",
    1930,
    (__int64)"LdrpFindKnownDll",
    4,
    "Status: 0x%08lx\n",
    UnicodeString);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrmap.c", 1931, (__int64)"LdrpFindKnownDll", 6, "%x\n", UnicodeString);
  return (unsigned int)UnicodeString;
}
