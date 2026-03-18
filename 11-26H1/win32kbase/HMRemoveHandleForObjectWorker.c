/*
 * XREFs of HMRemoveHandleForObjectWorker @ 0x14016FF84
 * Callers:
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400D0E14 (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMRemoveHandleForObject @ 0x1401BCC80 (HMRemoveHandleForObject.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     HMCleanupObjectSecurity @ 0x14017E734 (HMCleanupObjectSecurity.c)
 */

__int64 __fastcall HMRemoveHandleForObjectWorker(__int64 a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int16 v10; // ax
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v5 = (a1 - *(_QWORD *)(UserSessionState + 19920)) >> 5;
  v6 = *(_QWORD *)(UserSessionState + 19864) + 40LL * (unsigned int)v5;
  v9 = W32GetUserSessionState(v7, v5, 5 * (int)v5);
  --*(_DWORD *)(v9 + 19852);
  if ( *(_QWORD *)(v6 + 24) )
  {
    LOBYTE(v8) = *(_BYTE *)(a1 + 24);
    HMCleanupObjectSecurity(v6, v8);
    GreDeleteFastMutex(*(char **)(v6 + 24), v14, v15, v16);
  }
  v10 = (*(_WORD *)(a1 + 26) + 1) & 0x7FFF;
  if ( v10 == 0x7FFF )
    v10 = 1;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)v6 = 0LL;
  *(_OWORD *)(v6 + 16) = 0LL;
  *(_QWORD *)(v6 + 32) = 0LL;
  *(_WORD *)(a1 + 26) = v10;
  v11 = *(_QWORD *)(v9 + 19864);
  v12 = (a1 - *(_QWORD *)(v9 + 19920)) >> 5;
  if ( (v12 & 1) != 0 )
  {
    *(_QWORD *)(v11 + 40 * v12) = *(_QWORD *)(v9 + 19736);
    *(_QWORD *)(v9 + 19736) = v12;
  }
  else
  {
    *(_QWORD *)(v11 + 40 * v12) = *(_QWORD *)(v9 + 19728);
    *(_QWORD *)(v9 + 19728) = v12;
  }
  return 1LL;
}
