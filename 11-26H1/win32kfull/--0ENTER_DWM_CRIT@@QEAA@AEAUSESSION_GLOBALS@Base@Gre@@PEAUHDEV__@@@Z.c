/*
 * XREFs of ??0ENTER_DWM_CRIT@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@@Z @ 0x1400BBF54
 * Callers:
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x1403442D4 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400BC8B8 (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

ENTER_DWM_CRIT *__fastcall ENTER_DWM_CRIT::ENTER_DWM_CRIT(
        ENTER_DWM_CRIT *this,
        struct Gre::Base::SESSION_GLOBALS *a2,
        HDEV a3)
{
  struct _GRETHREAD *CurrentThread; // rax
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // rax
  HSEMAPHORE v8; // rcx

  *(_QWORD *)this = a3;
  *((_DWORD *)this + 2) = 0;
  CurrentThread = GreGetCurrentThread();
  if ( !CurrentThread || !*((_DWORD *)CurrentThread + 85) && !*((_DWORD *)CurrentThread + 86) )
  {
    v7 = Gre::Base::Globals(v6);
    GreAcquireSemaphore<6,>(v7);
    *((_DWORD *)this + 2) = 1;
  }
  v8 = (HSEMAPHORE)(*(_QWORD *)a2 + 520LL);
  *((_BYTE *)this + 24) = 0;
  *((_QWORD *)this + 2) = v8;
  GreAcquireSemaphoreInternal(v8);
  GrepAcquireLockValidate<7>();
  return this;
}
