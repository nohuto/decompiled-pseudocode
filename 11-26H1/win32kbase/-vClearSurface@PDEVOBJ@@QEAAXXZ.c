/*
 * XREFs of ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x140190BA4
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1401F4F1C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140028330 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14003BBF4 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1400C65C4 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1400C6D34 (--0DLODCOBJ@@QEAA@XZ.c)
 */

void __fastcall PDEVOBJ::vClearSurface(PDEVOBJ *this)
{
  struct _ERESOURCE **v2; // rbx
  struct _ERESOURCE *v3; // rbx
  int v4; // r8d
  _BYTE v5[32]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v6[136]; // [rsp+40h] [rbp-88h] BYREF

  v2 = *(struct _ERESOURCE ***)(W32GetSessionState(this) + 88);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v6);
  DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v5, this);
  v3 = *v2;
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<19>();
  *(_QWORD *)(*(_QWORD *)this + 2544LL) = 0LL;
  if ( v3 )
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      (__int64)v3,
      v4);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v5);
}
