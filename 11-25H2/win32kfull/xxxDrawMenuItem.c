/*
 * XREFs of xxxDrawMenuItem @ 0x14004086C
 * Callers:
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x14003DB8C (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNInvertItem @ 0x14003E628 (xxxMNInvertItem.c)
 *     xxxMenuDraw @ 0x140043508 (xxxMenuDraw.c)
 * Callees:
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x140040014 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x140040284 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x14004047C (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     MNIsFlatMenu @ 0x14004083C (MNIsFlatMenu.c)
 *     GetDPIServerInfoForDpi @ 0x140041CA8 (GetDPIServerInfoForDpi.c)
 *     ?MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x140042B54 (-MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     GetDPIMETRICSForDpi @ 0x140042E30 (GetDPIMETRICSForDpi.c)
 *     MNIspItemValid @ 0x140043458 (MNIspItemValid.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x140048F9C (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     GreSelectFont @ 0x140054D30 (GreSelectFont.c)
 *     GreSetBkMode @ 0x140054F30 (GreSetBkMode.c)
 *     GrePolyPatBlt @ 0x140055878 (GrePolyPatBlt.c)
 *     GreSetTextColor @ 0x140056CB4 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x140056D44 (GreSetBkColor.c)
 *     xxxDrawState @ 0x140190760 (xxxDrawState.c)
 *     BltColor @ 0x140191F60 (BltColor.c)
 *     GetOemBitmapInfo @ 0x140192A04 (GetOemBitmapInfo.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x140192EA0 (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x140212374 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     ?MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z @ 0x14021F134 (-MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1402EA4F8 (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     GreGetTextCharacterExtra @ 0x140311E10 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x140311E58 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxDrawMenuItem(HDC a1, __int64 a2, struct tagMENU ***a3, __int64 a4, char a5, struct tagWND *a6)
{
  BOOL v6; // r15d
  int v8; // r13d
  unsigned int v10; // ebx
  BOOL v12; // eax
  struct tagMENU *v13; // rcx
  BOOL v14; // edi
  int v15; // eax
  __int64 v16; // rdx
  struct tagMENU *v17; // rcx
  int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct tagMENU *v21; // rcx
  __int64 result; // rax
  struct tagMENU *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int16 *OemBitmapInfo; // rdi
  int v27; // esi
  int v28; // r11d
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdi
  struct tagMENU *v33; // rcx
  int v34; // ebx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdx
  BOOL v42; // r15d
  int v43; // ebx
  struct tagMENU *v44; // rcx
  HFONT v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rdx
  _DWORD *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 UserSessionState; // rax
  int v68; // [rsp+50h] [rbp-78h]
  __int64 v69; // [rsp+58h] [rbp-70h]
  HFONT v70; // [rsp+60h] [rbp-68h]
  _DWORD v71[4]; // [rsp+78h] [rbp-50h] BYREF
  __int64 v72; // [rsp+88h] [rbp-40h]
  unsigned int v73; // [rsp+D8h] [rbp+10h]
  int v74; // [rsp+E0h] [rbp+18h]
  BOOL v75; // [rsp+E8h] [rbp+20h]

  v73 = a2;
  v6 = 0;
  v68 = 0;
  v8 = 0;
  v70 = 0LL;
  v10 = a2;
  v12 = MNIsFlatMenu((__int64)a1, a2);
  v13 = (struct tagMENU *)a3[2];
  v14 = v12;
  v75 = v12;
  if ( !v13 )
    v13 = **a3;
  v74 = MNIsOwnerDrawItem(v13, (struct tagITEM *)a4);
  v15 = MNDrawHilite((__int64)a3, (struct tagITEM *)a4);
  if ( v14 )
  {
    if ( v15 || (v18 = 0, (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x10000100) != 0) )
      v18 = 1;
    v17 = **a3;
    v6 = (*(_DWORD *)(*((_QWORD *)v17 + 5) + 40LL) & 1) == 0;
  }
  else
  {
    v18 = v15;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x1000) != 0 )
  {
    v45 = *(HFONT *)(GetDPIMETRICSForDpi(v10) + 48);
    if ( v45 )
    {
      v70 = (HFONT)GreSelectFont(a1, v45);
    }
    else
    {
      v8 = 64;
      GreGetTextCharacterExtra(a1);
      GetDPIServerInfoForDpi(v10);
      GetDPIMETRICSForDpi(v73);
      GreSetTextCharacterExtra(a1);
      v14 = v75;
    }
  }
  if ( v74 )
  {
    W32GetUserSessionState(v17, v16);
    GreSetTextColor(a1);
    W32GetUserSessionState(v20, v19);
    GreSetBkColor(a1);
    xxxSendMenuDrawItemMessage((__int64)a1, (a5 & 1) + 1, a3, (struct tagMENU ***)a4, 0, 0, a6);
    v21 = (struct tagMENU *)a3[2];
    if ( !v21 )
      v21 = **a3;
    result = MNIspItemValid(v21, a4);
    if ( (_BYTE)result )
    {
      if ( (*(_DWORD *)(*((_QWORD *)**a3 + 5) + 40LL) & 1) != 0 && *(_QWORD *)(a4 + 16) )
      {
        v23 = (struct tagMENU *)a3[2];
        if ( !v23 )
          v23 = **a3;
        if ( !(unsigned int)MNIsUAHMenu(v23) )
        {
          W32GetUserSessionState(v25, v24);
          OemBitmapInfo = (__int16 *)GetOemBitmapInfo((**(_DWORD **)a4 & 0x2000) != 0 ? 92 : 62);
          if ( *(_DWORD *)(*(_QWORD *)a4 + 76LL) >= OemBitmapInfo[3] )
          {
            if ( PrepareHDCBITSBitmap(0LL) )
            {
              v27 = OemBitmapInfo[3];
              v28 = (*(_DWORD *)(*(_QWORD *)a4 + 76LL) - v27 - 2) / 2;
              if ( v28 <= 0 )
                v28 = 0;
              BltColor(
                a1,
                *(_DWORD *)(*(_QWORD *)a4 + 68LL) + v28,
                OemBitmapInfo[2],
                v27,
                *OemBitmapInfo,
                OemBitmapInfo[1],
                1);
            }
          }
        }
      }
LABEL_11:
      MNDrawInsertionBar(a1, (struct tagITEM *)a4);
      if ( v68 )
        GreSetBkMode(a1);
      result = *(_QWORD *)a4;
      if ( (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x1000) != 0 )
      {
        if ( v70 )
        {
          return GreSelectFont(a1, v70);
        }
        else
        {
          GreGetTextCharacterExtra(a1);
          return GreSetTextCharacterExtra(a1);
        }
      }
      return result;
    }
    return result;
  }
  if ( v18 )
  {
    if ( v14 )
    {
      v51 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19872);
      v34 = *(_DWORD *)(v51 + 4684);
      v54 = *(_QWORD *)(W32GetUserSessionState(v51, v52) + 19872);
      v55 = *(_QWORD *)(v54 + 4928);
    }
    else
    {
      v17 = (struct tagMENU *)*(unsigned int *)(*((_QWORD *)**a3 + 5) + 40LL);
      if ( ((unsigned __int8)v17 & 1) == 0 )
        goto LABEL_32;
      v56 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19872);
      v34 = *(_DWORD *)(v56 + 4620);
      v54 = *(_QWORD *)(W32GetUserSessionState(v56, v57) + 19872);
      v55 = *(_QWORD *)(v54 + 4800);
    }
    v69 = v55;
    v58 = *(_QWORD *)(W32GetUserSessionState(v54, v53) + 19872);
    v32 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v58, v59) + 19872) + 4808LL);
    goto LABEL_33;
  }
  if ( !v6 )
  {
LABEL_32:
    v35 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19872);
    v34 = *(_DWORD *)(v35 + 4584);
    v37 = *(_QWORD *)(W32GetUserSessionState(v35, v36) + 19872);
    v69 = *(_QWORD *)(v37 + 4728);
    v39 = *(_QWORD *)(W32GetUserSessionState(v37, v38) + 19872);
    v32 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v39, v40) + 19872) + 4752LL);
    goto LABEL_33;
  }
  v29 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19872);
  v32 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v29, v30) + 19872) + 4752LL);
  v33 = **a3;
  if ( *(_QWORD *)(*((_QWORD *)v33 + 5) + 24LL) )
  {
    v34 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v33, v31) + 19872) + 4688LL);
    v69 = *(_QWORD *)(*((_QWORD *)**a3 + 5) + 24LL);
  }
  else
  {
    v49 = *(_QWORD *)(W32GetUserSessionState(v33, v31) + 19872);
    v34 = *(_DWORD *)(v49 + 4688);
    v69 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v49, v50) + 19872) + 4936LL);
  }
LABEL_33:
  if ( !(unsigned int)MNIsCachedBmpOnly((struct tagITEM *)a4) )
  {
    v46 = *(unsigned int *)(*(_QWORD *)a4 + 4LL);
    if ( (v46 & 1) != 0 || (v46 = *(unsigned int *)(*((_QWORD *)**a3 + 5) + 40LL), (v46 & 0x10) != 0) )
    {
      if ( v18
        || (v46 = *(_QWORD *)(W32GetUserSessionState(v46, v41) + 19872), v34 != *(_DWORD *)(v46 + 4628))
        || (v46 = *(_QWORD *)(W32GetUserSessionState(v46, v41) + 19872), *(_DWORD *)(v46 + 2188)) )
      {
        v61 = *(_QWORD *)(W32GetUserSessionState(v46, v41) + 19872);
        if ( *(_DWORD *)(v61 + 4636) != v34 )
        {
          v62 = *(_QWORD *)(W32GetUserSessionState(v61, v60) + 19872);
          v32 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v62, v63) + 19872) + 4832LL);
          goto LABEL_34;
        }
      }
      else
      {
        v48 = *(_QWORD *)(W32GetUserSessionState(v46, v41) + 19872);
        if ( *(_DWORD *)(v48 + 4632) != v34
          || *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v48, v47) + 19872) + 4648LL) != v34 )
        {
          v8 |= (*(_DWORD *)(*((_QWORD *)**a3 + 5) + 40LL) & 0x10) != 0 ? 256 : 32;
          goto LABEL_34;
        }
      }
      v8 |= 0x10u;
    }
  }
LABEL_34:
  GreSetBkColor(a1);
  GreSetTextColor(a1);
  if ( (a5 & 1) != 0 && !*(_QWORD *)(*((_QWORD *)**a3 + 5) + 24LL) || v18 || v6 )
  {
    v64 = *(_DWORD **)a4;
    v71[0] = *(_DWORD *)(*(_QWORD *)a4 + 64LL);
    v71[1] = v64[17];
    v71[2] = v64[18];
    v71[3] = v64[19];
    v72 = v69;
    GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v71, 1u);
    v42 = v75;
    if ( v18 && v75 )
    {
      UserSessionState = W32GetUserSessionState(v66, v65);
      DrawOutline(
        a1,
        *(_DWORD *)(*(_QWORD *)a4 + 64LL),
        *(_DWORD *)(*(_QWORD *)a4 + 68LL),
        *(_DWORD *)(*(_QWORD *)a4 + 72LL),
        *(_DWORD *)(*(_QWORD *)a4 + 76LL),
        1,
        *(HBRUSH *)(*(_QWORD *)(UserSessionState + 19872) + 4800LL));
    }
  }
  else
  {
    v42 = v75;
  }
  if ( *(_QWORD *)(*((_QWORD *)**a3 + 5) + 24LL) )
  {
    v43 = GreSetBkMode(a1);
    v68 = v43;
  }
  else
  {
    v43 = 0;
  }
  GreSelectBrush(a1, v32);
  xxxDrawState(
    a1,
    *(_DWORD *)(*(_QWORD *)a4 + 68LL),
    *(_DWORD *)(*(_QWORD *)a4 + 72LL),
    *(_DWORD *)(*(_QWORD *)a4 + 76LL),
    v8);
  v44 = (struct tagMENU *)a3[2];
  if ( !v44 )
    v44 = **a3;
  result = MNIspItemValid(v44, a4);
  if ( (_BYTE)result )
  {
    if ( !v42 )
      MNDrawMenu3DHotTracking(a1);
    goto LABEL_11;
  }
  if ( v43 )
    return GreSetBkMode(a1);
  return result;
}
