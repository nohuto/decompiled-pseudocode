/*
 * XREFs of ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042D48
 * Callers:
 *     ?DisconnectObject@CFTMCrossProcBase@@UEAAJK@Z @ 0x180042640 (-DisconnectObject@CFTMCrossProcBase@@UEAAJK@Z.c)
 *     ?GetMarshalSizeMax@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x1800426B0 (-GetMarshalSizeMax@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z.c)
 *     ?GetUnmarshalClass@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z @ 0x180042830 (-GetUnmarshalClass@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z.c)
 *     ?MarshalInterface@CFTMCrossProcBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x180042950 (-MarshalInterface@CFTMCrossProcBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z.c)
 * Callees:
 *     CoCreateFreeThreadedMarshaler_0 @ 0x180003151 (CoCreateFreeThreadedMarshaler_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180006C98 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ @ 0x18001EDD8 (-InternalAddRef@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?CopyTo@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180028048 (-CopyTo@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CFTMCrossProcBase::_GetFTM(LPUNKNOWN punkOuter, IUnknown *a2, void **a3)
{
  RTL_SRWLOCK *v3; // rbp
  LPUNKNOWN v5; // rsi
  int v6; // ebx
  HRESULT v7; // edi
  LPUNKNOWN v8; // rbx
  LPUNKNOWN lpVtbl; // [rsp+40h] [rbp+8h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+48h] [rbp+10h] BYREF

  ppunkMarshal = a2;
  v3 = (RTL_SRWLOCK *)&punkOuter[5];
  *a3 = 0LL;
  AcquireSRWLockShared((PSRWLOCK)&punkOuter[5]);
  v5 = punkOuter + 6;
  v6 = -(punkOuter[6].lpVtbl == 0LL);
  ReleaseSRWLockShared(v3);
  if ( v6 >= 0 )
    return (unsigned int)Microsoft::WRL::ComPtr<IUnknown>::CopyTo(v5);
  ppunkMarshal = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppunkMarshal);
  v7 = CoCreateFreeThreadedMarshaler_0(punkOuter, &ppunkMarshal);
  if ( v7 >= 0 )
  {
    AcquireSRWLockExclusive(v3);
    if ( v5->lpVtbl )
    {
      v7 = 0;
    }
    else
    {
      v8 = ppunkMarshal;
      if ( ppunkMarshal )
      {
        lpVtbl = ppunkMarshal;
        Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef((__int64 *)&lpVtbl);
        lpVtbl = (LPUNKNOWN)v5->lpVtbl;
        v5->lpVtbl = (struct IUnknownVtbl *)v8;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&lpVtbl);
      }
    }
    ReleaseSRWLockExclusive(v3);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppunkMarshal);
  if ( v7 >= 0 )
    return (unsigned int)Microsoft::WRL::ComPtr<IUnknown>::CopyTo(v5);
  return (unsigned int)v7;
}
