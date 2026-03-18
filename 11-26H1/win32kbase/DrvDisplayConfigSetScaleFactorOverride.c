/*
 * XREFs of DrvDisplayConfigSetScaleFactorOverride @ 0x1401F76A0
 * Callers:
 *     DrvDisplayConfigSetDeviceInfo @ 0x1401F6B40 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140028330 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     UserNotifyUniversalScaleFactorChanged @ 0x1401EA874 (UserNotifyUniversalScaleFactorChanged.c)
 *     ?SetScaleFactorOverride@@YAJAEAU_LUID@@IHPEAU_DPI_INFORMATION@@@Z @ 0x1401F6448 (-SetScaleFactorOverride@@YAJAEAU_LUID@@IHPEAU_DPI_INFORMATION@@@Z.c)
 */

__int64 __fastcall DrvDisplayConfigSetScaleFactorOverride(_DWORD *a1, _DWORD *a2)
{
  int v4; // esi
  struct _ERESOURCE *v5; // rbx
  __int64 v6; // rcx
  struct _LUID *v7; // rcx
  __int64 v8; // r8
  __int64 *i; // rdi
  struct _LUID *v10; // rdx
  DWORD LowPart; // eax
  struct _DPI_INFORMATION *v12; // r9
  int v13; // eax
  __int64 v14; // rdx

  v4 = -1073741811;
  v5 = **(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  GreAcquireSemaphoreInternal(v5);
  GrepAcquireLockValidate<19>();
  v8 = *(_QWORD *)(W32GetSessionState(v6) + 88);
  for ( i = *(__int64 **)(v8 + 3952); i; i = (__int64 *)*i )
  {
    if ( (i[5] & 0x401) == 1 )
    {
      v10 = (struct _LUID *)i[321];
      if ( v10 )
      {
        if ( v10 != (struct _LUID *)-4LL )
        {
          LowPart = v10[20].LowPart;
          if ( (LowPart & 0x800000) != 0 )
          {
            v12 = (struct _DPI_INFORMATION *)(i + 305);
            if ( a2 )
            {
              if ( *a2 )
              {
                v13 = SetScaleFactorOverride(v10 + 30, v10[31].LowPart, a1[5], v12);
                v4 = v13;
                if ( v13 < 0 )
                {
                  WdLogSingleEntry5(
                    2LL,
                    v13,
                    (int)a1[5],
                    *(int *)(i[321] + 244),
                    *(unsigned int *)(i[321] + 240),
                    *(unsigned int *)(i[321] + 248));
                  WdLogGlobalForLineNumber = 19126;
                }
              }
              else if ( (LowPart & 4) != 0 )
              {
                v7 = v10 + 30;
                v14 = v10[31].LowPart;
LABEL_13:
                v4 = SetScaleFactorOverride(v7, v14, a1[5], v12);
                break;
              }
            }
            else
            {
              v7 = v10 + 30;
              if ( a1[2] == v10[30].LowPart && a1[3] == v10[30].HighPart )
              {
                v14 = v10[31].LowPart;
                if ( a1[4] == (_DWORD)v14 )
                  goto LABEL_13;
              }
            }
          }
        }
      }
    }
  }
  if ( v5 )
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      (__int64)v5,
      v8);
  if ( v4 >= 0 )
    UserNotifyUniversalScaleFactorChanged((__int64)v7);
  return (unsigned int)v4;
}
