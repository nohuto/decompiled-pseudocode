/*
 * XREFs of ?OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJI@Z @ 0x18046D4F0
 * Callers:
 *     ?OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180462DD0 (-OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x18046EAC4 (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnLightDismiss(KeyboardHosting::TabTipAdapter *this, __int64 a2)
{
  unsigned int v3; // edi
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v3 = a2;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 16) + 192LL))(
         *((_QWORD *)this + 16),
         a2,
         &v8);
  if ( v4 < 0 )
  {
    v5 = 3088LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  if ( v8 )
  {
    v4 = KeyboardHosting::TabTipAdapter::ProcessChangeRequest(this, 2LL, v3);
    if ( v4 < 0 )
    {
      v5 = 3092LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
