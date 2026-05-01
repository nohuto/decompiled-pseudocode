/*
 * XREFs of ?MoveForegroundAppInDirection@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirection@@@Z @ 0x1805369B4
 * Callers:
 *     ?HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180536520 (-HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180142B50 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVirtualDesktopHotkeyHandler::MoveForegroundAppInDirection(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  const char *v9; // r9
  __int64 result; // rax
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // ebx
  int v14; // eax
  unsigned int v15; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF
  RTL_SRWLOCK *v19; // [rsp+68h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a1 + 72);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
    v17 = 0LL;
    v5 = *(__int64 **)(a1 + 24);
    v6 = *v5;
    v17 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v6 + 368))(v5, &v17);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v18 = 0LL;
      v11 = *(__int64 **)(a1 + 24);
      v12 = *v11;
      v18 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64 *))(v12 + 384))(
              v11,
              v17,
              (unsigned int)(a2 != 0) + 3,
              &v18);
      if ( v13 >= 0 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 32) + 32LL))(
                *(_QWORD *)(a1 + 32),
                v18,
                a2);
        v15 = v14;
        if ( v14 >= 0 )
        {
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
          Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v19);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xBF,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
            (const char *)(unsigned int)v14);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
          Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v19);
          result = v15;
        }
      }
      else
      {
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v19);
        result = (unsigned int)v13;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB9,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
        (const char *)(unsigned int)v7);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v19);
      result = v8;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC2,
                           (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
                           v9);
  }
  return result;
}
