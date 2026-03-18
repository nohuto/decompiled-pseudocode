/*
 * XREFs of ?SetWindowCompositionAccentPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1400A8730
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x140235EA0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1400A8164 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1401E605C (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E60D4 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall SetWindowCompositionAccentPolicy(
        struct tagWND *a1,
        const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2)
{
  unsigned int v4; // ebx
  _OWORD v6[3]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  memset(v6, 0, sizeof(v6));
  v4 = -1073741816;
  v7 = 0LL;
  if ( _GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v6) )
  {
    if ( *((_QWORD *)&v6[0] + 1) == *(_QWORD *)a2 && LODWORD(v6[1]) == *((_DWORD *)a2 + 2) )
    {
      return 0;
    }
    else
    {
      *(_OWORD *)((char *)v6 + 8) = *(_OWORD *)a2;
      if ( (unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v6) )
        return (unsigned int)_DwmAsyncSetCompositionAttribute(a1, 19LL, a2);
      else
        return (unsigned int)-1073741801;
    }
  }
  return v4;
}
