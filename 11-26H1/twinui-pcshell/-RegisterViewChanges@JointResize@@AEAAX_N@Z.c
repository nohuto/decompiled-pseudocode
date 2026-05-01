/*
 * XREFs of ?RegisterViewChanges@JointResize@@AEAAX_N@Z @ 0x1801BABB8
 * Callers:
 *     ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x180078420 (-OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x180538F90 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall JointResize::RegisterViewChanges(__int64 this, char a2, __int64 a3)
{
  _DWORD *v3; // rbx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (_DWORD *)(this + 464);
  if ( a2 )
  {
    if ( !*v3 )
      (*(void (__fastcall **)(_QWORD, __int64, _DWORD *, __int64))(**(_QWORD **)(this + 136) + 96LL))(
        *(_QWORD *)(this + 136),
        (this + 96) & -(__int64)(this != 0),
        v3,
        -this);
  }
  else if ( *v3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(this + 136) + 104LL))(
           *(_QWORD *)(this + 136),
           (unsigned int)*v3,
           a3,
           this);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D8,
        (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v4);
    else
      *v3 = 0;
  }
}
