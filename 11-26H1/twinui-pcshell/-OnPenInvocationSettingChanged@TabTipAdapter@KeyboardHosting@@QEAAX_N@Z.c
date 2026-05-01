/*
 * XREFs of ?OnPenInvocationSettingChanged@TabTipAdapter@KeyboardHosting@@QEAAX_N@Z @ 0x18047B7D4
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18024B8F8 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall KeyboardHosting::TabTipAdapter::OnPenInvocationSettingChanged(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 16);
  v6 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v2 + 112LL))(v2, a2, &v6);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC0D,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v3,
      v4);
}
