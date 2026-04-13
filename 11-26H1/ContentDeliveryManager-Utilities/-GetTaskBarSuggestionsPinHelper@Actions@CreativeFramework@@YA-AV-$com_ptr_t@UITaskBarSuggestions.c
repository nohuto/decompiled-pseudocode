/*
 * XREFs of ?GetTaskBarSuggestionsPinHelper@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UITaskBarSuggestionsPinHelper@TaskBarSuggestions@UI@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18009EB18
 * Callers:
 *     ?PinApp@Actions@CreativeFramework@@YAXPEB_W_N01@Z @ 0x18009F154 (-PinApp@Actions@CreativeFramework@@YAXPEB_W_N01@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CreativeFramework::Actions::GetTaskBarSuggestionsPinHelper(_QWORD *a1)
{
  HRESULT Instance; // eax
  _QWORD *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  int ppv; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0LL;
  Instance = CoCreateInstance(
               &GUID_228826af_02e1_4226_a9e0_99a855e455a6,
               0LL,
               0x404u,
               &GUID_9767060c_9476_42e2_8f7b_2f10fd13765c,
               (LPVOID *)&v9);
  if ( Instance < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      30LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp",
      (const char *)(unsigned int)Instance,
      ppv);
  *a1 = 0LL;
  v3 = v9;
  v4 = *v9;
  *a1 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, GUID *, _QWORD *))(v4 + 96))(
         v3,
         &GUID_db147050_dcbf_4699_abaf_273e512e2a91,
         &GUID_f96b5c0d_8f3b_42bd_a71d_20081f499cb3,
         a1);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      33LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp",
      (const char *)(unsigned int)v5,
      ppv);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v9);
  return a1;
}
