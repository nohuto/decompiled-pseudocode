/*
 * XREFs of ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x18003518C
 * Callers:
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180035064 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?DisplayModeChanged@CGlobalLightSet@@QEAAXXZ @ 0x180035138 (-DisplayModeChanged@CGlobalLightSet@@QEAAXXZ.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18000A81C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x18000F840 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 *     ??$QueryInterface@UIVisual@Composition@UI@Windows@@@CResourceProxy@@QEAAJPEAPEAUIVisual@Composition@UI@Windows@@@Z @ 0x18003537C (--$QueryInterface@UIVisual@Composition@UI@Windows@@@CResourceProxy@@QEAAJPEAPEAUIVisual@Composit.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CGlobalLightSet::PositionCoordinateSpaceVisual(CGlobalLightSet *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // ebx
  int v6; // r15d
  int v7; // edi
  int v8; // r12d
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  int v13; // edx
  int v14; // eax
  __int64 *v15; // rcx
  __int64 *v17; // rcx
  __int64 *v18; // rcx
  __int64 *v19; // rcx
  int v20[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 *v22; // [rsp+60h] [rbp+30h] BYREF
  struct tagPOINT v23; // [rsp+68h] [rbp+38h] BYREF

  if ( !Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>((_QWORD *)this + 12) )
    return 0LL;
  v22 = 0LL;
  v3 = CResourceProxy::QueryInterface<Windows::UI::Composition::IVisual>(*(_QWORD *)(*(_QWORD *)v2 + 16LL), &v22);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC4,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v3,
      v20[0]);
    v17 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v17 + 16))(v17);
    }
    return v4;
  }
  else
  {
    v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95);
    v6 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
    v7 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 96);
    v8 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98);
    v9 = *v22;
    *(float *)v20 = (float)v5;
    *(float *)&v20[1] = (float)v7;
    v20[2] = 0;
    v10 = (*(__int64 (__fastcall **)(__int64 *, int *))(v9 + 168))(v22, v20);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCB,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
        (const char *)(unsigned int)v10,
        v20[0]);
      v19 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64 *))(*v19 + 16))(v19);
      }
    }
    else
    {
      v12 = 0;
      if ( v6 >= 0 )
        v12 = v6;
      v13 = 0;
      if ( v8 >= 0 )
        v13 = v8;
      v14 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(*v22 + 288))(
              v22,
              _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v12), (__m128)COERCE_UNSIGNED_INT((float)v13)).m128_u64[0]);
      v11 = v14;
      if ( v14 >= 0 )
      {
        v23.x = -v5;
        v23.y = -v7;
        CVisual::SetOffset(*((struct tagPOINT **)this + 13), &v23);
        v15 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          (*(void (__fastcall **)(__int64 *))(*v15 + 16))(v15);
        }
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCD,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
        (const char *)(unsigned int)v14,
        v20[0]);
      v18 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64 *))(*v18 + 16))(v18);
      }
    }
    return v11;
  }
}
