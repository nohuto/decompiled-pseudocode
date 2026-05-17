/*
 * XREFs of LdrGetKnownDllSectionHandle @ 0x180100850
 * Callers:
 *     <none>
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     RtlInitUnicodeStringEx @ 0x1800A4880 (RtlInitUnicodeStringEx.c)
 *     NtOpenSection @ 0x18015F620 (NtOpenSection.c)
 */

__int64 __fastcall LdrGetKnownDllSectionHandle(const wchar_t *ArgList, char a2, __int64 a3)
{
  __int64 v6; // rdi
  int inited; // ebx
  __int128 v9; // [rsp+30h] [rbp-40h] BYREF
  int v10; // [rsp+40h] [rbp-30h] BYREF
  __int64 v11; // [rsp+48h] [rbp-28h]
  __int128 *v12; // [rsp+50h] [rbp-20h]
  int v13; // [rsp+58h] [rbp-18h]
  __int128 v14; // [rsp+60h] [rbp-10h]

  DWORD2(v14) = 0;
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrapi.c",
    5585,
    (__int64)"LdrGetKnownDllSectionHandle",
    3,
    "DLL name: %ws\n",
    ArgList,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    *((_QWORD *)&v14 + 1));
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 5586, (__int64)"LdrGetKnownDllSectionHandle", 5, "%ws\n", ArgList);
  if ( a2 )
    return 3221225485LL;
  v6 = LdrpKnownDllDirectoryHandle;
  if ( LdrpKnownDllDirectoryHandle )
  {
    inited = RtlInitUnicodeStringEx((__int64)&v9, ArgList);
    if ( inited >= 0 )
    {
      v10 = 48;
      v12 = &v9;
      v11 = v6;
      v13 = 64;
      v14 = 0LL;
      inited = NtOpenSection(a3, 13LL, &v10);
    }
  }
  else
  {
    inited = -1073741816;
  }
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrapi.c",
    5615,
    (__int64)"LdrGetKnownDllSectionHandle",
    4,
    "Status: 0x%08lx\n",
    inited);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 5616, (__int64)"LdrGetKnownDllSectionHandle", 6, "%x\n", inited);
  return (unsigned int)inited;
}
