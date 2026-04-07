/*
 * XREFs of ?PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x180066354
 * Callers:
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x180033E4C (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 *     ?DisplayModeChanged@CProjectedShadowScene@@QEAAXXZ @ 0x18008C154 (-DisplayModeChanged@CProjectedShadowScene@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C124 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800664B8 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@QEBAJV-$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProjectedShadowScene::PositionProjectedShadowReceiverVisual(CProjectedShadowScene *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdx
  int v4; // edi
  int v5; // esi
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __m128 v9; // xmm0
  int v10; // eax
  int v12[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v14; // [rsp+40h] [rbp+10h] BYREF

  if ( *((_QWORD *)this + 7) )
  {
    v14 = 0LL;
    v1 = Microsoft::WRL::ComPtr<IDCompositionVisual2>::As<Windows::UI::Composition::IVisual>((char *)this + 40, &v14);
    v2 = v1;
    if ( v1 < 0 )
    {
      v3 = 133LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v1,
        v12[0]);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
      return v2;
    }
    v4 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
    v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98);
    *(float *)v12 = (float)*((int *)CDesktopManager::s_pDesktopManagerInstance + 95);
    *(float *)&v12[1] = (float)*((int *)CDesktopManager::s_pDesktopManagerInstance + 96);
    v12[2] = 0;
    v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 168LL))(v14, v12);
    v2 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8B,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v6,
        v12[0]);
      v7 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      return v2;
    }
    v8 = 0;
    if ( v4 >= 0 )
      v8 = v4;
    v9 = (__m128)COERCE_UNSIGNED_INT((float)v8);
    v10 = 0;
    if ( v5 >= 0 )
      v10 = v5;
    v1 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v14 + 288LL))(
           v14,
           _mm_unpacklo_ps(v9, (__m128)COERCE_UNSIGNED_INT((float)v10)).m128_u64[0]);
    v2 = v1;
    if ( v1 < 0 )
    {
      v3 = 141LL;
      goto LABEL_14;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  }
  return 0LL;
}
