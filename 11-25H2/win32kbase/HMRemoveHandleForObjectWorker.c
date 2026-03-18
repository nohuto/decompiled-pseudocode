/*
 * XREFs of HMRemoveHandleForObjectWorker @ 0x14013956C
 * Callers:
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401614EC (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMRemoveHandleForObject @ 0x140161860 (HMRemoveHandleForObject.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     HMCleanupObjectSecurity @ 0x1401495DC (HMCleanupObjectSecurity.c)
 */

__int64 __fastcall HMRemoveHandleForObjectWorker(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int16 v9; // ax
  __int64 v10; // r8
  __int64 v11; // rbx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = (unsigned int)((a1 - *(_QWORD *)(UserSessionState + 19888)) >> 5);
  v5 = *(_QWORD *)(UserSessionState + 19832) + 40LL * (unsigned int)v4;
  v8 = W32GetUserSessionState(v6, v4);
  --*(_DWORD *)(v8 + 19820);
  if ( *(_QWORD *)(v5 + 24) )
  {
    LOBYTE(v7) = *(_BYTE *)(a1 + 24);
    HMCleanupObjectSecurity(v5, v7);
    GreDeleteFastMutex(*(char **)(v5 + 24));
  }
  v9 = (*(_WORD *)(a1 + 26) + 1) & 0x7FFF;
  if ( v9 == 0x7FFF )
    v9 = 1;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)v5 = 0LL;
  *(_OWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 32) = 0LL;
  *(_WORD *)(a1 + 26) = v9;
  v10 = *(_QWORD *)(v8 + 19832);
  v11 = (a1 - *(_QWORD *)(v8 + 19888)) >> 5;
  if ( (v11 & 1) != 0 )
  {
    *(_QWORD *)(v10 + 40 * v11) = *(_QWORD *)(v8 + 19704);
    *(_QWORD *)(v8 + 19704) = v11;
  }
  else
  {
    *(_QWORD *)(v10 + 40 * v11) = *(_QWORD *)(v8 + 19696);
    *(_QWORD *)(v8 + 19696) = v11;
  }
  return 1LL;
}
