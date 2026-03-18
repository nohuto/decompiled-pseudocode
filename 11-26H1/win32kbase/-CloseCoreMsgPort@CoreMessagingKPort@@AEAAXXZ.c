/*
 * XREFs of ?CloseCoreMsgPort@CoreMessagingKPort@@AEAAXXZ @ 0x1401CD96C
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

void __fastcall CoreMessagingKPort::CloseCoreMsgPort(HANDLE *this)
{
  HANDLE *i; // rdi

  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(this + 1));
  for ( i = this + 2; i != this + 4; i += 2 )
  {
    if ( *i )
    {
      ZwClose(*i);
      *i = 0LL;
    }
  }
  if ( *this )
  {
    ZwClose(*this);
    *this = 0LL;
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(this + 1));
}
