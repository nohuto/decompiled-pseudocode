/*
 * XREFs of ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x1800332CC
 * Callers:
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x1800330C0 (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x18006590C (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 * Callees:
 *     ?_GetDesktopWorkArea@CLivePreview@@AEAA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x18002CAEC (-_GetDesktopWorkArea@CLivePreview@@AEAA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x1800333F0 (-s_GetCoverageStateOfTwoRects@CLivePreview@@CA-AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z.c)
 *     ?GetDesktopWorkAreaAtIndex@CImmersiveState@@QEAAPEAUDesktopWorkAreaInfo@@I@Z @ 0x18008BFB4 (-GetDesktopWorkAreaAtIndex@CImmersiveState@@QEAAPEAUDesktopWorkAreaInfo@@I@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CLivePreview::_GetCoverageStateOfWindow(__int64 a1, __int64 a2)
{
  bool v2; // zf
  struct tagRECT v4; // xmm0
  _QWORD *v5; // rdi
  unsigned int v6; // esi
  _QWORD *v7; // rbp
  unsigned int CoverageStateOfTwoRects; // eax
  unsigned int v10; // edi
  unsigned int v11; // ebp
  CImmersiveState *v12; // rcx
  struct tagRECT v13; // [rsp+20h] [rbp-58h] BYREF
  __int128 v14; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v15; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(_DWORD *)(a2 + 128) == 1;
  v14 = 0LL;
  v13 = 0LL;
  if ( v2 )
    v4 = *CLivePreview::_GetDesktopWorkArea((CLivePreview *)a1, &v15, (HWND *)a2);
  else
    v4 = *(struct tagRECT *)(a2 + 48);
  v5 = *(_QWORD **)(a1 + 368);
  v6 = 0;
  v7 = *(_QWORD **)(a1 + 376);
  v13 = v4;
  while ( v5 != v7 )
  {
    CoverageStateOfTwoRects = CLivePreview::s_GetCoverageStateOfTwoRects(*v5 + 852LL, &v13, &v14);
    if ( CoverageStateOfTwoRects )
    {
      v6 = CoverageStateOfTwoRects;
      if ( CoverageStateOfTwoRects == 2 )
        break;
    }
    ++v5;
  }
  if ( *(_QWORD *)(a1 + 376) == *(_QWORD *)(a1 + 368) )
  {
    v10 = 0;
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 400) + 40LL);
    if ( v11 )
    {
      do
      {
        if ( v6 )
          break;
        if ( CImmersiveState::GetDesktopWorkAreaAtIndex(*(CImmersiveState **)(a1 + 400), v10) )
        {
          v15 = *(struct tagRECT *)CImmersiveState::GetDesktopWorkAreaAtIndex(v12, v10);
          v6 = CLivePreview::s_GetCoverageStateOfTwoRects(&v15, &v13, &v14);
        }
        ++v10;
      }
      while ( v10 < v11 );
    }
  }
  return v6;
}
