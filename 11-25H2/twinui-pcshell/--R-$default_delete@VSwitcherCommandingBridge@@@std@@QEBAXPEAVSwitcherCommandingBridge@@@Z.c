/*
 * XREFs of ??R?$default_delete@VSwitcherCommandingBridge@@@std@@QEBAXPEAVSwitcherCommandingBridge@@@Z @ 0x18048F62C
 * Callers:
 *     ??1?$unique_ptr@VSwitcherCommandingBridge@@U?$default_delete@VSwitcherCommandingBridge@@@std@@@std@@QEAA@XZ @ 0x18048F348 (--1-$unique_ptr@VSwitcherCommandingBridge@@U-$default_delete@VSwitcherCommandingBridge@@@std@@@s.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SwitcherCommandingBridge@@QEAA@XZ @ 0x18048F368 (--1SwitcherCommandingBridge@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<SwitcherCommandingBridge>::operator()(__int64 a1, SwitcherCommandingBridge *a2)
{
  if ( a2 )
  {
    SwitcherCommandingBridge::~SwitcherCommandingBridge(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x30);
  }
}
