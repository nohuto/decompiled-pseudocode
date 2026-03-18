/*
 * XREFs of DrvCleanupAndDestroyMDEV @ 0x1400C9C24
 * Callers:
 *     CleanupGDI @ 0x1400805CC (CleanupGDI.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140028330 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140057724 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x1400C5278 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400C72D0 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400C7510 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     DrvDestroyMDEV @ 0x1400C96A0 (DrvDestroyMDEV.c)
 *     MultiUserCleanupDCs @ 0x1400C9D30 (MultiUserCleanupDCs.c)
 */

__int64 __fastcall DrvCleanupAndDestroyMDEV(__int64 *a1)
{
  __int64 v2; // rcx
  struct _ERESOURCE **v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rbp
  struct _ERESOURCE *v6; // rdi
  int v7; // r8d
  struct _GRETHREAD *v8; // rax
  __int64 v10; // rbx
  __int64 result; // rax
  int v12; // r8d

  MultiUserCleanupDCs();
  v3 = *(struct _ERESOURCE ***)(W32GetSessionState(v2) + 88);
  v4 = (__int64)&(*v3)[6];
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v4);
  v5 = (__int64)&(*v3)[11];
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v5);
  v6 = *v3 + 10;
  GreAcquireSemaphoreInternal(v6);
  GrepAcquireLockValidate<6>();
  DrvDestroyMDEV(a1);
  if ( v6 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Sprite", (int)v6, v7);
    v8 = GreGetCurrentThreadCrossSessionCheck();
    if ( v8 )
    {
      if ( (*((_BYTE *)v8 + 14))-- == 1 )
        *(_QWORD *)v8 &= ~0x40uLL;
    }
    GreReleaseSemaphoreSharedInternal(v6);
  }
  if ( v5 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v5,
      v7);
  v10 = (__int64)*v3;
  GreAcquireSemaphoreInternal(*v3);
  result = (__int64)GrepAcquireLockValidate<19>();
  if ( v10 )
    result = GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
               (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
               v10,
               v12);
  if ( v4 )
    return GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
             (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
             v4,
             v12);
  return result;
}
