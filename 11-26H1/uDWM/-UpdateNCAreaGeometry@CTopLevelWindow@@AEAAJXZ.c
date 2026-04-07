/*
 * XREFs of ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18000ACD4
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18007EA04 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18000B03C (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?IsFrameExtendedIntoClientAreaLRB@CWindowData@@QEBA_NXZ @ 0x18000B1B8 (-IsFrameExtendedIntoClientAreaLRB@CWindowData@@QEBA_NXZ.c)
 *     ?SetCaptionRect@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@@Z @ 0x18000B1D8 (-SetCaptionRect@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?ApplyMaximizedClip@CTopLevelWindow@@AEAAXPEAUtagRECT@@@Z @ 0x18000B240 (-ApplyMaximizedClip@CTopLevelWindow@@AEAAXPEAUtagRECT@@@Z.c)
 *     ?ClearBorder@CLegacyNonClientBackground@@QEAAXXZ @ 0x18000B308 (-ClearBorder@CLegacyNonClientBackground@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x1800204DC (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ @ 0x18004BE00 (-TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?EdgeBorderMustBeOpaque@CTopLevelWindow@@AEAAHXZ @ 0x18004DF70 (-EdgeBorderMustBeOpaque@CTopLevelWindow@@AEAAHXZ.c)
 *     ?SetBorderRects@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@0@Z @ 0x180081C7C (-SetBorderRects@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaGeometry(CLegacyNonClientBackground **this)
{
  int v1; // r13d
  int v3; // esi
  int v4; // r14d
  int v5; // edi
  __int64 v6; // rcx
  int v7; // r9d
  int v8; // eax
  LONG v9; // r9d
  LONG v10; // r10d
  int v11; // eax
  unsigned int v12; // edi
  CLegacyNonClientBackground *v14; // rcx
  int v15; // eax
  CLegacyNonClientBackground *v16; // rax
  int v17; // ecx
  int v18; // edx
  int v19; // r8d
  int v20; // r15d
  int v21; // r12d
  CTopLevelWindow *v22; // rcx
  int v23; // r11d
  LONG v24; // ecx
  LONG v25; // edx
  int v26; // eax
  LONG left; // r13d
  LONG v28; // eax
  LONG right; // r15d
  LONG top; // r12d
  LONG v31; // ecx
  LONG bottom; // edi
  int v33; // eax
  struct tagRECT v34; // [rsp+30h] [rbp-40h] BYREF
  int v35; // [rsp+40h] [rbp-30h]
  int v36; // [rsp+44h] [rbp-2Ch]
  struct tagRECT v37; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT v38; // [rsp+58h] [rbp-18h] BYREF

  v1 = 0;
  CTopLevelWindow::GetActualWindowRect((CTopLevelWindow *)this, &v38, 1, 0, 0);
  v3 = *((_DWORD *)this + 147) - *((_DWORD *)this + 151);
  v4 = *((_DWORD *)this + 148) - *((_DWORD *)this + 152);
  v5 = *((_DWORD *)this + 150) - *((_DWORD *)this + 154);
  v36 = *((_DWORD *)this + 149) - *((_DWORD *)this + 153);
  v35 = (int)((double)dword_1801158C8 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 52));
  if ( CDesktopManager::IsHighContrastMode() )
  {
    v16 = this[39];
    v17 = 0;
    v18 = 0;
    v19 = 0;
    if ( v16 )
    {
      v17 = *((_DWORD *)v16 + 8);
      v18 = *((_DWORD *)this[40] + 8);
      v19 = *((_DWORD *)this[42] + 9);
    }
    v20 = 0;
    v21 = 0;
    if ( v3 - v17 >= 0 )
      v20 = v3 - v17;
    if ( v4 - v18 >= 0 )
      v21 = v4 - v18;
    if ( v5 - v19 >= 0 )
      v1 = v5 - v19;
    if ( CTopLevelWindow::TreatAsActiveWindow((CTopLevelWindow *)this)
      || (unsigned int)CTopLevelWindow::EdgeBorderMustBeOpaque(v22) )
    {
      v23 = 0;
    }
    else
    {
      v23 = (int)*((double *)CDesktopManager::s_pDesktopManagerInstance + 52);
    }
    v24 = v23 + v20 + v38.left;
    v34.left = v24;
    v25 = v38.top + v23;
    if ( v24 <= v38.right - v21 - v23 )
      v24 = v38.right - v21 - v23;
    v34.top = v38.top + v23;
    v34.right = v24;
    v26 = v38.bottom - v1;
    left = v3 + v38.left;
    v28 = v26 - v23;
    right = v3 + v38.left;
    if ( v25 <= v28 )
      v25 = v28;
    top = v38.top + v35;
    v34.bottom = v25;
    if ( left <= v38.right - v4 )
      right = v38.right - v4;
    v31 = v38.bottom - v5;
    v37.right = right;
    bottom = v38.top + v35;
    if ( top <= v31 )
      bottom = v31;
    v37.bottom = bottom;
    CTopLevelWindow::ApplyMaximizedClip((CTopLevelWindow *)this, &v34);
    if ( v34.left > left )
      left = v34.left;
    v37.left = left;
    if ( v34.top > top )
      top = v34.top;
    v37.top = top;
    if ( v34.right < right )
    {
      v37.right = v34.right;
      right = v34.right;
    }
    if ( v34.bottom < bottom )
    {
      v37.bottom = v34.bottom;
      bottom = v34.bottom;
    }
    if ( right <= left || bottom <= top )
    {
      *(_QWORD *)&v37.right = 0LL;
      *(_QWORD *)&v37.left = 0LL;
    }
    v33 = CLegacyNonClientBackground::SetBorderRects(this[32], &v37, &v34);
    v12 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F9D88, 0xAu, v33, 0x133Fu, 0LL);
      return v12;
    }
  }
  else if ( !CWindowData::IsFrameExtendedIntoClientAreaLRB(this[87]) || (*(_BYTE *)(v6 + 737) & 4) != 0 )
  {
    CLegacyNonClientBackground::ClearBorder(this[32]);
  }
  else
  {
    CTopLevelWindow::GetActualWindowRect((CTopLevelWindow *)this, &v37, 1, 1, 0);
    v34.left = v37.left;
    v34.top = v37.top;
    v34.bottom = v37.top;
    v14 = this[32];
    v34.right = v37.right;
    v15 = CLegacyNonClientBackground::SetBorderRects(v14, &v34, &v37);
    v12 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F9D88, 0xAu, v15, 0x1349u, 0LL);
      return v12;
    }
  }
  v7 = 0;
  if ( v3 >= 0 )
    v7 = v3;
  v8 = 0;
  v9 = v38.left + v7;
  v10 = v38.top + v35;
  v37.left = v9;
  v37.top = v38.top + v35;
  if ( v4 >= 0 )
    v8 = v4;
  if ( v9 <= v38.right - v8 )
    v9 = v38.right - v8;
  v37.right = v9;
  if ( v10 <= v38.top + v36 )
    v10 = v38.top + v36;
  v37.bottom = v10;
  CTopLevelWindow::ApplyMaximizedClip((CTopLevelWindow *)this, &v37);
  v11 = CLegacyNonClientBackground::SetCaptionRect(this[32], &v37);
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F9D88, 0xAu, v11, 0x135Au, 0LL);
  return v12;
}
