/*
 * XREFs of ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800926F8
 * Callers:
 *     ?MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x1800920F0 (-MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z.c)
 *     ?GetUnmarshalClass@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z @ 0x180092370 (-GetUnmarshalClass@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z.c)
 *     ?DisconnectObject@CWrlLightweightHandlerBase@@UEAAJK@Z @ 0x1806CB140 (-DisconnectObject@CWrlLightweightHandlerBase@@UEAAJK@Z.c)
 *     ?ReleaseMarshalData@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@@Z @ 0x1806CB1B0 (-ReleaseMarshalData@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@@Z.c)
 *     ?UnmarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z @ 0x1806CB220 (-UnmarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyTo@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180092840 (-CopyTo@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::_GetStdMarshaler(
        CWrlLightweightHandlerBase *this,
        IUnknown *a2,
        void **a3)
{
  RTL_SRWLOCK *v3; // rbp
  int v6; // ebx
  HRESULT StdMarshal; // ebx
  __int64 (__fastcall **v9)(CWrlLightweightHandlerBase *, GUID *, LPUNKNOWN *); // rax
  __int64 (__fastcall *v10)(CWrlLightweightHandlerBase *, GUID *, LPUNKNOWN *); // rbx
  DWORD v11; // eax
  LPUNKNOWN pUnkOuter; // [rsp+48h] [rbp+10h] BYREF

  pUnkOuter = a2;
  v3 = (RTL_SRWLOCK *)((char *)this + 24);
  *a3 = 0LL;
  AcquireSRWLockShared((PSRWLOCK)this + 3);
  v6 = -(*((_QWORD *)this + 4) == 0LL);
  ReleaseSRWLockShared(v3);
  if ( v6 >= 0 )
    return (unsigned int)Microsoft::WRL::ComPtr<IInspectable>::CopyTo(
                           (char *)this + 32,
                           &GUID_00000003_0000_0000_c000_000000000046,
                           a3);
  AcquireSRWLockExclusive(v3);
  if ( *((_QWORD *)this + 4) )
  {
    StdMarshal = 0;
  }
  else
  {
    v9 = *(__int64 (__fastcall ***)(CWrlLightweightHandlerBase *, GUID *, LPUNKNOWN *))this;
    pUnkOuter = 0LL;
    v10 = *v9;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&pUnkOuter);
    StdMarshal = v10(this, &GUID_00000000_0000_0000_c000_000000000046, &pUnkOuter);
    if ( StdMarshal >= 0 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 4);
      v11 = (*(__int64 (__fastcall **)(CWrlLightweightHandlerBase *))(*(_QWORD *)this + 72LL))(this);
      StdMarshal = CoGetStdMarshalEx(pUnkOuter, v11, (LPUNKNOWN *)this + 4);
      if ( StdMarshal >= 0 )
        (*(void (__fastcall **)(CWrlLightweightHandlerBase *))(*(_QWORD *)this + 96LL))(this);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&pUnkOuter);
  }
  ReleaseSRWLockExclusive(v3);
  if ( StdMarshal >= 0 )
    return (unsigned int)Microsoft::WRL::ComPtr<IInspectable>::CopyTo(
                           (char *)this + 32,
                           &GUID_00000003_0000_0000_c000_000000000046,
                           a3);
  return (unsigned int)StdMarshal;
}
