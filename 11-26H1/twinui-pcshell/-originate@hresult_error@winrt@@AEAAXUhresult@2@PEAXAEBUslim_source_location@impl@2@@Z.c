/*
 * XREFs of ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAXAEBUslim_source_location@impl@2@@Z @ 0x1802D793C
 * Callers:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@AEBUslim_source_location@impl@1@@Z @ 0x1802D4BBC (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802D87F0 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@im.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1803179C8 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180026FEC (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     GetErrorInfo_0 @ 0x1802D4187 (GetErrorInfo_0.c)
 *     RoOriginateLanguageException_0 @ 0x1802D41A5 (RoOriginateLanguageException_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::hresult_error::originate(__int64 a1, int a2, __int64 a3, unsigned int *a4)
{
  __int64 result; // rax
  IErrorInfo *pperrinfo[2]; // [rsp+30h] [rbp-10h] BYREF
  void *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v10; // [rsp+50h] [rbp+10h] BYREF

  RoOriginateLanguageException_0();
  if ( winrt_throw_hresult_handler )
    winrt_throw_hresult_handler(*a4, *((_QWORD *)a4 + 1), *((_QWORD *)a4 + 2), retaddr, a2);
  pperrinfo[0] = 0LL;
  GetErrorInfo_0(0, pperrinfo);
  v10 = 0LL;
  if ( pperrinfo[0] )
    ((void (__fastcall *)(IErrorInfo *, void *, __int64 *))pperrinfo[0]->lpVtbl->QueryInterface)(
      pperrinfo[0],
      &winrt::impl::guid_v<winrt::impl::IRestrictedErrorInfo>,
      &v10);
  result = (__int64)winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)(a1 + 16), &v10);
  if ( v10 )
    result = winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
  if ( pperrinfo[0] )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)pperrinfo);
  return result;
}
