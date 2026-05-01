/*
 * XREFs of ?RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180087D80
 * Callers:
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800804C8 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18000E1EC (-RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18000F294 (-RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x180087E88 (-RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 */

void __fastcall RmpGameModeRundown(struct _RM_GAME_MODE_CONTEXT *a1)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rcx
  int v4; // ebp
  unsigned __int64 v5; // rax
  struct _RTL_BALANCED_NODE *v6; // rdx
  unsigned __int64 v7; // rdi
  char v8; // al

  if ( *((_QWORD *)a1 + 8) )
  {
    RmpGameModeAcquireLock(a1);
    RmpGameModeQueuePolicyWorkerWithLock(a1);
    *((_BYTE *)a1 + 148) |= 4u;
    *((_DWORD *)a1 + 20) = 0;
    RtlReleaseSRWLockExclusive((char *)a1 + 72);
    TpWaitForWork(*((_QWORD *)a1 + 8), 0LL);
  }
  v2 = (unsigned __int64)a1 + 8;
  v3 = *((_QWORD *)a1 + 1);
  if ( (*((_BYTE *)a1 + 16) & 1) != 0 && v3 )
    v3 ^= v2;
  v4 = *((_BYTE *)a1 + 16) & 1;
  if ( v3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)v3;
        v6 = (struct _RTL_BALANCED_NODE *)v3;
        if ( !*(_QWORD *)v3 )
        {
          v6 = (struct _RTL_BALANCED_NODE *)(v3 + 8);
          v5 = *(_QWORD *)(v3 + 8);
          if ( !v5 )
            break;
        }
        if ( v4 )
          v3 ^= v5;
        else
          v3 = v5;
        v6->Children[0] = 0LL;
      }
      v7 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v4 && v7 )
        v7 ^= v3;
      RmpGameModeRundownRecipientProcessTreeCallback((struct _RTL_BALANCED_NODE *)v3, 0LL);
      if ( !v7 )
        break;
      v3 = v7;
    }
  }
  v8 = *((_BYTE *)a1 + 16);
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  if ( (v8 & 1) != 0 )
    *((_BYTE *)a1 + 16) = 1;
}
