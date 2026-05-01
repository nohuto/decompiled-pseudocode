/*
 * XREFs of ??_GCImmersiveShellCreationBehavior@@EEAAPEAXI@Z @ 0x1803DBAD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CImmersiveShellCreationBehavior@@EEAA@XZ @ 0x1803CFE14 (--1CImmersiveShellCreationBehavior@@EEAA@XZ.c)
 */

CImmersiveShellCreationBehavior *__fastcall CImmersiveShellCreationBehavior::`scalar deleting destructor'(
        CImmersiveShellCreationBehavior *this,
        char a2)
{
  CImmersiveShellCreationBehavior::~CImmersiveShellCreationBehavior(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
