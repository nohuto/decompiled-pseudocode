/*
 * XREFs of AlpcpInsertMessageDirectQueue @ 0x1407C3808
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x140990918 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall AlpcpInsertMessageDirectQueue(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v6; // rbx
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rsi
  int v10; // eax

  if ( *(_QWORD *)(a2 + 16) )
    NT_ASSERT("Message->PortQueue == ((void *)0)");
  if ( (*(_DWORD *)(a2 + 40) & 7) != 0 )
    NT_ASSERT("AlpcpGetQueueTypeMessage(Message) == 0x00000000");
  if ( (((*(_DWORD *)(a1 + 416) & 6) - 2) & 0xFFFFFFFD) != 0 )
    NT_ASSERT("(AlpcpGetPortType(PortObject) == 0x00000002) || (AlpcpGetPortType(PortObject) == 0x00000001)");
  v6 = (unsigned __int64 *)(a1 + 200);
  v7 = (AutoBoost *)KeAbPreAcquire(a1 + 200, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 16) = a1;
  *(_DWORD *)(a2 + 40) = v10 & 0xFFFFFF84 | (4 * (*(_DWORD *)(a1 + 416) & 6 | 1));
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 216);
  *(_QWORD *)a2 = a1 + 208;
  **(_QWORD **)(a1 + 216) = a2;
  ++*(_DWORD *)(a1 + 460);
  *(_QWORD *)(a1 + 216) = a2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((unsigned __int64)v6);
}
