/*
 * XREFs of ??_EPenWorkspaceScreenCaptureBroker@@UEAAPEAXI@Z @ 0x1803E0170
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PenWorkspaceScreenCaptureBroker@@UEAA@XZ @ 0x1803E00D8 (--1PenWorkspaceScreenCaptureBroker@@UEAA@XZ.c)
 */

PenWorkspaceScreenCaptureBroker *__fastcall PenWorkspaceScreenCaptureBroker::`vector deleting destructor'(
        PenWorkspaceScreenCaptureBroker *this,
        char a2)
{
  PenWorkspaceScreenCaptureBroker::~PenWorkspaceScreenCaptureBroker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
