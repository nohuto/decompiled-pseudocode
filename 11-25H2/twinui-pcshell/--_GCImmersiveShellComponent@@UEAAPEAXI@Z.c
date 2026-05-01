/*
 * XREFs of ??_GCImmersiveShellComponent@@UEAAPEAXI@Z @ 0x1802E14F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801B3648 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CImmersiveShellComponent *__fastcall CImmersiveShellComponent::`scalar deleting destructor'(
        CImmersiveShellComponent *this,
        char a2)
{
  CImmersiveShellComponent::~CImmersiveShellComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
