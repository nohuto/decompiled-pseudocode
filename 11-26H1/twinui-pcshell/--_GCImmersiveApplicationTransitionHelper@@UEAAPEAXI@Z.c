/*
 * XREFs of ??_GCImmersiveApplicationTransitionHelper@@UEAAPEAXI@Z @ 0x1802EDF10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveApplicationTransitionHelper@@UEAA@XZ @ 0x1802A8BE0 (--1CImmersiveApplicationTransitionHelper@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CImmersiveApplicationTransitionHelper *__fastcall CImmersiveApplicationTransitionHelper::`scalar deleting destructor'(
        CImmersiveApplicationTransitionHelper *this,
        char a2)
{
  CImmersiveApplicationTransitionHelper::~CImmersiveApplicationTransitionHelper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
