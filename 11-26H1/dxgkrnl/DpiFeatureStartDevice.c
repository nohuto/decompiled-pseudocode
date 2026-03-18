/*
 * XREFs of DpiFeatureStartDevice @ 0x14024EDAC
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DpiQueryMiniportInterface @ 0x140193720 (DpiQueryMiniportInterface.c)
 *     ?DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE_2@@_N2PEAPEAUDXGK_FEATURE_DATABASE@@@Z @ 0x140288FF4 (-DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE_2@@_N2PEAPEAU.c)
 */

__int64 __fastcall DpiFeatureStartDevice(__int64 a1)
{
  __int64 v1; // rbx
  int FeatureDatabase; // ebx
  struct DXGK_FEATURE_DATABASE **v5; // [rsp+20h] [rbp-50h]
  struct DXGK_FEATURE_DATABASE **v6; // [rsp+20h] [rbp-50h]
  __int128 v7; // [rsp+30h] [rbp-40h] BYREF
  __int128 v8; // [rsp+40h] [rbp-30h]
  __int128 v9; // [rsp+50h] [rbp-20h]
  __int64 (__fastcall *v10)(__int64, __int64); // [rsp+60h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 64);
  v10 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( (int)DpiQueryMiniportInterface(a1, (__int64)&GUID_WDDM_INTERFACE_FEATURE, 56, 2, (__int64)v5, (__int64)&v7) < 0
    && (int)DpiQueryMiniportInterface(a1, (__int64)&GUID_WDDM_INTERFACE_FEATURE, 48, 1, (__int64)v6, (__int64)&v7) < 0 )
  {
    WdLogSingleEntry1(2LL);
    *(_QWORD *)&v8 = WdpInterfaceReferenceNop;
    *((_QWORD *)&v8 + 1) = WdpInterfaceReferenceNop;
    *((_QWORD *)&v9 + 1) = DpiQueryFeatureInterfaceLegacy;
    v10 = DpiQueryFeatureSupportLegacy;
    WdLogGlobalForLineNumber = 148;
    LODWORD(v7) = 131128;
    *((_QWORD *)&v7 + 1) = v1;
    *(_QWORD *)&v9 = 0LL;
  }
  FeatureDatabase = DxgkCreateFeatureDatabase(
                      (PCUNICODE_STRING)(v1 + 528),
                      (const struct _DXGKDDI_FEATURE_INTERFACE_2 *)&v7,
                      0,
                      *(_BYTE *)(v1 + 481) != 0,
                      (struct DXGK_FEATURE_DATABASE **)(v1 + 5832));
  if ( FeatureDatabase >= 0 )
    return 0LL;
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 176;
  (*((void (__fastcall **)(_QWORD))&v8 + 1))(*((_QWORD *)&v7 + 1));
  return (unsigned int)FeatureDatabase;
}
