/*
 * XREFs of ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x18004010C
 * Callers:
 *     ?GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z @ 0x18003FA98 (-GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z.c)
 *     ?DiscoverConnectorCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x180138570 (-DiscoverConnectorCapabilities@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800402CC (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z @ 0x180092A84 (-GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetConnectorSignalProcessingModes(
        struct IPropertyStore *a1,
        const struct _tagpropertykey *a2,
        const struct _tagpropertykey *a3,
        unsigned int *a4,
        struct _GUID **pv)
{
  struct _GUID **v8; // r15
  int v9; // eax
  unsigned int ConnectorSignalProcessingModes; // ebx
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]

  *a4 = 0;
  v8 = pv;
  *pv = 0LL;
  *(_OWORD *)pvar = 0LL;
  v20 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->GetValue)(
         a1,
         a3,
         pvar);
  ConnectorSignalProcessingModes = v9;
  if ( v9 < 0 )
  {
    v17 = (unsigned int)v9;
    v18 = 335LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)v17);
    goto LABEL_10;
  }
  if ( !LOWORD(pvar[0]) )
  {
    ConnectorSignalProcessingModes = -2147023728;
    goto LABEL_10;
  }
  if ( LOWORD(pvar[0]) != 19 )
  {
    v18 = 337LL;
LABEL_16:
    ConnectorSignalProcessingModes = -2147418113;
LABEL_18:
    v17 = ConnectorSignalProcessingModes;
    goto LABEL_12;
  }
  v11 = (unsigned int)pvar[1];
  PropVariantClear(pvar);
  *(_OWORD *)pvar = 0LL;
  v20 = 0LL;
  v12 = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->GetValue)(
          a1,
          a2,
          pvar);
  ConnectorSignalProcessingModes = v12;
  if ( v12 < 0 )
  {
    v17 = (unsigned int)v12;
    v18 = 343LL;
    goto LABEL_12;
  }
  if ( !LOWORD(pvar[0]) )
  {
    ConnectorSignalProcessingModes = -2147023728;
    v18 = 344LL;
    goto LABEL_18;
  }
  if ( LOWORD(pvar[0]) != 31 )
  {
    v18 = 345LL;
    goto LABEL_16;
  }
  pv = 0LL;
  v15 = _AllocString<CTCoAllocPolicy>(v14, v13, pvar[1], &pv);
  ConnectorSignalProcessingModes = v15;
  if ( v15 >= 0 )
  {
    ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes((const unsigned __int16 *)pv, v11, a4, v8);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&pv);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15C,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v15);
    if ( pv )
      CoTaskMemFree(pv);
  }
LABEL_10:
  PropVariantClear(pvar);
  return ConnectorSignalProcessingModes;
}
