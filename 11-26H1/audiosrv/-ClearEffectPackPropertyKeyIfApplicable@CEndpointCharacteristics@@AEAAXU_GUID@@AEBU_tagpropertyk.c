/*
 * XREFs of ?ClearEffectPackPropertyKeyIfApplicable@CEndpointCharacteristics@@AEAAXU_GUID@@AEBU_tagpropertykey@@@Z @ 0x180137DF8
 * Callers:
 *     ?RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18013BAF0 (-RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180078030 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CEndpointCharacteristics::ClearEffectPackPropertyKeyIfApplicable(
        CEndpointCharacteristics *this,
        struct _GUID *a2,
        const struct _tagpropertykey *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rcx
  LPCOLESTR lpsz[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+40h] [rbp-40h]
  LPCOLESTR v11; // [rsp+48h] [rbp-38h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+60h] [rbp-20h]
  GUID pclsid; // [rsp+68h] [rbp-18h] BYREF

  *(_OWORD *)lpsz = 0LL;
  v10 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const struct _tagpropertykey *, LPCOLESTR *))(**((_QWORD **)this + 9) + 40LL))(
         *((_QWORD *)this + 9),
         a3,
         lpsz) >= 0
    && LOWORD(lpsz[0]) == 31 )
  {
    pclsid = GUID_00000000_0000_0000_0000_000000000000;
    if ( CLSIDFromString(lpsz[1], &pclsid) >= 0 && !memcmp_0(&pclsid, a2, 0x10uLL) )
    {
      v8 = (_DWORD *)*((_QWORD *)this + 1036);
      if ( *v8 > 5u )
      {
        v11 = lpsz[1];
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
          (__int64)v8,
          byte_1801ABC8D,
          v6,
          v7,
          &v11);
      }
      *(_OWORD *)pvar = 0LL;
      v13 = 0LL;
      (*(void (__fastcall **)(_QWORD, const struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)this + 9) + 48LL))(
        *((_QWORD *)this + 9),
        a3,
        pvar);
      PropVariantClear(pvar);
    }
  }
  PropVariantClear((PROPVARIANT *)lpsz);
}
