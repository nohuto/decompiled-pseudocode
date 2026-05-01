/*
 * XREFs of ??_EImmersiveShellStressTool@@UEAAPEAXI@Z @ 0x18018DBEC
 * Callers:
 *     ??_EImmersiveShellStressTool@@WBI@EAAPEAXI@Z @ 0x1803E6010 (--_EImmersiveShellStressTool@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1ImmersiveShellStressTool@@UEAA@XZ @ 0x18018DC2C (--1ImmersiveShellStressTool@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ImmersiveShellStressTool *__fastcall ImmersiveShellStressTool::`vector deleting destructor'(
        ImmersiveShellStressTool *this,
        char a2)
{
  ImmersiveShellStressTool::~ImmersiveShellStressTool(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x78);
  return this;
}
