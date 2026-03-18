/*
 * XREFs of ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1401ACDDC
 * Callers:
 *     xxxSystemParametersInfo @ 0x1401ACFA0 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1400DF670 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400E2B44 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ApiSetEditionPostShellHookMessages @ 0x1401BF2B0 (ApiSetEditionPostShellHookMessages.c)
 *     ApiSetEditionCallAccessibilityHook @ 0x1401C05EC (ApiSetEditionCallAccessibilityHook.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1401C6AA0 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?WriteRegStringValue@@YAHIPEBG0@Z @ 0x1401EA0EC (-WriteRegStringValue@@YAHIPEBG0@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall SpiSetStickyKeys(int a1, _WORD *a2, int a3, int a4, int *a5)
{
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 UserSessionState; // rsi
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  int v17; // r8d
  int v18; // r14d
  int v19; // ecx
  int v20; // ecx
  unsigned int v21; // r9d
  size_t v22; // r8
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // rcx
  __int64 v31; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int16 v32[40]; // [rsp+30h] [rbp-88h] BYREF

  memset(v32, 0, sizeof(v32));
  UserSessionState = W32GetUserSessionState(v10, v9, v11);
  v18 = *(_DWORD *)(W32GetUserSessionState(v14, v13, v15) + 20604) & 1;
  if ( (a1 & 0xFFFFFFF7) != 0 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( *(_DWORD *)a2 != 8 )
    return 0LL;
  a2[3] = 0;
  v19 = *((_DWORD *)a2 + 1);
  if ( (v19 & 0x1FF) != v19 )
    return 0LL;
  v20 = *(_DWORD *)(W32GetUserSessionState(v19, v16, v17) + 20604);
  v21 = *((_DWORD *)a2 + 1) | 2;
  if ( (v20 & 2) == 0 )
    v21 = *((_DWORD *)a2 + 1) & 0xFFFFFFFD;
  *((_DWORD *)a2 + 1) = v21;
  if ( a3 )
  {
    RtlStringCchPrintfW(v32, 40LL, L"%d");
    a4 = WriteRegStringValue(0xEu, L"Flags", v32);
    *a5 = a4;
  }
  if ( !a4 )
    return 0LL;
  v22 = *(unsigned int *)a2;
  v31 = *(_QWORD *)(UserSessionState + 20600);
  memmove((void *)(UserSessionState + 20600), a2, v22);
  *(_DWORD *)(UserSessionState + 20600) = 8;
  v27 = *(_DWORD *)(W32GetUserSessionState(v24, v23, v25) + 20604);
  if ( (v27 & 1) == 0 )
  {
    if ( v18 )
      xxxTurnOffStickyKeys();
  }
  SetAccessEnabledFlag(v27, v26, v28);
  ApiSetEditionCallAccessibilityHook(1LL);
  ((void (__fastcall *)(__int64, __int64, __int64 *, __int64))ApiSetEditionPostShellHookMessages)(
    v29,
    1LL,
    &v31,
    UserSessionState + 20600);
  return 1LL;
}
