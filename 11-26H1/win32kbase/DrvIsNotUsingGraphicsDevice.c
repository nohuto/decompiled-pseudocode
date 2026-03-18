/*
 * XREFs of DrvIsNotUsingGraphicsDevice @ 0x140188780
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D5CB0 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

__int64 __fastcall DrvIsNotUsingGraphicsDevice(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  if ( !(unsigned int)GET_USERCRIT_DISPOSITION(a1, a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8454;
  }
  if ( a1 )
  {
    while ( v3 < *(_DWORD *)(a1 + 20) )
    {
      v4 = *(_QWORD *)(56LL * v3 + a1 + 40);
      if ( (*(_DWORD *)(v4 + 40) & 0x20000) == 0 && (*(_DWORD *)(*(_QWORD *)(v4 + 2568) + 160LL) & 0x2000000) == 0 )
        return 0LL;
      ++v3;
    }
  }
  return 1LL;
}
