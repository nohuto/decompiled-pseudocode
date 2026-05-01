/*
 * XREFs of ?OnDisconnected@TabTipAdapter@KeyboardHosting@@UEAAJPEAUIMessageProxy@@@Z @ 0x180214350
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x180005B60 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x180675C3C (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnDisconnected(
        KeyboardHosting::TabTipAdapter *this,
        struct IMessageProxy *a2)
{
  char v4; // bp
  void (__fastcall ***v5)(_QWORD, GUID *, struct IMessageProxy **); // r14
  void (__fastcall *v6)(_QWORD, GUID *, struct IMessageProxy **); // rbx
  MessageProxyReconnectAdapter *v7; // rcx
  char v8; // bl
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  struct IMessageProxy *v14; // [rsp+70h] [rbp+8h] BYREF
  char v15; // [rsp+80h] [rbp+18h]
  const char *v16; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v5 = (void (__fastcall ***)(_QWORD, GUID *, struct IMessageProxy **))*((_QWORD *)this + 7);
  if ( v5 )
  {
    v14 = 0LL;
    v6 = **v5;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    v6(v5, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, &v14);
    if ( v14 == a2 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
      v4 = 1;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  }
  v7 = (MessageProxyReconnectAdapter *)*((_QWORD *)this + 8);
  if ( v7 )
  {
    MessageProxyReconnectAdapter::Dispose(v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
  }
  v8 = 0;
  if ( v4 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)this + 52);
    if ( *((_BYTE *)this + 492) )
    {
      *((_BYTE *)this + 492) = 0;
      v8 = 1;
    }
    if ( this != (KeyboardHosting::TabTipAdapter *)-416LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 52);
  }
  v9 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v9 > 5u )
  {
    LOBYTE(v14) = v8;
    v15 = v4;
    v16 = "TabTipAdapter::OnDisconnected";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      (__int64)v9,
      (__int64)&unk_18080CB3C,
      v10,
      v11,
      &v16);
  }
  if ( v8 )
  {
    v12 = *((_QWORD *)this + 4);
    if ( v12 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 656LL))(v12, 0LL);
  }
  return 0LL;
}
