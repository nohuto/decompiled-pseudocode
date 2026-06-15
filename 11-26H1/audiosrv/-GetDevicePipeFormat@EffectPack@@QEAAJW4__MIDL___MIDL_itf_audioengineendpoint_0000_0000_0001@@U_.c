/*
 * XREFs of ?GetDevicePipeFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180067F64
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18002E644 (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 * Callees:
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180010E04 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReadFormatProperty@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@AEAV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@@Z @ 0x18002FE90 (-ReadFormatProperty@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@AEAV-$unique_struct@UtagPROPVAR.c)
 *     ??4?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180061AAC (--4-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-PropVariantClear@@YAJ0@ZP6AX0@Z$1-PropVariant.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180063028 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?reset@?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@QEAAXXZ @ 0x180084304 (-reset@-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-PropVariantClear@@YAJ0@ZP6AX0@Z$1-PropVar.c)
 *     ?RefreshDeviceFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800861B8 (-RefreshDeviceFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800B0154 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x18013C138 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall EffectPack::GetDevicePipeFormat(
        EffectPack *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  unsigned int i; // edx
  _QWORD *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  struct _RTL_CRITICAL_SECTION *v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  BYTE *pData; // rsi
  __int64 v15; // r14
  struct tWAVEFORMATEX *v16; // rax
  struct tWAVEFORMATEX *v17; // rbx
  unsigned int v19; // ebx
  int v20; // eax
  struct _RTL_CRITICAL_SECTION *v21; // rbx
  int refreshed; // eax
  __int64 v23; // r9
  __int64 v24; // rdx
  struct _RTL_CRITICAL_SECTION *v25; // rbx
  int v26; // eax
  int v27; // eax
  unsigned int v28; // [rsp+20h] [rbp-59h]
  char *v29; // [rsp+28h] [rbp-51h]
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+30h] [rbp-49h] BYREF
  struct tagPROPVARIANT v31; // [rsp+38h] [rbp-41h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+50h] [rbp-29h] BYREF
  __int128 v33; // [rsp+70h] [rbp-9h] BYREF
  __int128 v34; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v35; // [rsp+90h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  *a4 = 0LL;
  v34 = 0LL;
  v35 = 0;
  v33 = (__int128)*a3;
  for ( i = 0; i < 0xA; ++i )
  {
    v8 = &qword_18018B030[2 * i];
    v9 = *v8 - v33;
    if ( *v8 == (_QWORD)v33 )
      v9 = v8[1] - *((_QWORD *)&v33 + 1);
    if ( !v9 )
    {
      v34 = PKEY_AudioEngine_SignalProcessingMode_Specific_DevicePipeFormat;
      v10 = 602;
      if ( a2 != eKeywordDetectorConnector )
        v10 = 2;
      v35 = i + v10;
      memset(&v31, 0, sizeof(v31));
      v11 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 198) + 0x2000LL);
      EnterCriticalSection(v11);
      *(_QWORD *)&v33 = v11;
      v12 = *(_QWORD *)(*((_QWORD *)this + 198) + 72LL);
      memset(&pvar, 0, sizeof(pvar));
      v13 = (*(__int64 (__fastcall **)(__int64, __int128 *, struct tagPROPVARIANT *))(*(_QWORD *)v12 + 40LL))(
              v12,
              &v34,
              &pvar);
      if ( v13 >= 0 )
      {
        if ( pvar.vt )
        {
          if ( pvar.vt == 65 )
          {
            LOBYTE(v20) = IsValidWfxBlob(&pvar);
            if ( v20 )
              wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::operator=(
                (PROPVARIANT *)&v31,
                (PROPVARIANT *)&pvar);
            else
              wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0x1AD8,
                (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                (const char *)0xD,
                v28);
          }
          else
          {
            LODWORD(v29) = pvar.vt;
            wil::details::in1diag3::Return_Win32Msg(
              retaddr,
              (void *)0x1AE5,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)0xD,
              (unsigned int)"unexpected vartype 0x%x",
              v29);
          }
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1ACA,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v13);
      }
      PropVariantClear((PROPVARIANT *)&pvar);
      if ( v11 )
        LeaveCriticalSection(v11);
      if ( v31.vt == 65 )
        goto LABEL_14;
      wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::reset(&v31);
      (*(void (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)g_policyConfigInternal + 24LL))(
        g_policyConfigInternal,
        &v33,
        *(_QWORD *)(*((_QWORD *)this + 198) + 48LL));
      v21 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 198) + 0x2000LL);
      EnterCriticalSection(v21);
      v30 = v21;
      ReadFormatProperty(*(_QWORD *)(*((_QWORD *)this + 198) + 72LL), (__int64)&v34, (PROPVARIANT *)&v31);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v30);
      if ( v31.vt != 65 )
      {
        refreshed = EffectPack::RefreshDeviceFormat(this, a2);
        v19 = refreshed;
        if ( refreshed < 0 )
        {
          v23 = (unsigned int)refreshed;
          v24 = 7101LL;
          goto LABEL_37;
        }
        v25 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 198) + 0x2000LL);
        EnterCriticalSection(v25);
        v30 = v25;
        v26 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct tagPROPVARIANT *))(**(_QWORD **)(*((_QWORD *)this + 198) + 72LL)
                                                                                     + 40LL))(
                *(_QWORD *)(*((_QWORD *)this + 198) + 72LL),
                &v34,
                &v31);
        v19 = v26;
        if ( v26 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1BC2,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v26);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v30);
          goto LABEL_38;
        }
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v30);
        if ( v31.vt != 65 )
          goto LABEL_36;
      }
      LOBYTE(v27) = IsValidWfxBlob(&v31);
      if ( v27 )
      {
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v33);
LABEL_14:
        if ( (unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)v31.bstrblobVal.pData) )
        {
          v19 = -2004287480;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1BCA,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x88890008LL);
        }
        else
        {
          pData = v31.bstrblobVal.pData;
          v15 = *((unsigned __int16 *)v31.bstrblobVal.pData + 8);
          v16 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v15 + 18);
          v17 = v16;
          if ( v16 )
          {
            memcpy_0(v16, pData, v15 + 18);
            *a4 = v17;
            PropVariantClear((PROPVARIANT *)&v31);
            return 0LL;
          }
          *a4 = 0LL;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1BCC,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x8007000ELL);
          v19 = -2147024882;
        }
      }
      else
      {
LABEL_36:
        v19 = -2004287480;
        v23 = 2290679816LL;
        v24 = 7110LL;
LABEL_37:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)v23);
LABEL_38:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v33);
      }
      PropVariantClear((PROPVARIANT *)&v31);
      return v19;
    }
  }
  v19 = -2147023728;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1BA1,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x80070490LL);
  return v19;
}
