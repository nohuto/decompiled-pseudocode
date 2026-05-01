/*
 * XREFs of ?OnAccessibilityKeyboardRequestShow@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18046C8C8
 * Callers:
 *     ?OnAccessibilityKeyboardRequestShow@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180462CA0 (-OnAccessibilityKeyboardRequestShow@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJI_N0@Z @ 0x180098E6C (-NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJI_N0@Z.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x1800A7148 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnAccessibilityKeyboardRequestShow(
        KeyboardHosting::TabTipAdapter *this)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 32LL))((char *)this + 8);
  if ( v2 < 0 )
  {
    v3 = 2474LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = KeyboardHosting::TabTipAdapter::NotifyCurrentVisibilityState(this, *((_DWORD *)this + 124), 0, 0);
  if ( v2 < 0 )
  {
    v3 = 2475LL;
    goto LABEL_3;
  }
  v6 = *((_QWORD *)this + 16);
  v12 = 0;
  LOBYTE(v5) = 1;
  (*(void (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v6 + 152LL))(v6, v5, &v12);
  LOBYTE(v7) = 1;
  *((_BYTE *)this + 448) = 1;
  v9 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(this, v7, v8);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9B5,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
