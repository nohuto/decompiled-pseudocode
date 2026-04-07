/*
 * XREFs of ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x1800335E4
 * Callers:
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18007C9A4 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x180033740 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180033AB8 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall CWindowIconic::GetWindowRectForLivePreview(CWindowIconic *this, struct tagRECT *a2)
{
  unsigned int v3; // esi
  CWindowData *v4; // rcx
  struct CWindowData *MDIOwner; // rbx
  __int64 v7; // rax
  int WindowRestoreRect; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __m128i v11; // xmm1
  LONG left; // edx

  v3 = 0;
  v4 = (CWindowData *)*((_QWORD *)this + 9);
  if ( (*((_BYTE *)v4 + 738) & 2) == 0 || (MDIOwner = CWindowData::GetMDIOwner(v4)) == 0LL )
    MDIOwner = (struct CWindowData *)*((_QWORD *)this + 9);
  v7 = *((_QWORD *)MDIOwner + 60);
  if ( v7 )
  {
    MDIOwner = *(struct CWindowData **)(v7 + 32);
    *a2 = *((struct tagRECT *)MDIOwner + 3);
  }
  else
  {
    WindowRestoreRect = CWindowData::GetWindowRestoreRect(MDIOwner, a2, 1);
    v3 = WindowRestoreRect;
    if ( WindowRestoreRect < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, WindowRestoreRect, 0x1FCu, 0LL);
      return v3;
    }
  }
  if ( *((_DWORD *)this + 4) == 2 )
  {
    v9 = *((_QWORD *)this + 3);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 128);
      v11 = _mm_cvtsi32_si128(HIDWORD(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28) + 104LL)));
      a2->left += (int)(float)((float)((float)(int)*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                               + 28)
                                                             + 104LL)
                                     * *((float *)MDIOwner + 83))
                             + (float)*((int *)MDIOwner + 16));
      left = a2->left;
      a2->top += (int)(float)((float)(_mm_cvtepi32_ps(v11).m128_f32[0] * *((float *)MDIOwner + 83))
                            + (float)*((int *)MDIOwner + 18));
      a2->bottom = a2->top + HIDWORD(v10);
      a2->right = left + v10;
      AdjustWindowRectEx(a2, *(_DWORD *)(*((_QWORD *)this + 10) + 116LL), 0, 0);
    }
  }
  return v3;
}
