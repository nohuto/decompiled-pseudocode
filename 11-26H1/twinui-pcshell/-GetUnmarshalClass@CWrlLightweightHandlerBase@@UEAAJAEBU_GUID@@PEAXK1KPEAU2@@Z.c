/*
 * XREFs of ?GetUnmarshalClass@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z @ 0x180092370
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800926F8 (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::GetUnmarshalClass(
        CWrlLightweightHandlerBase *this,
        const struct _GUID *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        struct _GUID *a7)
{
  GUID *v7; // rdi
  const struct _GUID *v12; // rdx
  int StdMarshaler; // ebx

  v7 = a7;
  a7 = 0LL;
  *v7 = GUID_NULL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a7);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v12, (void **)&a7);
  if ( StdMarshaler >= 0 )
    StdMarshaler = (*(__int64 (__fastcall **)(struct _GUID *, const struct _GUID *, void *, _QWORD, void *, unsigned int, GUID *))(*(_QWORD *)&a7->Data1 + 24LL))(
                     a7,
                     a2,
                     a3,
                     a4,
                     a5,
                     a6,
                     v7);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a7);
  return (unsigned int)StdMarshaler;
}
