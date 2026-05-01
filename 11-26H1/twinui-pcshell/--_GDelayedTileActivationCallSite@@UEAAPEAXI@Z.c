/*
 * XREFs of ??_GDelayedTileActivationCallSite@@UEAAPEAXI@Z @ 0x18022F440
 * Callers:
 *     <none>
 * Callees:
 *     ??1CopyToViewValueSetBase@@QEAA@XZ @ 0x1802BB970 (--1CopyToViewValueSetBase@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

DelayedTileActivationCallSite *__fastcall DelayedTileActivationCallSite::`scalar deleting destructor'(
        DelayedTileActivationCallSite *this,
        char a2)
{
  *((_DWORD *)this + 27) = -1073741823;
  CopyToViewValueSetBase::~CopyToViewValueSetBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x90);
  return this;
}
