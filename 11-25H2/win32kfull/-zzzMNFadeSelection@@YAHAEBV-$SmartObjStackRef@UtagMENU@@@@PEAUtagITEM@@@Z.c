/*
 * XREFs of ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x140267AFC
 * Callers:
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x14003D23C (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1400458EC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MNGetPopupFromMenu @ 0x140045940 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 *     zzzShowFade @ 0x1401E9AD4 (zzzShowFade.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1401F46B0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall zzzMNFadeSelection(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  _DWORD *v15; // r9
  HDC v16; // rsi
  HDC DCEx; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v22; // [rsp+60h] [rbp+17h] BYREF
  __int64 v23; // [rsp+68h] [rbp+1Fh] BYREF
  struct tagRECT v24; // [rsp+70h] [rbp+27h] BYREF

  v4 = PtiCurrent(a1, a2);
  v22 = gSmartObjNullRef;
  v23 = *((_QWORD *)v4 + 209);
  *((_QWORD *)v4 + 209) = &v23;
  if ( *(_DWORD *)(W32GetUserSessionState(&v23, v5) + 43264) )
    goto LABEL_11;
  v8 = *(_DWORD *)(W32GetUserSessionState(v7, v6) + 66804) & 0x80000400;
  if ( (_DWORD)v8 != -2147482624 )
    goto LABEL_11;
  UserSessionState = W32GetUserSessionState(v8, v6);
  if ( (unsigned int)CInputGlobals::GetLastInputType(*(_QWORD *)(UserSessionState + 3056)) == 1 )
    goto LABEL_11;
  v11 = W32GetUserSessionState(v10, v6);
  if ( (unsigned int)CInputGlobals::GetLastInputType(*(_QWORD *)(v11 + 3056)) == 4 )
    goto LABEL_11;
  v12 = *(_QWORD *)(a1 + 16);
  if ( !v12 )
    v12 = **(_QWORD **)a1;
  v13 = MNGetPopupFromMenu(v12, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v22, v13);
  if ( !*(_QWORD *)v22 )
    goto LABEL_11;
  v14 = *(_QWORD *)(*(_QWORD *)v22 + 16LL);
  if ( v14
    && (v15 = *(_DWORD **)a2,
        v24.left = *(_DWORD *)(*(_QWORD *)(v14 + 40) + 104LL) + *(_DWORD *)(*(_QWORD *)a2 + 64LL),
        v24.top = v15[17] + *(_DWORD *)(*(_QWORD *)(v14 + 40) + 108LL),
        v24.right = v24.left + v15[18],
        v24.bottom = v24.top + v15[19],
        (v16 = CreateFadeInternal(
                 0LL,
                 &v24,
                 350,
                 (*(_DWORD *)(*(_QWORD *)(v14 + 40) + 288LL) & 0xF) == 0 ? 0x100 : 0,
                 *(_DWORD *)(*(_QWORD *)(v14 + 40) + 288LL))) != 0LL) )
  {
    DCEx = (HDC)_GetDCEx(v14, 0LL, 1073807360LL);
    GreBitBltInternal(
      v16,
      0,
      0,
      *(_DWORD *)(*(_QWORD *)a2 + 72LL),
      *(_DWORD *)(*(_QWORD *)a2 + 76LL),
      DCEx,
      *(_DWORD *)(*(_QWORD *)a2 + 64LL),
      *(_DWORD *)(*(_QWORD *)a2 + 68LL),
      0xCC0020u,
      0,
      0);
    _ReleaseDC(DCEx);
    zzzShowFade(v19, v18);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v22, v20);
    return 1LL;
  }
  else
  {
LABEL_11:
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v22, v6);
    return 0LL;
  }
}
