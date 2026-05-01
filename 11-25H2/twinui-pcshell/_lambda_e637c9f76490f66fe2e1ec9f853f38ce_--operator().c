/*
 * XREFs of _lambda_e637c9f76490f66fe2e1ec9f853f38ce_::operator() @ 0x18021E084
 * Callers:
 *     _lambda_e637c9f76490f66fe2e1ec9f853f38ce_::_lambda_invoker_cdecl_ @ 0x18055BEB0 (_lambda_e637c9f76490f66fe2e1ec9f853f38ce_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadDispatcher@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180069F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadD.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800A589C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x18021E19C (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_e637c9f76490f66fe2e1ec9f853f38ce_::operator()(__int64 a1, __int64 a2)
{
  HANDLE CurrentThread; // rax
  HRESULT v4; // eax
  volatile int *v5; // rdx
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  void *v9; // rdx
  int v11; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+58h] [rbp+10h]
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v13 = a1;
  v16 = a2;
  CurrentThread = GetCurrentThread();
  v4 = SetThreadDescription(CurrentThread, L"Tab Proxy Window Factory Thread");
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2A,
      (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
      (const char *)(unsigned int)v4);
  v6 = RoInitialize(0LL);
  v14 = v6;
  if ( v6 >= 0 )
  {
    v7 = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(a2 + 48) = 0LL;
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICreationThreadDispatcher,Microsoft::WRL::FtmBase>::Release(
        v7,
        v5);
    v8 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>(a2 + 48);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x32,
        (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
        (const char *)(unsigned int)v8,
        v11);
    wil::details::SetEvent(*(wil::details **)(a2 + 32), v9);
    LODWORD(v13) = 0;
    v15 = *(_QWORD *)(a2 + 40);
    CoWaitForMultipleObjects(3LL, 0xFFFFFFFFLL, 1LL, &v15, &v13);
  }
  if ( v6 >= 0 )
    RoUninitialize();
  if ( a2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v16);
  return 0LL;
}
