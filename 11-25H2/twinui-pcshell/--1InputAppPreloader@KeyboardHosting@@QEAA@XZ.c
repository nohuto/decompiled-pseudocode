/*
 * XREFs of ??1InputAppPreloader@KeyboardHosting@@QEAA@XZ @ 0x1802201C4
 * Callers:
 *     ??R?$default_delete@VInputAppPreloader@KeyboardHosting@@@std@@QEBAXPEAVInputAppPreloader@KeyboardHosting@@@Z @ 0x180220194 (--R-$default_delete@VInputAppPreloader@KeyboardHosting@@@std@@QEBAXPEAVInputAppPreloader@Keyboar.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall KeyboardHosting::InputAppPreloader::~InputAppPreloader(KeyboardHosting::InputAppPreloader *this)
{
  __int64 v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 1);
  if ( v2 && *((_QWORD *)this + 2) )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 72LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8A,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
        (const char *)(unsigned int)v3);
    *((_QWORD *)this + 2) = 0LL;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 1);
}
