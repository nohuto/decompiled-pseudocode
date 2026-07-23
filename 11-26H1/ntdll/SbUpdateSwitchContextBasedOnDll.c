/*
 * XREFs of SbUpdateSwitchContextBasedOnDll @ 0x1800845B0
 * Callers:
 *     LdrpSendPostSnapNotifications @ 0x18011AFD0 (LdrpSendPostSnapNotifications.c)
 *     LdrpUnloadNode @ 0x18011BC60 (LdrpUnloadNode.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     SbpTraceContextUpdate @ 0x180082610 (SbpTraceContextUpdate.c)
 *     SbGetCurrentSwitchContext @ 0x1800848B0 (SbGetCurrentSwitchContext.c)
 *     SbpDetermineDllContext @ 0x1800848E0 (SbpDetermineDllContext.c)
 *     SbGetContextDetailsById @ 0x180084AB4 (SbGetContextDetailsById.c)
 *     SbObtainTraceHandle @ 0x180084C30 (SbObtainTraceHandle.c)
 */

__int64 __fastcall SbUpdateSwitchContextBasedOnDll(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 CurrentSwitchContext; // rax
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v7; // rbp
  _DWORD *v8; // r15
  _DWORD *v9; // r9
  _QWORD *v10; // rsi
  unsigned int i; // ecx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  _QWORD *v17; // rdi
  __int64 v18; // rax
  _QWORD *v19; // r8
  unsigned int j; // ecx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 k; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  int *v27; // rax
  __int128 v28; // xmm0
  __int64 v29; // [rsp+68h] [rbp+10h] BYREF
  __int64 v30; // [rsp+78h] [rbp+20h] BYREF

  v29 = a2;
  v3 = 0LL;
  CurrentSwitchContext = SbGetCurrentSwitchContext();
  v30 = 0LL;
  v7 = CurrentSwitchContext;
  v29 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( !CurrentSwitchContext || !v5 )
    return 0LL;
  if ( !*(_DWORD *)(CurrentSwitchContext + 8) )
    return 1LL;
  v10 = (_QWORD *)(CurrentSwitchContext + 64);
  if ( CurrentSwitchContext != -64 )
  {
    for ( i = 0; i < 5; ++i )
    {
      v12 = 32LL * i;
      v13 = *v10 - *(_QWORD *)((char *)&unk_180170934 + v12);
      if ( *v10 == *(_QWORD *)((char *)&unk_180170934 + v12) )
        v13 = v10[1] - *(_QWORD *)((char *)&unk_18017093C + v12);
      if ( !v13 )
      {
        v8 = (_DWORD *)((char *)&SbSupportedOsList + v12);
        break;
      }
    }
  }
  if ( v6 )
  {
    if ( v6 != 1 )
      return 1LL;
    v19 = *(_QWORD **)(a1 + 192);
    if ( !v19 )
      return 1LL;
    for ( j = 0; j < 5; ++j )
    {
      v21 = 32LL * j;
      v22 = *v19 - *(_QWORD *)((char *)&unk_180170934 + v21);
      if ( *v19 == *(_QWORD *)((char *)&unk_180170934 + v21) )
        v22 = v19[1] - *(_QWORD *)((char *)&unk_18017093C + v21);
      if ( !v22 )
      {
        v9 = (_DWORD *)((char *)&SbSupportedOsList + v21);
        break;
      }
    }
    v23 = 0LL;
    for ( k = 0LL; k < 0x28; k += 8LL )
    {
      if ( *(_DWORD *)((char *)&SbDynamicContextDllCount + k) == *v9 )
      {
        if ( _InterlockedExchangeAdd(&dword_1801C5804[2 * v23], 0xFFFFFFFF) != 1 )
          return 1LL;
        break;
      }
      ++v23;
    }
    if ( v8 != v9 )
      return 1LL;
    RtlAcquireSRWLockExclusive(&SbpContextLock);
    v27 = dword_1801C5804;
    v29 = 0LL;
    do
    {
      if ( *v27 )
      {
        SbGetContextDetailsById((unsigned int)v3, &v29);
        v28 = *(_OWORD *)(v29 + 4);
        goto LABEL_49;
      }
      LODWORD(v3) = v3 + 1;
      v27 += 2;
    }
    while ( (unsigned int)v3 < 5 );
    v28 = *(_OWORD *)(v7 + 48);
LABEL_49:
    *(_OWORD *)v10 = v28;
    ++*(_QWORD *)v7;
    if ( !(unsigned int)SbObtainTraceHandle(&v30) )
      goto LABEL_50;
    v25 = v30;
    if ( !v30 )
      goto LABEL_50;
    v26 = (__int64)v10;
    goto LABEL_42;
  }
  result = SbpDetermineDllContext(*(PACTIVATION_CONTEXT *)(a1 + 48));
  if ( !(_DWORD)result )
    return result;
  v15 = v29;
  v16 = 0LL;
  v17 = (_QWORD *)(v29 + 4);
  *(_QWORD *)(a1 + 192) = v29 + 4;
  while ( v16 < 0x28 )
  {
    if ( *(_DWORD *)((char *)&SbDynamicContextDllCount + v16) == *(_DWORD *)v15 )
    {
      _InterlockedIncrement(&dword_1801C5804[2 * v3]);
      break;
    }
    ++v3;
    v16 += 8LL;
  }
  v18 = *v17 - 0x4FE8BFB38E0F7A12LL;
  if ( *v17 == 0x4FE8BFB38E0F7A12LL )
    v18 = v17[1] + 0x65A55EAF02B75A47LL;
  if ( v18
    && *(_DWORD *)v15 < *v8
    && (*(unsigned __int16 *)(v15 + 22) | ((unsigned __int64)*(unsigned __int16 *)(v15 + 20) << 16)) >= *(_QWORD *)(v7 + 40) )
  {
    RtlAcquireSRWLockExclusive(&SbpContextLock);
    ++*(_QWORD *)v7;
    *(_OWORD *)v10 = *(_OWORD *)v17;
    if ( !(unsigned int)SbObtainTraceHandle(&v30) )
      goto LABEL_50;
    v25 = v30;
    if ( !v30 )
      goto LABEL_50;
    v26 = (__int64)v17;
LABEL_42:
    SbpTraceContextUpdate(v25, v26, 1, *(_WORD *)(a1 + 72), *(_QWORD *)(a1 + 80));
LABEL_50:
    ++*(_QWORD *)v7;
    RtlReleaseSRWLockExclusive(&SbpContextLock);
  }
  return 1LL;
}
