/*
 * XREFs of ??1?$unique_ptr@UINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@U?$default_delete@UINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@@wistd@@@wistd@@QEAA@XZ @ 0x1802C25B4
 * Callers:
 *     _LockScreenDirectorServiceProviderImpl::s_RunDirectorThread_::_1_::dtor$0 @ 0x1806E8D12 (_LockScreenDirectorServiceProviderImpl--s_RunDirectorThread_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall wistd::unique_ptr<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA,wistd::default_delete<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA>>::~unique_ptr<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA,wistd::default_delete<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA>>(
        __int64 a1)
{
  return wistd::unique_ptr<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA,wistd::default_delete<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA>>::reset(a1);
}
