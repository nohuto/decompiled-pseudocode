/*
 * XREFs of ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A8618
 * Callers:
 *     xxxSystemParametersInfo @ 0x1400A70D0 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1400A6B70 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ApiSetEditionCallAccessibilityHook @ 0x140194C28 (ApiSetEditionCallAccessibilityHook.c)
 *     ApiSetEditionPostShellHookMessages @ 0x14019681C (ApiSetEditionPostShellHookMessages.c)
 *     ?SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z @ 0x1401C13C0 (-SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z.c)
 *     ?StopFilterKeysTimers@@YAXXZ @ 0x1401F8F70 (-StopFilterKeysTimers@@YAXXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall SpiSetFilterKeys(__int64 a1, struct tagFILTERKEYS *a2, int a3, int a4, int *a5)
{
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // edx
  unsigned int v13; // ecx
  int v14; // eax
  size_t v15; // r8
  __int64 v16; // xmm1_8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int128 v23; // [rsp+20h] [rbp-38h] BYREF
  __int64 v24; // [rsp+30h] [rbp-28h]

  v8 = a1;
  v10 = W32GetUserSessionState(a1, a2) + 20464;
  if ( v8 && v8 != 24 )
    return 0LL;
  if ( !a2 || *(_DWORD *)a2 != 24 || *((_DWORD *)a2 + 2) && *((_DWORD *)a2 + 5) )
    return 0LL;
  v11 = *((unsigned int *)a2 + 1);
  if ( (*((_DWORD *)a2 + 1) & 0x7F) != (_DWORD)v11 )
    return 0LL;
  v12 = *(_DWORD *)(W32GetUserSessionState(v11, v9) + 20468);
  v13 = *((_DWORD *)a2 + 1) | 2;
  if ( (v12 & 2) == 0 )
    v13 = *((_DWORD *)a2 + 1) & 0xFFFFFFFD;
  *((_DWORD *)a2 + 1) = v13;
  if ( *((_DWORD *)a2 + 2) > 0x4E20u
    || *((_DWORD *)a2 + 3) > 0x4E20u
    || *((_DWORD *)a2 + 4) > 0x4E20u
    || *((_DWORD *)a2 + 5) > 0x4E20u )
  {
    return 0LL;
  }
  if ( a3 )
  {
    v14 = SetFilterKeys(a2);
    *a5 = v14;
    a4 = v14;
    if ( !v14 )
      SetFilterKeys((struct tagFILTERKEYS *)v10);
  }
  if ( !a4 )
    return 0LL;
  v15 = *(unsigned int *)a2;
  v16 = *(_QWORD *)(v10 + 16);
  v23 = *(_OWORD *)v10;
  v24 = v16;
  memmove((void *)v10, a2, v15);
  *(_DWORD *)v10 = 24;
  v20 = *(unsigned int *)(W32GetUserSessionState(v18, v17) + 20468);
  if ( (v20 & 1) == 0 )
    StopFilterKeysTimers();
  SetAccessEnabledFlag(v20, v19);
  ApiSetEditionCallAccessibilityHook(2LL);
  ApiSetEditionPostShellHookMessages(v21, 2LL, &v23, v10);
  return 1LL;
}
