/*
 * XREFs of PspHandleTableWalker @ 0x140369F50
 * Callers:
 *     <none>
 * Callees:
 *     ExpUnblockPushLock @ 0x14036A040 (ExpUnblockPushLock.c)
 */

char __fastcall PspHandleTableWalker(__int64 a1, volatile signed __int64 *a2, int a3, __int64 a4)
{
  _QWORD *v6; // rcx
  unsigned int v7; // eax
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedIncrement64(a2);
  v6 = (_QWORD *)(a1 + 48);
  _InterlockedOr(v9, 0);
  if ( *v6 )
    ExpUnblockPushLock(v6, 0LL, 0LL);
  v7 = *(_DWORD *)(a4 + 12);
  if ( v7 >= *(_DWORD *)(a4 + 8) )
    return 1;
  *(_DWORD *)(*(_QWORD *)a4 + 4LL * v7) = a3;
  ++*(_DWORD *)(a4 + 12);
  return 0;
}
