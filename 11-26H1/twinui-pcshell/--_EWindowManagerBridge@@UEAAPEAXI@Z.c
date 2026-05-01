/*
 * XREFs of ??_EWindowManagerBridge@@UEAAPEAXI@Z @ 0x180413CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1WindowManagerBridge@@UEAA@XZ @ 0x180413460 (--1WindowManagerBridge@@UEAA@XZ.c)
 */

WindowManagerBridge *__fastcall WindowManagerBridge::`vector deleting destructor'(WindowManagerBridge *this, char a2)
{
  WindowManagerBridge::~WindowManagerBridge(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x128);
  return this;
}
