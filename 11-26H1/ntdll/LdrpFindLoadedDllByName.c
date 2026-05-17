/*
 * XREFs of LdrpFindLoadedDllByName @ 0x180052F40
 * Callers:
 *     LdrpFindLoadedDll @ 0x180051680 (LdrpFindLoadedDll.c)
 *     LdrpFastpthReloadedDll @ 0x180052D40 (LdrpFastpthReloadedDll.c)
 *     LdrGetDllHandleByName @ 0x180084930 (LdrGetDllHandleByName.c)
 *     LdrpFindLoadedDllInternal @ 0x180085670 (LdrpFindLoadedDllInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800BBA10 (LdrpFindOrPrepareLoadingModule.c)
 *     AVrfInitializeVerifier @ 0x1801163F0 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x18004B7F0 (RtlpAcquireSRWLockSharedContended.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x1800824B0 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpHashUnicodeString @ 0x1800825C0 (LdrpHashUnicodeString.c)
 *     LdrpLogEtwEvent @ 0x180084238 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpFindLoadedDllByName(__int128 *a1, __int64 a2, int a3, __int64 a4, _DWORD *a5)
{
  __int128 *v8; // rsi
  __int16 v9; // r11
  unsigned __int16 v10; // r10
  __int64 v11; // rdx
  __int16 v12; // cx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int16 v15; // r10
  __int64 v16; // rcx
  int v17; // eax
  _QWORD *v18; // r9
  int v19; // ebx
  _QWORD *SchedulerSharedDataSlot; // r8
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  unsigned __int64 v23; // rax
  int LoadedDllByNameLockHeld; // ebx
  _DWORD *SharedData; // rcx
  __int64 v26; // rcx
  _DWORD *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _DWORD *v30; // rcx
  __int64 v31; // rcx
  int v32; // r9d
  __int64 v34; // [rsp+20h] [rbp-38h]
  __int128 v35; // [rsp+30h] [rbp-28h] BYREF

  v8 = a1;
  v35 = 0LL;
  if ( !a1 )
  {
    v9 = *(_WORD *)a2;
    v10 = *(_WORD *)a2 >> 1;
    if ( v10 )
    {
      v11 = *(_QWORD *)(a2 + 8);
      do
      {
        v12 = *(_WORD *)(v11 + 2LL * v10 - 2);
        if ( v12 == 92 )
          break;
        if ( v12 == 47 )
          break;
        --v10;
      }
      while ( v10 );
    }
    v13 = *(_QWORD *)(a2 + 8);
    v8 = &v35;
    v14 = v10;
    v15 = 2 * v10;
    LOWORD(v35) = v9 - v15;
    v16 = v13 + 2 * v14;
    LOWORD(v13) = *(_WORD *)(a2 + 2) - v15;
    *((_QWORD *)&v35 + 1) = v16;
    WORD1(v35) = v13;
  }
  v17 = LdrpHashUnicodeString(v8);
  v18 = 0LL;
  v19 = v17;
  SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    v21 = 0LL;
    v22 = SchedulerSharedDataSlot;
    while ( *v22 )
    {
      v21 = (unsigned int)(v21 + 1);
      ++v22;
      if ( (unsigned int)v21 >= 8 )
        goto LABEL_15;
    }
    v18 = &SchedulerSharedDataSlot[v21];
    if ( v18 )
      *v18 = &LdrpModuleDatatableLock;
  }
LABEL_15:
  v23 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 17LL, 0LL);
  if ( v23 )
    RtlpAcquireSRWLockSharedContended(&LdrpModuleDatatableLock, (unsigned __int64)v18, v23, (unsigned __int64)v18);
  LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld((_DWORD)v8, a2, a3, a4, v19);
  if ( LoadedDllByNameLockHeld >= 0 && a5 )
    *a5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 152LL) + 56LL);
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
  SharedData = NtCurrentPeb()->SharedData;
  if ( a2 )
  {
    if ( SharedData && *SharedData )
      v26 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v26 = 2147353476LL;
    if ( *(_BYTE *)v26 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v27 = NtCurrentPeb()->SharedData;
      if ( v27 && *v27 )
        v28 = (__int64)NtCurrentPeb()->SharedData + 555;
      else
        v28 = 2147353477LL;
      if ( (*(_BYTE *)v28 & 0x20) != 0 )
      {
        v34 = a2;
LABEL_45:
        v32 = 0;
        if ( LoadedDllByNameLockHeld < 0 )
          v32 = 3;
        LdrpLogEtwEvent(5280, 0, 0, v32, v34, 0LL);
      }
    }
  }
  else
  {
    if ( SharedData && *SharedData )
      v29 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v29 = 2147353476LL;
    if ( *(_BYTE *)v29 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v30 = NtCurrentPeb()->SharedData;
      if ( v30 && *v30 )
        v31 = (__int64)NtCurrentPeb()->SharedData + 555;
      else
        v31 = 2147353477LL;
      if ( (*(_BYTE *)v31 & 0x20) != 0 )
      {
        v34 = (__int64)v8;
        goto LABEL_45;
      }
    }
  }
  return (unsigned int)LoadedDllByNameLockHeld;
}
