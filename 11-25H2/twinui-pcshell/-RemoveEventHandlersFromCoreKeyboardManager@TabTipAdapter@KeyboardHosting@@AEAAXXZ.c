/*
 * XREFs of ?RemoveEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAXXZ @ 0x1801E3ED8
 * Callers:
 *     ?UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1802BEAF4 (-UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall KeyboardHosting::TabTipAdapter::RemoveEventHandlersFromCoreKeyboardManager(
        KeyboardHosting::TabTipAdapter *this)
{
  _QWORD *v2; // rdi
  int v3; // eax
  _QWORD *v4; // rsi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  _QWORD *v8; // rdi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  _QWORD *v12; // rsi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  _QWORD *v16; // r14
  int v17; // eax
  int v18; // eax
  int v19; // eax
  _QWORD *v20; // rdi
  int v21; // eax
  int v22; // eax
  int v23; // eax
  _QWORD *v24; // rsi
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 32);
  if ( *((_QWORD *)this + 23) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 56LL))(*v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x253,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v3);
    *((_QWORD *)this + 23) = 0LL;
  }
  v4 = v2;
  if ( *((_QWORD *)this + 24) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 120LL))(*v2);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x259,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v5);
    *((_QWORD *)this + 24) = 0LL;
    v4 = (_QWORD *)((char *)this + 32);
  }
  if ( *((_QWORD *)this + 25) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 136LL))(*v2);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x25F,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v6);
    *((_QWORD *)this + 25) = 0LL;
  }
  if ( *((_QWORD *)this + 26) )
  {
    v4 = (_QWORD *)((char *)this + 32);
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 152LL))(*((_QWORD *)this + 4));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x265,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v7);
    *((_QWORD *)this + 26) = 0LL;
  }
  v8 = v4;
  if ( *((_QWORD *)this + 27) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 168LL))(*v4);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x26B,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v9);
    *((_QWORD *)this + 27) = 0LL;
    v8 = (_QWORD *)((char *)this + 32);
  }
  if ( *((_QWORD *)this + 28) )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 184LL))(*v4);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x271,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v10);
    *((_QWORD *)this + 28) = 0LL;
  }
  if ( *((_QWORD *)this + 29) )
  {
    v8 = (_QWORD *)((char *)this + 32);
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 200LL))(*((_QWORD *)this + 4));
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x277,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v11);
    *((_QWORD *)this + 29) = 0LL;
  }
  v12 = v8;
  if ( *((_QWORD *)this + 30) )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 216LL))(*v8);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x27D,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v13);
    *((_QWORD *)this + 30) = 0LL;
    v12 = (_QWORD *)((char *)this + 32);
  }
  if ( *((_QWORD *)this + 31) )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 232LL))(*v8);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x283,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v14);
    *((_QWORD *)this + 31) = 0LL;
  }
  if ( *((_QWORD *)this + 32) )
  {
    v12 = (_QWORD *)((char *)this + 32);
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 248LL))(*((_QWORD *)this + 4));
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x289,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v15);
    *((_QWORD *)this + 32) = 0LL;
  }
  v16 = v12;
  if ( *((_QWORD *)this + 33) )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 280LL))(*v12);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x28F,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v17);
    *((_QWORD *)this + 33) = 0LL;
    v16 = (_QWORD *)((char *)this + 32);
  }
  if ( *((_QWORD *)this + 34) )
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 296LL))(*v12);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x295,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v18);
    *((_QWORD *)this + 34) = 0LL;
  }
  if ( *((_QWORD *)this + 35) )
  {
    v16 = (_QWORD *)((char *)this + 32);
    v19 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 312LL))(*((_QWORD *)this + 4));
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x29B,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v19);
    *((_QWORD *)this + 35) = 0LL;
  }
  v20 = v16;
  if ( *((_QWORD *)this + 36) )
  {
    v21 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 328LL))(*v16);
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2A1,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v21);
    *((_QWORD *)this + 36) = 0LL;
    v20 = (_QWORD *)((char *)this + 32);
  }
  if ( *((_QWORD *)this + 37) )
  {
    v22 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 344LL))(*v16);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2A7,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v22);
    *((_QWORD *)this + 37) = 0LL;
  }
  if ( *((_QWORD *)this + 38) )
  {
    v20 = (_QWORD *)((char *)this + 32);
    v23 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 72LL))(*((_QWORD *)this + 4));
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2AD,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v23);
    *((_QWORD *)this + 38) = 0LL;
  }
  v24 = v20;
  if ( *((_QWORD *)this + 39) )
  {
    v25 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v20 + 400LL))(*v20);
    if ( v25 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2B3,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v25);
    *((_QWORD *)this + 39) = 0LL;
    v24 = (_QWORD *)((char *)this + 32);
  }
  if ( *((_QWORD *)this + 42) )
  {
    v26 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v20 + 376LL))(*v20);
    if ( v26 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2B9,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v26);
    *((_QWORD *)this + 42) = 0LL;
  }
  if ( *((_QWORD *)this + 43) )
  {
    v24 = (_QWORD *)((char *)this + 32);
    v27 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 392LL))(*((_QWORD *)this + 4));
    if ( v27 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2BF,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v27);
    *((_QWORD *)this + 43) = 0LL;
  }
  if ( *((_QWORD *)this + 40) )
  {
    v28 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v24 + 440LL))(*v24);
    if ( v28 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2C5,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v28);
    *((_QWORD *)this + 40) = 0LL;
  }
  if ( *((_QWORD *)this + 41) )
  {
    v29 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v24 + 456LL))(*v24);
    if ( v29 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2CB,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v29);
    *((_QWORD *)this + 41) = 0LL;
  }
  if ( *((_QWORD *)this + 44) )
  {
    v30 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 472LL))(*((_QWORD *)this + 4));
    if ( v30 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2D1,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v30);
    *((_QWORD *)this + 44) = 0LL;
  }
  if ( *((_QWORD *)this + 47) )
  {
    v31 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 64LL))(*((_QWORD *)this + 5));
    if ( v31 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2E0,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v31);
    *((_QWORD *)this + 47) = 0LL;
  }
}
