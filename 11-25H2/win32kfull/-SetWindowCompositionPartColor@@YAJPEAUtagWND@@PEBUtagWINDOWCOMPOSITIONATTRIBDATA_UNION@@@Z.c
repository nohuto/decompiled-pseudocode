/*
 * XREFs of ?SetWindowCompositionPartColor@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1400251E8
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x14024E5B0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x140024B28 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140024BA0 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x140034EE0 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall SetWindowCompositionPartColor(
        struct tagWND *a1,
        const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2)
{
  __int64 v2; // rsi
  int v3; // edi
  unsigned int v5; // ebx
  _OWORD v7[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v8; // [rsp+40h] [rbp-38h]
  __int64 v9; // [rsp+50h] [rbp-28h]

  v2 = *(int *)a2;
  v3 = *((_DWORD *)a2 + 1);
  if ( (unsigned int)v2 > 2 )
    return 3221225485LL;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( (unsigned int)v2 <= 1 )
        goto LABEL_5;
    }
    else if ( (v3 & 0xFF000000) == 0xFF000000 )
    {
      goto LABEL_5;
    }
    return 3221225485LL;
  }
LABEL_5:
  memset(v7, 0, sizeof(v7));
  v9 = 0LL;
  v5 = -1073741816;
  v8 = 0LL;
  if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v7) )
  {
    if ( *((_DWORD *)&v8 + v2 + 1) == v3 )
    {
      return 0;
    }
    else
    {
      *((_DWORD *)&v8 + v2 + 1) = v3;
      if ( (unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v7) )
        return (unsigned int)_DwmAsyncSetCompositionAttribute((__int64)a1);
      else
        return (unsigned int)-1073741801;
    }
  }
  return v5;
}
