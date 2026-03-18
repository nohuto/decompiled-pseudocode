/*
 * XREFs of DestroySMWP @ 0x1400C8060
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x14004EA98 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1400C9BF0 (-UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z.c)
 *     NtUserDeferWindowPosAndBand @ 0x1402487D0 (NtUserDeferWindowPosAndBand.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400C7970 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

void __fastcall DestroySMWP(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  BOOL v11; // esi
  __int64 v12; // r14
  int v13; // ebp
  __int64 *v14; // r14
  __int64 v15; // rax
  __int64 UserSessionState; // rax
  __int64 v17; // rsi

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
  {
    v4 = _HMPheFromObjectWorker(a1);
    if ( !*(_DWORD *)(W32GetUserSessionState(v6, v5) + 19760) && IS_USERCRIT_OWNED_EXCLUSIVE() )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19768) )
      {
        if ( v4 != *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19768) )
        {
          UserSessionState = W32GetUserSessionState(a1, a2);
          ++*(_DWORD *)(UserSessionState + 19776);
        }
      }
      else
      {
        v2 = 1;
        *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19768) = v4;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
  {
    if ( !(unsigned int)HMMarkObjectDestroy(a1) )
      goto LABEL_20;
    v11 = 1;
  }
  else
  {
    v11 = a1 != W32GetUserSessionState(a1, a2) + 63256;
  }
  v12 = *(_QWORD *)(a1 + 40);
  if ( v12 )
  {
    v13 = *(_DWORD *)(a1 + 28) - 1;
    if ( v13 >= 0 )
    {
      v14 = (__int64 *)(v12 + 120);
      do
      {
        v10 = *v14;
        if ( *v14 )
          GreDeleteObject(v10);
        v14 += 21;
        --v13;
      }
      while ( v13 >= 0 );
    }
    if ( v11 )
      Win32FreePool(*(void **)(a1 + 40));
  }
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
  {
    HMFreeObject(a1);
  }
  else if ( v11 )
  {
    Win32FreePool((void *)a1);
  }
  else
  {
    v15 = W32GetUserSessionState(v10, v9);
    *(_DWORD *)(v15 + 66800) &= ~0x40000000u;
    if ( *(int *)(a1 + 32) > 8 )
    {
      v17 = Win32AllocPoolZInit(672LL, 2004054869LL);
      if ( v17 )
      {
        Win32FreePool(*(void **)(a1 + 40));
        *(_QWORD *)(a1 + 40) = v17;
        *(_DWORD *)(a1 + 32) = 4;
      }
    }
    *(_DWORD *)(a1 + 24) &= ~4u;
  }
LABEL_20:
  if ( v2 )
    *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19768) = 0LL;
}
