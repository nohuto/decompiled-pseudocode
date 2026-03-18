/*
 * XREFs of DrvCleanupAndDestroyMDEV @ 0x14006E3D0
 * Callers:
 *     CleanupGDI @ 0x140136A50 (CleanupGDI.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044EE4 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046C24 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x14004E320 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     DrvDestroyMDEV @ 0x14006E2AC (DrvDestroyMDEV.c)
 *     MultiUserCleanupDCs @ 0x14006F1D8 (MultiUserCleanupDCs.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400735C4 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140087D5C (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140088EF8 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall DrvCleanupAndDestroyMDEV(__int64 *a1)
{
  __int64 v2; // rcx
  struct _ERESOURCE **v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rsi
  struct _ERESOURCE *v6; // rbx
  struct _GRETHREAD *v7; // rax
  __int64 v9; // rbx
  __int64 result; // rax
  HSEMAPHORE v11; // [rsp+38h] [rbp+10h] BYREF

  MultiUserCleanupDCs();
  v3 = *(struct _ERESOURCE ***)(W32GetSessionState(v2) + 88);
  v4 = (__int64)&(*v3)[6];
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v4);
  v5 = (__int64)&(*v3)[11];
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v5);
  SEMOBJ<6>::SEMOBJ<6>(&v11, v3);
  DrvDestroyMDEV(a1);
  v6 = (struct _ERESOURCE *)v11;
  if ( v11 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Sprite", (int)v11);
    v7 = GreGetCurrentThreadCrossSessionCheck();
    if ( v7 )
    {
      if ( (*((_BYTE *)v7 + 14))-- == 1 )
        *(_QWORD *)v7 &= ~0x40uLL;
    }
    GreReleaseSemaphoreSharedInternal(v6);
  }
  if ( v5 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v5);
  v9 = (__int64)*v3;
  GreAcquireSemaphoreInternal(*v3);
  result = GrepAcquireLockValidate<19>();
  if ( v9 )
    result = GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
               (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
               v9);
  if ( v4 )
    return GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
             (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
             v4);
  return result;
}
