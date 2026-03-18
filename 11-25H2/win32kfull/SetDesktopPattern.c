/*
 * XREFs of SetDesktopPattern @ 0x1400E4610
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x140243864 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     GreMarkDeletableBrush @ 0x1400E4460 (GreMarkDeletableBrush.c)
 *     RecolorDeskPattern @ 0x14020BC30 (RecolorDeskPattern.c)
 *     ?SetGlobalDesktopPattern@@YAHPEAUHBITMAP__@@@Z @ 0x1402B786C (-SetGlobalDesktopPattern@@YAHPEAUHBITMAP__@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall SetDesktopPattern(__int64 a1, const wchar_t *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 SolidBrush; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  wchar_t v23; // ax
  __int128 *v24; // r8
  __int64 v25; // r9
  __int16 v26; // cx
  unsigned __int16 v27; // dx
  HBITMAP Bitmap; // rax
  __int64 v29; // rcx
  __int128 v30; // [rsp+40h] [rbp-268h] BYREF
  wchar_t Str2[24]; // [rsp+50h] [rbp-258h] BYREF
  _WORD v32[264]; // [rsp+80h] [rbp-228h] BYREF

  v4 = 0;
  memset_0(v32, 0, 0x208uLL);
  if ( !a2 )
  {
    if ( !(unsigned int)FastGetProfileStringFromIDW(a1, 4LL, 2LL, &pszFormat, v32, 260, 0) )
      return v4;
    a2 = v32;
  }
  RtlLoadStringOrError(82LL, Str2, 20LL);
  if ( v32[0] && _wcsicmp(a2, Str2) )
  {
    v23 = *a2;
    v24 = &v30;
    v30 = 0LL;
    v25 = 8LL;
    do
    {
      v26 = 0;
      if ( v23 )
      {
        v27 = v23;
        while ( v27 < 0x30u || v27 > 0x39u )
        {
          v23 = *++a2;
          v27 = *a2;
          if ( !*a2 )
            goto LABEL_20;
        }
        do
        {
          ++a2;
          v26 = v27 + 2 * (5 * v26 - 24);
          v23 = *a2;
          v27 = *a2;
        }
        while ( *a2 >= 0x30u && v27 <= 0x39u );
      }
LABEL_20:
      *(_WORD *)v24 = v26;
      v24 = (__int128 *)((char *)v24 + 2);
      --v25;
    }
    while ( v25 );
    Bitmap = (HBITMAP)GreCreateBitmap(8LL, 8LL, 1LL, 1LL);
    if ( Bitmap )
    {
      SetGlobalDesktopPattern(Bitmap);
      return (unsigned int)RecolorDeskPattern(v29);
    }
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    SolidBrush = GreCreateSolidBrush(*(unsigned int *)(*(_QWORD *)(UserSessionState + 19872) + 4572LL));
    if ( SolidBrush )
    {
      v12 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19872);
      if ( *(_QWORD *)(v12 + 4704) )
      {
        v16 = W32GetUserSessionState(v12, v11);
        GreMarkDeletableBrush(*(HBRUSH *)(*(_QWORD *)(v16 + 19872) + 4704LL), v17, v18, v19);
        v22 = W32GetUserSessionState(v21, v20);
        GreDeleteObject(*(_QWORD *)(*(_QWORD *)(v22 + 19872) + 4704LL));
      }
      GreMarkUndeletableBrush(SolidBrush);
      GreSetBrushOwner(SolidBrush, 0LL);
      *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v13) + 19872) + 4704LL) = SolidBrush;
    }
  }
  return v4;
}
