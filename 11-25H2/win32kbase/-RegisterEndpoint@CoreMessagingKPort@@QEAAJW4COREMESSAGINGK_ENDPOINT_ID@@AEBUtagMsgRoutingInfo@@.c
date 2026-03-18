/*
 * XREFs of ?RegisterEndpoint@CoreMessagingKPort@@QEAAJW4COREMESSAGINGK_ENDPOINT_ID@@AEBUtagMsgRoutingInfo@@@Z @ 0x1401AAFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     CoreMsgOpenConnection @ 0x1400FD1A8 (CoreMsgOpenConnection.c)
 */

__int64 __fastcall CoreMessagingKPort::RegisterEndpoint(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rsi
  void **v7; // r8
  int v8; // edi
  struct tagTHREADINFO *v9; // rax

  v3 = a2;
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 8), 0);
  v6 = 16 * v3;
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
      *(_DWORD *)(v6 + a1 + 24) = *(_DWORD *)(a3 + 4);
      v9 = PtiCurrent();
      *((_QWORD *)v9 + 170) |= 0x10000000000uLL;
    }
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 8), 0LL);
  return (unsigned int)v8;
}
