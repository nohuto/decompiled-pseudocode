/*
 * XREFs of ??1?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@QEAA@XZ @ 0x180186AAC
 * Callers:
 *     _NotificationDispatcher::WndProc_::_1_::dtor$0 @ 0x1806D2265 (_NotificationDispatcher--WndProc_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<NotificationDispatcher>::~ComPtr<NotificationDispatcher>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // r8
  signed __int32 v2; // edx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    do
      v2 = *((_DWORD *)v1 + 9);
    while ( v2 != 0x7FFFFFFF && v2 != _InterlockedCompareExchange(v1 + 9, v2 - 1, v2) );
    result = (unsigned int)(v2 - 1);
    if ( v2 == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 72LL))(v1, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
