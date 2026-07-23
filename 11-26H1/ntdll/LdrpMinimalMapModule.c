/*
 * XREFs of LdrpMinimalMapModule @ 0x1800D21E4
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18007B7D0 (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpCheckForRetryLoading @ 0x18007AEA0 (LdrpCheckForRetryLoading.c)
 *     RtlEqualUnicodeString @ 0x1800A4BA0 (RtlEqualUnicodeString.c)
 *     RtlQueryImageFileKeyOption @ 0x1800D1480 (RtlQueryImageFileKeyOption.c)
 *     RtlReleasePrivilege @ 0x1800D2590 (RtlReleasePrivilege.c)
 *     LdrpProcessMachineMismatch @ 0x1800D2654 (LdrpProcessMachineMismatch.c)
 *     RtlAcquirePrivilege @ 0x1800D2720 (RtlAcquirePrivilege.c)
 *     ZwMapViewOfSection @ 0x18015F340 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 *     ZwMapViewOfSectionEx @ 0x180161210 (ZwMapViewOfSectionEx.c)
 */

__int64 __fastcall LdrpMinimalMapModule(__int64 a1, void *a2)
{
  __int64 v2; // rdi
  bool v4; // r14
  PVOID v5; // r12
  int v6; // ebx
  struct _TEB *v7; // rcx
  int v8; // r8d
  ULONG AllocationType; // r13d
  ULONG Win32Protect; // edx
  ULONG v11; // ecx
  bool v12; // zf
  PVOID *v13; // r8
  NTSTATUS v14; // eax
  int v15; // ebx
  void *v16; // rdx
  __int64 v18; // rax
  wchar_t *v19; // rdx
  NTSTATUS v20; // eax
  __int128 v21; // [rsp+50h] [rbp-19h] BYREF
  __int64 v22; // [rsp+60h] [rbp-9h]
  MEM_EXTENDED_PARAMETER ExtendedParameters; // [rsp+68h] [rbp-1h] BYREF
  __int128 v24; // [rsp+78h] [rbp+Fh]
  struct _TEB *v25; // [rsp+D0h] [rbp+67h] BYREF
  HANDLE SectionHandle; // [rsp+D8h] [rbp+6Fh]
  PVOID ReturnedState; // [rsp+E0h] [rbp+77h] BYREF

  SectionHandle = a2;
  v2 = *(_QWORD *)(a1 + 56);
  LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 815, (__int64)"LdrpMinimalMapModule", 3, "DLL name: %wZ\n", v2 + 72);
  LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 816, (__int64)"LdrpMinimalMapModule", 5, "%wZ\n", v2 + 72);
  v4 = RtlEqualUnicodeString((PUNICODE_STRING)(v2 + 88), (PUNICODE_STRING)&LdrpKernel32DllName, 1u)
    && (*(_BYTE *)(LdrpAppHeaders + 22) & 0x20) != 0;
  v5 = 0LL;
  ReturnedState = 0LL;
  v6 = 0x800000;
  if ( !v4 )
  {
    if ( LdrpLargePageDllKeyHandle )
    {
      v19 = *(wchar_t **)(v2 + 96);
      LODWORD(v25) = 0;
      RtlQueryImageFileKeyOption(LdrpLargePageDllKeyHandle, v19, 4, (ULONG *)&v25, 4u, 0LL);
      if ( (_DWORD)v25 )
      {
        v20 = RtlAcquirePrivilege((PULONG)&LdrpLockMemoryPrivilege, 1u, 0, &ReturnedState);
        v5 = ReturnedState;
        if ( v20 >= 0 )
          v6 = 0x20000000;
      }
    }
  }
  v7 = NtCurrentTeb();
  *(_QWORD *)(a1 + 168) = 0LL;
  v25 = v7;
  ReturnedState = v7->NtTib.ArbitraryUserPointer;
  v7->NtTib.ArbitraryUserPointer = *(void **)(v2 + 80);
  v8 = *(_DWORD *)(a1 + 32) & 0x800000;
  ExtendedParameters = 0LL;
  AllocationType = v6 | 0x40000;
  Win32Protect = v8 != 0 ? 2 : 128;
  v24 = 0LL;
  if ( !v8 )
    AllocationType = v6;
  v11 = 0;
  v12 = (*(_DWORD *)(a1 + 32) & 0x800) == 0;
  v21 = 0LL;
  v22 = 0LL;
  if ( !v12 )
  {
    v11 = 1;
    *((_QWORD *)&v21 + 1) = LdrpMaximumUserModeAddress;
    ExtendedParameters.ULong64 = (DWORD64)&v21;
    *(_BYTE *)&ExtendedParameters.0 = 1;
  }
  if ( v8 )
  {
    v18 = 2LL * v11++;
    *((_BYTE *)&ExtendedParameters.0 + 8 * v18) = 5;
    *(&ExtendedParameters.ULong64 + v18) = 512LL;
  }
  v13 = (PVOID *)(v2 + 48);
  if ( v11 )
    v14 = ZwMapViewOfSectionEx(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            v13,
            0LL,
            (PSIZE_T)(a1 + 168),
            AllocationType,
            Win32Protect,
            &ExtendedParameters,
            v11);
  else
    v14 = ZwMapViewOfSection(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            v13,
            0LL,
            0LL,
            0LL,
            (PSIZE_T)(a1 + 168),
            ViewShare,
            AllocationType,
            Win32Protect);
  v15 = v14;
  v25->NtTib.ArbitraryUserPointer = ReturnedState;
  if ( AllocationType == 0x20000000 )
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
  v16 = *(void **)(v2 + 48);
  if ( v16 && (v15 < 0 || v15 == 1073741838) )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v16);
    *(_QWORD *)(v2 + 48) = 0LL;
  }
  LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 1048, (__int64)"LdrpMinimalMapModule", 4, "Status: 0x%08lx\n", v15);
  LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 1049, (__int64)"LdrpMinimalMapModule", 6, "%x\n", v15);
  return (unsigned int)v15;
}
