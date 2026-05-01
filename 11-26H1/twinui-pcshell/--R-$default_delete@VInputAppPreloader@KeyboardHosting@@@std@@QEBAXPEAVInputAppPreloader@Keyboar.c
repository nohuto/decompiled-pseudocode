/*
 * XREFs of ??R?$default_delete@VInputAppPreloader@KeyboardHosting@@@std@@QEBAXPEAVInputAppPreloader@KeyboardHosting@@@Z @ 0x1801D5EBC
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18024C550 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ??1?$unique_ptr@VInputAppPreloader@KeyboardHosting@@U?$default_delete@VInputAppPreloader@KeyboardHosting@@@std@@@std@@QEAA@XZ @ 0x1802C6898 (--1-$unique_ptr@VInputAppPreloader@KeyboardHosting@@U-$default_delete@VInputAppPreloader@Keyboar.c)
 *     ?ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z @ 0x1804704F0 (-ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ??1InputAppPreloader@KeyboardHosting@@QEAA@XZ @ 0x1801D5EEC (--1InputAppPreloader@KeyboardHosting@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
