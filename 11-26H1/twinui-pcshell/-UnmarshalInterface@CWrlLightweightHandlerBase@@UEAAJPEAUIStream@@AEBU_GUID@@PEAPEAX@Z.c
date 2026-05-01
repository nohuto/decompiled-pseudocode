/*
 * XREFs of ?UnmarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z @ 0x1806CB220
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800926F8 (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::UnmarshalInterface(
        CWrlLightweightHandlerBase *this,
        struct IStream *a2,
        const struct _GUID *a3,
        void **a4)
{
  IUnknown *v8; // rdx
  int StdMarshaler; // ebx
  void *v11; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v8, &v11);
  if ( StdMarshaler >= 0 )
    StdMarshaler = (*(__int64 (__fastcall **)(void *, struct IStream *, const struct _GUID *, void **))(*(_QWORD *)v11 + 48LL))(
                     v11,
                     a2,
                     a3,
                     a4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  return (unsigned int)StdMarshaler;
}
