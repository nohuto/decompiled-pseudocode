/*
 * XREFs of ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1400A6C24
 * Callers:
 *     GreZorderSprite @ 0x14001DFD4 (GreZorderSprite.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x14009CB84 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     vCleanupUMWindowlessSprite @ 0x1400A4F50 (vCleanupUMWindowlessSprite.c)
 *     GreHintSpriteShape @ 0x1400A5AB4 (GreHintSpriteShape.c)
 *     GreDwmNotifySpriteMonitorChange @ 0x1400A67DC (GreDwmNotifySpriteMonitorChange.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x140072750 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 */

DWMSPRITELOCK *__fastcall DWMSPRITELOCK::DWMSPRITELOCK(DWMSPRITELOCK *this, struct PDEVOBJ *a2, int a3, int a4)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx

  *(_DWORD *)this = 0;
  if ( !a3 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(this);
    if ( CurrentThreadWin32Thread )
      v7 = *CurrentThreadWin32Thread;
    else
      v7 = 0LL;
    v8 = v7 + 8;
    v9 = -v7;
    if ( (v8 & -(__int64)(v9 != 0)) == 0
      || a4 == 1
      || !*(_DWORD *)((v8 & -(__int64)(v9 != 0)) + 0x154) && !*(_DWORD *)((v8 & -(__int64)(v9 != 0)) + 0x158) )
    {
      v10 = *(_QWORD *)Gre::Base::Globals((Gre::Base *)(v8 & -(__int64)(v9 != 0)));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"Sprite", v10 + 1040, 0LL);
      GreAcquireSemaphoreInternal((HSEMAPHORE)(v10 + 1040));
      GrepAcquireLockValidate<6>();
      *(_DWORD *)this = 1;
    }
  }
  return this;
}
