/*
 * XREFs of ??_GCMILRefCountBase@@UEAAPEAXI@Z @ 0x1800EA190
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMILRefCountBase@@UEAA@XZ @ 0x18008698C (--1CMILRefCountBase@@UEAA@XZ.c)
 */

CMILRefCountBase *__fastcall CMILRefCountBase::`scalar deleting destructor'(CMILRefCountBase *this, char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CMILRefCountBase::~CMILRefCountBase(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
