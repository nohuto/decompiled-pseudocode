/*
 * XREFs of ?SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140024734
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x14024E5B0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140023794 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x140024B28 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140024BA0 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x140034EE0 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall SetWindowCompositionFreezeSWR(
        struct tagWND *a1,
        const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2)
{
  int v2; // ebp
  int v4; // edi
  unsigned int v6; // ebx
  _OWORD v8[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v9; // [rsp+50h] [rbp-28h]

  v2 = *(_DWORD *)a2;
  memset(v8, 0, sizeof(v8));
  v4 = v2 != 0;
  v6 = -1073741816;
  v9 = 0LL;
  if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v8) )
  {
    if ( -__CFSHR__(v8[0], 13) == v4 )
    {
      return 0;
    }
    else
    {
      LODWORD(v8[0]) = v8[0] & 0xFFFFEFFF | (v4 << 12);
      if ( (unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v8) )
      {
        v6 = _DwmAsyncSetCompositionAttribute(a1, 20LL, a2);
        if ( !v2 )
          PostIAMShellHookMessage(0x24u, *(_QWORD *)a1);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v6;
}
