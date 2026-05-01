/*
 * XREFs of ?DispatchNotifications@NotificationDispatcher@@QEAAXXZ @ 0x1800B1FE8
 * Callers:
 *     ?FlushChangeNotifications@CApplicationViewManager@@UEAAJXZ @ 0x1803086C0 (-FlushChangeNotifications@CApplicationViewManager@@UEAAJXZ.c)
 *     ?FlushChangeNotifications@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ @ 0x180309EE0 (-FlushChangeNotifications@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall NotificationDispatcher::DispatchNotifications(NotificationDispatcher *this)
{
  RTL_SRWLOCK *v2; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rbp
  _QWORD *v5; // r14
  _QWORD *v6; // r15
  __int64 *v7; // rbx

  if ( !*((_BYTE *)this + 88) )
  {
    *((_BYTE *)this + 88) = 1;
    v2 = (RTL_SRWLOCK *)((char *)this + 80);
    AcquireSRWLockExclusive((PSRWLOCK)this + 10);
    v3 = (_QWORD *)*((_QWORD *)this + 6);
    v4 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    v5 = v3;
    v6 = &v3[v4];
    if ( v3 != v6 )
    {
      do
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 24LL))(*v5, 0LL);
        ++v5;
      }
      while ( v5 != v6 );
    }
    *((_BYTE *)this + 88) = 0;
    AcquireSRWLockShared(v2);
    if ( *((_QWORD *)this + 7) )
      PostMessageW(*((HWND *)this + 5), 0x401u, 0LL, 0LL);
    if ( v2 )
      ReleaseSRWLockShared(v2);
    if ( v3 )
    {
      if ( v4 )
      {
        v7 = v3;
        do
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v7++);
          --v4;
        }
        while ( v4 );
      }
      CoTaskMemFree(v3);
    }
  }
}
