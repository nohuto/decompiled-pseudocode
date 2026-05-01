/*
 * XREFs of ??_ELockScreenDirectorServiceProviderImpl@@EEAAPEAXI@Z @ 0x18021E644
 * Callers:
 *     ??_ELockScreenDirectorServiceProviderImpl@@GDA@EAAPEAXI@Z @ 0x1803E6690 (--_ELockScreenDirectorServiceProviderImpl@@GDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1LockScreenDirectorServiceProviderImpl@@EEAA@XZ @ 0x18021E680 (--1LockScreenDirectorServiceProviderImpl@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

LockScreenDirectorServiceProviderImpl *__fastcall LockScreenDirectorServiceProviderImpl::`vector deleting destructor'(
        LockScreenDirectorServiceProviderImpl *this,
        char a2)
{
  LockScreenDirectorServiceProviderImpl::~LockScreenDirectorServiceProviderImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
