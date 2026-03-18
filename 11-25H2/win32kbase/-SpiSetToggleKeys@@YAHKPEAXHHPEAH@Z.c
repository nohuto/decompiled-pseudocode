/*
 * XREFs of ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A849C
 * Callers:
 *     xxxSystemParametersInfo @ 0x1400A70D0 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1400A6B70 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400A87F8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ApiSetEditionCallAccessibilityHook @ 0x140194C28 (ApiSetEditionCallAccessibilityHook.c)
 *     ApiSetEditionPostShellHookMessages @ 0x14019681C (ApiSetEditionPostShellHookMessages.c)
 *     ?WriteRegStringValue@@YAHIPEBG0@Z @ 0x1401C14FC (-WriteRegStringValue@@YAHIPEBG0@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall SpiSetToggleKeys(int a1, unsigned int *a2, int a3, int a4, int *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 UserSessionState; // rsi
  __int64 v13; // rcx
  int v14; // ecx
  unsigned int v15; // r9d
  size_t v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v21; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int16 v22[40]; // [rsp+30h] [rbp-78h] BYREF

  memset(v22, 0, sizeof(v22));
  UserSessionState = W32GetUserSessionState(v10, v9);
  if ( (a1 & 0xFFFFFFF7) != 0 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( *a2 != 8 )
    return 0LL;
  v13 = a2[1];
  if ( (a2[1] & 0x3F) != (_DWORD)v13 )
    return 0LL;
  v14 = *(_DWORD *)(W32GetUserSessionState(v13, v11) + 20916);
  v15 = a2[1] | 2;
  if ( (v14 & 2) == 0 )
    v15 = a2[1] & 0xFFFFFFFD;
  a2[1] = v15;
  if ( a3 )
  {
    RtlStringCchPrintfW(v22, 0x28uLL, L"%d");
    a4 = WriteRegStringValue(0x11u, L"Flags", v22);
    *a5 = a4;
  }
  if ( !a4 )
    return 0LL;
  v16 = *a2;
  v21 = *(_QWORD *)(UserSessionState + 20912);
  memmove((void *)(UserSessionState + 20912), a2, v16);
  *(_DWORD *)(UserSessionState + 20912) = 8;
  SetAccessEnabledFlag(v18, v17);
  ApiSetEditionCallAccessibilityHook(4LL);
  ApiSetEditionPostShellHookMessages(v19, 4LL, &v21, UserSessionState + 20912);
  return 1LL;
}
