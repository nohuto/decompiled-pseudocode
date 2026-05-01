/*
 * XREFs of ?OnCommand@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18022EA20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AccessibilityExperienceManager::OnCommand(
        AccessibilityExperienceManager *this,
        struct IApplicationFrame *a2,
        const struct _GUID *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_QWORD *)this + 32);
  if ( !v5 || !(*(unsigned int (__fastcall **)(__int64, struct IApplicationFrame *))(*(_QWORD *)v5 + 24LL))(v5, a2) )
    return 2147942487LL;
  v6 = *(_QWORD *)&a3->Data1 - ApplicationFrameCloseCommand;
  if ( *(_QWORD *)&a3->Data1 == ApplicationFrameCloseCommand )
    v6 = *(_QWORD *)a3->Data4 - 0x575B26E93947F081LL;
  if ( v6 )
    return 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 40LL))(*((_QWORD *)this + 32), 1LL);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x123,
    (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
