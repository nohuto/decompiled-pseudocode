/*
 * XREFs of ?CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ @ 0x180090CAC
 * Callers:
 *     ?DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ @ 0x1800AEE64 (-DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ??A?$span@H$0?0@gsl@@QEBAAEAH_K@Z @ 0x1800089B0 (--A-$span@H$0-0@gsl@@QEBAAEAH_K@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x180009940 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000B910 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18000BD28 (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18000E988 (-GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengine.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F5F0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@@Z @ 0x18005E8E4 (-TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA-AU_GUID@@W4__MIDL___MIDL_.c)
 */

__int64 __fastcall EffectPack::CopyCapabilitiesFromEndpoint(EffectPack *this)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 *i; // rbp
  int v4; // ebx
  _DWORD *v5; // rax
  unsigned __int64 v6; // rbp
  char *v7; // r14
  CAudioSignalProcessingModeArray *v8; // rdi
  const struct _GUID *v9; // rbx
  __int64 v10; // rax
  int v11; // ebx
  __int64 v12; // rax
  _QWORD *v13; // r8
  _QWORD *v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r10
  _QWORD *v17; // rdx
  __int64 v19; // rax
  struct _GUID *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  CAudioSignalProcessingModeArray *v23; // rax
  __int64 v24; // rdx
  struct _GUID v25; // [rsp+30h] [rbp-38h] BYREF
  struct _GUID v26; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v1 = 0LL;
  for ( i = (unsigned __int64 *)((char *)this + 1616); v1 < *i; *v5 = v4 )
  {
    v4 = *(_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)(*((_QWORD *)this + 198) + 120LL), v1);
    v5 = (_DWORD *)gsl::span<int,-1>::operator[](i, v1++);
  }
  v6 = 0LL;
  if ( !*((_QWORD *)this + 214) )
  {
LABEL_8:
    v25 = 0LL;
    EffectPack::GetDefaultConnectorProcessingModeConfiguration(this, eHostProcessConnector, &v25, 0LL, 0LL);
    v26 = v25;
    EffectPack::TranslateDeviceConnectorModeToStreamingConnectorMode(this, &v25, 0LL, &v26);
    v12 = *((_QWORD *)this + 198);
    v13 = *(_QWORD **)(v12 + 280);
    v14 = *(_QWORD **)(v12 + 272);
    if ( v14 != v13 )
    {
      v15 = *(_QWORD *)v25.Data4;
      v16 = *(_QWORD *)&v25.Data1;
      do
      {
        v17 = (_QWORD *)*v14;
        if ( *(_QWORD *)*v14 == v16 && v17[1] == v15 && v17[3] == v17[2] )
          *(_QWORD *)(*((_QWORD *)this + 198) + 240LL) = 0LL;
        ++v14;
      }
      while ( v14 != v13 );
    }
    return 0LL;
  }
  while ( __PAIR128__(_mm_srli_si128(*(__m128i *)*((_QWORD *)this + 196), 8).m128i_u64[0], **((_QWORD **)this + 196)) != DRIVER_APO_EFFECTPACK_ID )
  {
    v7 = (char *)this + 1584;
    if ( *(int *)(gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                    (unsigned __int64 *)(*((_QWORD *)this + 198) + 216LL),
                    v6)
                + 8) <= 0
      || *(_BYTE *)(*(_QWORD *)v7 + 8235LL) )
    {
      goto LABEL_6;
    }
    v19 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(*(_QWORD *)v7 + 216LL), v6);
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         v19,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
    {
      v21 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(*(_QWORD *)v7 + 216LL), v6);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           v21,
                           &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
      {
        v22 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(*(_QWORD *)v7 + 216LL), v6);
        v20 = (struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v22, 0);
      }
      else
      {
        v20 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      }
    }
    else
    {
      v20 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
    v25 = *v20;
    v23 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                               (unsigned __int64 *)this + 214,
                                               v6);
    v11 = CAudioSignalProcessingModeArray::AddMultiple(v23, 1u, &v25);
    if ( v11 < 0 )
    {
      v24 = 2377LL;
      goto LABEL_25;
    }
LABEL_7:
    if ( ++v6 >= *((_QWORD *)this + 214) )
      goto LABEL_8;
  }
  v7 = (char *)this + 1584;
LABEL_6:
  v8 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                            (unsigned __int64 *)this + 214,
                                            v6);
  v9 = *(const struct _GUID **)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                 (unsigned __int64 *)(*(_QWORD *)v7 + 216LL),
                                 v6);
  v10 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(*(_QWORD *)v7 + 216LL), v6);
  v11 = CAudioSignalProcessingModeArray::AddMultiple(v8, *(_DWORD *)(v10 + 8), v9);
  if ( v11 >= 0 )
    goto LABEL_7;
  v24 = 2381LL;
LABEL_25:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v11);
  return (unsigned int)v11;
}
