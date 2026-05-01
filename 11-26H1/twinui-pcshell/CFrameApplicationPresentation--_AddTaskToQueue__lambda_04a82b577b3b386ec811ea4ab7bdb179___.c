/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_04a82b577b3b386ec811ea4ab7bdb179___ @ 0x1801DC630
 * Callers:
 *     ?SetPreferredAspectRatioHint@CFrameApplicationPresentation@@UEAAJUtagSIZE@@@Z @ 0x1801DC5F0 (-SetPreferredAspectRatioHint@CFrameApplicationPresentation@@UEAAJUtagSIZE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_46f447173730af1e316e4d8e7839b9be___ @ 0x1801DC6D8 (Windows--Internal--ComTaskPool--QueueTask__lambda_46f447173730af1e316e4d8e7839b9be___.c)
 *     _lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_::_lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_ @ 0x180291F10 (_lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_--_lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_04a82b577b3b386ec811ea4ab7bdb179___(
        unsigned int *a1,
        __int64 a2)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int *v11; // [rsp+50h] [rbp+8h] BYREF

  if ( a1[14] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x820,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    v11 = a1;
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    v5 = ((__int64 (__fastcall *)(__int64 *, unsigned int **, unsigned int *, __int64))lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_::_lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_)(
           v9,
           &v11,
           a1,
           a2);
    v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_46f447173730af1e316e4d8e7839b9be___(v7, v6, a1[12], v5);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v9);
    if ( v8 >= 0 )
      ++a1[52];
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 16LL))(a1);
    return (unsigned int)v8;
  }
}
