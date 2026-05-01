/*
 * XREFs of ?WndProc@NotificationDispatcher@@SA_JPEAUHWND__@@I_K_J@Z @ 0x1800D6070
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
LRESULT __fastcall NotificationDispatcher::WndProc(HWND a1, UINT a2, WPARAM a3, LPARAM a4)
{
  LONG_PTR WindowLongPtrW; // rax
  LONG_PTR v5; // rbx
  signed __int32 i; // eax
  _QWORD *v7; // rdi
  __int64 v8; // rbp
  _QWORD *v9; // r15
  _QWORD *j; // r14
  signed __int32 v11; // edx
  __int64 *v13; // rsi
  LONG_PTR v14; // [rsp+20h] [rbp-48h]

  if ( a2 != 1025 )
    return DefWindowProcW(a1, a2, a3, a4);
  WindowLongPtrW = GetWindowLongPtrW(a1, 0);
  v5 = WindowLongPtrW;
  v14 = WindowLongPtrW;
  if ( WindowLongPtrW )
  {
    for ( i = *(_DWORD *)(WindowLongPtrW + 36);
          i != 0x7FFFFFFF && i != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 36), i + 1, i);
          i = *(_DWORD *)(v5 + 36) )
    {
      ;
    }
    v5 = v14;
  }
  if ( v5 && !*(_BYTE *)(v5 + 88) )
  {
    *(_BYTE *)(v5 + 88) = 1;
    AcquireSRWLockExclusive((PSRWLOCK)(v5 + 80));
    v7 = *(_QWORD **)(v5 + 48);
    v8 = *(_QWORD *)(v5 + 56);
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_QWORD *)(v5 + 64) = 0LL;
    *(_QWORD *)(v5 + 56) = 0LL;
    *(_QWORD *)(v5 + 72) = 0LL;
    if ( v5 != -80 )
      ReleaseSRWLockExclusive((PSRWLOCK)(v5 + 80));
    v9 = &v7[v8];
    for ( j = v7; j != v9; ++j )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*j + 24LL))(*j, 0LL);
    *(_BYTE *)(v5 + 88) = 0;
    AcquireSRWLockShared((PSRWLOCK)(v5 + 80));
    if ( *(_QWORD *)(v5 + 56) )
      PostMessageW(*(HWND *)(v5 + 40), 0x401u, 0LL, 0LL);
    if ( v5 != -80 )
      ReleaseSRWLockShared((PSRWLOCK)(v5 + 80));
    if ( v7 )
    {
      if ( v8 )
      {
        v13 = v7;
        do
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13++);
          --v8;
        }
        while ( v8 );
      }
      CoTaskMemFree(v7);
    }
  }
  if ( v5 )
  {
    do
      v11 = *(_DWORD *)(v5 + 36);
    while ( v11 != 0x7FFFFFFF && v11 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 36), v11 - 1, v11) );
    if ( v11 == 1 )
    {
      (*(void (__fastcall **)(LONG_PTR, __int64))(*(_QWORD *)v14 + 72LL))(v14, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return 0LL;
}
