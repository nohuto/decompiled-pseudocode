/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3@Z @ 0x180002784
 * Callers:
 *     _lambda_8d5f4d8aa39242536c97982253020fd6_::operator() @ 0x1800C47E4 (_lambda_8d5f4d8aa39242536c97982253020fd6_--operator().c)
 *     ?DecrementBidirectionalSaDeviceCount@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800E1C90 (-DecrementBidirectionalSaDeviceCount@CBtAudioResourceManagerBase@@IEAAXXZ.c)
 *     ?IncrementBidirectionalSaDeviceCount@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800E4510 (-IncrementBidirectionalSaDeviceCount@CBtAudioResourceManagerBase@@IEAAXXZ.c)
 *     ?ClearEffectPackDeviceIdFromFxPropStore@CEndpointCharacteristics@@AEAAXPEAU_GUID@@I@Z @ 0x180137C94 (-ClearEffectPackDeviceIdFromFxPropStore@CEndpointCharacteristics@@AEAAXPEAU_GUID@@I@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18004EB10 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        const wchar_t **a6)
{
  __int64 v8; // rcx
  int v9; // r8d
  const wchar_t *v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  const wchar_t *v13; // rdx
  _BYTE v15[32]; // [rsp+30h] [rbp-58h] BYREF
  const wchar_t *v16; // [rsp+50h] [rbp-38h]
  int v17; // [rsp+58h] [rbp-30h]
  int v18; // [rsp+5Ch] [rbp-2Ch]
  const wchar_t *v19; // [rsp+60h] [rbp-28h]
  int v20; // [rsp+68h] [rbp-20h]
  int v21; // [rsp+6Ch] [rbp-1Ch]

  v8 = -1LL;
  v9 = 2;
  v10 = *a6;
  if ( *a6 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v10 = &LocaleName;
    v12 = 2;
  }
  v20 = v12;
  v19 = v10;
  v21 = 0;
  v13 = *a5;
  if ( *a5 )
  {
    do
      ++v8;
    while ( v13[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v13 = &LocaleName;
  }
  v16 = v13;
  v17 = v9;
  v18 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0, 0, 4, (__int64)v15);
}
