/*
 * XREFs of LdrpMapDllSearchPath @ 0x18011C9D0
 * Callers:
 *     LdrpProcessWork @ 0x180087350 (LdrpProcessWork.c)
 *     LdrpLoadEnclaveModule @ 0x180117220 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     LdrpReleaseDllPath @ 0x180051400 (LdrpReleaseDllPath.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x1800824B0 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpMapDllNtFileName @ 0x1800833B0 (LdrpMapDllNtFileName.c)
 *     LdrpResolveDllName @ 0x180084BE0 (LdrpResolveDllName.c)
 *     LdrpLoadContextReplaceModule @ 0x180085350 (LdrpLoadContextReplaceModule.c)
 *     LdrpSearchPath @ 0x180098BBC (LdrpSearchPath.c)
 *     LdrpLogEtwDllSearchResults @ 0x180099320 (LdrpLogEtwDllSearchResults.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x18009985C (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpInitializeDllPath @ 0x18009B960 (LdrpInitializeDllPath.c)
 *     RtlEqualUnicodeString @ 0x1800A5A70 (RtlEqualUnicodeString.c)
 *     Feature_Arm64VcRedistRedirect__private_IsEnabledDeviceUsageNoInline @ 0x180110090 (Feature_Arm64VcRedistRedirect__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpMapDllSearchPath(__int64 ArgList)
{
  __int64 v2; // r9
  __int64 v3; // r13
  __int64 v4; // rdi
  int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  __int16 **v9; // rax
  int LoadedDllByNameLockHeld; // ebx
  int v11; // esi
  void (__fastcall *v12)(char *, char *, bool *); // r9
  bool *v13; // r8
  int v14; // esi
  int v15; // r9d
  unsigned __int16 *i; // r10
  unsigned __int64 v17; // rax
  unsigned int v18; // edi
  _QWORD *SchedulerSharedDataSlot; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // rcx
  bool *v24; // rdx
  _QWORD **v25; // r14
  _QWORD *v26; // rbx
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // rcx
  char v31; // [rsp+50h] [rbp-B0h] BYREF
  bool v32[23]; // [rsp+51h] [rbp-AFh] BYREF
  char ArgLista[16]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34[2]; // [rsp+78h] [rbp-88h] BYREF
  __int16 **v35; // [rsp+88h] [rbp-78h]
  __int128 v36; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v37; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v38; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v39[254]; // [rsp+B2h] [rbp-4Eh] BYREF
  _OWORD v40[8]; // [rsp+1B0h] [rbp+B0h] BYREF

  *(_OWORD *)v34 = 0LL;
  memset(v40, 0, sizeof(v40));
  memset_thunk_772440563353939046(v39, 0, 0xFEuLL);
  v2 = *(_QWORD *)(ArgList + 48);
  v3 = *(_QWORD *)(ArgList + 56);
  v37.Buffer = (wchar_t *)&v38;
  *(_QWORD *)&v37.Length = 0x1000000LL;
  v4 = 0LL;
  v32[0] = 0;
  v5 = 0;
  v38 = 0;
  memset(&v32[3], 0, 20);
  v36 = 0LL;
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
    LdrpInitializeDllPath(*(_QWORD *)(v2 + 80), v7 & v6 | 1, (__int64)v40);
    v9 = (__int16 **)v40;
  }
  else
  {
LABEL_8:
    v9 = *(__int16 ***)(ArgList + 16);
  }
  v35 = v9;
  while ( 1 )
  {
    LoadedDllByNameLockHeld = LdrpSearchPath(
                                (const void **)ArgList,
                                v9,
                                (*(_DWORD *)(ArgList + 32) & 8) != 0,
                                (__int16 **)&v36,
                                &v37,
                                (__int64)v34,
                                (unsigned __int16 *)&v32[7],
                                v32,
                                (__int64)&v32[3]);
    if ( v32[0] )
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
    if ( !*(_QWORD *)(ArgList + 176) )
      break;
LABEL_58:
    if ( *(_QWORD *)(v3 + 80) )
    {
      RtlFreeHeap_0();
      *(_QWORD *)(v3 + 80) = 0LL;
    }
    v27 = *(_OWORD *)v34;
    *(_DWORD *)(v3 + 72) = 0;
    v28 = *(_OWORD *)&v32[7];
    *(_OWORD *)(v3 + 88) = v27;
    *(_OWORD *)(v3 + 72) = v28;
    *(_OWORD *)&v32[7] = 0LL;
    LoadedDllByNameLockHeld = LdrpMapDllNtFileName(ArgList, &v37);
    if ( LoadedDllByNameLockHeld != 1073741838 )
      goto LABEL_69;
    if ( &v38 != (__int16 *)v37.Buffer )
      RtlFreeHeap_0();
    *(_DWORD *)&v37.Length = 0x1000000;
    v37.Buffer = (wchar_t *)&v38;
    v9 = v35;
    v38 = 0;
  }
  *(_OWORD *)ArgLista = 0LL;
  v11 = LoadedDllByNameLockHeld;
  v31 = 0;
  if ( g_ShimsEnabled || g_ShimsLoading )
  {
    Feature_Arm64VcRedistRedirect__private_IsEnabledDeviceUsageNoInline();
    v12 = (void (__fastcall *)(char *, char *, bool *))(__ROR8__(
                                                          g_pfnSE_LdrResolveDllName,
                                                          64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
    v31 = 0;
    v13 = &v32[7];
    if ( LoadedDllByNameLockHeld < 0 )
      v13 = (bool *)ArgList;
    v12(ArgLista, &v31, v13);
    if ( v31 )
    {
      *(_DWORD *)(ArgList + 32) |= 0x10000u;
      if ( *(_QWORD *)&v32[15] )
      {
        RtlFreeHeap_0();
        *(_QWORD *)&v32[15] = 0LL;
      }
      *(_DWORD *)&v32[7] = 0;
      v37.Length = 0;
      *v37.Buffer = 0;
      v11 = LdrpResolveDllName(ArgLista, (__int64)&v37, (__int64)v34, &v32[7], *(_DWORD *)(ArgList + 32));
    }
  }
  LoadedDllByNameLockHeld = v11;
  if ( v11 < 0 )
    goto LABEL_69;
  if ( (*(_DWORD *)(ArgList + 32) & 0x10000) != 0 )
    *(_DWORD *)&v32[3] |= 1u;
  v14 = 0;
  v15 = LOWORD(v34[0]) >> 1;
  for ( i = (unsigned __int16 *)v34[1]; v15; v14 = (unsigned __int16)v17 + 65599 * v14 )
  {
    v17 = *i++;
    --v15;
    if ( (unsigned int)v17 >= 0x61 )
    {
      if ( (unsigned int)v17 > 0x7A )
      {
        if ( qword_1801C6038 && (unsigned __int16)v17 >= 0xC0u )
          LOWORD(v17) = *(_WORD *)(qword_1801C6038
                                 + 2
                                 * ((v17 & 0xF)
                                  + *(unsigned __int16 *)(qword_1801C6038
                                                        + 2LL
                                                        * (((unsigned __int8)v17 >> 4)
                                                         + (unsigned int)*(unsigned __int16 *)(qword_1801C6038
                                                                                             + 2 * (v17 >> 8))))))
                      + v17;
      }
      else
      {
        LOWORD(v17) = v17 - 32;
      }
    }
  }
  *(_QWORD *)ArgLista = 0LL;
  if ( !v14 )
    v14 = 0x80000000;
  *(_DWORD *)(v3 + 264) = v14;
  v18 = *(_DWORD *)(ArgList + 32);
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
    RtlpAcquireSRWLockExclusiveContended(&LdrpModuleDatatableLock, (__int64)SchedulerSharedDataSlot);
  v24 = &v32[7];
  if ( (v18 & 0x20) != 0 )
    v24 = 0LL;
  LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(
                              (__int64)v34,
                              (__int64)v24,
                              v18,
                              (volatile signed __int32 **)ArgLista,
                              v14);
  if ( LoadedDllByNameLockHeld != -1073741515 || (v18 & 8) == 0 )
  {
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( LoadedDllByNameLockHeld != -1073741515 )
    {
      v4 = *(_QWORD *)ArgLista;
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
    v4 = *(_QWORD *)ArgLista;
    goto LABEL_58;
  }
  while ( 1 )
  {
    v4 = (__int64)(v26 - 14);
    if ( v14 == *((_DWORD *)v26 + 38) && RtlEqualUnicodeString((unsigned __int16 *)&v32[7], v4 + 72, 1) )
      break;
    v26 = (_QWORD *)*v26;
    if ( v26 == v25 )
      goto LABEL_55;
  }
  v29 = *(_QWORD *)(v4 + 152);
  if ( *(_DWORD *)(v29 + 24) != -1 && (*(_DWORD *)(*(_QWORD *)v29 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 276));
  *(_DWORD *)(v4 + 104) |= 1u;
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  LoadedDllByNameLockHeld = 0;
LABEL_69:
  if ( v4 )
  {
    LdrpLoadContextReplaceModule(ArgList, v4);
  }
  else if ( LdrpIsSecurityEtwLoggingEnabled() )
  {
    LdrpLogEtwDllSearchResults(*(int *)&v32[3], ArgList);
  }
  if ( &v38 != (__int16 *)v37.Buffer )
    RtlFreeHeap_0();
  v37.Buffer = (wchar_t *)&v38;
  *(_DWORD *)&v37.Length = 0x1000000;
  v38 = 0;
  if ( *(_QWORD *)&v32[15] )
  {
    RtlFreeHeap_0();
    *(_QWORD *)&v32[15] = 0LL;
  }
  *(_DWORD *)&v32[7] = 0;
  LdrpReleaseDllPath((__int64)v40);
  return (unsigned int)LoadedDllByNameLockHeld;
}
