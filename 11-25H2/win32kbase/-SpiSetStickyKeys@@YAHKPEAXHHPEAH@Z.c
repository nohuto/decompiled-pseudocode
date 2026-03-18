/*
 * XREFs of ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A822C
 * Callers:
 *     xxxSystemParametersInfo @ 0x1400A70D0 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1400A6B70 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400A87F8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ApiSetEditionCallAccessibilityHook @ 0x140194C28 (ApiSetEditionCallAccessibilityHook.c)
 *     ApiSetEditionPostShellHookMessages @ 0x14019681C (ApiSetEditionPostShellHookMessages.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1401A2520 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?WriteRegStringValue@@YAHIPEBG0@Z @ 0x1401C14FC (-WriteRegStringValue@@YAHIPEBG0@Z.c)
 *     Feature_SpiSetStickyKeysSizeCheck__private_IsEnabledDeviceUsageNoInline @ 0x1401C1540 (Feature_SpiSetStickyKeysSizeCheck__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall SpiSetStickyKeys(int a1, _WORD *a2, int a3, int a4, int *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // r14d
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD v25[2]; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int16 v26[40]; // [rsp+30h] [rbp-88h] BYREF

  memset(v26, 0, sizeof(v26));
  v11 = (unsigned int *)(W32GetUserSessionState(v10, v9) + 20568);
  v15 = *(_DWORD *)(W32GetUserSessionState(v13, v12) + 20572) & 1;
  if ( (a1 & 0xFFFFFFF7) != 0 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( *(_DWORD *)a2 != 8 )
    return 0LL;
  a2[3] = 0;
  v16 = *((unsigned int *)a2 + 1);
  if ( (*((_DWORD *)a2 + 1) & 0x1FF) != (_DWORD)v16 )
    return 0LL;
  v17 = *(unsigned int *)(W32GetUserSessionState(v16, v14) + 20572);
  v18 = *((_DWORD *)a2 + 1) | 2;
  if ( (v17 & 2) == 0 )
    v18 = *((_DWORD *)a2 + 1) & 0xFFFFFFFD;
  *((_DWORD *)a2 + 1) = v18;
  if ( a3 )
  {
    RtlStringCchPrintfW(v26, 0x28uLL, L"%d");
    a4 = WriteRegStringValue(0xEu, L"Flags", v26);
    *a5 = a4;
  }
  if ( !a4 )
    return 0LL;
  v25[0] = 0LL;
  if ( (unsigned int)Feature_SpiSetStickyKeysSizeCheck__private_IsEnabledDeviceUsageNoInline(v17) )
    v25[0] = *(_QWORD *)v11;
  else
    memmove(v25, v11, *v11);
  memmove(v11, a2, *(unsigned int *)a2);
  *v11 = 8;
  v22 = *(unsigned int *)(W32GetUserSessionState(v20, v19) + 20572);
  if ( (v22 & 1) == 0 )
  {
    if ( v15 )
      xxxTurnOffStickyKeys();
  }
  SetAccessEnabledFlag(v22, v21);
  ApiSetEditionCallAccessibilityHook(1LL);
  ApiSetEditionPostShellHookMessages(v23, 1LL, v25, v11);
  return 1LL;
}
