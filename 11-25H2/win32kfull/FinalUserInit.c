/*
 * XREFs of FinalUserInit @ 0x14021974C
 * Callers:
 *     xxxInitWindowStation @ 0x1401484D8 (xxxInitWindowStation.c)
 * Callees:
 *     GreSelectFont @ 0x140054D30 (GreSelectFont.c)
 *     GreSetBkMode @ 0x140054F30 (GreSetBkMode.c)
 *     GreSetTextColor @ 0x140056CB4 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x140056D44 (GreSetBkColor.c)
 *     DestroyClass @ 0x1400B2E28 (DestroyClass.c)
 *     GetCharDimensions @ 0x1400BFF0C (GetCharDimensions.c)
 *     MNSetupAnimationDC @ 0x140219B14 (MNSetupAnimationDC.c)
 */

__int64 __fastcall FinalUserInit(__int64 a1)
{
  __int64 SessionDpiServerInfo; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdi
  HFONT v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  HFONT v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 CompatibleDC; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  HFONT v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 Bitmap; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v75; // rcx
  struct _CALLPROCDATA ***i; // rbx
  unsigned __int64 v77; // rax

  SessionDpiServerInfo = GetSessionDpiServerInfo(a1);
  UserSessionState = W32GetUserSessionState(v3, v2);
  *(_DWORD *)(SessionDpiServerInfo + 32) = GetCharDimensions(
                                             *(HDC *)(*(_QWORD *)(UserSessionState + 56968) + 72LL),
                                             SessionDpiServerInfo + 40,
                                             (_DWORD *)(SessionDpiServerInfo + 36));
  v5 = Get96DpiServerInfo();
  v6 = *(HFONT *)(v5 + 24);
  v9 = W32GetUserSessionState(v8, v7);
  v10 = GreSelectFont(*(HDC *)(*(_QWORD *)(v9 + 56968) + 72LL), v6);
  v13 = W32GetUserSessionState(v12, v11);
  *(_DWORD *)(v5 + 32) = GetCharDimensions(*(HDC *)(*(_QWORD *)(v13 + 56968) + 72LL), v5 + 40, (_DWORD *)(v5 + 36));
  v16 = W32GetUserSessionState(v15, v14);
  GreSelectFont(*(HDC *)(*(_QWORD *)(v16 + 56968) + 72LL), v10);
  v19 = W32GetUserSessionState(v18, v17);
  CompatibleDC = GreCreateCompatibleDC(*(_QWORD *)(*(_QWORD *)(v19 + 56968) + 64LL));
  v23 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 56968);
  *(_QWORD *)(v23 + 80) = CompatibleDC;
  v26 = *(_QWORD *)(W32GetUserSessionState(v23, v24) + 56968);
  if ( !*(_QWORD *)(v26 + 80) )
    return 0LL;
  v27 = *(HFONT *)(SessionDpiServerInfo + 24);
  v28 = W32GetUserSessionState(v26, v25);
  GreSelectFont(*(HDC *)(*(_QWORD *)(v28 + 56968) + 80LL), v27);
  v31 = W32GetUserSessionState(v30, v29);
  GreSetDCOwnerEx(*(_QWORD *)(*(_QWORD *)(v31 + 56968) + 80LL), 0LL, 0LL, 0LL);
  LODWORD(v27) = 40 * *(_DWORD *)(SessionDpiServerInfo + 32);
  v34 = *(_QWORD *)(W32GetUserSessionState(v33, v32) + 56968);
  *(_DWORD *)(v34 + 96) = (_DWORD)v27;
  LODWORD(v27) = *(_DWORD *)(SessionDpiServerInfo + 36) + 2;
  v36 = *(_QWORD *)(W32GetUserSessionState(v34, v35) + 56968);
  *(_DWORD *)(v36 + 100) = (_DWORD)v27;
  v38 = *(_QWORD *)(W32GetUserSessionState(v36, v37) + 56968);
  LODWORD(v27) = *(_DWORD *)(v38 + 100);
  v40 = W32GetUserSessionState(v38, v39);
  Bitmap = GreCreateBitmap(*(unsigned int *)(*(_QWORD *)(v40 + 56968) + 96LL), (unsigned int)v27, 1LL, 1LL);
  v44 = *(_QWORD *)(W32GetUserSessionState(v43, v42) + 56968);
  *(_QWORD *)(v44 + 88) = Bitmap;
  v47 = *(_QWORD *)(W32GetUserSessionState(v44, v45) + 56968);
  if ( !*(_QWORD *)(v47 + 88) )
    return 0LL;
  v48 = W32GetUserSessionState(v47, v46);
  GreSetBitmapOwner(*(_QWORD *)(*(_QWORD *)(v48 + 56968) + 88LL), 0LL);
  v51 = *(_QWORD *)(W32GetUserSessionState(v50, v49) + 56968);
  v52 = *(_QWORD *)(v51 + 88);
  v54 = W32GetUserSessionState(v51, v53);
  GreSelectBitmap(*(_QWORD *)(*(_QWORD *)(v54 + 56968) + 80LL), v52);
  v57 = W32GetUserSessionState(v56, v55);
  GreSetTextColor(*(HDC *)(*(_QWORD *)(v57 + 56968) + 80LL), 0);
  v60 = *(_QWORD *)(W32GetUserSessionState(v59, v58) + 19872);
  v61 = *(_QWORD *)(v60 + 4944);
  v63 = W32GetUserSessionState(v60, v62);
  GreSelectBrush(*(_QWORD *)(*(_QWORD *)(v63 + 56968) + 80LL), v61);
  v66 = W32GetUserSessionState(v65, v64);
  GreSetBkMode(*(HDC *)(*(_QWORD *)(v66 + 56968) + 80LL), 2);
  v69 = W32GetUserSessionState(v68, v67);
  GreSetBkColor(*(HDC *)(*(_QWORD *)(v69 + 56968) + 80LL), 0xFFFFFF);
  v72 = W32GetUserSessionState(v71, v70);
  MNSetupAnimationDC(v72 + 65888);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v73);
  if ( CurrentProcessWin32Process )
  {
    v75 = -*(_QWORD *)CurrentProcessWin32Process;
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  }
  for ( i = (struct _CALLPROCDATA ***)(CurrentProcessWin32Process + 352);
        *i && (*((_DWORD *)(*i)[1] + 2) & 0x4000) == 0;
        DestroyClass((struct tagPROCESSINFO *)v77, i) )
  {
    v77 = PsGetCurrentProcessWin32Process(v75);
    if ( v77 )
      v77 &= -(__int64)(*(_QWORD *)v77 != 0LL);
  }
  return 1LL;
}
