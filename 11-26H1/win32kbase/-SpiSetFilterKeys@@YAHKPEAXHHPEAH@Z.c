/*
 * XREFs of ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1400DF284
 * Callers:
 *     xxxSystemParametersInfo @ 0x1401ACFA0 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1400DF670 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ApiSetEditionPostShellHookMessages @ 0x1401BF2B0 (ApiSetEditionPostShellHookMessages.c)
 *     ApiSetEditionCallAccessibilityHook @ 0x1401C05EC (ApiSetEditionCallAccessibilityHook.c)
 *     ?SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z @ 0x1401E9F98 (-SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z.c)
 *     ?StopFilterKeysTimers@@YAXXZ @ 0x140212770 (-StopFilterKeysTimers@@YAXXZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall SpiSetFilterKeys(int a1, struct tagFILTERKEYS *a2, int a3, int a4, int *a5)
{
  int v9; // edx
  __int64 v10; // rdi
  int v11; // r8d
  unsigned int v12; // ecx
  int v13; // edx
  unsigned int v14; // ecx
  int v15; // eax
  size_t v16; // r8
  __int64 v17; // xmm1_8
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // rcx
  __int128 v23; // [rsp+20h] [rbp-38h] BYREF
  __int64 v24; // [rsp+30h] [rbp-28h]

  v10 = W32GetUserSessionState(a1, (_DWORD)a2, a3) + 20496;
  if ( a1 && a1 != 24 )
    return 0LL;
  if ( !a2 || *(_DWORD *)a2 != 24 || *((_DWORD *)a2 + 2) && *((_DWORD *)a2 + 5) )
    return 0LL;
  v12 = *((_DWORD *)a2 + 1);
  if ( (v12 & 0x7F) != v12 )
    return 0LL;
  v13 = *(_DWORD *)(W32GetUserSessionState(v12, v9, v11) + 20500);
  v14 = *((_DWORD *)a2 + 1) | 2;
  if ( (v13 & 2) == 0 )
    v14 = *((_DWORD *)a2 + 1) & 0xFFFFFFFD;
  *((_DWORD *)a2 + 1) = v14;
  if ( *((_DWORD *)a2 + 2) > 0x4E20u
    || *((_DWORD *)a2 + 3) > 0x4E20u
    || *((_DWORD *)a2 + 4) > 0x4E20u
    || *((_DWORD *)a2 + 5) > 0x4E20u )
  {
    return 0LL;
  }
  if ( a3 )
  {
    v15 = SetFilterKeys(a2);
    *a5 = v15;
    a4 = v15;
    if ( !v15 )
      SetFilterKeys((struct tagFILTERKEYS *)v10);
  }
  if ( !a4 )
    return 0LL;
  v16 = *(unsigned int *)a2;
  v17 = *(_QWORD *)(v10 + 16);
  v23 = *(_OWORD *)v10;
  v24 = v17;
  memmove((void *)v10, a2, v16);
  *(_DWORD *)v10 = 24;
  if ( (*(_DWORD *)(W32GetUserSessionState(v19, v18, v20) + 20500) & 1) == 0 )
    StopFilterKeysTimers();
  SetAccessEnabledFlag();
  ApiSetEditionCallAccessibilityHook(2LL);
  ((void (__fastcall *)(__int64, __int64, __int128 *, __int64))ApiSetEditionPostShellHookMessages)(v21, 2LL, &v23, v10);
  return 1LL;
}
