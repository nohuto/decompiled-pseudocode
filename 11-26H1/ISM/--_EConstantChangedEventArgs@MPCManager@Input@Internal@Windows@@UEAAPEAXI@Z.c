/*
 * XREFs of ??_EConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAPEAXI@Z @ 0x180170780
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAA@XZ @ 0x18016FA64 (--1ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::Input::MPCManager::ConstantChangedEventArgs *__fastcall Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::`vector deleting destructor'(
        Windows::Internal::Input::MPCManager::ConstantChangedEventArgs *this,
        char a2)
{
  Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::~ConstantChangedEventArgs(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
