/*
 * XREFs of ?CreateInstance@CSimpleTempAppVisual@@SAJAEBUtagRECT@@0AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@2PEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1805258BC
 * Callers:
 *     ?CSimpleTempAppVisual_CreateInstance@@YAJAEBUtagRECT@@0AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@2PEAUIApplicationView@@PEAPEAUITemporaryAppVisual@@@Z @ 0x18052580C (-CSimpleTempAppVisual_CreateInstance@@YAJAEBUtagRECT@@0AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHW.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCSimpleTempAppVisual@@V1@AEBUtagRECT@@AEBU2@AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@AEBQEAU4@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAVCSimpleTempAppVisual@@AEBUtagRECT@@1AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@3AEAPEAUIApplicationView@@@Z @ 0x180525568 (--$MakeAndInitialize@VCSimpleTempAppVisual@@V1@AEBUtagRECT@@AEBU2@AEBW4TEMPORARY_APP_VISUAL_TYPE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSimpleTempAppVisual::CreateInstance(
        struct tagRECT *a1,
        struct tagRECT *a2,
        const enum TEMPORARY_APP_VISUAL_TYPE *a3,
        HWND *a4,
        HWND *a5,
        struct IApplicationView *a6,
        const struct _GUID *a7,
        void **a8)
{
  void **v8; // r14
  int v13; // ebx

  v8 = a8;
  a8 = 0LL;
  *v8 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&a8);
  v13 = Microsoft::WRL::Details::MakeAndInitialize<CSimpleTempAppVisual,CSimpleTempAppVisual,tagRECT const &,tagRECT const &,enum TEMPORARY_APP_VISUAL_TYPE const &,HWND__ * const &,HWND__ * const &,IApplicationView * &>(
          (__int64 *)&a8,
          a1,
          a2,
          a3,
          a4,
          a5,
          (__int64 *)&a6);
  if ( v13 >= 0 )
    v13 = (*(__int64 (__fastcall **)(void **, GUID *, void **))*a8)(a8, &GUID_114ed843_c914_443d_9588_6ffb643e73d0, v8);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&a8);
  return (unsigned int)v13;
}
