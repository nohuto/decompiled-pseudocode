/*
 * XREFs of ?IsFormatSupportedOnHostConnector@EffectPack@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x18000D45C
 * Callers:
 *     ?IsFormatSupportedOnHostConnector@AudioEndpointInfo@@UEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x180143660 (-IsFormatSupportedOnHostConnector@AudioEndpointInfo@@UEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000B910 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18000D0A0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x18000D780 (-IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x18000EDF0 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B0D18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall EffectPack::IsFormatSupportedOnHostConnector(EffectPack *this, const struct WAVEFORMATEXTENSIBLE *a2)
{
  char v4; // bl
  _QWORD *v5; // rdx
  __int64 j; // rcx
  __int64 SupportedConnectorModesInternal; // r8
  char v8; // di
  __int64 v9; // rax
  GUID v10; // xmm0
  GUID v11; // xmm1
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // r12
  PROPVARIANT *v15; // rdx
  unsigned __int64 v16; // rcx
  _QWORD *v17; // r14
  _QWORD *v18; // r12
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rax
  const struct tWAVEFORMATEX ***v21; // rsi
  const struct tWAVEFORMATEX ***v22; // r15
  __int64 v24; // rax
  unsigned int i; // ecx
  int k; // eax
  int m; // eax
  PROPVARIANT *v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v33; // [rsp+30h] [rbp-10h]

  v4 = 0;
  if ( IsCompressedSpatialFormat(&a2->Format) )
  {
    v33 = 0LL;
    v24 = *((_QWORD *)this + 198);
    *(_OWORD *)pvar = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(v24 + 72) + 40LL))(
           *(_QWORD *)(v24 + 72),
           &PKEY_Endpoint_EncodedFormatSupport,
           pvar) >= 0
      && LOWORD(pvar[0]) == 65
      && LODWORD(pvar[1]) >= 0xC
      && LODWORD(pvar[1]) == 16LL * *(unsigned int *)(v33 + 8) + 12 )
    {
      for ( i = 0; i < *(_DWORD *)(v33 + 8); ++i )
      {
        v30 = 16LL * i;
        v31 = *(_QWORD *)&a2->SubFormat.Data1 - *(_QWORD *)(v30 + v33 + 12);
        if ( !v31 )
          v31 = *(_QWORD *)a2->SubFormat.Data4 - *(_QWORD *)(v30 + v33 + 20);
        if ( !v31 )
        {
          v4 = 1;
          break;
        }
      }
    }
    PropVariantClear(pvar);
    return v4;
  }
  else
  {
    SupportedConnectorModesInternal = EffectPack::GetSupportedConnectorModesInternal(this, 0LL, 0LL, 0LL);
    v8 = 1;
    if ( *(_DWORD *)(SupportedConnectorModesInternal + 8) )
    {
      for ( j = 0LL; (int)j < *(_DWORD *)(SupportedConnectorModesInternal + 8); j = (unsigned int)(j + 1) )
      {
        v5 = (_QWORD *)(*(_QWORD *)SupportedConnectorModesInternal + 16LL * (int)j);
        v9 = *v5 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
        if ( *v5 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
          v9 = v5[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
        if ( !v9 )
        {
          if ( (_DWORD)j != -1 )
          {
            v10 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
            goto LABEL_11;
          }
          break;
        }
      }
      for ( k = 0; k < *(_DWORD *)(SupportedConnectorModesInternal + 8); ++k )
      {
        v5 = (_QWORD *)(*(_QWORD *)SupportedConnectorModesInternal + 16LL * k);
        j = *v5 - *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1;
        if ( *v5 == *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1 )
          j = v5[1] - *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4;
        if ( !j )
        {
          if ( k != -1 )
          {
            v10 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
            goto LABEL_11;
          }
          break;
        }
      }
      v10 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                       SupportedConnectorModesInternal,
                       0);
LABEL_11:
      v11 = GUID_00000000_0000_0000_0000_000000000000;
    }
    else
    {
      v11 = GUID_00000000_0000_0000_0000_000000000000;
      v10 = GUID_00000000_0000_0000_0000_000000000000;
    }
    if ( !*((_QWORD *)this + 236) )
    {
      _o_terminate(j, v5, SupportedConnectorModesInternal);
      __debugbreak();
      JUMPOUT(0x18000D777LL);
    }
    v12 = *((_QWORD *)this + 237);
    v13 = 0;
    v14 = *((_QWORD *)this + 198);
    *(GUID *)pvar = v10;
    while ( 1 )
    {
      if ( v13 >= *(_DWORD *)(v12 + 16) )
        goto LABEL_19;
      v15 = (PROPVARIANT *)(*(_QWORD *)v12 + 16LL * v13);
      v16 = (_BYTE *)*v15 - (char *)pvar[0];
      if ( *v15 == pvar[0] )
        v16 = (_BYTE *)v15[1] - (char *)pvar[1];
      if ( !v16 )
        break;
      ++v13;
    }
    if ( v13 == -1 )
    {
LABEL_19:
      *(GUID *)pvar = v10;
      goto LABEL_20;
    }
    *(GUID *)pvar = v10;
    for ( m = 0; ; ++m )
    {
      if ( m >= *(_DWORD *)(v12 + 16) )
        goto LABEL_63;
      v28 = (PROPVARIANT *)(*(_QWORD *)v12 + 16LL * m);
      v29 = (_BYTE *)*v28 - (char *)pvar[0];
      if ( *v28 == pvar[0] )
        v29 = (_BYTE *)v28[1] - (char *)pvar[1];
      if ( !v29 )
        break;
    }
    if ( m == -1 )
    {
LABEL_63:
      *(GUID *)pvar = v11;
      goto LABEL_20;
    }
    if ( m < 0 )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v28);
      __debugbreak();
    }
    *(_OWORD *)pvar = *(_OWORD *)(*(_QWORD *)(v12 + 8) + 16LL * m);
LABEL_20:
    v17 = *(_QWORD **)(v14 + 272);
    v18 = *(_QWORD **)(v14 + 280);
    while ( v17 != v18 )
    {
      v19 = (_QWORD *)*v17;
      v20 = *(_QWORD *)*v17 - (unsigned __int64)pvar[0];
      if ( !v20 )
        v20 = v19[1] - (unsigned __int64)pvar[1];
      if ( !v20 )
      {
        v21 = (const struct tWAVEFORMATEX ***)v19[2];
        v22 = (const struct tWAVEFORMATEX ***)v19[3];
        while ( v21 != v22 )
        {
          if ( (unsigned int)CompareWaveFormat(&a2->Format, **v21) )
            return v8;
          ++v21;
        }
      }
      ++v17;
    }
    return 0;
  }
}
