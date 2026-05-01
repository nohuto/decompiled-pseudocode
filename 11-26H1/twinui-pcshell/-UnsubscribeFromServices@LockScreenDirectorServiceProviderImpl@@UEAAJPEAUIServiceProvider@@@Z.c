/*
 * XREFs of ?UnsubscribeFromServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801CA6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ @ 0x1801CA6CC (-StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ.c)
 */

__int64 __fastcall LockScreenDirectorServiceProviderImpl::UnsubscribeFromServices(
        LockScreenDirectorServiceProviderImpl *this,
        struct IServiceProvider *a2)
{
  LockScreenDirectorServiceProviderImpl::StopDirectorThread((LockScreenDirectorServiceProviderImpl *)((char *)this - 48));
  return 0LL;
}
