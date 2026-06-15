/*
 * XREFs of CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180035858
 * Callers:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x1800348AC (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180010E90 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180032B60 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x1800333A0 (_lambda_5789e60fd85b99cd3c89d9f341e01d71_--operator().c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x180035B7C (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180035C60 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180063028 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
        CEndpointCharacteristics *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        struct tWAVEFORMATEX **a5)
{
  int v9; // eax
  unsigned int ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda; // ebx
  __int64 result; // rax
  unsigned __int16 **v12; // rsi
  int OffloadDeviceFormat; // eax
  unsigned int v14; // edi
  int v15; // eax
  __int128 v16; // [rsp+20h] [rbp-31h] BYREF
  __int64 v17; // [rsp+30h] [rbp-21h]
  struct tagPROPVARIANT pvar; // [rsp+38h] [rbp-19h] BYREF
  _OWORD v19[4]; // [rsp+50h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+57h]
  bool v21; // [rsp+B0h] [rbp+5Fh] BYREF

  *(_QWORD *)&v16 = a1;
  BYTE8(v16) = 1;
  memset(&pvar, 0, sizeof(pvar));
  if ( (*(int (__fastcall **)(_QWORD *, void *, struct tagPROPVARIANT *))(**((_QWORD **)a1 + 9) + 40LL))(
         *((_QWORD **)a1 + 9),
         &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
         &pvar) >= 0
    && pvar.vt == 65
    && pvar.lVal >= 0x12u
    && pvar.ulVal == *((unsigned __int16 *)pvar.bstrblobVal.pData + 8) + 18LL
    && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) >= 0 )
  {
    v21 = 0;
    lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(
      (CConnectorProcessingModeCharacteristics ***)a4,
      pvar.caui.pElems,
      &v21);
    if ( v21 )
    {
      v9 = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a5);
      ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1965,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v9);
        PropVariantClear((PROPVARIANT *)&pvar);
        v16 = 0LL;
        v17 = 0LL;
        (*(void (__fastcall **)(_QWORD *, void *, __int128 *))(**((_QWORD **)a1 + 9) + 48LL))(
          *((_QWORD **)a1 + 9),
          &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
          &v16);
        return ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda;
      }
      PropVariantClear((PROPVARIANT *)&pvar);
      v16 = 0LL;
      v17 = 0LL;
      (*(void (__fastcall **)(_QWORD *, void *, __int128 *))(**((_QWORD **)a1 + 9) + 48LL))(
        *((_QWORD **)a1 + 9),
        &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
        &v16);
      return 0LL;
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  v16 = 0LL;
  v17 = 0LL;
  (*(void (__fastcall **)(_QWORD *, void *, __int128 *))(**((_QWORD **)a1 + 9) + 48LL))(
    *((_QWORD **)a1 + 9),
    &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
    &v16);
  if ( a2 )
  {
    v12 = (unsigned __int16 **)a5;
    OffloadDeviceFormat = CEndpointCharacteristics::GetOffloadDeviceFormat(a1, a5);
    v14 = OffloadDeviceFormat;
    if ( OffloadDeviceFormat < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1970,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)OffloadDeviceFormat);
      return v14;
    }
    lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()((CConnectorProcessingModeCharacteristics ***)a4, *v12, &v21);
    return 0LL;
  }
  memset(&pvar, 0, sizeof(pvar));
  if ( (*(int (__fastcall **)(_QWORD *, const PROPERTYKEY *, struct tagPROPVARIANT *))(**((_QWORD **)a1 + 9) + 40LL))(
         *((_QWORD **)a1 + 9),
         &PKEY_AudioEngine_OEMFormat,
         &pvar) >= 0
    && pvar.vt == 65 )
  {
    if ( (unsigned int)IsValidWfxBlob(&pvar) )
    {
      if ( (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) >= 0 )
      {
        v21 = 0;
        lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(
          (CConnectorProcessingModeCharacteristics ***)a4,
          pvar.caui.pElems,
          &v21);
        if ( v21 )
        {
          v15 = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a5);
          ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = v15;
          if ( v15 >= 0 )
            ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = 0;
          else
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1981,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)v15);
          PropVariantClear((PROPVARIANT *)&pvar);
          return ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda;
        }
      }
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  v19[0] = *(_OWORD *)a4;
  v19[1] = *(_OWORD *)(a4 + 16);
  v19[2] = *(_OWORD *)(a4 + 32);
  v19[3] = *(_OWORD *)(a4 + 48);
  ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
                                                                     a1,
                                                                     a3,
                                                                     v19,
                                                                     a5);
  if ( (ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda & 0x80000000) == 0 )
    return 0LL;
  result = 2290679812LL;
  if ( ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda != -2004287484 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1988,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda);
    return ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda;
  }
  return result;
}
