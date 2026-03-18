/*
 * XREFs of DrvDisplayConfigGetScaleFactorOverrides @ 0x1401B9BA0
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400FB88C (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     EngAcquireSemaphoreShared @ 0x14001C5E0 (EngAcquireSemaphoreShared.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140028330 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall DrvDisplayConfigGetScaleFactorOverrides(__int64 a1, int a2)
{
  HSEMAPHORE v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *i; // r9
  _DWORD *v8; // rcx
  int v9; // eax
  unsigned int v10; // edi

  v4 = **(HSEMAPHORE **)(W32GetSessionState(a1) + 88);
  EngAcquireSemaphoreShared(v4);
  GrepAcquireLockValidate<19>();
  v6 = *(_QWORD *)(W32GetSessionState(v5) + 88);
  for ( i = *(__int64 **)(v6 + 3952); i; i = (__int64 *)*i )
  {
    if ( (i[5] & 0x401) == 1 )
    {
      v8 = (_DWORD *)i[321];
      if ( v8 )
      {
        if ( v8 != (_DWORD *)-4LL )
        {
          v9 = v8[40];
          if ( (v9 & 0x800000) != 0 )
          {
            if ( a2 )
            {
              if ( (v9 & 4) != 0 )
                goto LABEL_9;
            }
            else if ( *(_DWORD *)(a1 + 8) == v8[60] && *(_DWORD *)(a1 + 12) == v8[61] && *(_DWORD *)(a1 + 16) == v8[62] )
            {
LABEL_9:
              *(_QWORD *)(a1 + 20) = i[315];
              *(_DWORD *)(a1 + 28) = *((_DWORD *)i + 632);
              break;
            }
          }
        }
      }
    }
  }
  v10 = i == 0LL ? 0xC000000D : 0;
  GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    (__int64)v4,
    v6);
  return v10;
}
