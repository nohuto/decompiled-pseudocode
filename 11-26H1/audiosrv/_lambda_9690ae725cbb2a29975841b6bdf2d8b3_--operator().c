/*
 * XREFs of _lambda_9690ae725cbb2a29975841b6bdf2d8b3_::operator() @ 0x18013688C
 * Callers:
 *     ?DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ @ 0x180083398 (-DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18000583C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180010D90 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@VEffectPack@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18005E070 (--4-$shared_ptr@VEffectPack@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180091814 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@VEffectPack@@@std@.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18013CD84 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_9690ae725cbb2a29975841b6bdf2d8b3_::operator()(CEndpointCharacteristics **a1)
{
  int v2; // ebx
  CEndpointCharacteristics *v3; // rbx
  const char *v4; // r9
  unsigned int v5; // r14d
  _QWORD *v6; // r15
  _QWORD *v7; // rbx
  __int128 v8; // kr00_16
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // esi
  _DWORD *v12; // rcx
  CEndpointCharacteristics *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  CEndpointCharacteristics *v16; // rbx
  const char *v17; // r9
  CEndpointCharacteristics *v19; // rsi
  _QWORD *v20; // rbx
  CEndpointCharacteristics *v21; // rcx
  struct EffectPack **v22; // rdx
  int v23; // eax
  unsigned int v24; // [rsp+48h] [rbp-29h] BYREF
  _DWORD v25[3]; // [rsp+4Ch] [rbp-25h] BYREF
  struct _GUID Buf2; // [rsp+58h] [rbp-19h] BYREF
  LPCOLESTR lpsz[2]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v28; // [rsp+78h] [rbp+7h]
  struct _GUID Buf1; // [rsp+88h] [rbp+17h] BYREF
  struct _GUID v30; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  if ( CEndpointCharacteristics::AreEnhancementsEnabled(*a1) )
  {
    *(_OWORD *)lpsz = 0LL;
    v28 = 0LL;
    *(_DWORD *)a1[1] = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, LPCOLESTR *))(**((_QWORD **)*a1 + 9) + 40LL))(
                         *((_QWORD *)*a1 + 9),
                         &PKEY_AudioEndpoint_UserSelectedEffectPack,
                         lpsz);
    v2 = *(_DWORD *)a1[1];
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6FC,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v2);
LABEL_29:
      PropVariantClear((PROPVARIANT *)lpsz);
      return (unsigned int)v2;
    }
    if ( LOWORD(lpsz[0]) == 31 && CLSIDFromString(lpsz[1], (LPCLSID)a1[2]) >= 0 )
    {
      Buf2 = *(struct _GUID *)a1[2];
      v3 = a1[1];
      *(_DWORD *)v3 = CEndpointCharacteristics::SetCurrentEffectPackInternal(*a1, &Buf2);
      v4 = (const char *)*(unsigned int *)a1[1];
      if ( (int)v4 >= 0 )
      {
LABEL_28:
        v2 = 0;
        goto LABEL_29;
      }
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1802LL,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        v4);
    }
    v5 = 0;
    v6 = (_QWORD *)*((_QWORD *)*a1 + 46);
    v7 = (_QWORD *)*((_QWORD *)*a1 + 45);
    if ( v7 != v6 )
    {
      v8 = PKEY_FX_EffectPack_Schema_V1;
      do
      {
        v9 = *(_QWORD *)(*v7 + 1568LL);
        if ( *(_BYTE *)(v9 + 1917) )
        {
          v10 = *(_QWORD *)(v9 + 1936) - v8;
          if ( !v10 )
            v10 = *(_QWORD *)(v9 + 1944) - *((_QWORD *)&v8 + 1);
          v11 = *(_DWORD *)(v9 + 1952) + 10000;
          if ( v10 )
            v11 = *(_DWORD *)(v9 + 1952);
          v12 = (_DWORD *)*((_QWORD *)*a1 + 1036);
          if ( v11 >= v5 )
          {
            if ( *v12 > 5u )
            {
              v24 = v5;
              v25[0] = v11;
              v30 = *(struct _GUID *)v9;
              *(_QWORD *)&Buf2.Data1 = &v30;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                (int)v12,
                (int)&unk_1801ABCD1,
                *((__int64 *)&v8 + 1),
                v8,
                &Buf2,
                (__int64)v25,
                (__int64)&v24);
            }
            std::shared_ptr<EffectPack>::operator=(a1[3], v7);
            v5 = v11;
            goto LABEL_21;
          }
          if ( *v12 > 5u )
          {
            v25[0] = v5;
            v24 = v11;
            Buf1 = *(struct _GUID *)v9;
            *(_QWORD *)&Buf2.Data1 = &Buf1;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (int)v12,
              (int)&unk_1801ABC00,
              *((__int64 *)&v8 + 1),
              v8,
              &Buf2,
              (__int64)&v24,
              (__int64)v25);
LABEL_21:
            v8 = PKEY_FX_EffectPack_Schema_V1;
          }
        }
        v7 += 2;
      }
      while ( v7 != v6 );
    }
    if ( !*(_QWORD *)a1[3] )
    {
      v13 = *a1;
      v14 = *((_QWORD *)*a1 + 50);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 1568);
        if ( *(_QWORD *)(v15 + 1920) != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
          || *(_QWORD *)(v15 + 1928) != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
        {
          Buf1 = *(struct _GUID *)(v15 + 1920);
          v16 = a1[1];
          *(_DWORD *)v16 = CEndpointCharacteristics::SetCurrentEffectPackInternal(v13, &Buf1);
          v17 = (const char *)*(unsigned int *)a1[1];
          if ( (int)v17 >= 0 )
            goto LABEL_28;
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1879LL,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            v17);
        }
      }
    }
    PropVariantClear((PROPVARIANT *)lpsz);
  }
  v19 = a1[3];
  if ( !*(_QWORD *)v19 )
  {
    v20 = (_QWORD *)*((_QWORD *)*a1 + 45);
    if ( *((_QWORD *)*a1 + 46) - (_QWORD)v20 == 16LL )
    {
      Buf1 = *(struct _GUID *)*(_QWORD *)(*v20 + 1568LL);
      if ( !memcmp_0(&Buf1, &CLSID_VOCAAudioEffectPackID, 0x10uLL) )
        std::shared_ptr<EffectPack>::operator=(v19, v20);
    }
  }
  v21 = a1[3];
  if ( !*(_QWORD *)v21 )
    std::shared_ptr<EffectPack>::operator=(v21, (_QWORD *)*a1 + 50);
  v22 = (struct EffectPack **)a1[3];
  if ( *v22 )
  {
    v23 = CEndpointCharacteristics::SetCurrentEffectPackInternal((struct _RTL_CRITICAL_SECTION *)*a1, v22);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1909LL,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v23);
  }
  return 0LL;
}
