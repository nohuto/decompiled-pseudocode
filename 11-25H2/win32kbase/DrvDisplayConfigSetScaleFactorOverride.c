/*
 * XREFs of DrvDisplayConfigSetScaleFactorOverride @ 0x1401CDE60
 * Callers:
 *     DrvDisplayConfigSetDeviceInfo @ 0x1401CD2F0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046C24 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14004E2D4 (--$GreAcquireSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     UserNotifyUniversalScaleFactorChanged @ 0x1401C1C34 (UserNotifyUniversalScaleFactorChanged.c)
 *     ?SetScaleFactorOverride@@YAJAEAU_LUID@@IHPEAU_DPI_INFORMATION@@@Z @ 0x1401CCB4C (-SetScaleFactorOverride@@YAJAEAU_LUID@@IHPEAU_DPI_INFORMATION@@@Z.c)
 */

__int64 __fastcall DrvDisplayConfigSetScaleFactorOverride(_DWORD *a1, _DWORD *a2)
{
  int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 *i; // rdi
  struct _LUID *v8; // rdx
  DWORD LowPart; // eax
  struct _DPI_INFORMATION *v10; // r9
  int v11; // eax
  struct _LUID *v12; // rcx
  unsigned int v13; // edx

  v4 = -1073741811;
  v5 = **(_QWORD **)(W32GetSessionState(a1) + 88);
  GreAcquireSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v5);
  for ( i = *(__int64 **)(*(_QWORD *)(W32GetSessionState(v6) + 88) + 3848LL); i; i = (__int64 *)*i )
  {
    if ( (i[5] & 0x401) == 1 )
    {
      v8 = (struct _LUID *)i[321];
      if ( ((unsigned __int64)&v8->HighPart & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      {
        LowPart = v8[20].LowPart;
        if ( (LowPart & 0x800000) != 0 )
        {
          v10 = (struct _DPI_INFORMATION *)(i + 305);
          if ( a2 )
          {
            if ( *a2 )
            {
              v11 = SetScaleFactorOverride(v8 + 30, v8[31].LowPart, a1[5], v10);
              v4 = v11;
              if ( v11 < 0 )
              {
                WdLogSingleEntry5(
                  2LL,
                  v11,
                  (int)a1[5],
                  *(int *)(i[321] + 244),
                  *(unsigned int *)(i[321] + 240),
                  *(unsigned int *)(i[321] + 248));
                WdLogGlobalForLineNumber = 19292;
              }
            }
            else if ( (LowPart & 4) != 0 )
            {
              v12 = v8 + 30;
              v13 = v8[31].LowPart;
LABEL_12:
              v4 = SetScaleFactorOverride(v12, v13, a1[5], v10);
              break;
            }
          }
          else
          {
            v12 = v8 + 30;
            if ( a1[2] == v8[30].LowPart && a1[3] == v8[30].HighPart )
            {
              v13 = v8[31].LowPart;
              if ( a1[4] == v13 )
                goto LABEL_12;
            }
          }
        }
      }
    }
  }
  if ( v5 )
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v5);
  if ( v4 >= 0 )
    UserNotifyUniversalScaleFactorChanged();
  return (unsigned int)v4;
}
