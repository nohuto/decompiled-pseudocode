/*
 * XREFs of ?SetPositionAndViewData@CTaskWindow@@UEAAJQEBUtagRECT@@QEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1800417B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RepositionOwnedWindows@ImmersiveOwnedWindowHelper@@YAJPEAUHWND__@@QEBUtagRECT@@@Z @ 0x1801C99A0 (-RepositionOwnedWindows@ImmersiveOwnedWindowHelper@@YAJPEAUHWND__@@QEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTaskWindow::SetPositionAndViewData(
        CTaskWindow *this,
        struct tagRECT *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  int v6; // ebx
  void (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  ImmersiveOwnedWindowHelper *v9; // rax
  const struct tagRECT *v10; // r8
  __int64 v11; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  if ( (*((_BYTE *)this + 60) & 2) == 0 )
  {
    v13 = 0LL;
    v7 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 6);
    v8 = **v7;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    v8(v7, &GUID_9230a21d_831d_414f_87f1_f0131a16a75a, &v13);
    v6 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, const struct APPLICATION_VIEW_DATA *))(*(_QWORD *)v13 + 80LL))(
           v13,
           a2,
           a3);
    if ( v6 >= 0 )
    {
      v9 = (ImmersiveOwnedWindowHelper *)(*(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)this + 32LL))(this);
      if ( v9 )
        ImmersiveOwnedWindowHelper::RepositionOwnedWindows(v9, (HWND)a2, v10);
    }
    v11 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  return (unsigned int)v6;
}
