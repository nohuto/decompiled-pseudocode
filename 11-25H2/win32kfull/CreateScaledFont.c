/*
 * XREFs of CreateScaledFont @ 0x1401E7300
 * Callers:
 *     _SystemParametersInfoForDpi @ 0x1400412AC (_SystemParametersInfoForDpi.c)
 *     GetScaledLogFontForDpi @ 0x140041420 (GetScaledLogFontForDpi.c)
 *     GetWindowNCMetricsForDpi @ 0x1400418A8 (GetWindowNCMetricsForDpi.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1401E71D4 (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1401F2FF0 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     GreSelectFont @ 0x140054D30 (GreSelectFont.c)
 *     GreCreateFontIndirectW @ 0x140055014 (GreCreateFontIndirectW.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     GetCharDimensions @ 0x1400BFF0C (GetCharDimensions.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall CreateScaledFont(
        Gre::Base *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        _DWORD *a6,
        __int64 a7)
{
  unsigned int v8; // ebx
  INT v9; // r14d
  INT v10; // eax
  __int64 FontIndirectW; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  HFONT v14; // r14
  __int64 UserSessionState; // rax
  HFONT v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int CharDimensions; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  INT a[23]; // [rsp+20h] [rbp-98h] BYREF
  __int16 v26; // [rsp+7Ch] [rbp-3Ch]

  *a2 = 0LL;
  v8 = 0;
  v9 = a4;
  v26 = 0;
  if ( (unsigned int)GreExtGetObjectW(a1, 96LL, a, a4) )
  {
    a[0] = EngMulDiv(a[0], v9, 96);
    v10 = EngMulDiv(a[1], v9, 96);
    v26 = 257;
    a[1] = v10;
    FontIndirectW = GreCreateFontIndirectW((__int128 *)a);
    *a2 = FontIndirectW;
    v14 = (HFONT)FontIndirectW;
    if ( FontIndirectW )
    {
      if ( a5 || a6 || (v8 = 1, a7) )
      {
        UserSessionState = W32GetUserSessionState(v13, v12);
        v16 = GreSelectFont(*(HDC *)(*(_QWORD *)(UserSessionState + 56968) + 72LL), v14);
        v19 = W32GetUserSessionState(v18, v17);
        CharDimensions = GetCharDimensions(*(HDC *)(*(_QWORD *)(v19 + 56968) + 72LL), a7, a6);
        if ( a5 )
          *a5 = CharDimensions;
        v23 = W32GetUserSessionState(v22, v21);
        GreSelectFont(*(HDC *)(*(_QWORD *)(v23 + 56968) + 72LL), v16);
        return 1;
      }
    }
  }
  return v8;
}
