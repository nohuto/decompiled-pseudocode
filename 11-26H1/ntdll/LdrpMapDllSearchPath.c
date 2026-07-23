/*
 * XREFs of LdrpMapDllSearchPath @ 0x18011C780
 * Callers:
 *     LdrpProcessWork @ 0x18007E6C0 (LdrpProcessWork.c)
 *     LdrpLoadEnclaveModule @ 0x180116A00 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     LdrpReleaseDllPath @ 0x18003B980 (LdrpReleaseDllPath.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x180079850 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpMapDllNtFileName @ 0x18007A750 (LdrpMapDllNtFileName.c)
 *     LdrpResolveDllName @ 0x18007BF80 (LdrpResolveDllName.c)
 *     LdrpLoadContextReplaceModule @ 0x18007C6F0 (LdrpLoadContextReplaceModule.c)
 *     LdrpSearchPath @ 0x180097CEC (LdrpSearchPath.c)
 *     LdrpLogEtwDllSearchResults @ 0x180098450 (LdrpLogEtwDllSearchResults.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x18009898C (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpInitializeDllPath @ 0x18009AA90 (LdrpInitializeDllPath.c)
 *     RtlEqualUnicodeString @ 0x1800A4BA0 (RtlEqualUnicodeString.c)
 *     Feature_Arm64VcRedistRedirect__private_IsEnabledDeviceUsageNoInline @ 0x18010FC20 (Feature_Arm64VcRedistRedirect__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpMapDllSearchPath(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // r13
  __int64 v4; // rdi
  int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  wchar_t **v9; // rax
  int LoadedDllByNameLockHeld; // ebx
  int v11; // esi
  void (__fastcall *v12)(__int128 *, char *, PVOID *); // r9
  PVOID *v13; // r8
  int v14; // esi
  int v15; // r9d
  wchar_t *i; // r10
  unsigned __int64 v17; // rax
  int v18; // edi
  _QWORD *SchedulerSharedDataSlot; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // rcx
  PVOID *v24; // rdx
  _QWORD **v25; // r14
  _QWORD *v26; // rbx
  void *v27; // r8
  _UNICODE_STRING v28; // xmm1
  __int128 v29; // xmm0
  __int64 v30; // rcx
  char v32; // [rsp+50h] [rbp-B0h] BYREF
  bool v33; // [rsp+51h] [rbp-AFh] BYREF
  int v34; // [rsp+54h] [rbp-ACh] BYREF
  PVOID BaseAddress[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING String1; // [rsp+78h] [rbp-88h] BYREF
  wchar_t **v38; // [rsp+88h] [rbp-78h]
  __int128 v39; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING v40; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v41; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v42[254]; // [rsp+B2h] [rbp-4Eh] BYREF
  _OWORD v43[8]; // [rsp+1B0h] [rbp+B0h] BYREF

  *(_DWORD *)(&v40.MaximumLength + 1) = 0;
  String1 = 0LL;
  memset(v43, 0, sizeof(v43));
  memset_thunk_772440563353939046(v42, 0, 0xFEuLL);
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(a1 + 56);
  v40.Buffer = (wchar_t *)&v41;
  *(_DWORD *)&v40.Length = 0x1000000;
  v4 = 0LL;
  v33 = 0;
  v5 = 0;
  v41 = 0;
  v34 = 0;
  v39 = 0LL;
  *(_OWORD *)BaseAddress = 0LL;
  if ( !v2 )
    goto LABEL_8;
  v6 = 31488LL;
  v7 = *(unsigned int *)(v2 + 280);
  v8 = 31488;
  if ( (LdrpPolicyBits & 4) != 0 )
    v8 = 32512;
  if ( (v8 & (unsigned int)v7) != 0 )
  {
    if ( (LdrpPolicyBits & 4) != 0 )
      v6 = 32512LL;
    LdrpInitializeDllPath(*(_QWORD *)(v2 + 80), v7 & v6 | 1, (__int64)v43);
    v9 = (wchar_t **)v43;
  }
  else
  {
LABEL_8:
    v9 = *(wchar_t ***)(a1 + 16);
  }
  v38 = v9;
  while ( 1 )
  {
    LoadedDllByNameLockHeld = LdrpSearchPath(
                                (const UNICODE_STRING *)a1,
                                v9,
                                (*(_DWORD *)(a1 + 32) & 8) != 0,
                                (wchar_t **)&v39,
                                &v40,
                                (__int64)&String1,
                                (UNICODE_STRING *)BaseAddress,
                                &v33,
                                (__int64)&v34);
    if ( v33 )
      *(_DWORD *)(v3 + 104) |= 1u;
    if ( LoadedDllByNameLockHeld == -1073741515 )
    {
      if ( v5 )
      {
        LoadedDllByNameLockHeld = -1073741701;
        goto LABEL_69;
      }
    }
    else if ( LoadedDllByNameLockHeld < 0 )
    {
      goto LABEL_69;
    }
    v5 = 1;
    if ( !*(_QWORD *)(a1 + 176) )
      break;
LABEL_58:
    v27 = *(void **)(v3 + 80);
    if ( v27 )
    {
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v27);
      *(_QWORD *)(v3 + 80) = 0LL;
    }
    v28 = String1;
    *(_DWORD *)(v3 + 72) = 0;
    v29 = *(_OWORD *)BaseAddress;
    *(_UNICODE_STRING *)(v3 + 88) = v28;
    *(_OWORD *)(v3 + 72) = v29;
    *(_OWORD *)BaseAddress = 0LL;
    LoadedDllByNameLockHeld = LdrpMapDllNtFileName(a1, &v40);
    if ( LoadedDllByNameLockHeld != 1073741838 )
      goto LABEL_69;
    if ( &v41 != (__int16 *)v40.Buffer )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v40.Buffer);
    *(_DWORD *)&v40.Length = 0x1000000;
    v40.Buffer = (wchar_t *)&v41;
    v9 = v38;
    v41 = 0;
  }
  v36 = 0LL;
  v11 = LoadedDllByNameLockHeld;
  v32 = 0;
  if ( g_ShimsEnabled || g_ShimsLoading )
  {
    Feature_Arm64VcRedistRedirect__private_IsEnabledDeviceUsageNoInline();
    v12 = (void (__fastcall *)(__int128 *, char *, PVOID *))(__ROR8__(
                                                               g_pfnSE_LdrResolveDllName,
                                                               64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
    v32 = 0;
    v13 = BaseAddress;
    if ( LoadedDllByNameLockHeld < 0 )
      v13 = (PVOID *)a1;
    v12(&v36, &v32, v13);
    if ( v32 )
    {
      *(_DWORD *)(a1 + 32) |= 0x10000u;
      if ( BaseAddress[1] )
      {
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress[1]);
        BaseAddress[1] = 0LL;
      }
      LODWORD(BaseAddress[0]) = 0;
      v40.Length = 0;
      *v40.Buffer = 0;
      v11 = LdrpResolveDllName(&v36, (__int64)&v40, (__int64)&String1, BaseAddress, *(_DWORD *)(a1 + 32));
    }
  }
  LoadedDllByNameLockHeld = v11;
  if ( v11 < 0 )
    goto LABEL_69;
  if ( (*(_DWORD *)(a1 + 32) & 0x10000) != 0 )
    v34 |= 1u;
  v14 = 0;
  v15 = String1.Length >> 1;
  for ( i = String1.Buffer; v15; v14 = (unsigned __int16)v17 + 65599 * v14 )
  {
    v17 = *i++;
    --v15;
    if ( (unsigned int)v17 >= 0x61 )
    {
      if ( (unsigned int)v17 > 0x7A )
      {
        if ( qword_1801C5038 && (unsigned __int16)v17 >= 0xC0u )
          LOWORD(v17) = *(_WORD *)(qword_1801C5038
                                 + 2
                                 * ((v17 & 0xF)
                                  + *(unsigned __int16 *)(qword_1801C5038
                                                        + 2LL
                                                        * (((unsigned __int8)v17 >> 4)
                                                         + (unsigned int)*(unsigned __int16 *)(qword_1801C5038
                                                                                             + 2 * (v17 >> 8))))))
                      + v17;
      }
      else
      {
        LOWORD(v17) = v17 - 32;
      }
    }
  }
  *(_QWORD *)&v36 = 0LL;
  if ( !v14 )
    v14 = 0x80000000;
  *(_DWORD *)(v3 + 264) = v14;
  v18 = *(_DWORD *)(a1 + 32);
  SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    v20 = 0LL;
    v21 = SchedulerSharedDataSlot;
    while ( *v21 )
    {
      v20 = (unsigned int)(v20 + 1);
      ++v21;
      if ( (unsigned int)v20 >= 8 )
        goto LABEL_45;
    }
    v22 = &SchedulerSharedDataSlot[v20];
    if ( v22 )
      *v22 = &LdrpModuleDatatableLock;
  }
LABEL_45:
  if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(
      (volatile signed __int64 *)&LdrpModuleDatatableLock,
      (unsigned __int64)SchedulerSharedDataSlot);
  v24 = BaseAddress;
  if ( (v18 & 0x20) != 0 )
    v24 = 0LL;
  LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(&String1, (PUNICODE_STRING)v24, v18, &v36, v14);
  if ( LoadedDllByNameLockHeld != -1073741515 || (v18 & 8) == 0 )
  {
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( LoadedDllByNameLockHeld != -1073741515 )
    {
      v4 = v36;
      goto LABEL_69;
    }
    goto LABEL_57;
  }
  v25 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v14 & 0x1F));
  v26 = *v25;
  if ( *v25 == v25 )
  {
LABEL_55:
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
LABEL_57:
    v4 = v36;
    goto LABEL_58;
  }
  while ( 1 )
  {
    v4 = (__int64)(v26 - 14);
    if ( v14 == *((_DWORD *)v26 + 38) )
    {
      if ( RtlEqualUnicodeString((PUNICODE_STRING)BaseAddress, (PUNICODE_STRING)(v4 + 72), 1u) )
        break;
    }
    v26 = (_QWORD *)*v26;
    if ( v26 == v25 )
      goto LABEL_55;
  }
  v30 = *(_QWORD *)(v4 + 152);
  if ( *(_DWORD *)(v30 + 24) != -1 && (*(_DWORD *)(*(_QWORD *)v30 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 276));
  *(_DWORD *)(v4 + 104) |= 1u;
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  LoadedDllByNameLockHeld = 0;
LABEL_69:
  if ( v4 )
  {
    LdrpLoadContextReplaceModule(a1, v4);
  }
  else if ( LdrpIsSecurityEtwLoggingEnabled() )
  {
    LdrpLogEtwDllSearchResults(v34, a1);
  }
  if ( &v41 != (__int16 *)v40.Buffer )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v40.Buffer);
  v40.Buffer = (wchar_t *)&v41;
  *(_DWORD *)&v40.Length = 0x1000000;
  v41 = 0;
  if ( BaseAddress[1] )
  {
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress[1]);
    BaseAddress[1] = 0LL;
  }
  LODWORD(BaseAddress[0]) = 0;
  LdrpReleaseDllPath((__int64)v43);
  return (unsigned int)LoadedDllByNameLockHeld;
}
