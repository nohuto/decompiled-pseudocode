/*
 * XREFs of DrvIsNotUsingGraphicsDevice @ 0x14014B420
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401B099C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x14003F600 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

__int64 __fastcall DrvIsNotUsingGraphicsDevice(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  v2 = 0;
  if ( !IS_USERCRIT_OWNED_AT_ALL() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8666;
  }
  if ( a1 )
  {
    while ( v2 < *(_DWORD *)(a1 + 20) )
    {
      v3 = *(_QWORD *)(56LL * v2 + a1 + 40);
      if ( (*(_DWORD *)(v3 + 40) & 0x20000) == 0 && (*(_DWORD *)(*(_QWORD *)(v3 + 2568) + 160LL) & 0x2000000) == 0 )
        return 0LL;
      ++v2;
    }
  }
  return 1LL;
}
