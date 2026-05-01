/*
 * XREFs of ?HandleForegroundWindow@UwpWindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x18017D7B0
 * Callers:
 *     ?HandleFrameWindowChange@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowWrapperInternal@@@Z @ 0x18017D760 (-HandleFrameWindowChange@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowWrapperInternal@@@Z.c)
 *     ?OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z @ 0x18024D520 (-OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall UwpWindowEventDispatcher::HandleForegroundWindow(UwpWindowEventDispatcher *this, HWND a2)
{
  __int64 v4; // rbx
  bool v5; // r14
  _QWORD *v6; // rsi
  _QWORD *v7; // r15
  HWND v8; // r12
  HWND v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi

  v4 = 0LL;
  if ( (unsigned int)IsShellManagedWindow(a2) )
  {
    v5 = 0;
    v6 = (_QWORD *)*((_QWORD *)this + 48);
    v7 = (_QWORD *)*((_QWORD *)this + 49);
    while ( v6 != v7 )
    {
      if ( *v6 )
      {
        v8 = (HWND)(*(int (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 256LL))(*v6);
        v9 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 352LL))(*v6);
        if ( a2 == v8 || a2 == v9 )
        {
          v4 = *v6;
          if ( *v6 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
          v5 = a2 == v8;
          break;
        }
      }
      ++v6;
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 336LL))(v4);
  }
  v10 = *((_QWORD *)this + 59);
  if ( v10 != v4 )
  {
    if ( v10 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 344LL))(v10, 0LL);
    if ( v4 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 344LL))(v4, 1LL);
  }
  v11 = *((_QWORD *)this + 59);
  *((_QWORD *)this + 59) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  *((_QWORD *)this + 58) = a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
}
