/*
 * XREFs of ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x140040BD0
 * Callers:
 *     _ExcludeUpdateRgn @ 0x14004092C (_ExcludeUpdateRgn.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     GetScreenRectForDpi @ 0x1400310BC (GetScreenRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140031410 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall CalcVirtualScreenClipRegion(HRGN a1, struct tagWND *a2)
{
  HRGN v3; // rsi
  __int64 v4; // rax
  unsigned __int16 v5; // di
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD **v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 EmptyRgn; // rbp
  __int64 i; // rbx
  __int64 DispInfo; // rax
  __m128i *MonitorRectForDpi; // rax
  __m128i *v18; // rdx
  unsigned int WindowCompositedDpiContext; // eax
  __m128i v20; // [rsp+20h] [rbp-48h] BYREF
  __m128i v21; // [rsp+30h] [rbp-38h] BYREF

  v3 = a1;
  v4 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 488LL);
  if ( !v4
    || (a1 = **(HRGN **)(v4 + 8), ((_DWORD)a1[16] & 1) == 0)
    || (v5 = (*(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL) >> 8) & 0x1FF) == 0 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    GreCombineRgn(v3, *(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 120LL), 0LL, 5LL);
    return;
  }
  SetEmptyRgn(v3);
  v9 = *(_DWORD ***)(W32GetUserSessionState(v8, v7) + 56968);
  if ( **v9 == 1 )
  {
    DispInfo = GetDispInfo(v10, v9);
    MonitorRectForDpi = GetMonitorRectForDpi(&v21, *(_QWORD *)(DispInfo + 96), v5);
    v18 = &v20;
    v20 = *MonitorRectForDpi;
LABEL_13:
    SetRectRgnIndirect(v3, v18);
    return;
  }
  EmptyRgn = CreateEmptyRgn(v10, v9, v11);
  if ( !EmptyRgn )
  {
    WindowCompositedDpiContext = GetWindowCompositedDpiContext(a2);
    GetScreenRectForDpi(&v20, (WindowCompositedDpiContext >> 8) & 0x1FF);
    v18 = &v21;
    v21 = v20;
    goto LABEL_13;
  }
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v13, v12) + 56968) + 104LL); i; i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
    {
      v20 = *GetMonitorRectForDpi(&v21, i, v5);
      SetRectRgnIndirect(EmptyRgn, &v20);
      GreCombineRgn(v3, v3, EmptyRgn, 2LL);
    }
  }
  GreDeleteObject(EmptyRgn);
}
