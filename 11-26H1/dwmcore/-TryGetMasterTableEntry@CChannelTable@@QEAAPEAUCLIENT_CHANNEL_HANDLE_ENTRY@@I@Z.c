/*
 * XREFs of ?TryGetMasterTableEntry@CChannelTable@@QEAAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@I@Z @ 0x1801A3DE0
 * Callers:
 *     ?SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z @ 0x18022C2D0 (-SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z.c)
 * Callees:
 *     <none>
 */

struct CLIENT_CHANNEL_HANDLE_ENTRY *__fastcall CChannelTable::TryGetMasterTableEntry(
        CChannelTable *this,
        unsigned int a2)
{
  struct CLIENT_CHANNEL_HANDLE_ENTRY *result; // rax

  if ( !a2 )
    return 0LL;
  if ( a2 >= *((_DWORD *)this + 3) )
    return 0LL;
  result = (struct CLIENT_CHANNEL_HANDLE_ENTRY *)(*((_DWORD *)this + 2) * a2 + *((_QWORD *)this + 3));
  if ( !*(_DWORD *)result )
    return 0LL;
  return result;
}
