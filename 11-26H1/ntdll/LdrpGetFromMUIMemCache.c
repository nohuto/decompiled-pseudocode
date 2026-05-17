/*
 * XREFs of LdrpGetFromMUIMemCache @ 0x18002DC20
 * Callers:
 *     LdrIsResItemExist @ 0x18002C970 (LdrIsResItemExist.c)
 *     LdrpGetRcConfig @ 0x18002DE20 (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18002DF70 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180030230 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x1800A77A0 (LdrResGetRCConfig.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x18002D090 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x18004B7F0 (RtlpAcquireSRWLockSharedContended.c)
 */

_DWORD *__fastcall LdrpGetFromMUIMemCache(__int64 a1, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // si
  _DWORD *v7; // rdi
  char v8; // r12
  __int64 v9; // r13
  _QWORD *v10; // rdx
  _QWORD *SchedulerSharedDataSlot; // r8
  unsigned int i; // ecx
  signed __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  __int64 v17; // [rsp+28h] [rbp-40h] BYREF
  _DWORD *v18; // [rsp+30h] [rbp-38h]

  v4 = a4;
  v7 = 0LL;
  v8 = 0;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  v17 = 0LL;
  RtlImageNtHeaderEx(1LL, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v17);
  v9 = v17;
  if ( !v17 )
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
  v13 = _InterlockedCompareExchange64(&MuiCacheSWRLock, 17LL, 0LL);
  if ( v13 )
    RtlpAcquireSRWLockSharedContended(&MuiCacheSWRLock, v10, v13);
  v14 = AlternateResourceModuleCount - 1;
  while ( v14 >= 0 )
  {
    v15 = (__int64)v14 << 6;
    if ( *(_QWORD *)(v15 + AlternateResourceModules + 8) != a1 )
      goto LABEL_20;
    if ( *(_DWORD *)(v15 + AlternateResourceModules + 24) != *(_DWORD *)(v9 + 88) )
    {
      v8 = 1;
      break;
    }
    if ( (v4 & 8) != 0 )
    {
      if ( *(_QWORD *)(v15 + AlternateResourceModules + 16) )
      {
        _mm_lfence();
        v7 = *(_DWORD **)(v15 + AlternateResourceModules + 16);
        v18 = v7;
        if ( v7 != (_DWORD *)-1LL && v7 && *v7 != -20054323 )
        {
          v8 = 1;
          v7 = 0LL;
          v18 = 0LL;
        }
        break;
      }
LABEL_20:
      --v14;
    }
    else
    {
      if ( (v4 & 4) == 0 )
        goto LABEL_20;
      if ( a2 && *(_WORD *)(v15 + AlternateResourceModules) == a2 )
      {
        v7 = *(_DWORD **)(v15 + AlternateResourceModules + 32);
        v18 = v7;
        if ( a3 )
          *a3 = *(_QWORD *)(v15 + AlternateResourceModules + 48);
        break;
      }
      --v14;
    }
  }
  RtlReleaseSRWLockShared(&MuiCacheSWRLock);
  if ( v8 )
    LdrUnloadAlternateResourceModuleEx(a1, 0);
  return v7;
}
