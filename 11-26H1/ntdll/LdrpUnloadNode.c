/*
 * XREFs of LdrpUnloadNode @ 0x18011BEB0
 * Callers:
 *     LdrpDecrementModuleLoadCountEx @ 0x180055460 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpUnloadNode @ 0x18011BEB0 (LdrpUnloadNode.c)
 * Callees:
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18002D090 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x180064160 (SbUpdateSwitchContextBasedOnDll.c)
 *     RtlRbRemoveNode @ 0x18006B8B0 (RtlRbRemoveNode.c)
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x18007FBF0 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1800DB6CC (RtlRemoveInvertedFunctionTable.c)
 *     LdrpSendDllNotifications @ 0x1800DEB20 (LdrpSendDllNotifications.c)
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x1801193D0 (LdrpDecrementNodeLoadCountLockHeld.c)
 *     LdrpProcessDetachNode @ 0x18011B0A8 (LdrpProcessDetachNode.c)
 *     LdrpUnloadNode @ 0x18011BEB0 (LdrpUnloadNode.c)
 *     _wcsicmp @ 0x180128F40 (_wcsicmp.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpUnloadNode(__int64 a1)
{
  struct _PEB *v1; // rbx
  __int64 result; // rax
  void (__fastcall *v4)(_QWORD *); // r12
  _QWORD *v5; // r13
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 *v8; // r14
  __int64 *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rbp
  int v12; // esi
  _QWORD *v13; // rbx
  _QWORD *v14; // r10
  char v15; // r9
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // r11
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rdx
  void (__fastcall *v21)(_QWORD, _QWORD, _QWORD, _QWORD *); // rax
  __int64 **v22; // rcx
  __int64 *v23; // rbx
  _QWORD *SchedulerSharedDataSlot; // rdx
  __int64 v25; // rax
  _QWORD *v26; // rcx
  _QWORD *v27; // rcx
  signed __int8 v28; // cf
  __int64 v29; // rdi
  _QWORD *v30; // r8
  _QWORD **v31; // rdx
  _QWORD *v32; // rcx
  _QWORD **v33; // rax
  _QWORD *v34; // rbx
  _QWORD *v35; // rdi
  int v36; // eax
  __int64 v37; // rbx
  _QWORD *v38; // rdx
  __int64 v39; // rax
  _QWORD *v40; // rcx
  _QWORD *v41; // rcx
  __int64 v42; // rdx
  _QWORD *v43; // rcx
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rdx
  int v49; // [rsp+70h] [rbp+8h] BYREF
  struct _PEB *v50; // [rsp+78h] [rbp+10h]

  v1 = NtCurrentPeb();
  result = *(unsigned int *)(a1 + 56);
  v4 = 0LL;
  v49 = 0;
  v50 = v1;
  if ( (_DWORD)result == -4 )
  {
LABEL_4:
    *(_DWORD *)(a1 + 56) = -1;
    LdrpProcessDetachNode((_QWORD **)a1);
    goto LABEL_5;
  }
  if ( (_DWORD)result != 7 )
  {
    if ( (_DWORD)result != 9 )
      goto LABEL_44;
    goto LABEL_4;
  }
LABEL_5:
  if ( g_ShimsEnabled )
    v4 = (void (__fastcall *)(_QWORD *))(__ROR8__(g_pfnSE_LdrEntryRemoved, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  v5 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 != a1 )
  {
    while ( 1 )
    {
      v6 = v5 - 20;
      if ( (*(_DWORD *)(v5 - 7) & 8) == 0 )
        goto LABEL_42;
      LdrpSendDllNotifications((__int64)(v5 - 20), 2u);
      if ( v4 )
        v4(v5 - 20);
      SbUpdateSwitchContextBasedOnDll((__int64)(v5 - 20), v7);
      if ( (v1->NtGlobalFlag & 0x100) == 0 || (NtCurrentPeb()->NtGlobalFlag & 0x100) == 0 || !AVrfpEnabled )
        goto LABEL_42;
      RtlEnterCriticalSection((__int64)&AVrfpVerifierLock);
      v8 = (__int64 *)AVrfpVerifierProvidersList;
      v9 = (__int64 *)AVrfpVerifierProvidersList;
      while ( v9 != &AVrfpVerifierProvidersList )
      {
        v10 = v9[4];
        v9 = (__int64 *)*v9;
        if ( v10 && *(_QWORD *)(v10 + 48) == v6[6] )
        {
          DbgPrint("AVRF: AVrfDllUnloadNotification called for a provider (%p) \n", v5 - 20);
          __debugbreak();
        }
      }
      if ( !AVrfpEnabled )
        goto LABEL_37;
      if ( (__int64 *)AVrfpVerifierProvidersList != &AVrfpVerifierProvidersList )
        break;
LABEL_41:
      RtlLeaveCriticalSection((__int64)&AVrfpVerifierLock);
LABEL_42:
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrsnap.c",
        4111,
        (__int64)"LdrpUnloadNode",
        2,
        "Unmapping DLL \"%wZ\"\n",
        v6 + 9);
      LdrUnloadAlternateResourceModuleEx(v6[6], 0);
      v5 = (_QWORD *)*v5;
      if ( v5 == (_QWORD *)a1 )
        goto LABEL_43;
    }
    do
    {
      v11 = (_QWORD *)v8[5];
      v12 = 0;
      v8 = (__int64 *)*v8;
      if ( *v11 )
      {
        v13 = v11;
        do
        {
          if ( (v13[1] & 1) != 0 && !wcsicmp((const wchar_t *)v6[12], (const wchar_t *)*v13) )
          {
            if ( (AVrfpDebug & 4) != 0 )
              DbgPrint(
                "AVRF: pid 0x%X: found dll descriptor for `%ws' with verified exports \n",
                NtCurrentTeb()->ClientId.UniqueProcess,
                v6[12]);
            v14 = (_QWORD *)v13[3];
            v15 = 0;
            v16 = v6[6];
            LODWORD(v17) = 0;
            v18 = v16 + *((unsigned int *)v6 + 16);
            if ( *v14 )
            {
              v19 = (_QWORD *)v13[3];
              do
              {
                v20 = v19[1];
                if ( v20 >= v16 && v20 < v18 )
                {
                  v19[1] = 0LL;
                  v15 = 1;
                  v16 = v6[6];
                }
                v17 = (unsigned int)(v17 + 1);
                v19 = &v14[3 * v17];
              }
              while ( *v19 );
              if ( v15 )
                *((_DWORD *)v13 + 2) &= ~1u;
            }
          }
          v13 = &v11[4 * (unsigned int)++v12];
        }
        while ( *v13 );
      }
    }
    while ( v8 != &AVrfpVerifierProvidersList );
    v8 = (__int64 *)AVrfpVerifierProvidersList;
    v1 = v50;
LABEL_37:
    while ( v8 != &AVrfpVerifierProvidersList )
    {
      v21 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD *))v8[7];
      v8 = (__int64 *)*v8;
      if ( v21 )
        v21(v6[12], v6[6], *((unsigned int *)v6 + 16), v5 - 20);
    }
    goto LABEL_41;
  }
LABEL_43:
  result = RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock);
LABEL_44:
  while ( 1 )
  {
    v22 = *(__int64 ***)(a1 + 40);
    if ( !v22 )
      break;
    v23 = *v22;
    if ( *v22 == (__int64 *)v22 )
    {
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    else
    {
      result = *v23;
      *v22 = (__int64 *)*v23;
    }
    if ( !v23 )
      break;
    SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      v25 = 0LL;
      v26 = SchedulerSharedDataSlot;
      while ( *v26 )
      {
        v25 = (unsigned int)(v25 + 1);
        ++v26;
        if ( (unsigned int)v25 >= 8 )
          goto LABEL_57;
      }
      v27 = &SchedulerSharedDataSlot[v25];
      if ( v27 )
        *v27 = &LdrpModuleDatatableLock;
    }
LABEL_57:
    v28 = _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL);
    if ( v28 )
      RtlpAcquireSRWLockExclusiveContended(&LdrpModuleDatatableLock, (__int64)SchedulerSharedDataSlot);
    v29 = v23[1];
    v30 = v23 + 2;
    v31 = *(_QWORD ***)(v29 + 48);
    v32 = *v31;
    if ( *v31 != v23 + 2 )
    {
      do
      {
        v31 = (_QWORD **)v32;
        v32 = (_QWORD *)*v32;
      }
      while ( v32 != v30 );
    }
    *v31 = (_QWORD *)*v30;
    if ( *(_QWORD **)(v29 + 48) == v30 )
    {
      v33 = 0LL;
      if ( v31 != v30 )
        v33 = v31;
      *(_QWORD *)(v29 + 48) = v33;
    }
    LdrpDecrementNodeLoadCountLockHeld(v29, 0, &v49);
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( v49 )
      LdrpUnloadNode(v29);
    result = RtlFreeHeap_0();
  }
  *(_DWORD *)(a1 + 56) = -2;
  v34 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 != a1 )
  {
    do
    {
      v35 = (_QWORD *)*v34;
      v36 = *((_DWORD *)v34 - 14) | 2;
      v37 = (__int64)(v34 - 20);
      *(_DWORD *)(v37 + 104) = v36;
      v38 = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v38 )
      {
        v39 = 0LL;
        v40 = v38;
        while ( *v40 )
        {
          v39 = (unsigned int)(v39 + 1);
          ++v40;
          if ( (unsigned int)v39 >= 8 )
            goto LABEL_76;
        }
        v41 = &v38[v39];
        if ( v41 )
          *v41 = &LdrpModuleDatatableLock;
      }
LABEL_76:
      v28 = _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL);
      if ( v28 )
        RtlpAcquireSRWLockExclusiveContended(&LdrpModuleDatatableLock, (__int64)v38);
      if ( (*(_DWORD *)(v37 + 104) & 0x40) != 0 )
      {
        v42 = *(_QWORD *)(v37 + 112);
        if ( *(_QWORD *)(v42 + 8) != v37 + 112 )
          goto LABEL_97;
        v43 = *(_QWORD **)(v37 + 120);
        if ( *v43 != v37 + 112 )
          goto LABEL_97;
        *v43 = v42;
        *(_QWORD *)(v42 + 8) = v43;
        v44 = *(_QWORD *)v37;
        if ( *(_QWORD *)(*(_QWORD *)v37 + 8LL) != v37
          || (v45 = *(_QWORD **)(v37 + 8), *v45 != v37)
          || (*v45 = v44, *(_QWORD *)(v44 + 8) = v45, v46 = *(_QWORD *)(v37 + 16), *(_QWORD *)(v46 + 8) != v37 + 16)
          || (v47 = *(_QWORD **)(v37 + 24), *v47 != v37 + 16) )
        {
LABEL_97:
          __fastfail(3u);
        }
        *v47 = v46;
        *(_QWORD *)(v46 + 8) = v47;
        *(_DWORD *)(v37 + 104) &= ~0x40u;
      }
      if ( (*(_DWORD *)(v37 + 104) & 0x80u) != 0 )
      {
        RtlRbRemoveNode((__int64)&LdrpMappingInfoIndex, v37 + 224);
        RtlRbRemoveNode((__int64)&LdrpModuleBaseAddressIndex, v37 + 200);
        *(_DWORD *)(v37 + 64) = 0;
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( LdrpIsSecureProcess && *(_QWORD *)(v37 + 48) )
      {
        if ( (*(_DWORD *)(v37 + 104) & 0x200) != 0 )
          RtlRemoveInvertedFunctionTable(*(_QWORD *)(v37 + 48), v48);
        if ( (*(_DWORD *)(v37 + 104) & 0x200000) != 0 )
          RtlpInsertOrRemoveScpCfgFunctionTable(*(_QWORD *)(v37 + 48), v48, 0);
        NtUnmapViewOfSection(-1LL, *(_QWORD *)(v37 + 48));
        *(_QWORD *)(v37 + 48) = 0LL;
      }
      result = LdrpDereferenceModule(v37);
      v34 = v35;
    }
    while ( v35 != (_QWORD *)a1 );
  }
  return result;
}
