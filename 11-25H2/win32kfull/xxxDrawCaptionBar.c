/*
 * XREFs of xxxDrawCaptionBar @ 0x140044E0C
 * Callers:
 *     xxxRedrawTitle @ 0x140021BF8 (xxxRedrawTitle.c)
 *     xxxDWP_DoNCActivate @ 0x14003EE4C (xxxDWP_DoNCActivate.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     xxxDrawWindowFrame @ 0x14025CE6C (xxxDrawWindowFrame.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     GetAppCompatFlags2 @ 0x140038130 (GetAppCompatFlags2.c)
 *     GetResizeBorderWidthForDpi @ 0x140042EEC (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x140042FB0 (GetWindowFrameMetricForDpi.c)
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     GetWindowBorders @ 0x140044DD8 (GetWindowBorders.c)
 *     xxxMNCanClose @ 0x1400471A0 (xxxMNCanClose.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     GetRect @ 0x140052B80 (GetRect.c)
 *     IsVisible @ 0x140053FD8 (IsVisible.c)
 *     DrawEdge @ 0x1400552A8 (DrawEdge.c)
 *     GrePolyPatBlt @ 0x140055878 (GrePolyPatBlt.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 *     GrePatBlt @ 0x14009F4D0 (GrePatBlt.c)
 *     xxxDrawCaptionTemp @ 0x1400C08C8 (xxxDrawCaptionTemp.c)
 *     BitBltSysBmp @ 0x14019276C (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x140192A28 (GetOemBitmapInfoForDpi.c)
 *     IS_UI_LANGID @ 0x140192BF0 (IS_UI_LANGID.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x140192EA0 (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 *     DrawFrame @ 0x1401F0710 (DrawFrame.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

char __fastcall xxxDrawCaptionBar(struct tagWND *a1, HDC a2, int a3)
{
  char v3; // bl
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rcx
  char v17; // dl
  unsigned int v18; // edi
  char v19; // al
  unsigned int v20; // r13d
  __int64 v21; // rcx
  unsigned int WindowDpiLastNotify; // eax
  unsigned int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  int v26; // r15d
  unsigned int v27; // eax
  int DpiDependentMetric; // ebx
  unsigned int v29; // eax
  int v30; // eax
  int v31; // edx
  unsigned int DpiForSystem; // eax
  BOOL v33; // ecx
  unsigned int v34; // eax
  __int64 v35; // rcx
  int WindowFrameMetricForDpi; // r8d
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // r15d
  int v42; // ecx
  int v43; // edx
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned int v46; // eax
  __int64 v47; // rdx
  unsigned int v48; // ebx
  int v49; // ebx
  int v50; // eax
  HDC v51; // r13
  __int16 *OemBitmapInfoForDpi; // r15
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v56; // [rsp+20h] [rbp-99h]
  unsigned int v57; // [rsp+60h] [rbp-59h]
  unsigned int v58; // [rsp+64h] [rbp-55h]
  int v59; // [rsp+64h] [rbp-55h]
  int v60; // [rsp+64h] [rbp-55h]
  int v61; // [rsp+68h] [rbp-51h]
  int v63; // [rsp+70h] [rbp-49h]
  int v64; // [rsp+74h] [rbp-45h]
  __int64 v65; // [rsp+78h] [rbp-41h]
  __int64 v66; // [rsp+80h] [rbp-39h]
  __int64 v67; // [rsp+88h] [rbp-31h]
  int v68; // [rsp+90h] [rbp-29h] BYREF
  int v69; // [rsp+94h] [rbp-25h]
  int v70; // [rsp+98h] [rbp-21h]
  int v71; // [rsp+9Ch] [rbp-1Dh]
  __int64 v72; // [rsp+A0h] [rbp-19h]
  int v73; // [rsp+A8h] [rbp-11h]
  int v74; // [rsp+ACh] [rbp-Dh]
  int v75; // [rsp+B0h] [rbp-9h]
  int v76; // [rsp+B4h] [rbp-5h]
  __int64 v77; // [rsp+B8h] [rbp-1h]
  __int64 v78[2]; // [rsp+C0h] [rbp+7h] BYREF

  v61 = 0;
  v3 = a3;
  v67 = 0LL;
  *(_OWORD *)v78 = 0LL;
  if ( (a3 & 0x800) == 0 )
  {
    LODWORD(v6) = IsVisible(a1);
    if ( !(_DWORD)v6 )
      return v6;
  }
  GetRect(a1, v78, 34LL);
  if ( !*(_DWORD *)(W32GetUserSessionState(v8, v7) + 43264) )
  {
    v10 = *(_DWORD *)(W32GetUserSessionState(v10, v9) + 66804) & 0x80000010;
    if ( (_DWORD)v10 == -2147483632 )
    {
      v11 = v3 & 1;
      if ( (v3 & 1) != 0 )
        v12 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19872) + 4912LL);
      else
        v12 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19872) + 4920LL);
      v64 = 1;
      goto LABEL_8;
    }
  }
  v64 = 0;
  v11 = v3 & 1;
  if ( (v3 & 1) == 0 )
  {
    v64 = 0;
    v12 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19872) + 4720LL);
LABEL_8:
    v65 = v12;
    goto LABEL_9;
  }
  v65 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19872) + 4712LL);
LABEL_9:
  v13 = *((_QWORD *)a1 + 5);
  v14 = *(_DWORD *)(v13 + 288) & 0xF;
  if ( v14 == 3 )
  {
    v57 = (*(_DWORD *)(v13 + 288) >> 8) & 0x1FF;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(v13 + 232) & 0x400) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
    goto LABEL_26;
  }
  if ( v14
    || (v44 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) == 0
    || (*(_DWORD *)(**(_QWORD **)(v44 + 8) + 64LL) & 1) == 0 )
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
LABEL_26:
    v57 = WindowDpiLastNotify;
    goto LABEL_11;
  }
  v57 = 96;
LABEL_11:
  v15 = xxxMNCanClose(a1);
  v16 = *((_QWORD *)a1 + 5);
  v17 = *(_BYTE *)(v16 + 30);
  v18 = v15 == 0 ? 0x10 : 0;
  v19 = *(_BYTE *)(v16 + 31);
  v20 = 8;
  if ( (v17 & 1) != 0 )
  {
    if ( (v19 & 1) != 0 )
      v18 |= 2u;
  }
  else
  {
    v18 |= 8u;
  }
  if ( (v17 & 2) != 0 )
  {
    if ( (v19 & 0x20) == 0 )
      goto LABEL_15;
    v18 |= 1u;
LABEL_42:
    if ( (a3 & 0x8000) != 0 )
    {
      DrawEdge(a2);
      DrawFrame(a2, v78, 1LL, 120LL);
      ++LODWORD(v78[0]);
      --LODWORD(v78[1]);
      ++HIDWORD(v78[0]);
    }
    else
    {
      LODWORD(v78[0]) += 3;
      LODWORD(v78[1]) -= 3;
      HIDWORD(v78[0]) += 3;
    }
    DpiForSystem = GetDpiForSystem();
    HIDWORD(v78[1]) = HIDWORD(v78[0]) + GetDpiDependentMetric(13LL, DpiForSystem);
    v67 = GreSelectBrush(a2, v65);
LABEL_34:
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) == 0 )
      goto LABEL_49;
    v26 = 1;
    v27 = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(12LL, v27);
    v29 = GetDpiForSystem();
    v30 = GetDpiDependentMetric(23LL, v29);
    v59 = v30;
    if ( (a3 & 0x1000) != 0 )
    {
      if ( v18 )
      {
        if ( v18 != 12 )
        {
          HIDWORD(v78[1]) -= 2;
          v56 = HIDWORD(v78[1]) - (HIDWORD(v78[0]) + 2);
          HIDWORD(v78[0]) += 2;
          LODWORD(v78[1]) -= 2;
          GrePatBlt(a2, v78[1], SHIDWORD(v78[0]), 2, v56, 15728673);
          v40 = v61;
          if ( (v18 & 0x10) != 0 )
            v40 = v61 + 3;
          LODWORD(v78[1]) -= *(__int16 *)(GetOemBitmapInfoForDpi(v40, v57) + 4);
          BitBltSysBmp(a2, v78[1], SHIDWORD(v78[0]), 1);
          if ( (v18 & 0xC) != 12 && (v18 & 0x20) == 0 )
          {
            LODWORD(v78[1]) -= 2;
            GrePatBlt(a2, v78[1], SHIDWORD(v78[0]), 2, HIDWORD(v78[1]) - HIDWORD(v78[0]), 15728673);
            if ( (v18 & 2) != 0 )
              v41 = 8;
            else
              v41 = (v18 & 8) != 0 ? 17 : 14;
            LODWORD(v78[1]) -= *(__int16 *)(GetOemBitmapInfoForDpi(v41, v57) + 4);
            BitBltSysBmp(a2, v78[1], SHIDWORD(v78[0]), 1);
            if ( (v18 & 1) == 0 )
              v20 = (v18 & 4) != 0 ? 7 : 4;
            LODWORD(v78[1]) -= *(__int16 *)(GetOemBitmapInfoForDpi(v20, v57) + 4);
            BitBltSysBmp(a2, v78[1], SHIDWORD(v78[0]), 1);
            LODWORD(v78[1]) -= 2;
            GrePatBlt(a2, v78[1], SHIDWORD(v78[0]), 2, HIDWORD(v78[1]) - HIDWORD(v78[0]), 15728673);
            v26 = 3;
          }
          if ( (v18 & 0x1C) != 0 && (v18 & 0x20) == 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
          {
            LODWORD(v78[1]) -= 2;
            GrePatBlt(a2, v78[1], SHIDWORD(v78[0]), 2, HIDWORD(v78[1]) - HIDWORD(v78[0]), 15728673);
            LODWORD(v78[1]) -= *(__int16 *)(GetOemBitmapInfoForDpi(11LL, v57) + 4);
            BitBltSysBmp(a2, v78[1], SHIDWORD(v78[0]), 1);
            ++v26;
          }
          v42 = HIDWORD(v78[0]) - 2;
          v43 = HIDWORD(v78[1]) + 2;
          v68 = v78[1];
          v73 = v78[1];
          HIDWORD(v78[0]) -= 2;
          if ( (v18 & 0x20) != 0 )
            DpiDependentMetric = v59;
          v72 = 0LL;
          v77 = 0LL;
          HIDWORD(v78[1]) += 2;
          v69 = v42;
          v71 = 2;
          v74 = v43 - 2;
          v70 = DpiDependentMetric * v26;
          v75 = DpiDependentMetric * v26;
          v76 = 2;
          GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)&v68, 2u);
          if ( v67 )
            GreSelectBrush(a2, v67);
          goto LABEL_49;
        }
        v50 = DpiDependentMetric + 2;
      }
      else
      {
        v50 = 3 * DpiDependentMetric;
      }
      v60 = v50;
      v51 = PrepareHDCBITSBitmap(0LL);
      if ( v51 )
      {
        OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)!(a3 & 1) + 39, v57);
        LODWORD(v78[1]) -= v60;
        GreBitBltInternal(
          a2,
          OemBitmapInfoForDpi[3],
          v51,
          OemBitmapInfoForDpi[2] + *OemBitmapInfoForDpi - v60 - DpiDependentMetric,
          OemBitmapInfoForDpi[1],
          13369376,
          0,
          0);
        if ( v18 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
          {
            LODWORD(v78[1]) += 2 - DpiDependentMetric;
            GreBitBltInternal(
              a2,
              OemBitmapInfoForDpi[3],
              v51,
              OemBitmapInfoForDpi[2] + *OemBitmapInfoForDpi - DpiDependentMetric,
              OemBitmapInfoForDpi[1],
              13369376,
              0,
              0);
            if ( ((unsigned int)IS_UI_LANGID()
               || *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v54, v53) + 19872) + 7012LL) == 1037)
              && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
            {
              GreBitBltInternal(
                a2,
                OemBitmapInfoForDpi[3] - 4,
                v51,
                *OemBitmapInfoForDpi + OemBitmapInfoForDpi[2] - DpiDependentMetric + 2,
                OemBitmapInfoForDpi[1] + 2,
                -2134114272,
                0,
                0);
            }
          }
        }
      }
      goto LABEL_49;
    }
    if ( !v18 || (v18 & 0xC) != 12 && (v18 & 0x20) == 0 )
    {
      v31 = v78[1];
      v26 = 3;
    }
    else
    {
      v31 = LODWORD(v78[1]) - 2;
      LODWORD(v78[1]) -= 2;
      if ( v18 == 12 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
          v26 = 2;
        goto LABEL_47;
      }
    }
    if ( (v18 & 0x20) != 0 )
    {
LABEL_48:
      LODWORD(v78[1]) = v31 - v26 * v30;
LABEL_49:
      LOBYTE(v6) = a3;
      if ( (a3 & 0xC) != 0 )
      {
        v33 = xxxDrawCaptionTemp(a1, a2, (__int64)v78, 0LL, 0LL, a3 | (32 * v64) | (v18 >> 4) & 2) == 0;
        LOBYTE(v6) = SetOrClrWF(v33, a1, 0x708u, 1);
      }
      return v6;
    }
LABEL_47:
    v30 = DpiDependentMetric;
    goto LABEL_48;
  }
  v18 |= 4u;
  if ( (v19 & 0x20) != 0 )
    goto LABEL_42;
LABEL_15:
  if ( (*(_BYTE *)(v16 + 25) & 3) == 0 || (*(_BYTE *)(v16 + 20) & 8) != 0 )
  {
    v58 = 48;
    v66 = 4744LL;
  }
  else
  {
    v58 = 120;
    v66 = 4816LL;
  }
  if ( (a3 & 0x8000) != 0 )
  {
    v34 = GetDpiForSystem();
    WindowFrameMetricForDpi = GetWindowFrameMetricForDpi(v35, v34);
    v63 = WindowFrameMetricForDpi;
    v6 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v6 + 25) & 1) != 0 || (*(_BYTE *)(v6 + 26) & 2) != 0 )
    {
      LOBYTE(v6) = DrawEdge(a2);
      WindowFrameMetricForDpi = v63;
    }
    v37 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v37 + 30) & 4) != 0
      || WindowFrameMetricForDpi > 0
      && (v45 = *(unsigned int *)(v37 + 28),
          LOBYTE(v6) = (v45 & 0x40000) == 0,
          (((v45 & 0xC00000) != 12582912) & (unsigned __int8)v6) == 0)
      && (LODWORD(v6) = GetAppCompatFlags2(39168LL, v45), (v6 & 0x30000000) == 0) )
    {
      v46 = GetDpiForSystem();
      v48 = v63 + GetResizeBorderWidthForDpi(v46, v47);
      LOBYTE(v6) = DrawFrame(a2, v78, v48, 8 * (v11 ^ 1u) + 80);
      v49 = -v48;
      LODWORD(v78[0]) -= v49;
      LODWORD(v78[1]) += v49;
      HIDWORD(v78[0]) -= v49;
      HIDWORD(v78[1]) += v49;
    }
    v38 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v38 + 30) & 0xC0) != 0 || (*(_BYTE *)(v38 + 24) & 1) != 0 )
    {
      LOBYTE(v6) = DrawFrame(a2, v78, 1LL, v58);
      ++LODWORD(v78[0]);
      --LODWORD(v78[1]);
      ++HIDWORD(v78[0]);
      --HIDWORD(v78[1]);
    }
  }
  else
  {
    LODWORD(v6) = -(int)GetWindowBorders(*(_DWORD *)(v16 + 28), *(_DWORD *)(v16 + 24));
    LODWORD(v78[0]) -= v6;
    LODWORD(v78[1]) += v6;
    HIDWORD(v78[0]) -= v6;
    HIDWORD(v78[1]) += v6;
  }
  v21 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v21 + 16) & 8) != 0 )
  {
    if ( *(char *)(v21 + 24) < 0 )
    {
      v18 |= 0x20u;
      v39 = GetDpiForSystem();
      v24 = GetDpiDependentMetric(24LL, v39);
      v61 = 41;
    }
    else
    {
      v23 = GetDpiForSystem();
      v24 = GetDpiDependentMetric(13LL, v23);
    }
    HIDWORD(v78[1]) = HIDWORD(v78[0]) + v24;
    v69 = HIDWORD(v78[0]) + v24;
    v68 = v78[0];
    v70 = LODWORD(v78[1]) - LODWORD(v78[0]);
    v71 = 1;
    v72 = *(_QWORD *)(v66 + *(_QWORD *)(W32GetUserSessionState(LODWORD(v78[0]), v25) + 19872));
    GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)&v68, 1u);
    GreSelectBrush(a2, v65);
    goto LABEL_34;
  }
  return v6;
}
