/*
 * XREFs of xxxDrawCaptionTemp @ 0x1400C08C8
 * Callers:
 *     xxxDrawCaptionBar @ 0x140044E0C (xxxDrawCaptionBar.c)
 *     NtUserDrawCaption @ 0x140295A70 (NtUserDrawCaption.c)
 *     NtUserDrawCaptionTemp @ 0x140295B70 (NtUserDrawCaptionTemp.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402DF124 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     xxxClientExtTextOutW @ 0x14002A440 (xxxClientExtTextOutW.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreGetTextAlign @ 0x14003F490 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x14003F4D8 (GreSetTextAlign.c)
 *     GetDPIMetrics @ 0x140042DD8 (GetDPIMetrics.c)
 *     GetDPIServerInfo @ 0x140042F14 (GetDPIServerInfo.c)
 *     GreGetLayout @ 0x140054CD8 (GreGetLayout.c)
 *     GreSelectFont @ 0x140054D30 (GreSelectFont.c)
 *     GreSetBkMode @ 0x140054F30 (GreSetBkMode.c)
 *     FillRect @ 0x1400557E0 (FillRect.c)
 *     GreSetTextColor @ 0x140056CB4 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x140056D44 (GreSetBkColor.c)
 *     GreExtTextOutW @ 0x140057230 (GreExtTextOutW.c)
 *     _HasCaptionIcon @ 0x1400B2A98 (_HasCaptionIcon.c)
 *     _GetTextMetricsW @ 0x1400C00C4 (_GetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1400C0134 (GreGetTextExtentW.c)
 *     ?GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z @ 0x1400C1194 (-GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x1400C13EC (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     DrawTextExWorker @ 0x1400C188C (DrawTextExWorker.c)
 *     xxxClientGetTextExtentPointW @ 0x1400C1B54 (xxxClientGetTextExtentPointW.c)
 *     ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x1400C1F70 (-FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z.c)
 *     xxxGetWindowText @ 0x1400C28CC (xxxGetWindowText.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x14018AF44 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x140192318 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     TextCopy @ 0x14019540C (TextCopy.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxDrawCaptionTemp(
        struct tagWND *a1,
        HDC a2,
        struct tagRECT *a3,
        HFONT a4,
        struct tagCURSOR *a5,
        __int64 a6,
        unsigned int a7)
{
  LONG left; // eax
  __int64 v9; // rcx
  struct tagCURSOR *WindowSmIcon; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r15d
  __int64 v20; // rdx
  HBRUSH v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int128 *v24; // rbx
  int WindowText; // eax
  __int64 v26; // r15
  __int16 v27; // cx
  int v28; // ecx
  int v29; // r13d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  __m128i *v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  int TextAlign; // eax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  HBRUSH v45; // rax
  unsigned __int64 v46; // rcx
  LONG cx; // ebx
  __int64 DPIMetrics; // rax
  HFONT v49; // rcx
  int v50; // edx
  __int64 DPIServerInfo; // rax
  unsigned int Layout; // eax
  unsigned int v53; // ebx
  int v54; // r15d
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rcx
  int v58; // ebx
  __int64 v59; // rdx
  __int64 v60; // rcx
  int v61; // ebx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdx
  struct _LARGE_UNICODE_STRING *StrName; // rax
  __int64 UserSessionState; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  int v80; // eax
  int v81; // edx
  int v82; // eax
  int v83; // edx
  WCHAR *SourceString; // [rsp+28h] [rbp-D8h]
  WCHAR *SourceStringa; // [rsp+28h] [rbp-D8h]
  unsigned int v86; // [rsp+38h] [rbp-C8h]
  int v87; // [rsp+40h] [rbp-C0h]
  HBRUSH v88; // [rsp+48h] [rbp-B8h]
  int v89; // [rsp+50h] [rbp-B0h]
  int v90; // [rsp+54h] [rbp-ACh]
  unsigned int v91; // [rsp+58h] [rbp-A8h]
  _BYTE v92[20]; // [rsp+60h] [rbp-A0h] BYREF
  HFONT v93; // [rsp+78h] [rbp-88h]
  int v94; // [rsp+80h] [rbp-80h]
  int v95; // [rsp+84h] [rbp-7Ch]
  int v96; // [rsp+88h] [rbp-78h]
  struct tagSIZE v97; // [rsp+90h] [rbp-70h] BYREF
  struct tagTHREADINFO *v98; // [rsp+98h] [rbp-68h]
  __int128 v99; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v100[3]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v101; // [rsp+E0h] [rbp-20h]
  int v102; // [rsp+E8h] [rbp-18h]
  _WORD v103[256]; // [rsp+F0h] [rbp-10h] BYREF

  left = a3->left;
  v9 = a6;
  WindowSmIcon = a5;
  *(_QWORD *)v92 = a6;
  v93 = a4;
  v91 = 1;
  v89 = 0;
  v97 = 0LL;
  v90 = 0;
  if ( a3->right <= left )
    return 0LL;
  if ( a1
    && !a5
    && (unsigned int)HasCaptionIcon((__int64)a1)
    && (a7 & 2) == 0
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 )
  {
    WindowSmIcon = GetWindowSmIcon(a1);
  }
  v87 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v9, a2) + 19872) + 4572LL);
  v14 = a7 & 0x10;
  v94 = a7 & 1;
  if ( (a7 & 1) != 0 )
  {
    if ( (a7 & 0x10) != 0 )
    {
      v56 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19872);
      if ( *(_WORD *)(v56 + 6996) >= 8u )
      {
        v57 = *(_QWORD *)(W32GetUserSessionState(v56, v55) + 19872);
        v58 = *(_DWORD *)(v57 + 4648);
        v56 = *(_QWORD *)(W32GetUserSessionState(v57, v59) + 19872);
        if ( v58 == *(_DWORD *)(v56 + 4568) )
        {
          v60 = *(_QWORD *)(W32GetUserSessionState(v56, v55) + 19872);
          v61 = *(_DWORD *)(v60 + 4648);
          v56 = *(_QWORD *)(W32GetUserSessionState(v60, v62) + 19872);
          if ( v61 != *(_DWORD *)(v56 + 4588) )
          {
            v63 = *(_QWORD *)(W32GetUserSessionState(v56, v55) + 19872);
            v16 = *(_DWORD *)(v63 + 4640);
            v65 = *(_QWORD *)(W32GetUserSessionState(v63, v64) + 19872);
            v19 = *(_DWORD *)(v65 + 4648);
            v21 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v65, v66) + 19872) + 4856LL);
            goto LABEL_11;
          }
        }
      }
      v67 = *(_QWORD *)(W32GetUserSessionState(v56, v55) + 19872);
      v16 = *(_DWORD *)(v67 + 4628);
      v69 = *(_QWORD *)(W32GetUserSessionState(v67, v68) + 19872);
      v19 = *(_DWORD *)(v69 + 4648);
      v88 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v69, v70) + 19872) + 4944LL);
LABEL_57:
      v87 = GreSetBkMode(a2, 1);
      goto LABEL_12;
    }
    v41 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19872);
    v16 = *(_DWORD *)(v41 + 4604);
    v43 = *(_QWORD *)(W32GetUserSessionState(v41, v42) + 19872);
    v19 = *(_DWORD *)(v43 + 4576);
    v45 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v43, v44) + 19872) + 4712LL);
LABEL_55:
    v88 = v45;
    if ( (a7 & 0x20) == 0 )
      goto LABEL_12;
    v89 = 1;
    goto LABEL_57;
  }
  if ( (a7 & 0x10) == 0 )
  {
    v71 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19872);
    v16 = *(_DWORD *)(v71 + 4644);
    v73 = *(_QWORD *)(W32GetUserSessionState(v71, v72) + 19872);
    v19 = *(_DWORD *)(v73 + 4580);
    v45 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v73, v74) + 19872) + 4720LL);
    goto LABEL_55;
  }
  v15 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19872);
  v16 = *(_DWORD *)(v15 + 4640);
  v18 = *(_QWORD *)(W32GetUserSessionState(v15, v17) + 19872);
  v19 = *(_DWORD *)(v18 + 4628);
  v21 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v18, v20) + 19872) + 4816LL);
LABEL_11:
  v88 = v21;
LABEL_12:
  v95 = GreSetTextColor(a2, v16);
  v96 = GreSetBkColor(a2, v19);
  if ( WindowSmIcon && (a7 & 2) == 0 )
  {
    if ( (a7 & 4) != 0 )
    {
      Layout = GreGetLayout(a2);
      v53 = Layout;
      v54 = Layout & 1;
      if ( (Layout & 1) != 0 )
        GreSetLayout(a2, 0xFFFFFFFFLL, Layout | 8);
      DrawCaptionIcon(a2, a3, WindowSmIcon, v88, a7);
      if ( v54 )
        GreSetLayout(a2, 0xFFFFFFFFLL, v53);
    }
    else
    {
      v23 = (unsigned int)(a3->bottom - a3->top);
      a3->left += v23;
    }
  }
  if ( (a7 & 8) == 0 )
    goto LABEL_40;
  v99 = 0LL;
  v24 = *(__int128 **)v92;
  v98 = PtiCurrent(v23, v22);
  if ( !*(_QWORD *)v92 )
  {
    if ( a1 )
    {
      if ( (a7 & 0x2000) == 0 )
      {
        WindowText = xxxGetWindowText(a1, v103);
LABEL_18:
        LODWORD(v26) = WindowText;
        v27 = 2 * WindowText;
LABEL_19:
        LOWORD(v99) = v27;
        v24 = &v99;
        WORD1(v99) = v27 + 2;
        *((_QWORD *)&v99 + 1) = v103;
        *(_QWORD *)v92 = &v99;
        goto LABEL_20;
      }
      if ( *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) )
      {
        *(_OWORD *)v92 = 0LL;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (struct tagWND *)((char *)a1 + 184),
                    (struct _LARGE_UNICODE_STRING *)v92);
        WindowText = TextCopy(StrName, v103, 255LL);
        goto LABEL_18;
      }
    }
    v103[0] = 0;
    v27 = 0;
    LODWORD(v26) = 0;
    goto LABEL_19;
  }
  v46 = *(unsigned __int16 *)(*(_QWORD *)v92 + 2LL) - 2LL;
  if ( v46 >= (unsigned __int16)**(_WORD **)v92 )
    LOWORD(v46) = **(_WORD **)v92;
  **(_WORD **)v92 = v46;
  v26 = (unsigned __int16)v46 >> 1;
  *(_WORD *)(*((_QWORD *)v24 + 1) + 2 * v26) = 0;
LABEL_20:
  if ( v93 )
  {
    v101 = 0LL;
    v102 = 0;
    memset(v100, 0, sizeof(v100));
    v93 = GreSelectFont(a2, v93);
    if ( (unsigned int)GetTextMetricsW(a2, (__int64)v100) )
      v28 = v100[0];
    else
      v28 = *(_DWORD *)(GetDPIServerInfo() + 40);
    v29 = (a3->top + a3->bottom - v28) / 2;
  }
  else
  {
    if ( (a7 & 2) != 0 )
    {
      DPIMetrics = GetDPIMetrics();
      v49 = *(HFONT *)(DPIMetrics + 32);
      v50 = *(_DWORD *)(DPIMetrics + 44);
    }
    else
    {
      DPIServerInfo = GetDPIServerInfo();
      v49 = *(HFONT *)(DPIServerInfo + 8);
      v50 = *(_DWORD *)(DPIServerInfo + 20);
    }
    v29 = (a3->top + a3->bottom - v50) / 2;
    v93 = GreSelectFont(a2, v49);
  }
  if ( v89 )
    FillCaptionGradient(a2, a3, v94);
  else
    FillRect(a2, a3, v88);
  v33 = *(_QWORD *)(W32GetUserSessionState(v31, v30) + 19872);
  if ( v88 == *(HBRUSH *)(v33 + 4944) )
  {
    UserSessionState = W32GetUserSessionState(v33, v32);
    GreSetTextColor(a2, *(_DWORD *)(*(_QWORD *)(UserSessionState + 19872) + 4640LL));
    v79 = W32GetUserSessionState(v78, v77);
    GreSetBkColor(a2, *(_DWORD *)(*(_QWORD *)(v79 + 19872) + 4636LL));
  }
  v34 = CALL_LPK(v98);
  v35 = (__m128i *)*((_QWORD *)v24 + 1);
  if ( v34 )
    xxxClientGetTextExtentPointW(a2, (PCWSTR)v35);
  else
    GreGetTextExtentW(a2, v35, (unsigned int)v26, &v97);
  if ( a1 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 0x20) != 0 )
  {
    TextAlign = GreGetTextAlign(a2);
    v90 = GreSetTextAlign(a2, TextAlign | 0x100u);
  }
  if ( (a7 & 0x4000) != 0 )
    goto LABEL_32;
  cx = v97.cx;
  if ( (_DWORD)v26 && v97.cx > a3->right - a3->left - 2 )
  {
    v24 = *(__int128 **)v92;
LABEL_32:
    *(_QWORD *)&v92[12] = 0LL;
    *(_QWORD *)v92 = 20LL;
    *(_DWORD *)&v92[8] = 2;
    if ( (a7 & 0x4000) != 0 )
    {
      v36 = 34853;
    }
    else if ( !a1 || (v36 = 34854, (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 0x10) == 0) )
    {
      v36 = 34852;
    }
    DrawTextExWorker(a2, *((unsigned __int16 **)v24 + 1), v26, a3, v36, (struct tagDRAWTEXTPARAMS *)v92);
    v91 = 0;
    goto LABEL_49;
  }
  if ( a1 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 0x10) != 0 )
  {
    v80 = CALL_LPK(v98);
    v81 = a3->right - cx - 2;
    SourceString = *(WCHAR **)(*(_QWORD *)v92 + 8LL);
    if ( v80 )
      xxxClientExtTextOutW(a2, v81, v29, 4u, a3, SourceString, v26);
    else
      GreExtTextOutW(a2, v81, v29, 4, (unsigned int *)a3, SourceString, v26, v86);
LABEL_36:
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 0x20) != 0 )
      GreSetTextAlign(a2, v90);
    goto LABEL_38;
  }
  v82 = CALL_LPK(v98);
  v83 = a3->left + 2;
  SourceStringa = *(WCHAR **)(*(_QWORD *)v92 + 8LL);
  if ( v82 )
    xxxClientExtTextOutW(a2, v83, v29, 4u, a3, SourceStringa, v26);
  else
    GreExtTextOutW(a2, v83, v29, 4, (unsigned int *)a3, SourceStringa, v26, v86);
LABEL_49:
  if ( a1 )
    goto LABEL_36;
LABEL_38:
  if ( v93 )
    GreSelectFont(a2, v93);
LABEL_40:
  GreSetTextColor(a2, v95);
  GreSetBkColor(a2, v96);
  if ( v88 == *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v38, v37) + 19872) + 4944LL) )
    GreSetBkMode(a2, v87);
  return v91;
}
