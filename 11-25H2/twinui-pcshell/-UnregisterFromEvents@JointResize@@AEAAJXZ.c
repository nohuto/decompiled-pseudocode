/*
 * XREFs of ?UnregisterFromEvents@JointResize@@AEAAJXZ @ 0x18022B654
 * Callers:
 *     ?UnsubscribeFromServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z @ 0x180518420 (-UnsubscribeFromServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall JointResize::UnregisterFromEvents(JointResize *this)
{
  _QWORD *v1; // rdi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (_QWORD *)((char *)this + 160);
  if ( *((_QWORD *)this + 59) )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 72LL))(*v1);
    *((_QWORD *)this + 59) = 0LL;
  }
  if ( *((_QWORD *)this + 60) )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 88LL))(*v1);
    *((_QWORD *)this + 60) = 0LL;
  }
  if ( *((_QWORD *)this + 61) )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 104LL))(*v1);
    *((_QWORD *)this + 61) = 0LL;
  }
  v3 = *((_QWORD *)this + 19);
  if ( !v3 )
    return 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v3 + 80LL))(
         v3,
         ((unsigned __int64)this + 88) & -(__int64)(this != 0LL));
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B4,
    (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
