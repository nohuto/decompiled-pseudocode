/*
 * XREFs of ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1401A5F48
 * Callers:
 *     xxxSystemParametersInfo @ 0x1401ACFA0 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1400DF670 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400E2B44 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ApiSetEditionPostShellHookMessages @ 0x1401BF2B0 (ApiSetEditionPostShellHookMessages.c)
 *     ApiSetEditionCallAccessibilityHook @ 0x1401C05EC (ApiSetEditionCallAccessibilityHook.c)
 *     ?WriteRegStringValue@@YAHIPEBG0@Z @ 0x1401EA0EC (-WriteRegStringValue@@YAHIPEBG0@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall SpiSetToggleKeys(int a1, unsigned int *a2, int a3, int a4, int *a5)
{
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  __int64 UserSessionState; // rsi
  int v14; // r8d
  unsigned int v15; // ecx
  int v16; // ecx
  unsigned int v17; // r9d
  size_t v18; // r8
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // rcx
  __int64 v24; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int16 v25[40]; // [rsp+30h] [rbp-78h] BYREF

  memset(v25, 0, sizeof(v25));
  UserSessionState = W32GetUserSessionState(v10, v9, v11);
  if ( (a1 & 0xFFFFFFF7) != 0 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( *a2 != 8 )
    return 0LL;
  v15 = a2[1];
  if ( (v15 & 0x3F) != v15 )
    return 0LL;
  v16 = *(_DWORD *)(W32GetUserSessionState(v15, v12, v14) + 20948);
  v17 = a2[1] | 2;
  if ( (v16 & 2) == 0 )
    v17 = a2[1] & 0xFFFFFFFD;
  a2[1] = v17;
  if ( a3 )
  {
    RtlStringCchPrintfW(v25, 40LL, L"%d");
    a4 = WriteRegStringValue(0x11u, L"Flags", v25);
    *a5 = a4;
  }
  if ( !a4 )
    return 0LL;
  v18 = *a2;
  v24 = *(_QWORD *)(UserSessionState + 20944);
  memmove((void *)(UserSessionState + 20944), a2, v18);
  *(_DWORD *)(UserSessionState + 20944) = 8;
  SetAccessEnabledFlag(v20, v19, v21);
  ApiSetEditionCallAccessibilityHook(4LL);
  ((void (__fastcall *)(__int64, __int64, __int64 *, __int64))ApiSetEditionPostShellHookMessages)(
    v22,
    4LL,
    &v24,
    UserSessionState + 20944);
  return 1LL;
}
