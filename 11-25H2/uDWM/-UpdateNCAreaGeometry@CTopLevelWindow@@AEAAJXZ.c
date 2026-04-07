/*
 * XREFs of ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180010470
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18000C5C4 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18000F520 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?ClearBorder@CLegacyNonClientBackground@@QEAAXXZ @ 0x18001108C (-ClearBorder@CLegacyNonClientBackground@@QEAAXXZ.c)
 *     ?CreateRectRgnCoerceInvalid@@YAPEAUHRGN__@@PEBUtagRECT@@@Z @ 0x1800110C8 (-CreateRectRgnCoerceInvalid@@YAPEAUHRGN__@@PEBUtagRECT@@@Z.c)
 *     ?ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z @ 0x18001113C (-ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z.c)
 *     ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x1800113D4 (-HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z.c)
 *     ?SetCaptionRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z @ 0x180011960 (-SetCaptionRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ @ 0x180012FBC (-TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800248D0 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?EdgeBorderMustBeOpaque@CTopLevelWindow@@AEAAHXZ @ 0x18005A210 (-EdgeBorderMustBeOpaque@CTopLevelWindow@@AEAAHXZ.c)
 *     ?SetBorderRegion@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@@Z @ 0x18006A454 (-SetBorderRegion@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x180079310 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?SetBorderRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z @ 0x1800B9D90 (-SetBorderRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1800E97E4 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaGeometry(CLegacyNonClientBackground **this)
{
  int v1; // ebx
  HRGN v2; // r15
  HRGN v3; // r14
  HRGN v4; // rdi
  int v6; // r9d
  int v7; // r12d
  int v8; // r13d
  int v9; // r9d
  CLegacyNonClientBackground *v10; // rax
  int v11; // eax
  int v12; // ecx
  HRGN v13; // rax
  int v14; // eax
  signed int v15; // ebx
  int v16; // eax
  int v18; // r9d
  CLegacyNonClientBackground *v19; // rax
  int v20; // ecx
  int v21; // edx
  int v22; // r8d
  bool v23; // sf
  int v24; // eax
  int v25; // ecx
  int v26; // ecx
  CTopLevelWindow *v27; // rcx
  LONG v28; // ebx
  int v29; // r10d
  int v30; // eax
  int v31; // eax
  int v32; // r11d
  HRGN v33; // rax
  signed int v34; // eax
  int v35; // edx
  unsigned int v36; // ecx
  int v37; // r8d
  int v38; // eax
  int v39; // eax
  signed int LastError; // eax
  signed int v41; // eax
  int v42; // edx
  unsigned int v43; // ecx
  int v44; // r8d
  signed int v45; // eax
  unsigned int v46; // [rsp+28h] [rbp-69h]
  HRGN hrgnDst; // [rsp+38h] [rbp-59h] BYREF
  int v48; // [rsp+40h] [rbp-51h]
  int v49; // [rsp+44h] [rbp-4Dh]
  int v50; // [rsp+48h] [rbp-49h]
  int v51; // [rsp+4Ch] [rbp-45h]
  int v52; // [rsp+50h] [rbp-41h]
  struct tagRECT v53; // [rsp+58h] [rbp-39h] BYREF
  struct tagRECT Src; // [rsp+68h] [rbp-29h] BYREF
  struct tagRECT v55; // [rsp+78h] [rbp-19h] BYREF
  LONG v56; // [rsp+88h] [rbp-9h]
  int v57; // [rsp+8Ch] [rbp-5h]
  int v58; // [rsp+90h] [rbp-1h]
  int v59; // [rsp+94h] [rbp+3h]
  int v60; // [rsp+98h] [rbp+7h]
  int v61; // [rsp+9Ch] [rbp+Bh]
  LONG right; // [rsp+A0h] [rbp+Fh]
  int v63; // [rsp+A4h] [rbp+13h]
  LONG v64; // [rsp+A8h] [rbp+17h]
  int v65; // [rsp+ACh] [rbp+1Bh]
  int v66; // [rsp+B0h] [rbp+1Fh]
  int v67; // [rsp+B4h] [rbp+23h]

  v1 = 0;
  hrgnDst = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  CTopLevelWindow::GetActualWindowRect((CTopLevelWindow *)this, &v53, 1, 0, 0);
  v6 = *((_DWORD *)this + 154) - *((_DWORD *)this + 158);
  v7 = *((_DWORD *)this + 151) - *((_DWORD *)this + 155);
  v8 = *((_DWORD *)this + 152) - *((_DWORD *)this + 156);
  v49 = *((_DWORD *)this + 153) - *((_DWORD *)this + 157);
  v51 = v6;
  v48 = (int)((double)dword_180119838 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 52));
  if ( !CDesktopManager::IsHighContrastMode() )
  {
    v10 = this[89];
    if ( (*((_DWORD *)v10 + 24) || *((_DWORD *)v10 + 25) || *((_DWORD *)v10 + 27)) && (*((_BYTE *)v10 + 673) & 4) == 0 )
    {
      CTopLevelWindow::GetActualWindowRect((CTopLevelWindow *)this, &Src, 1, 1, 0);
      v15 = CLegacyNonClientBackground::SetBorderRegion(this[34], &Src);
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F9AD0, 10LL, v15, 0x13FEu, 0LL);
        return (unsigned int)v15;
      }
    }
    else
    {
      CLegacyNonClientBackground::ClearBorder(this[34]);
    }
    goto LABEL_6;
  }
  v19 = this[41];
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( v19 )
  {
    v20 = *((_DWORD *)v19 + 6);
    v21 = *((_DWORD *)this[42] + 6);
    v22 = *((_DWORD *)this[44] + 7);
  }
  v23 = v7 - v20 < 0;
  v24 = v7 - v20;
  v25 = 0;
  if ( !v23 )
    v1 = v24;
  if ( v8 - v21 >= 0 )
    v25 = v8 - v21;
  v50 = v25;
  v26 = 0;
  if ( v9 - v22 >= 0 )
    v26 = v9 - v22;
  v52 = v26;
  if ( !CTopLevelWindow::TreatAsActiveWindow((CTopLevelWindow *)this)
    && !(unsigned int)CTopLevelWindow::EdgeBorderMustBeOpaque(v27) )
  {
    LODWORD(v2) = (int)*((double *)CDesktopManager::s_pDesktopManagerInstance + 52);
  }
  v28 = (_DWORD)v2 + v53.left + v1;
  v55.top = v53.top + (_DWORD)v2;
  v55.right = v53.right - v50 - (_DWORD)v2;
  v29 = v53.bottom - v51;
  v58 = v7 + v53.left;
  v30 = v53.bottom - v51;
  right = v55.right;
  if ( v53.top + v49 > v53.bottom - v51 )
    v30 = v53.top + v49;
  v66 = v53.right - v50 - (_DWORD)v2;
  v59 = v30;
  v55.left = v28;
  v31 = v53.bottom - v51;
  v55.bottom = v53.top + v48;
  if ( v53.top + v49 > v29 )
    v31 = v53.top + v49;
  v56 = v28;
  v63 = v31;
  v57 = v53.top + v48;
  v60 = v53.right - v8;
  if ( v29 < 0 )
    v29 = 0;
  v61 = v53.top + v48;
  v32 = v53.bottom - v52 - (_DWORD)v2;
  v64 = v28;
  v65 = v29;
  if ( v32 < 0 )
    v32 = 0;
  v67 = v32;
  SetLastError(0);
  v33 = CreateRectRgnCoerceInvalid(&v53);
  v2 = v33;
  if ( v33 )
  {
    v38 = CTopLevelWindow::ApplyMaximizedClip((CTopLevelWindow *)this, v33);
    v15 = v38;
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F9AD0, 10LL, v38, 0x13EBu, 0LL);
LABEL_18:
      DeleteObject(v2);
LABEL_19:
      if ( v3 )
        DeleteObject(v3);
      return (unsigned int)v15;
    }
    v39 = HrgnFromRects(&v55, 4u, &hrgnDst);
    v15 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F9AD0, 10LL, v39, 0x13F1u, 0LL);
      goto LABEL_23;
    }
    SetLastError(0);
    v4 = hrgnDst;
    if ( !CombineRgn(hrgnDst, hrgnDst, v2, 1) )
    {
      LastError = GetLastError();
      v15 = LastError;
      if ( LastError > 0 )
        v15 = (unsigned __int16)LastError | 0x80070000;
      v46 = 5107;
LABEL_62:
      if ( v15 >= 0 )
        v15 = -2003304445;
LABEL_66:
      v18 = v15;
      goto LABEL_29;
    }
    v14 = CLegacyNonClientBackground::SetBorderRegion(this[34], v4);
    v15 = v14;
    if ( v14 < 0 )
    {
      v46 = 5108;
      goto LABEL_28;
    }
    ReleaseGDIObject<HRGN__ *>(&hrgnDst);
    v4 = hrgnDst;
LABEL_6:
    v11 = 0;
    v12 = 0;
    if ( v7 >= 0 )
      v11 = v7;
    Src.left = v53.left + v11;
    Src.top = v53.top + v48;
    if ( v8 >= 0 )
      v12 = v8;
    Src.right = v53.right - v12;
    Src.bottom = v53.top + v49;
    SetLastError(0);
    v13 = CreateRectRgnCoerceInvalid(&Src);
    v3 = v13;
    if ( !v13 )
    {
      v41 = GetLastError();
      v15 = v41;
      if ( v41 > 0 )
        v15 = (unsigned __int16)v41 | 0x80070000;
      if ( v15 >= 0 )
        v15 = CheckGUIHandleQuota(v43, v42, v44);
      v46 = 5133;
      goto LABEL_66;
    }
    v14 = CTopLevelWindow::ApplyMaximizedClip((CTopLevelWindow *)this, v13);
    v15 = v14;
    if ( v14 >= 0 )
    {
      v16 = HrgnFromRects(&Src, 1u, &hrgnDst);
      v15 = v16;
      if ( v16 >= 0 )
      {
        SetLastError(0);
        v4 = hrgnDst;
        if ( CombineRgn(hrgnDst, hrgnDst, v3, 1) )
        {
          v14 = CLegacyNonClientBackground::SetCaptionRegion(this[34], v4);
          v15 = v14;
          if ( v14 >= 0 )
            goto LABEL_15;
          v46 = 5144;
          goto LABEL_28;
        }
        v45 = GetLastError();
        v15 = v45;
        if ( v45 > 0 )
          v15 = (unsigned __int16)v45 | 0x80070000;
        v46 = 5143;
        goto LABEL_62;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F9AD0, 10LL, v16, 0x1415u, 0LL);
LABEL_23:
      v4 = hrgnDst;
      goto LABEL_15;
    }
    v46 = 5135;
LABEL_28:
    v18 = v14;
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F9AD0, 10LL, v18, v46, 0LL);
LABEL_15:
    if ( v4 )
      DeleteObject(v4);
    if ( !v2 )
      goto LABEL_19;
    goto LABEL_18;
  }
  v34 = GetLastError();
  v15 = v34;
  if ( v34 > 0 )
    v15 = (unsigned __int16)v34 | 0x80070000;
  if ( v15 >= 0 )
    v15 = CheckGUIHandleQuota(v36, v35, v37);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F9AD0, 10LL, v15, 0x13E9u, 0LL);
  return (unsigned int)v15;
}
