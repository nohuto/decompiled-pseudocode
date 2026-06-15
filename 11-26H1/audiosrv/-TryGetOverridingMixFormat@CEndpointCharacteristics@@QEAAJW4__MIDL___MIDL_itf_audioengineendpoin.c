/*
 * XREFs of ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002FF80
 * Callers:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18000FE80 (-IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL.c)
 *     AudioServerGetMixFormat @ 0x180030220 (AudioServerGetMixFormat.c)
 *     ?UseAutoConvertPCMForLoopbackStreams@CEndpointCharacteristics@@QEAA_NXZ @ 0x18006C57C (-UseAutoConvertPCMForLoopbackStreams@CEndpointCharacteristics@@QEAA_NXZ.c)
 * Callees:
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180010E04 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180032B60 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180047B14 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180063028 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x18013B1C8 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x18013B1EC (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::TryGetOverridingMixFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  unsigned int i; // edx
  _QWORD *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // r8d
  const char *v15; // r9
  BYTE *pData; // rbx
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v21; // [rsp+20h] [rbp-39h]
  char *v22; // [rsp+28h] [rbp-31h]
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+40h] [rbp-19h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+48h] [rbp-11h] BYREF
  __int128 v25; // [rsp+60h] [rbp+7h]
  __int128 v26; // [rsp+70h] [rbp+17h] BYREF
  unsigned int v27; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *a4 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 0x2000);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 0x2000));
  v23 = v8;
  v26 = 0LL;
  v27 = 0;
  v25 = (__int128)*a3;
  for ( i = 0; ; ++i )
  {
    if ( i >= 0xA )
    {
      v18 = -2147023728;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B61,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x80070490LL);
      if ( v8 )
        LeaveCriticalSection(v8);
      return v18;
    }
    v10 = &qword_18018B030[2 * i];
    v11 = *v10 - v25;
    if ( *v10 == (_QWORD)v25 )
      v11 = v10[1] - *((_QWORD *)&v25 + 1);
    if ( !v11 )
      break;
  }
  v26 = PKEY_AudioEngine_SignalProcessingMode_Specific_OverridingMixFormat;
  v12 = 602;
  if ( a2 != eKeywordDetectorConnector )
    v12 = 2;
  v27 = i + v12;
  memset(&pvar, 0, sizeof(pvar));
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct tagPROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
          *((_QWORD *)this + 9),
          &v26,
          &pvar);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1B66,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v13,
      v21);
    goto LABEL_23;
  }
  if ( !pvar.vt )
    goto LABEL_23;
  if ( pvar.vt != 65 )
  {
    LODWORD(v22) = pvar.vt;
    wil::details::in1diag3::Log_Win32Msg(
      retaddr,
      (void *)0x1B80,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0xD,
      (unsigned int)"unexpected vartype %d (0x%x)",
      v22,
      pvar.vt);
    goto LABEL_23;
  }
  if ( !(unsigned int)IsValidWfxBlob(&pvar) )
  {
    wil::details::in1diag3::Log_Win32(retaddr, (void *)0x1B73, v14, v15, v21);
    goto LABEL_23;
  }
  pData = pvar.bstrblobVal.pData;
  if ( !pvar.bstrblobVal.pData )
  {
LABEL_23:
    PropVariantClear((PROPVARIANT *)&pvar);
    if ( v8 )
      LeaveCriticalSection(v8);
    return 0LL;
  }
  v17 = ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData);
  if ( v17 )
  {
    LODWORD(v22) = v17;
    v18 = -2004287480;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x1B8A,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x88890008LL,
      (int)"ValidateUncompressedWaveFormatEx returned 0x%08x",
      v22);
    goto LABEL_20;
  }
  v19 = CloneWaveFormat((const struct tWAVEFORMATEX *)pData, a4);
  v18 = v19;
  if ( v19 >= 0 )
  {
    PropVariantClear((PROPVARIANT *)&pvar);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v23);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B8C,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v19);
LABEL_20:
  PropVariantClear((PROPVARIANT *)&pvar);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v23);
  return v18;
}
