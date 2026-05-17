/*
 * XREFs of LdrpMinimalMapModule @ 0x1800D2308
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180084430 (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpCheckForRetryLoading @ 0x180083B00 (LdrpCheckForRetryLoading.c)
 *     RtlEqualUnicodeString @ 0x1800A5A70 (RtlEqualUnicodeString.c)
 *     RtlReleasePrivilege @ 0x1800D26C0 (RtlReleasePrivilege.c)
 *     LdrpProcessMachineMismatch @ 0x1800D2784 (LdrpProcessMachineMismatch.c)
 *     RtlAcquirePrivilege @ 0x1800D2850 (RtlAcquirePrivilege.c)
 *     RtlQueryImageFileKeyOption @ 0x1800D3070 (RtlQueryImageFileKeyOption.c)
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     ZwMapViewOfSectionEx @ 0x180161310 (ZwMapViewOfSectionEx.c)
 */

__int64 __fastcall LdrpMinimalMapModule(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  bool v4; // r14
  void *v5; // r12
  int v6; // ebx
  struct _TEB *v7; // rcx
  int v8; // r8d
  int v9; // r13d
  int v10; // edx
  unsigned int v11; // ecx
  bool v12; // zf
  __int64 v13; // r8
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  __int128 v21; // [rsp+50h] [rbp-19h] BYREF
  __int64 v22; // [rsp+60h] [rbp-9h]
  _OWORD v23[5]; // [rsp+68h] [rbp-1h] BYREF
  struct _TEB *v24; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v25; // [rsp+D8h] [rbp+6Fh]
  void *ArbitraryUserPointer; // [rsp+E0h] [rbp+77h] BYREF

  v25 = a2;
  v2 = *(_QWORD *)(a1 + 56);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrmap.c", 770, (__int64)"LdrpMinimalMapModule", 3, "DLL name: %wZ\n", v2 + 72);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrmap.c", 771, (__int64)"LdrpMinimalMapModule", 5, "%wZ\n", v2 + 72);
  v4 = RtlEqualUnicodeString((unsigned __int16 *)(v2 + 88), (__int64)LdrpKernel32DllName, 1)
    && (*(_BYTE *)(LdrpAppHeaders + 22) & 0x20) != 0;
  v5 = 0LL;
  ArbitraryUserPointer = 0LL;
  v6 = 0x800000;
  if ( !v4 )
  {
    if ( LdrpLargePageDllKeyHandle )
    {
      v19 = *(_QWORD *)(v2 + 96);
      LODWORD(v24) = 0;
      RtlQueryImageFileKeyOption(LdrpLargePageDllKeyHandle, v19, 4LL, &v24, 4, 0LL);
      if ( (_DWORD)v24 )
      {
        v20 = RtlAcquirePrivilege(&LdrpLockMemoryPrivilege, 1LL, 0LL, &ArbitraryUserPointer);
        v5 = ArbitraryUserPointer;
        if ( v20 >= 0 )
          v6 = 0x20000000;
      }
    }
  }
  v7 = NtCurrentTeb();
  *(_QWORD *)(a1 + 168) = 0LL;
  v24 = v7;
  ArbitraryUserPointer = v7->NtTib.ArbitraryUserPointer;
  v7->NtTib.ArbitraryUserPointer = *(void **)(v2 + 80);
  v8 = *(_DWORD *)(a1 + 32) & 0x800000;
  memset(v23, 0, 32);
  v9 = v6 | 0x40000;
  v10 = v8 != 0 ? 2 : 128;
  if ( !v8 )
    v9 = v6;
  v11 = 0;
  v12 = (*(_DWORD *)(a1 + 32) & 0x800) == 0;
  v21 = 0LL;
  v22 = 0LL;
  if ( !v12 )
  {
    v11 = 1;
    *((_QWORD *)&v21 + 1) = LdrpMaximumUserModeAddress;
    *((_QWORD *)&v23[0] + 1) = &v21;
    LOBYTE(v23[0]) = 1;
  }
  if ( v8 )
  {
    v18 = v11++;
    LOBYTE(v23[v18]) = 5;
    *((_QWORD *)&v23[v18] + 1) = 512LL;
  }
  v13 = v2 + 48;
  if ( v11 )
    v14 = ZwMapViewOfSectionEx(v25, -1LL, v13, 0LL, a1 + 168, v9, v10, v23, v11);
  else
    v14 = ZwMapViewOfSection(v25, -1LL, v13, 0LL, 0LL, 0LL, a1 + 168, 1, v9, v10);
  v15 = v14;
  v24->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
  if ( v9 == 0x20000000 )
    RtlReleasePrivilege(v5);
  switch ( v15 )
  {
    case 1073741827:
      goto LABEL_22;
    case 1073741838:
      v15 = LdrpProcessMachineMismatch(a1);
      break;
    case 1073741878:
LABEL_22:
      if ( !*(_QWORD *)(a1 + 176) && LdrpMapAndSnapWork )
      {
        if ( LdrpCheckForRetryLoading(a1, 1) )
        {
          v15 = -1073741267;
        }
        else if ( v4 )
        {
          v15 = -1073741800;
        }
      }
      break;
  }
  v16 = *(_QWORD *)(v2 + 48);
  if ( v16 && (v15 < 0 || v15 == 1073741838) )
  {
    NtUnmapViewOfSection(-1LL, v16);
    *(_QWORD *)(v2 + 48) = 0LL;
  }
  LdrpLogInternal((int)"minkernel\\ldr\\ldrmap.c", 1003, (__int64)"LdrpMinimalMapModule", 4, "Status: 0x%08lx\n", v15);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrmap.c", 1004, (__int64)"LdrpMinimalMapModule", 6, "%x\n", v15);
  return (unsigned int)v15;
}
