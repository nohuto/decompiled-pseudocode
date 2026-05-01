/*
 * XREFs of _lambda_c5a7970b3483e4de1ddc73b2db688a0a_::operator() @ 0x180478AA8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c5a7970b3483e4de1ddc73b2db688a0a___::Run @ 0x18047E070 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c5a7970b3483e4de1ddc73b2db688a0a___--Run.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800BBBDC (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?get@?$weak_ref@UTabTipAdapter@KeyboardHosting@@@winrt@@QEBA@XZ @ 0x180480844 (-get@-$weak_ref@UTabTipAdapter@KeyboardHosting@@@winrt@@QEBA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_c5a7970b3483e4de1ddc73b2db688a0a_::operator()(__int64 a1)
{
  RTL_SRWLOCK *v1; // rbx
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF
  KeyboardHosting::TabTipAdapter *v8; // [rsp+38h] [rbp+10h] BYREF

  winrt::weak_ref<KeyboardHosting::TabTipAdapter>::get(a1, &v8);
  v1 = (RTL_SRWLOCK *)v8;
  if ( v8 )
  {
    v7 = 0;
    v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v8 + 16) + 72LL))(*((_QWORD *)v8 + 16), &v7);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 2928LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v2);
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v8);
      return v3;
    }
    if ( v7 == 3 )
    {
      v2 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(v1);
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 2932LL;
        goto LABEL_7;
      }
    }
  }
  if ( v1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v8);
  return 0LL;
}
