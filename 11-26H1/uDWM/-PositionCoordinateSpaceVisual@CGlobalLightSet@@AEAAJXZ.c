/*
 * XREFs of ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x1800355CC
 * Callers:
 *     ?DisplayModeChanged@CGlobalLightSet@@QEAAXXZ @ 0x180035578 (-DisplayModeChanged@CGlobalLightSet@@QEAAXXZ.c)
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x1800364AC (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x1800357D0 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 *     ??$QueryInterface@UIVisual@Composition@UI@Windows@@@CResourceProxy@@QEAAJPEAPEAUIVisual@Composition@UI@Windows@@@Z @ 0x180082C44 (--$QueryInterface@UIVisual@Composition@UI@Windows@@@CResourceProxy@@QEAAJPEAPEAUIVisual@Composit.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CGlobalLightSet::PositionCoordinateSpaceVisual(struct tagPOINT **this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // ebx
  int v6; // r15d
  int v7; // edi
  int v8; // r12d
  int v9; // eax
  unsigned int v10; // esi
  int v11; // eax
  __m128 v12; // xmm0
  int v13; // eax
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v23; // [rsp+60h] [rbp+30h] BYREF
  struct tagPOINT v24; // [rsp+68h] [rbp+38h] BYREF

  if ( !(unsigned __int8)Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(this + 12) )
    return 0LL;
  v23 = 0LL;
  v3 = CResourceProxy::QueryInterface<Windows::UI::Composition::IVisual>(*(_QWORD *)(*(_QWORD *)v2 + 16LL), &v23);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC4,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v3,
      v21[0]);
    v18 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    return v4;
  }
  else
  {
    v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95);
    v6 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
    v7 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 96);
    v8 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98);
    *(float *)v21 = (float)v5;
    *(float *)&v21[1] = (float)v7;
    v21[2] = 0;
    v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 168LL))(v23, v21);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCB,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
        (const char *)(unsigned int)v9,
        v21[0]);
      v19 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    else
    {
      v11 = 0;
      if ( v6 >= 0 )
        v11 = v6;
      v12 = (__m128)COERCE_UNSIGNED_INT((float)v11);
      v13 = 0;
      if ( v8 >= 0 )
        v13 = v8;
      v14 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v23 + 288LL))(
              v23,
              _mm_unpacklo_ps(v12, (__m128)COERCE_UNSIGNED_INT((float)v13)).m128_u64[0]);
      v10 = v14;
      if ( v14 >= 0 )
      {
        v24.x = -v5;
        v24.y = -v7;
        CVisual::SetOffset(this[13], &v24, v15);
        v16 = v23;
        if ( v23 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCD,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
        (const char *)(unsigned int)v14,
        v21[0]);
      v20 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    return v10;
  }
}
