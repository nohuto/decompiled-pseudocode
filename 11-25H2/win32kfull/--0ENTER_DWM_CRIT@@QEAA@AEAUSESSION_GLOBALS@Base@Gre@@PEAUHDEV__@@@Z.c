/*
 * XREFs of ??0ENTER_DWM_CRIT@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@@Z @ 0x14019F520
 * Callers:
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x140321FE8 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B040 (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14001B08C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 */

ENTER_DWM_CRIT *__fastcall ENTER_DWM_CRIT::ENTER_DWM_CRIT(
        ENTER_DWM_CRIT *this,
        struct Gre::Base::SESSION_GLOBALS *a2,
        HDEV a3)
{
  struct _GRETHREAD *CurrentThread; // rax
  Gre::Base *v6; // rcx
  __int64 *v7; // rax
  HSEMAPHORE v8; // rcx

  *(_QWORD *)this = a3;
  *((_DWORD *)this + 2) = 0;
  CurrentThread = GreGetCurrentThread((__int64)this, (__int64)a2);
  if ( !CurrentThread || !*((_DWORD *)CurrentThread + 87) && !*((_DWORD *)CurrentThread + 88) )
  {
    v7 = (__int64 *)Gre::Base::Globals(v6);
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
