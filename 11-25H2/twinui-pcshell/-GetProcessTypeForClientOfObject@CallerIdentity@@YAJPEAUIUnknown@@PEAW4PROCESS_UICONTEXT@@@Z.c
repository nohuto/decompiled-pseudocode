/*
 * XREFs of ?GetProcessTypeForClientOfObject@CallerIdentity@@YAJPEAUIUnknown@@PEAW4PROCESS_UICONTEXT@@@Z @ 0x1802E84A0
 * Callers:
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x1801C967C (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B029C (--1-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details.c)
 *     ?GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@@Z @ 0x1802969BC (-GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV-$unique_any_t@V-$unique_s.c)
 */

__int64 __fastcall CallerIdentity::GetProcessTypeForClientOfObject(
        CallerIdentity *this,
        struct IUnknown *a2,
        enum PROCESS_UICONTEXT *a3)
{
  int v3; // ebx
  int ProcessHandleForClientOfObject_nothrow; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v9; // [rsp+40h] [rbp+18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v9 = 0LL;
  ProcessHandleForClientOfObject_nothrow = wil::GetProcessHandleForClientOfObject_nothrow(
                                             (__int64)this,
                                             (__int64)a2,
                                             (__int64)&v9);
  v6 = ProcessHandleForClientOfObject_nothrow;
  if ( ProcessHandleForClientOfObject_nothrow >= 0 )
  {
    v10 = 0LL;
    if ( (unsigned int)GetProcessUIContextInformation(v9, &v10) )
      LODWORD(a2->lpVtbl) = v10;
    else
      v3 = -2147024890;
    v6 = v3;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10,
      (int)"onecore\\internal\\shell\\inc\\CallerIdentityForClient.h",
      (const char *)(unsigned int)ProcessHandleForClientOfObject_nothrow);
  }
  wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v9);
  return v6;
}
