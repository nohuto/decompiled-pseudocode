/*
 * XREFs of ??R?$default_delete@VInputAppPreloader@KeyboardHosting@@@std@@QEBAXPEAVInputAppPreloader@KeyboardHosting@@@Z @ 0x180220194
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180256E20 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ??1?$unique_ptr@VInputAppPreloader@KeyboardHosting@@U?$default_delete@VInputAppPreloader@KeyboardHosting@@@std@@@std@@QEAA@XZ @ 0x1802CF518 (--1-$unique_ptr@VInputAppPreloader@KeyboardHosting@@U-$default_delete@VInputAppPreloader@Keyboar.c)
 *     ?ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z @ 0x180464760 (-ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ??1InputAppPreloader@KeyboardHosting@@QEAA@XZ @ 0x1802201C4 (--1InputAppPreloader@KeyboardHosting@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::default_delete<KeyboardHosting::InputAppPreloader>::operator()(
        __int64 a1,
        KeyboardHosting::InputAppPreloader *a2)
{
  if ( a2 )
  {
    KeyboardHosting::InputAppPreloader::~InputAppPreloader(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x28);
  }
}
