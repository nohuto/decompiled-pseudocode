/*
 * XREFs of ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18003A3B8
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001A06C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x180039F1C (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x18003AC08 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?GetLivePreviewWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x180073458 (-GetLivePreviewWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

char __fastcall CLivePreview::_IsEligibleForLivePreview(CLivePreview *this, CTopLevelWindow **a2)
{
  char v2; // bl
  __int64 v5; // rdx
  HWND v6; // rsi
  bool v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  RECT rcSrc1; // [rsp+20h] [rbp-40h] BYREF
  RECT rcSrc2; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+40h] [rbp-20h] BYREF

  v2 = 0;
  if ( (*((_BYTE *)a2 + 738) & 0x40) == 0 )
  {
    if ( a2[55] )
    {
      if ( CWindowData::IsWindowVisibleAndUncloaked((CWindowData *)a2)
        && (*(_BYTE *)(v5 + 736) & 4) == 0
        && (*(_DWORD *)(v5 + 116) & 0x20000000) == 0 )
      {
        v6 = *(HWND *)(v5 + 40);
        if ( v6 )
        {
          if ( v6 != GetDesktopWindow() && v6 != *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 143) )
          {
            CTopLevelWindow::GetLivePreviewWindowRect(a2[55], &rcSrc1, v7);
            v8 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 380);
            v9 = _mm_srli_si128(*(__m128i *)((char *)CDesktopManager::s_pDesktopManagerInstance + 380), 8).m128i_u64[0];
            rcSrc2.left = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 380);
            rcSrc2.top = HIDWORD(v8);
            rcSrc2.bottom = HIDWORD(v8) + HIDWORD(v9);
            rcSrc2.right = v9 + v8;
            rcDst = 0LL;
            if ( IntersectRect(&rcDst, &rcSrc1, &rcSrc2) )
            {
              v10 = 0;
              if ( rcSrc1.right - rcSrc1.left >= 0 )
                v10 = rcSrc1.right - rcSrc1.left;
              if ( v10 > 0 )
              {
                v11 = 0;
                if ( rcSrc1.bottom - rcSrc1.top >= 0 )
                  v11 = rcSrc1.bottom - rcSrc1.top;
                if ( v11 > 0 )
                  return 1;
              }
            }
          }
        }
      }
    }
  }
  return v2;
}
