/*
 * XREFs of ??1DWMSPRITELOCK@@QEAA@XZ @ 0x140038CA0
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1400384E0 (GreUpdateSpriteVisRgn.c)
 * Callees:
 *     ??$GrepReleaseLockValidate@$05@@YAXXZ @ 0x1400726A4 (--$GrepReleaseLockValidate@$05@@YAXXZ.c)
 */

void __fastcall DWMSPRITELOCK::~DWMSPRITELOCK(DWMSPRITELOCK *this)
{
  __int64 v1; // rbx

  if ( *(_DWORD *)this )
  {
    v1 = *(_QWORD *)Gre::Base::Globals(this);
    EtwTraceGreLockReleaseSemaphore(L"Sprite", v1 + 1040);
    GrepReleaseLockValidate<6>();
    GreReleaseSemaphoreExclusiveInternal((HSEMAPHORE)(v1 + 1040));
  }
}
