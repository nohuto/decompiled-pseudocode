/*
 * XREFs of LdrpGetFromMUIMemCache @ 0x180018D20
 * Callers:
 *     LdrIsResItemExist @ 0x180017A70 (LdrIsResItemExist.c)
 *     LdrpGetRcConfig @ 0x180018F20 (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180019070 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001B390 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x1800A68D0 (LdrResGetRCConfig.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x180018190 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180035D70 (RtlpAcquireSRWLockSharedContended.c)
 */

_DWORD *__fastcall LdrpGetFromMUIMemCache(unsigned __int64 DllHandle, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // si
  _DWORD *v7; // rdi
  char v8; // r12
  PIMAGE_NT_HEADERS v9; // r13
  _QWORD *v10; // rdx
  _QWORD *SchedulerSharedDataSlot; // r8
  unsigned int i; // ecx
  int v13; // edx
  __int64 v14; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+28h] [rbp-40h] BYREF
  _DWORD *v17; // [rsp+30h] [rbp-38h]

  v4 = a4;
  v7 = 0LL;
  v8 = 0;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, (PVOID)(DllHandle & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &OutHeaders);
  v9 = OutHeaders;
  if ( !OutHeaders )
    return 0LL;
  if ( a3 )
    *a3 = 0LL;
  v10 = 0LL;
  SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      if ( !SchedulerSharedDataSlot[i] )
      {
        v10 = &SchedulerSharedDataSlot[i];
        break;
      }
    }
  }
  if ( v10 )
    *v10 = &MuiCacheSWRLock;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&MuiCacheSWRLock, 17LL, 0LL) )
    RtlpAcquireSRWLockSharedContended(&MuiCacheSWRLock);
  v13 = AlternateResourceModuleCount - 1;
  while ( v13 >= 0 )
  {
    v14 = (__int64)v13 << 6;
    if ( *(_QWORD *)((char *)AlternateResourceModules + v14 + 8) != DllHandle )
      goto LABEL_20;
    if ( *(_DWORD *)((char *)AlternateResourceModules + v14 + 24) != v9->OptionalHeader.CheckSum )
    {
      v8 = 1;
      break;
    }
    if ( (v4 & 8) != 0 )
    {
      if ( *(_QWORD *)((char *)AlternateResourceModules + v14 + 16) )
      {
        _mm_lfence();
        v7 = *(_DWORD **)((char *)AlternateResourceModules + v14 + 16);
        v17 = v7;
        if ( v7 != (_DWORD *)-1LL && v7 && *v7 != -20054323 )
        {
          v8 = 1;
          v7 = 0LL;
          v17 = 0LL;
        }
        break;
      }
LABEL_20:
      --v13;
    }
    else
    {
      if ( (v4 & 4) == 0 )
        goto LABEL_20;
      if ( a2 && *(_WORD *)((char *)AlternateResourceModules + v14) == a2 )
      {
        v7 = *(_DWORD **)((char *)AlternateResourceModules + v14 + 32);
        v17 = v7;
        if ( a3 )
          *a3 = *(_QWORD *)((char *)AlternateResourceModules + v14 + 48);
        break;
      }
      --v13;
    }
  }
  RtlReleaseSRWLockShared(&MuiCacheSWRLock);
  if ( v8 )
    LdrUnloadAlternateResourceModuleEx((PVOID)DllHandle, 0);
  return v7;
}
