/*
 * XREFs of ?CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x180057E00
 * Callers:
 *     ?CreateDriverEffectPackInstance@EffectPack@@SAJPEAUIPropertyStore@@0PEAVCEndpointCharacteristics@@PEBU_tlgProvider_t@@AEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180057D44 (-CreateDriverEffectPackInstance@EffectPack@@SAJPEAUIPropertyStore@@0PEAVCEndpointCharacteristics.c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x180009940 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AC90 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18000B940 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18000BD28 (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F5F0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800584C0 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@00W4ValidEffectPackConfigurationSettings@@@Z @ 0x180058868 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@00W4ValidEffectPackConfigur.c)
 *     ??0EffectPackConfiguration@@QEAA@U_GUID@@@Z @ 0x180059FFC (--0EffectPackConfiguration@@QEAA@U_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall EffectPackConfiguration::CreateDriverEffectPackConfiguration(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  char *v5; // rax
  std::_Ref_count_base *v6; // rbx
  unsigned __int64 *v7; // r15
  void *v9; // r14
  unsigned __int8 v10; // r12
  unsigned int v11; // eax
  __int64 v12; // rsi
  HRESULT v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // r13
  int Configuration; // eax
  unsigned int v17; // esi
  char *v18; // rsi
  char *v19; // r12
  __int64 v20; // rax
  __int64 v21; // r14
  int v22; // r13d
  unsigned __int64 v23; // rcx
  int v24; // r15d
  __int64 v25; // r11
  unsigned int v26; // eax
  __int64 v27; // rsi
  HRESULT v28; // eax
  unsigned int v29; // r14d
  CAudioSignalProcessingModeArray *v30; // rax
  int v31; // eax
  unsigned int v32; // r14d
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+40h] [rbp-B8h]
  void *v35[2]; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A0h]
  struct _GUID v37; // [rsp+60h] [rbp-98h] BYREF
  __int64 v38; // [rsp+70h] [rbp-88h]
  GUID pclsid; // [rsp+78h] [rbp-80h] BYREF
  GUID Buf1; // [rsp+88h] [rbp-70h] BYREF
  _DWORD v41[3]; // [rsp+98h] [rbp-60h] BYREF
  char v42; // [rsp+A4h] [rbp-54h] BYREF
  _DWORD v43[3]; // [rsp+A8h] [rbp-50h] BYREF
  char v44; // [rsp+B4h] [rbp-44h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v38 = a3;
  v36 = a2;
  v4 = a1;
  *(_QWORD *)&Buf1.Data1 = a1;
  v5 = (char *)operator new(0x818uLL);
  v6 = (std::_Ref_count_base *)v5;
  *(_QWORD *)&pclsid.Data1 = v5;
  if ( v5 )
  {
    *(_OWORD *)v5 = 0LL;
    *((_DWORD *)v5 + 2) = 1;
    *((_DWORD *)v5 + 3) = 1;
    *(_QWORD *)v5 = &std::_Ref_count_obj2<EffectPackConfiguration>::`vftable';
    v37 = (struct _GUID)DRIVER_APO_EFFECTPACK_ID;
    EffectPackConfiguration::EffectPackConfiguration((EffectPackConfiguration *)(v5 + 16), &v37);
  }
  else
  {
    v6 = 0LL;
  }
  v7 = (unsigned __int64 *)((char *)v6 + 16);
  *(_QWORD *)&v37.Data1 = (char *)v6 + 16;
  *(_QWORD *)v37.Data4 = v6;
  if ( v6 == (std::_Ref_count_base *)-16LL )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BD,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
      (const char *)0x8007000ELL);
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)0xFFFFFFFFFFFFFFF0LL);
    return 2147942414LL;
  }
  if ( !a2 || g_bIsGlobalDisableThirdPartyEnhancements )
  {
LABEL_60:
    std::shared_ptr<std::function<void (void)>>::operator=(v38, &v37);
    if ( *(_QWORD *)v37.Data4 )
      std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)v37.Data4);
    return 0LL;
  }
  v9 = 0LL;
  v35[0] = 0LL;
  v35[1] = 0LL;
  v10 = 0;
  *(_OWORD *)pvar = 0LL;
  v34 = 0LL;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v4 + 40LL))(
         v4,
         &PKEY_Constrained_APO_ProcessingMode_List_For_Streaming,
         pvar) < 0
    || LOWORD(pvar[0]) != 4127
    || (v11 = (unsigned int)pvar[1]) == 0 )
  {
LABEL_25:
    PropVariantClear(pvar);
    v15 = v36;
    Configuration = EffectPackConfiguration::ReadConfiguration(v7, v36, v36, v4, ((v10 ^ 1) << 6) | 0x10789u);
    v17 = Configuration;
    if ( Configuration < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2EC,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
        (const char *)(unsigned int)Configuration);
      if ( v9 )
        free(v9);
      if ( v6 )
        std::_Ref_count_base::_Decref(v6);
      return v17;
    }
    if ( v10 )
    {
      v43[0] = 0;
      v43[1] = 1;
      v43[2] = 3;
      v18 = (char *)v43;
      do
      {
        v41[0] = 0;
        v41[1] = 1;
        v41[2] = 2;
        v19 = (char *)v41;
        v20 = 3LL * *(int *)v18;
        *(_QWORD *)&pclsid.Data1 = v20;
        do
        {
          v21 = 4 * (v20 + *(unsigned int *)v19);
          v22 = v7[v21 + 166];
          v23 = v7[v21 + 167];
          *(_QWORD *)&Buf1.Data1 = v23;
          if ( v22 )
          {
            v24 = v22 - 1;
            if ( v22 - 1 >= 0 )
            {
              do
              {
                if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                     (__int64)v35,
                                     (_QWORD *)(v23 + 16LL * (unsigned int)v24)) == -1 )
                {
                  memcpy_0((void *)v25, (const void *)(v25 + 16), 16LL * (unsigned int)(v22 - v24 - 1));
                  --v22;
                }
                --v24;
                v23 = *(_QWORD *)&Buf1.Data1;
              }
              while ( v24 >= 0 );
              v20 = *(_QWORD *)&pclsid.Data1;
            }
            v7 = (unsigned __int64 *)((char *)v6 + 16);
            *(_DWORD *)((char *)v6 + v21 * 8 + 1344) = v22;
          }
          v19 += 4;
        }
        while ( v19 != &v42 );
        v18 += 4;
      }
      while ( v18 != &v44 );
      v15 = v36;
    }
    *(_OWORD *)pvar = 0LL;
    v34 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
           v15,
           &PKEY_APO_SWFallback_ProcessingModes,
           pvar) >= 0
      && LOWORD(pvar[0]) == 4127 )
    {
      v26 = (unsigned int)pvar[1];
      if ( LODWORD(pvar[1]) )
      {
        v27 = 0LL;
        while ( (unsigned int)v27 < v26 )
        {
          Buf1 = 0LL;
          v28 = CLSIDFromString(*(LPCOLESTR *)(v34 + 8 * v27), &Buf1);
          v29 = v28;
          if ( v28 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x312,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
              (const char *)(unsigned int)v28);
            PropVariantClear(pvar);
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v35);
            if ( v6 )
              std::_Ref_count_base::_Decref(v6);
            return v29;
          }
          if ( memcmp_0(&Buf1, &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf, 0x10uLL) )
          {
            v30 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                                       v7 + 255,
                                                       0LL);
            v31 = CAudioSignalProcessingModeArray::AddMultiple(v30, 1u, &Buf1);
            v32 = v31;
            if ( v31 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x316,
                (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
                (const char *)(unsigned int)v31);
              PropVariantClear(pvar);
              ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v35);
              if ( v6 )
                std::_Ref_count_base::_Decref(v6);
              return v32;
            }
          }
          v27 = (unsigned int)(v27 + 1);
          v26 = (unsigned int)pvar[1];
        }
      }
    }
    PropVariantClear(pvar);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v35);
    goto LABEL_60;
  }
  v10 = 1;
  v12 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v12 >= v11 )
    {
      v7 = (unsigned __int64 *)((char *)v6 + 16);
      v4 = *(_QWORD *)&Buf1.Data1;
      goto LABEL_25;
    }
    pclsid = 0LL;
    v13 = CLSIDFromString(*(LPCOLESTR *)(v34 + 8 * v12), &pclsid);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D0,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
        (const char *)(unsigned int)v13);
      PropVariantClear(pvar);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v35);
      if ( v6 )
        std::_Ref_count_base::_Decref(v6);
      return v14;
    }
    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((__int64)v35, &pclsid) )
      break;
    v12 = (unsigned int)(v12 + 1);
    v9 = v35[0];
    v11 = (unsigned int)pvar[1];
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D1,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
    (const char *)0x8007000ELL);
  PropVariantClear(pvar);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v35);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return 2147942414LL;
}
