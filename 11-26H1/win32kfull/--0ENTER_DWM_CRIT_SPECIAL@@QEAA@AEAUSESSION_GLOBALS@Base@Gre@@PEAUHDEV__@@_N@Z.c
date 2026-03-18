/*
 * XREFs of ??0ENTER_DWM_CRIT_SPECIAL@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@_N@Z @ 0x140074718
 * Callers:
 *     GrePtInSprite @ 0x14008CE2C (GrePtInSprite.c)
 *     GreSetLWContentOwner @ 0x140333598 (GreSetLWContentOwner.c)
 *     GreDwmGetRedirectionStyle @ 0x140344F94 (GreDwmGetRedirectionStyle.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x140072750 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 */

ENTER_DWM_CRIT_SPECIAL *__fastcall ENTER_DWM_CRIT_SPECIAL::ENTER_DWM_CRIT_SPECIAL(
        ENTER_DWM_CRIT_SPECIAL *this,
        struct Gre::Base::SESSION_GLOBALS *a2,
        HDEV a3,
        char a4)
{
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v8; // rcx
  Gre::Base *v9; // rcx
  __int64 v10; // rbx
  HSEMAPHORE v11; // rcx

  *(_QWORD *)this = a3;
  *((_DWORD *)this + 2) = 0;
  if ( !a4 )
  {
    CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(this);
    v8 = CurrentThreadWin32Thread ? *CurrentThreadWin32Thread : 0LL;
    v9 = (Gre::Base *)((v8 + 8) & -(__int64)(v8 != 0));
    if ( !v9 || !*((_DWORD *)v9 + 85) && !*((_DWORD *)v9 + 86) )
    {
      v10 = *(_QWORD *)Gre::Base::Globals(v9);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"Sprite", v10 + 1040, 0LL);
      GreAcquireSemaphoreInternal((HSEMAPHORE)(v10 + 1040));
      GrepAcquireLockValidate<6>();
      *((_DWORD *)this + 2) = 1;
    }
  }
  v11 = (HSEMAPHORE)(*(_QWORD *)a2 + 520LL);
  *((_BYTE *)this + 24) = a4;
  *((_QWORD *)this + 2) = v11;
  if ( a4 )
    GreAcquireSemaphoreSharedInternal(v11);
  else
    GreAcquireSemaphoreInternal(v11);
  GrepAcquireLockValidate<7>();
  return this;
}
