/*
 * XREFs of CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x18000E450
 * Callers:
 *     ?GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18000DEB4 (-GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000E350 (-GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?HardwareLoopbackEnabled@EffectPack@@QEAAHXZ @ 0x1800666C0 (-HardwareLoopbackEnabled@EffectPack@@QEAAHXZ.c)
 * Callees:
 *     _lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator() @ 0x18000CEE8 (_lambda_53e50f4d36d820af02fa3fa8c2905d02_--operator().c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180010E90 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180032B60 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x18003557C (CEndpointCharacteristics--GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180063028 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006C618 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180086DEC (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x18013B1C8 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x18013B1EC (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
        CEndpointCharacteristics *this,
        char a2,
        unsigned __int8 a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        __int64 a5,
        _QWORD *a6)
{
  int v7; // r15d
  int DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02; // edi
  unsigned int v10; // ebx
  GUID fmtid; // xmm0
  DWORD pid; // eax
  int v13; // eax
  unsigned int v14; // r8d
  const char *v15; // r9
  const struct tWAVEFORMATEX *v16; // rbx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  void *v19; // rcx
  int updated; // eax
  int v21; // eax
  LPVOID v22; // rax
  unsigned int v24; // [rsp+20h] [rbp-79h]
  char *v25; // [rsp+28h] [rbp-71h]
  LPVOID pv; // [rsp+40h] [rbp-59h] BYREF
  LPVOID *p_pv; // [rsp+48h] [rbp-51h] BYREF
  struct tWAVEFORMATEX *v28; // [rsp+50h] [rbp-49h] BYREF
  char v29; // [rsp+58h] [rbp-41h]
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-39h] BYREF
  struct tWAVEFORMATEX *Src[2]; // [rsp+70h] [rbp-29h]
  int v32[4]; // [rsp+80h] [rbp-19h] BYREF
  __int128 v33; // [rsp+90h] [rbp-9h]
  GUID v34; // [rsp+A0h] [rbp+7h] BYREF
  DWORD v35; // [rsp+B0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+4Fh]

  v7 = a3;
  *a6 = 0LL;
  pv = 0LL;
  if ( a2 )
  {
    p_pv = &pv;
    v28 = 0LL;
    v29 = 1;
    *(_OWORD *)pvar = *(_OWORD *)a5;
    *(_OWORD *)Src = *(_OWORD *)(a5 + 16);
    DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 = CEndpointCharacteristics::GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
                                                               (int)this,
                                                               a3,
                                                               a4,
                                                               (int)pvar,
                                                               &v28);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&p_pv);
    if ( DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 < 0 )
    {
      v10 = -2004287484;
      if ( DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 == -2004287484 )
      {
LABEL_34:
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &pv,
          0LL);
        return v10;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19A5,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02,
        v24);
LABEL_5:
      v10 = DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02;
      goto LABEL_34;
    }
LABEL_31:
    v21 = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pv);
    v10 = v21;
    if ( v21 >= 0 )
    {
      v22 = pv;
      pv = 0LL;
      *a6 = v22;
      v10 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19DA,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v21,
        v24);
    }
    goto LABEL_34;
  }
  if ( a4 == eKeywordDetectorConnector )
  {
    fmtid = (GUID)PKEY_AudioEngine_KeywordDetector_DeviceFormat;
    pid = 0;
  }
  else
  {
    fmtid = PKEY_AudioEngine_DeviceFormat.fmtid;
    pid = PKEY_AudioEngine_DeviceFormat.pid;
  }
  v34 = fmtid;
  v35 = pid;
  *(_OWORD *)pvar = 0LL;
  Src[0] = 0LL;
  v13 = (*(__int64 (__fastcall **)(_QWORD, GUID *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
          *((_QWORD *)this + 9),
          &v34,
          pvar);
  if ( v13 >= 0 )
  {
    if ( LOWORD(pvar[0]) )
    {
      if ( LOWORD(pvar[0]) == 65 )
      {
        if ( (unsigned int)IsValidWfxBlob((struct tagPROPVARIANT *)pvar) )
        {
          v16 = Src[0];
          if ( lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator()((__int64 *)a5, Src[0]) )
          {
            p_pv = &pv;
            v28 = 0LL;
            v29 = 1;
            v10 = CloneWaveFormat(v16, &v28);
            wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&p_pv);
            if ( (v10 & 0x80000000) != 0 )
            {
              v17 = v10;
              v18 = 6586LL;
LABEL_18:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v18,
                (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                (const char *)v17,
                v24);
              PropVariantClear(pvar);
              goto LABEL_34;
            }
          }
        }
        else
        {
          wil::details::in1diag3::Log_Win32(retaddr, (void *)0x19BF, v14, v15, v24);
        }
      }
      else
      {
        LODWORD(v25) = LOWORD(pvar[0]);
        wil::details::in1diag3::Log_Win32Msg(
          retaddr,
          (void *)0x19CB,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0xD,
          (unsigned int)"Unexpected vartype %d (0x%08x)",
          v25);
      }
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x19AE,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v13,
      v24);
  }
  if ( pv )
  {
LABEL_30:
    PropVariantClear(pvar);
    goto LABEL_31;
  }
  p_pv = &pv;
  v28 = 0LL;
  v29 = 1;
  *(_OWORD *)v32 = *(_OWORD *)a5;
  v33 = *(_OWORD *)(a5 + 16);
  DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 = CEndpointCharacteristics::GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
                                                             (int)this,
                                                             v7,
                                                             a4,
                                                             (int)v32,
                                                             &v28);
  if ( v29 )
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      p_pv,
      v28);
  if ( DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 >= 0 )
  {
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this, v7, a4, (const struct tWAVEFORMATEX *)pv);
    v10 = updated;
    if ( updated < 0 )
    {
      v17 = (unsigned int)updated;
      v18 = 6613LL;
      goto LABEL_18;
    }
    goto LABEL_30;
  }
  v10 = -2004287484;
  if ( DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 != -2004287484 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19D2,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02,
      v24);
    PropVariantClear(pvar);
    goto LABEL_5;
  }
  PropVariantClear(pvar);
  v19 = pv;
  pv = 0LL;
  if ( v19 )
    CoTaskMemFree(v19);
  return v10;
}
