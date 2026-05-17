/*
 * XREFs of TppInitializeTimerSubQueue @ 0x180065D70
 * Callers:
 *     TppInitializeTimerQueue @ 0x180065B68 (TppInitializeTimerQueue.c)
 * Callees:
 *     TppGetCurrentThreadNumaNode @ 0x1800668B0 (TppGetCurrentThreadNumaNode.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwAssociateWaitCompletionPacket @ 0x180160170 (ZwAssociateWaitCompletionPacket.c)
 *     NtCreateTimer2 @ 0x1801608B0 (NtCreateTimer2.c)
 *     NtCreateWaitCompletionPacket @ 0x180160970 (NtCreateWaitCompletionPacket.c)
 */

__int64 __fastcall TppInitializeTimerSubQueue(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  HANDLE *v3; // rbx
  __int64 v4; // r15
  __int64 result; // rax
  int WaitCompletionPacket; // ebp
  char v9; // [rsp+60h] [rbp+8h] BYREF

  v3 = (HANDLE *)(a1 + 24);
  v4 = a3;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v9 = 0;
  result = NtCreateTimer2(a1 + 24, 0LL, 0LL, 8LL, 1048578);
  if ( (int)result >= 0 )
  {
    WaitCompletionPacket = NtCreateWaitCompletionPacket(a1 + 32, 1LL, 0LL);
    if ( WaitCompletionPacket < 0 )
    {
      NtClose(*v3);
    }
    else
    {
      ZwAssociateWaitCompletionPacket(*(_QWORD *)(a1 + 32), *(_QWORD *)(a2 + 64), *v3, a1 + 40, a2 + 112, 0, v4, &v9);
      *(_QWORD *)(a1 + 96) = TppTimerQueueExpiration;
      TppGetCurrentThreadNumaNode(a2, a1 + 104, a1 + 108, 0LL);
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 88) = a1 + 80;
      *(_QWORD *)(a1 + 80) = a1 + 80;
      *(_QWORD *)(a1 + 40) = TppDirectTaskVFuncs;
      *(_DWORD *)(a1 + 48) = *(_DWORD *)(a1 + 104);
      *(_BYTE *)(a1 + 52) = *(_BYTE *)(a1 + 108);
    }
    return (unsigned int)WaitCompletionPacket;
  }
  return result;
}
