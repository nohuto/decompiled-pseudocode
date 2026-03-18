/*
 * XREFs of ?ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x14021F9DC
 * Callers:
 *     NtUserProcessInkFeedbackCommand @ 0x1402B9220 (NtUserProcessInkFeedbackCommand.c)
 * Callees:
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?RunForAllProviders@InkFeedbackServer@@AEAAJW4INK_FEEDBACK_COMMAND@@PEBXIP6AJPEAVInkFeedbackProviderBase@@01I@Z@Z @ 0x14021FA80 (-RunForAllProviders@InkFeedbackServer@@AEAAJW4INK_FEEDBACK_COMMAND@@PEBXIP6AJPEAVInkFeedbackProv.c)
 */

__int64 __fastcall InkProcessor::ProcessInkFeedbackCommand(__int64 a1)
{
  int v2; // edi

  v2 = InkFeedbackServer::RunForAllProviders(a1 + 96);
  if ( v2 >= 0 )
  {
    W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0);
    if ( *(_BYTE *)(a1 + 8) )
      v2 = InkFeedbackServer::RunForAllProviders(a1 + 96);
    else
      v2 = -1073741823;
    W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0LL);
  }
  return (unsigned int)v2;
}
