/*
 * XREFs of ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007B8B8
 * Callers:
 *     ?MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x18007B2C0 (-MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z.c)
 *     ?GetUnmarshalClass@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z @ 0x18007B4E0 (-GetUnmarshalClass@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z.c)
 *     ?DisconnectObject@CWrlLightweightHandlerBase@@UEAAJK@Z @ 0x1806A30A0 (-DisconnectObject@CWrlLightweightHandlerBase@@UEAAJK@Z.c)
 *     ?ReleaseMarshalData@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@@Z @ 0x1806A3110 (-ReleaseMarshalData@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@@Z.c)
 *     ?UnmarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z @ 0x1806A3180 (-UnmarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyTo@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18007BA08 (-CopyTo@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::_GetStdMarshaler(
        CWrlLightweightHandlerBase *this,
        IUnknown *a2,
        void **a3)
{
  RTL_SRWLOCK *v3; // rbp
  __int64 v6; // rbx
  HRESULT StdMarshal; // edi
  __int64 (__fastcall **v9)(CWrlLightweightHandlerBase *, GUID *, LPUNKNOWN *); // rax
  __int64 (__fastcall *v10)(CWrlLightweightHandlerBase *, GUID *, LPUNKNOWN *); // rbx
  DWORD v11; // eax
  LPUNKNOWN pUnkOuter; // [rsp+48h] [rbp+10h] BYREF

  pUnkOuter = a2;
  *a3 = 0LL;
  v3 = (RTL_SRWLOCK *)((char *)this + 24);
  AcquireSRWLockShared((PSRWLOCK)this + 3);
  v6 = *((_QWORD *)this + 4);
  ReleaseSRWLockShared(v3);
  StdMarshal = v6 == 0 ? 0x80004005 : 0;
  if ( !v6 )
  {
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
  }
  if ( StdMarshal >= 0 )
    return (unsigned int)Microsoft::WRL::ComPtr<IInspectable>::CopyTo(
                           (char *)this + 32,
                           &GUID_00000003_0000_0000_c000_000000000046,
                           a3);
  return (unsigned int)StdMarshal;
}
