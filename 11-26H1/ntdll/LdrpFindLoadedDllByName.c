/*
 * XREFs of LdrpFindLoadedDllByName @ 0x18003D4C0
 * Callers:
 *     LdrpFindLoadedDll @ 0x18003BC00 (LdrpFindLoadedDll.c)
 *     LdrpFastpthReloadedDll @ 0x18003D2C0 (LdrpFastpthReloadedDll.c)
 *     LdrGetDllHandleByName @ 0x18007BCD0 (LdrGetDllHandleByName.c)
 *     LdrpFindLoadedDllInternal @ 0x18007CA10 (LdrpFindLoadedDllInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800B8F40 (LdrpFindOrPrepareLoadingModule.c)
 *     AVrfInitializeVerifier @ 0x180115BD0 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180035D70 (RtlpAcquireSRWLockSharedContended.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x180079850 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpHashUnicodeString @ 0x180079960 (LdrpHashUnicodeString.c)
 *     LdrpLogEtwEvent @ 0x18007B5D8 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpFindLoadedDllByName(
        PUNICODE_STRING String1,
        PUNICODE_STRING a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5)
{
  _UNICODE_STRING *v7; // rsi
  unsigned __int16 Length; // r11
  unsigned __int16 v9; // r10
  wchar_t *Buffer; // rdx
  wchar_t v11; // cx
  wchar_t *v12; // rax
  __int64 v13; // rcx
  __int16 v14; // r10
  wchar_t *v15; // rcx
  int v16; // eax
  char *v17; // r9
  int v18; // ebx
  _QWORD *SchedulerSharedDataSlot; // r8
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  volatile signed __int64 *v22; // rax
  int LoadedDllByNameLockHeld; // ebx
  _DWORD *SharedData; // rcx
  __int64 v25; // rcx
  _DWORD *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  _DWORD *v29; // rcx
  __int64 v30; // rcx
  int v31; // r9d
  PUNICODE_STRING v33; // [rsp+20h] [rbp-38h]
  __int128 v34; // [rsp+30h] [rbp-28h] BYREF

  v7 = String1;
  v34 = 0LL;
  if ( !String1 )
  {
    Length = a2->Length;
    v9 = a2->Length >> 1;
    if ( v9 )
    {
      Buffer = a2->Buffer;
      do
      {
        v11 = Buffer[v9 - 1];
        if ( v11 == 92 )
          break;
        if ( v11 == 47 )
          break;
        --v9;
      }
      while ( v9 );
    }
    v12 = a2->Buffer;
    v7 = (_UNICODE_STRING *)&v34;
    v13 = v9;
    v14 = 2 * v9;
    LOWORD(v34) = Length - v14;
    v15 = &v12[v13];
    LOWORD(v12) = a2->MaximumLength - v14;
    *((_QWORD *)&v34 + 1) = v15;
    WORD1(v34) = (_WORD)v12;
  }
  v16 = LdrpHashUnicodeString(v7);
  v17 = 0LL;
  v18 = v16;
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
        goto LABEL_15;
    }
    v17 = (char *)&SchedulerSharedDataSlot[v20];
    if ( v17 )
      *(_QWORD *)v17 = &LdrpModuleDatatableLock;
  }
LABEL_15:
  v22 = (volatile signed __int64 *)_InterlockedCompareExchange64(
                                     (volatile signed __int64 *)&LdrpModuleDatatableLock,
                                     17LL,
                                     0LL);
  if ( v22 )
    RtlpAcquireSRWLockSharedContended(
      (volatile signed __int64 *)&LdrpModuleDatatableLock,
      (unsigned __int64)v17,
      v22,
      v17);
  LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(v7, a2, v18);
  if ( LoadedDllByNameLockHeld >= 0 && a5 )
    *a5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 152LL) + 56LL);
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
  SharedData = NtCurrentPeb()->SharedData;
  if ( a2 )
  {
    if ( SharedData && *SharedData )
      v25 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v25 = 2147353476LL;
    if ( *(_BYTE *)v25 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v26 = NtCurrentPeb()->SharedData;
      if ( v26 && *v26 )
        v27 = (__int64)NtCurrentPeb()->SharedData + 555;
      else
        v27 = 2147353477LL;
      if ( (*(_BYTE *)v27 & 0x20) != 0 )
      {
        v33 = a2;
LABEL_45:
        v31 = 0;
        if ( LoadedDllByNameLockHeld < 0 )
          v31 = 3;
        LdrpLogEtwEvent(5280, 0, 0, v31, (__int64)v33, 0LL);
      }
    }
  }
  else
  {
    if ( SharedData && *SharedData )
      v28 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v28 = 2147353476LL;
    if ( *(_BYTE *)v28 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v29 = NtCurrentPeb()->SharedData;
      if ( v29 && *v29 )
        v30 = (__int64)NtCurrentPeb()->SharedData + 555;
      else
        v30 = 2147353477LL;
      if ( (*(_BYTE *)v30 & 0x20) != 0 )
      {
        v33 = v7;
        goto LABEL_45;
      }
    }
  }
  return (unsigned int)LoadedDllByNameLockHeld;
}
