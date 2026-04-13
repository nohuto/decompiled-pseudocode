/*
 * XREFs of _lambda_de7ca9b0ec13d6a85971aebf8330bbf3_::operator() @ 0x18008EC5C
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_de7ca9b0ec13d6a85971aebf8330bbf3__Windows::Internal::CBasicResult_unsigned_char_0___::Run @ 0x180090820 (Windows--Internal--COperationLambdaVar_0__lambda_de7ca9b0ec13d6a85971aebf8330bbf3___ea_180090820.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18006BAE0 (-reset@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$wait_for_completion@UIAsyncAction@Foundation@Windows@@@wil@@YAXPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18008B0F4 (--$wait_for_completion@UIAsyncAction@Foundation@Windows@@@wil@@YAXPEAUIAsyncAction@Foundation@Wi.c)
 *     ??_9IStorageFileStatics@Storage@Windows@@$BDA@AA @ 0x18008B2B8 (--_9IStorageFileStatics@Storage@Windows@@$BDA@AA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_de7ca9b0ec13d6a85971aebf8330bbf3_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 *v3; // rdi
  __int64 v4; // rbx
  int v5; // eax
  DWORD v6; // edx
  int v7; // r8d
  const char *v8; // r9
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = *a1;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  try
  {
    v5 =  Windows::Storage::IStorageFileStatics::`vcall'{48,{flat}}(v4);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1845LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
        (const char *)(unsigned int)v5,
        v10);
    wil::wait_for_completion<Windows::Foundation::IAsyncAction>(v16, v6, v7);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x4E,
      (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      v8);
    v3 = a1;
    v2 = a2;
  }
  *(_BYTE *)(v2 + 16) = 1;
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::reset(v3 + 1);
  return 0LL;
}
