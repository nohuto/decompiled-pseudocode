/*
 * XREFs of ?CoreMsgCloseAllDestinations@InputExtensibilityCallout@@AEAAXXZ @ 0x140179A90
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x140179858 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

void __fastcall InputExtensibilityCallout::CoreMsgCloseAllDestinations(InputExtensibilityCallout *this)
{
  struct W32_PUSH_LOCK *v1; // rbx
  HANDLE *v3; // rdi
  HANDLE *v4; // rsi

  v1 = (InputExtensibilityCallout *)((char *)this + 8);
  W32AcquirePushLockExclusiveEx((InputExtensibilityCallout *)((char *)this + 8));
  v3 = (HANDLE *)((char *)this + 24);
  v4 = v3 + 115;
  while ( v3 != v4 )
  {
    if ( *v3 )
    {
      ZwClose(*v3);
      *v3 = 0LL;
    }
    v3 += 5;
  }
  W32ReleasePushLockExclusiveEx(v1);
}
