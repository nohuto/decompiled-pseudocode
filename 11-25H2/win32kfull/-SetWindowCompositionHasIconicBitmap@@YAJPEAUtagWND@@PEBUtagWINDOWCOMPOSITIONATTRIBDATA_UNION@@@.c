/*
 * XREFs of ?SetWindowCompositionHasIconicBitmap@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140024670
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x14024E5B0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x140024B28 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140024BA0 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x140034EE0 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall SetWindowCompositionHasIconicBitmap(
        struct tagWND *a1,
        const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2)
{
  int v4; // edi
  unsigned int v5; // ebx
  _OWORD v7[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v8; // [rsp+50h] [rbp-28h]

  v8 = 0LL;
  v4 = *(_DWORD *)a2 != 0;
  v5 = -1073741816;
  memset(v7, 0, sizeof(v7));
  if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v7) )
  {
    if ( -__CFSHR__(v7[0], 6) == v4 )
    {
      return 0;
    }
    else
    {
      LODWORD(v7[0]) = v7[0] & 0xFFFFFFDF | (32 * v4);
      if ( (unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v7) )
        return (unsigned int)_DwmAsyncSetCompositionAttribute(a1, 9LL, a2);
      else
        return (unsigned int)-1073741801;
    }
  }
  return v5;
}
