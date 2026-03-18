/*
 * XREFs of ?RegisterEndpoint@CoreMessagingKPort@@QEAAJW4COREMESSAGINGK_ENDPOINT_ID@@AEBUtagMsgRoutingInfo@@@Z @ 0x1401CDD80
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     CoreMsgOpenConnection @ 0x1400D8214 (CoreMsgOpenConnection.c)
 */

__int64 __fastcall CoreMessagingKPort::RegisterEndpoint(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // rsi
  void **v7; // r8
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax

  v4 = a2;
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 8));
  v6 = 16 * v4;
  v7 = (void **)(v6 + a1 + 16);
  if ( *v7 )
  {
    v8 = -2147020579;
  }
  else
  {
    v8 = CoreMsgOpenConnection(0, (const struct tagMsgRoutingInfo *)a3, v7);
    if ( v8 >= 0 )
    {
      v10 = *(unsigned int *)(a3 + 4);
      *(_DWORD *)(v6 + a1 + 24) = v10;
      v11 = PtiCurrent(v10, v9);
      *((_QWORD *)v11 + 170) |= 0x10000000000uLL;
    }
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 8));
  return (unsigned int)v8;
}
