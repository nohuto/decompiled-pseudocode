/*
 * XREFs of ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1401A73E0
 * Callers:
 *     xxxMNOpenHierarchy @ 0x14016D6F0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxSendMinRectMessages @ 0x14002ADF4 (xxxSendMinRectMessages.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140036D34 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     MNGetpItemFromIndex @ 0x140042B84 (MNGetpItemFromIndex.c)
 *     GetDPIMetrics @ 0x140042DD8 (GetDPIMetrics.c)
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1401597F0 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1401A8180 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?GetMenuRightAlignHint@@YA_NXZ @ 0x14026E280 (-GetMenuRightAlignHint@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxMNPositionHierarchy(__int64 **a1, __int64 a2, int a3, int a4, LONG *a5, int *a6, __int64 a7)
{
  __int64 *v10; // rax
  bool v11; // zf
  __int64 *v12; // rax
  unsigned int v13; // r12d
  __int64 v14; // rcx
  _DWORD *v15; // rax
  char v16; // bl
  char v17; // bl
  int v18; // esi
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // rax
  bool v22; // di
  int v23; // eax
  LONG left; // edi
  int v25; // edx
  __int64 v26; // rax
  __int64 *v27; // rdx
  __int64 v28; // rsi
  int v29; // esi
  int v30; // ebx
  struct tagMONITOR *v31; // rax
  __int64 *v32; // rdx
  __int64 v33; // rbx
  int v34; // esi
  LONG top; // ebx
  unsigned int DpiForSystem; // eax
  _QWORD *v37; // rcx
  struct tagRECT v39; // [rsp+20h] [rbp-61h] BYREF
  int v40; // [rsp+30h] [rbp-51h]
  int v41; // [rsp+34h] [rbp-4Dh]
  int v42; // [rsp+38h] [rbp-49h]
  __int64 v43; // [rsp+40h] [rbp-41h]
  __int64 v44; // [rsp+48h] [rbp-39h]
  LONG *v45; // [rsp+50h] [rbp-31h]
  int *v46; // [rsp+58h] [rbp-29h]
  __int64 v47; // [rsp+60h] [rbp-21h]
  _QWORD v48[2]; // [rsp+68h] [rbp-19h] BYREF
  __int128 v49; // [rsp+78h] [rbp-9h] BYREF

  v45 = a5;
  v46 = a6;
  v47 = a7;
  v10 = *a1;
  v44 = a2;
  v39 = 0LL;
  v11 = (*(_DWORD *)*v10 & 1) == 0;
  v12 = *a1;
  if ( !v11 )
  {
    v13 = 4;
    v14 = *(_QWORD *)(*(_QWORD *)(*v12 + 16) + 40LL);
    v15 = *(_DWORD **)a2;
    v16 = *(_BYTE *)(v14 + 31);
    v49 = 0LL;
    v17 = v16 & 0x20;
    v18 = v15[16];
    v41 = v15[17];
    LODWORD(v14) = v15[18];
    v42 = v15[19];
    v19 = *a1;
    v40 = v14;
    v20 = *(_QWORD *)(*(_QWORD *)(*v19 + 16) + 40LL);
    v21 = *a1;
    v49 = *(_OWORD *)(v20 + 88);
    v22 = !*(_QWORD *)(*v21 + 40) || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 40LL) & 0x20) == 0;
    if ( v17 && IsTrayWindow(*(_QWORD **)(**a1 + 16), 1LL) )
      xxxSendMinRectMessages(*(unsigned __int64 **)(**a1 + 16), (__int64)&v49);
    if ( GetMenuRightAlignHint() || !v22 )
    {
      *(_DWORD *)**a1 |= 0x10u;
      if ( !v17 )
      {
        v25 = v40;
        v23 = v49;
        left = v49 + v40 + v18 - a3;
        goto LABEL_16;
      }
      left = DWORD2(v49) - a3;
    }
    else
    {
      v23 = v49;
      left = v49;
      if ( !v17 )
      {
        v25 = v40;
        left = v18 + v49;
LABEL_16:
        LODWORD(v49) = v18 + v23;
        DWORD2(v49) = v25 + v18 + v23;
        DWORD1(v49) += v41;
        HIDWORD(v49) = DWORD1(v49) + v42;
      }
    }
    v26 = MonitorFromRect((INT *)&v49, 1u, 0);
    v27 = *a1;
    v28 = v26;
    v43 = v26;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v48, *v27);
    MNGetPopupBoundsRect((__int64)v48, v28, &v39, 0);
    if ( v17 )
    {
      v29 = DWORD1(v49) - a4;
      if ( DWORD1(v49) - a4 < v39.top )
        v29 = HIDWORD(v49);
    }
    else
    {
      v29 = HIDWORD(v49);
    }
    if ( left >= v39.right - a3 )
      left = v39.right - a3;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0 )
    {
      left = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL)
           - left
           - a3
           + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 96LL);
      if ( left >= v39.right - a3 )
        left = v39.right - a3;
    }
    goto LABEL_36;
  }
  v13 = 1;
  left = *(_DWORD *)(*(_QWORD *)a2 + 64LL)
       + *(_DWORD *)(*(_QWORD *)a2 + 72LL)
       + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v12 + 16) + 40LL) + 88LL);
  v29 = *(_DWORD *)(*(_QWORD *)a2 + 68LL) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 92LL);
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 124LL) & 3) != 0 )
  {
    v30 = *(_DWORD *)(*(_QWORD *)MNGetpItemFromIndex(
                                   *(_QWORD *)(**a1 + 40),
                                   *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 116LL))
                    + 68LL);
    v29 += *(_DWORD *)(GetDPIMetrics() + 28) - v30;
  }
  v31 = _MonitorFromWindowInternal(*(struct tagWND **)(**a1 + 16), 1u, 0);
  v32 = *a1;
  v33 = (__int64)v31;
  v43 = (__int64)v31;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v48, *v32);
  MNGetPopupBoundsRect((__int64)v48, v33, &v39, 0);
  if ( ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0) != ((*(_DWORD *)**a1 & 0x10) != 0)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3 >= v39.left )
  {
    left = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3;
    v13 = 2;
  }
  if ( left + a3 > v39.right )
  {
    v13 = 2;
    left = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0 )
    v13 ^= 3u;
LABEL_36:
  if ( v29 + a4 <= v39.bottom )
  {
    top = v39.top;
  }
  else
  {
    v34 = v29 - a4;
    top = v39.top;
    if ( (*(_DWORD *)**a1 & 1) != 0 )
    {
      DpiForSystem = GetDpiForSystem();
      v29 = v34 - GetDpiDependentMetric(26, DpiForSystem);
      if ( v29 < top )
      {
LABEL_43:
        v29 = v39.bottom - a4;
        goto LABEL_45;
      }
      v13 = 8;
    }
    else
    {
      v29 = *(_DWORD *)(*(_QWORD *)v44 + 76LL) + 6 + v34;
    }
    if ( v29 < top || v29 + a4 > v39.bottom )
      goto LABEL_43;
  }
LABEL_45:
  if ( left <= v39.left )
    left = v39.left;
  v37 = (_QWORD *)v47;
  if ( v29 <= top )
    v29 = top;
  *v45 = left;
  *v46 = v29;
  if ( v37 )
    *v37 = v43;
  return v13;
}
