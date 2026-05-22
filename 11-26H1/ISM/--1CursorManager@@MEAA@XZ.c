/*
 * XREFs of ??1CursorManager@@MEAA@XZ @ 0x180162908
 * Callers:
 *     ??_ECursorManager@@MEAAPEAXI@Z @ 0x180162A50 (--_ECursorManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x18010DD7C (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CursorManager::~CursorManager(CursorManager *this)
{
  __int64 *v2; // rsi
  __int64 v3; // r14
  int (__fastcall *v4)(__int64, __int64 *); // rbx
  MessageProxyReconnectAdapter *v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CursorManager::`vftable'{for `ICursorManager'};
  *((_QWORD *)this + 1) = &CursorManager::`vftable'{for `IMessageProxyReconnectAdapterOwner'};
  *((_QWORD *)this + 2) = &CursorManager::`vftable'{for `RefCountedObject'};
  v2 = (__int64 *)((char *)this + 32);
  v3 = *((_QWORD *)this + 4);
  if ( v3 && *((_QWORD *)this + 8) )
  {
    v6 = 0LL;
    v4 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
    if ( v4(v3, &v6) >= 0 )
      (*(void (__fastcall **)(__int64, const wchar_t *, __int64))(*(_QWORD *)v6 + 48LL))(
        v6,
        L"System\\Input\\CursorManagerEndpoint",
        1LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v2 + 168LL))(*v2, *((_QWORD *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v5 = (MessageProxyReconnectAdapter *)*((_QWORD *)this + 6);
  if ( v5 )
  {
    MessageProxyReconnectAdapter::Dispose(v5);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
