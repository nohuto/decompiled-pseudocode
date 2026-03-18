/*
 * XREFs of SetRedirectedWindow @ 0x1400B4EC4
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     xxxSetWindowStyle @ 0x14004EEC0 (xxxSetWindowStyle.c)
 *     _SetLayeredWindowAttributes @ 0x1400E1004 (_SetLayeredWindowAttributes.c)
 *     xxxPrintWindow @ 0x140241E1C (xxxPrintWindow.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     GetRedirectionBitmap @ 0x14001DFF0 (GetRedirectionBitmap.c)
 *     xxxInternalInvalidate @ 0x140030AC0 (xxxInternalInvalidate.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x14004A2FC (IsToplevelWindowDesktopComposed.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     FillRect @ 0x1400557E0 (FillRect.c)
 *     ?GetSpriteFillBrush@@YAPEAUHBRUSH__@@PEAUtagWND@@_NPEA_N@Z @ 0x140057588 (-GetSpriteFillBrush@@YAPEAUHBRUSH__@@PEAUtagWND@@_NPEA_N@Z.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1400580E8 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     HintSpriteShape @ 0x140058390 (HintSpriteShape.c)
 *     RedirectDCEs @ 0x140059EA8 (RedirectDCEs.c)
 *     IncrementCompositedCount @ 0x14005A98C (IncrementCompositedCount.c)
 *     CreateOrGetRedirectionBitmap @ 0x14005D1D0 (CreateOrGetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x14005DC60 (DeleteOrSetRedirectionBitmap.c)
 *     UpdateWindowSpriteMonitor @ 0x140090008 (UpdateWindowSpriteMonitor.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B33E0 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x1400B3A90 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 */

__int64 __fastcall SetRedirectedWindow(struct tagWND *a1, __int64 a2)
{
  int v2; // r14d
  struct tagTHREADINFO *v4; // rax
  int v5; // r12d
  int v6; // r15d
  unsigned int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // ebx
  HBITMAP v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // r8
  const struct tagRECT *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 Prop; // rax
  HBRUSH SpriteFillBrush; // r12
  __m128i v25; // xmm0
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  BOOL v35; // ebx
  __int64 RedirectionBitmap; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 UserSessionState; // rax
  RECT v40; // [rsp+20h] [rbp-30h] BYREF
  __int64 v41; // [rsp+30h] [rbp-20h] BYREF
  __int64 v42; // [rsp+38h] [rbp-18h] BYREF
  _BYTE v43[16]; // [rsp+40h] [rbp-10h] BYREF
  bool v44; // [rsp+98h] [rbp+48h] BYREF
  HBITMAP v45; // [rsp+A0h] [rbp+50h] BYREF

  v45 = 0LL;
  v2 = a2;
  v4 = PtiCurrent((__int64)a1, a2);
  v41 = gSmartObjNullRef;
  v5 = 0;
  v6 = v2 & 0x10;
  v7 = v2 & 0xFFFFFFEF;
  v42 = *((_QWORD *)v4 + 209);
  *((_QWORD *)v4 + 209) = &v42;
  if ( GetRedirectionBitmap((__int64)a1, v8) )
  {
    if ( v7 == 1 )
    {
      RedirectionBitmap = GetRedirectionBitmap((__int64)a1, v9);
      UserSessionState = W32GetUserSessionState(v38, v37);
      HintSpriteShape(*(HDEV *)(*(_QWORD *)(UserSessionState + 56968) + 48LL), a1, RedirectionBitmap, 0);
    }
LABEL_14:
    if ( !v6 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v43);
      xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v43);
    }
    v21 = W32GetUserSessionState(v10, v9);
    Prop = GetProp((__int64)a1, *(unsigned __int16 *)(v21 + 41358), 1u);
    *(_DWORD *)(Prop + 32) |= v7;
    v12 = 0;
    goto LABEL_17;
  }
  SmartObjStackRefBase<tagCLS>::operator=(&v41, *((_QWORD *)a1 + 17));
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)v41 + 8LL) + 8LL) < 0
    || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v41 + 8LL) + 8LL) & 0x40) != 0 )
  {
    v35 = 0;
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      v35 = v7 == 1;
    if ( (IsTopLevelWindow((__int64)a1) || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v41 + 8LL) + 8LL) & 0x40) != 0 || v7 != 1)
      && !v35 )
    {
      v12 = -2143420411;
      goto LABEL_17;
    }
  }
  v12 = CreateOrGetRedirectionBitmap(a1, 0, 0, (HSURF *)&v45);
  if ( v12 >= 0 )
  {
    v13 = v45;
    if ( !(unsigned int)SetRedirectionBitmap(a1, v45, 0) )
    {
      DeleteOrSetRedirectionBitmap((__int64)a1, (HSURF)v13, 0);
      v12 = -1073741801;
      goto LABEL_17;
    }
    SetOrClrWF(1, a1, 0xB20u, 1);
    v15 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL), v14);
    UpdateWindowSpriteMonitor((__int64 *)a1, v15);
    if ( v7 == 2 )
    {
      IncrementCompositedCount((__int64)a1, v16);
    }
    else if ( v7 == 1 )
    {
      v17 = (_QWORD *)*((_QWORD *)a1 + 5);
      v18 = (const struct tagRECT *)(v17 + 11);
      v19 = v17[11] - v17[13];
      if ( !v19 )
        v19 = v17[12] - v17[14];
      if ( (v19 || v17[21]) && !IsRectEmptyInl(v18) )
      {
        v44 = 0;
        LOBYTE(v19) = 1;
        SpriteFillBrush = (HBRUSH)GetSpriteFillBrush(a1, v19, &v44);
        v25 = *(__m128i *)(*((_QWORD *)a1 + 5) + 88LL);
        v26 = _mm_cvtsi128_si32(v25);
        v40.bottom = v25.m128i_i32[3] - v25.m128i_i32[1];
        v40.top = 0;
        v40.right = v25.m128i_i32[2] - v26;
        v40.left = 0;
        v27 = W32GetUserSessionState(0LL, (unsigned int)-v26);
        v28 = GreSelectBitmap(*(_QWORD *)(v27 + 43248), v13);
        v31 = W32GetUserSessionState(v30, v29);
        FillRect(*(HDC *)(v31 + 43248), &v40, SpriteFillBrush);
        if ( v44 )
          GreDeleteObject(SpriteFillBrush);
        v34 = W32GetUserSessionState(v33, v32);
        GreSelectBitmap(*(_QWORD *)(v34 + 43248), v28);
        v5 = 1;
      }
      v20 = W32GetUserSessionState(v18, v19);
      HintSpriteShape(*(HDEV *)(*(_QWORD *)(v20 + 56968) + 48LL), a1, (__int64)v13, v5);
    }
    RedirectDCEs((__int64)a1, v16);
    goto LABEL_14;
  }
LABEL_17:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v41, v11);
  return (unsigned int)v12;
}
