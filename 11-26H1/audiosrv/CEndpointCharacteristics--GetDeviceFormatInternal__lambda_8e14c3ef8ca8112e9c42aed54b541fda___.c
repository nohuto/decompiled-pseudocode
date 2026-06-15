/*
 * XREFs of CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x1800348AC
 * Callers:
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71___ @ 0x180032C6C (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180010E90 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180032B60 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x1800333A0 (_lambda_5789e60fd85b99cd3c89d9f341e01d71_--operator().c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180035858 (CEndpointCharacteristics--GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
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
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
        CEndpointCharacteristics *this,
        char a2,
        unsigned __int8 a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        __int64 a5,
        _QWORD *a6)
{
  int v7; // r15d
  int DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda; // ebx
  void *v10; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  GUID fmtid; // xmm0
  DWORD pid; // eax
  int v16; // eax
  unsigned int v17; // r8d
  const char *v18; // r9
  BYTE *pData; // rdi
  int v20; // edi
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  int updated; // eax
  int v24; // eax
  LPVOID v25; // rax
  unsigned int v26; // [rsp+20h] [rbp-99h]
  char *v27; // [rsp+28h] [rbp-91h]
  bool v28; // [rsp+40h] [rbp-79h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-71h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+50h] [rbp-69h] BYREF
  LPVOID *p_pv; // [rsp+68h] [rbp-51h] BYREF
  struct tWAVEFORMATEX *v32; // [rsp+70h] [rbp-49h] BYREF
  char v33; // [rsp+78h] [rbp-41h]
  int v34[4]; // [rsp+80h] [rbp-39h] BYREF
  __int128 v35; // [rsp+90h] [rbp-29h]
  __int128 v36; // [rsp+A0h] [rbp-19h]
  __int128 v37; // [rsp+B0h] [rbp-9h]
  GUID v38; // [rsp+C0h] [rbp+7h] BYREF
  DWORD v39; // [rsp+D0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+4Fh]

  v7 = a3;
  *a6 = 0LL;
  pv = 0LL;
  if ( !a2 )
  {
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
    v38 = fmtid;
    v39 = pid;
    memset(&pvar, 0, sizeof(pvar));
    v16 = (*(__int64 (__fastcall **)(_QWORD, GUID *, struct tagPROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
            *((_QWORD *)this + 9),
            &v38,
            &pvar);
    if ( v16 >= 0 )
    {
      if ( pvar.vt )
      {
        if ( pvar.vt == 65 )
        {
          if ( (unsigned int)IsValidWfxBlob(&pvar) )
          {
            pData = pvar.bstrblobVal.pData;
            v28 = 0;
            lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(
              (CConnectorProcessingModeCharacteristics ***)a5,
              pvar.caui.pElems,
              &v28);
            if ( v28 )
            {
              p_pv = &pv;
              v32 = 0LL;
              v33 = 1;
              v20 = CloneWaveFormat((const struct tWAVEFORMATEX *)pData, &v32);
              wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&p_pv);
              if ( v20 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x19BA,
                  (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                  (const char *)(unsigned int)v20);
                goto LABEL_22;
              }
            }
          }
          else
          {
            wil::details::in1diag3::Log_Win32(retaddr, (void *)0x19BF, v17, v18, v26);
          }
        }
        else
        {
          LODWORD(v27) = pvar.vt;
          wil::details::in1diag3::Log_Win32Msg(
            retaddr,
            (void *)0x19CB,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0xD,
            (unsigned int)"Unexpected vartype %d (0x%08x)",
            v27,
            pvar.vt);
        }
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x19AE,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v16,
        v26);
    }
    if ( !pv )
    {
      p_pv = &pv;
      v32 = 0LL;
      v33 = 1;
      *(_OWORD *)v34 = *(_OWORD *)a5;
      v35 = *(_OWORD *)(a5 + 16);
      v36 = *(_OWORD *)(a5 + 32);
      v37 = *(_OWORD *)(a5 + 48);
      DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
                                                                 (int)this,
                                                                 v7,
                                                                 a4,
                                                                 (int)v34,
                                                                 &v32);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&p_pv);
      if ( DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda < 0 )
      {
        v20 = -2004287484;
        if ( DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda != -2004287484 )
        {
          v21 = (unsigned int)DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda;
          v22 = 6610LL;
LABEL_28:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v22,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)v21);
          PropVariantClear((PROPVARIANT *)&pvar);
          goto LABEL_36;
        }
LABEL_22:
        PropVariantClear((PROPVARIANT *)&pvar);
        DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = v20;
LABEL_36:
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &pv,
          0LL);
        return (unsigned int)DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda;
      }
      updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this, v7, a4, (const struct tWAVEFORMATEX *)pv);
      DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = updated;
      if ( updated < 0 )
      {
        v21 = (unsigned int)updated;
        v22 = 6613LL;
        goto LABEL_28;
      }
    }
    PropVariantClear((PROPVARIANT *)&pvar);
LABEL_32:
    v24 = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pv);
    DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = v24;
    if ( v24 >= 0 )
    {
      v25 = pv;
      pv = 0LL;
      *a6 = v25;
      DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = 0;
      goto LABEL_36;
    }
    v12 = (unsigned int)v24;
    v13 = 6618LL;
    goto LABEL_34;
  }
  *(_QWORD *)&pvar.vt = &pv;
  pvar.hVal.QuadPart = 0LL;
  *((_BYTE *)&pvar.decVal + 16) = 1;
  *(_OWORD *)v34 = *(_OWORD *)a5;
  v35 = *(_OWORD *)(a5 + 16);
  v36 = *(_OWORD *)(a5 + 32);
  v37 = *(_OWORD *)(a5 + 48);
  DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
                                                             (int)this,
                                                             a3,
                                                             a4,
                                                             (int)v34,
                                                             (struct tWAVEFORMATEX **)&pvar.hVal.QuadPart);
  if ( *((_BYTE *)&pvar.decVal + 16) )
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      *(void ***)&pvar.vt,
      pvar.puuid);
  if ( DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda >= 0 )
    goto LABEL_32;
  if ( DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda != -2004287484 )
  {
    v12 = (unsigned int)DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda;
    v13 = 6565LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v12);
    goto LABEL_36;
  }
  v10 = pv;
  pv = 0LL;
  if ( v10 )
    CoTaskMemFree(v10);
  return 2290679812LL;
}
