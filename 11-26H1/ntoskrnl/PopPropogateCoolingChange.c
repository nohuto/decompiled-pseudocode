/*
 * XREFs of PopPropogateCoolingChange @ 0x1404357C4
 * Callers:
 *     PoSetThermalActiveCooling @ 0x1407CB6B0 (PoSetThermalActiveCooling.c)
 *     PopCoolingExtensionPnpNotification @ 0x1407CBA20 (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x1407CBAF8 (PopDeactiveThermalRequest.c)
 *     PopDisableCoolingExtension @ 0x1407CBCE4 (PopDisableCoolingExtension.c)
 *     PoSetThermalPassiveCooling @ 0x140B2F2D0 (PoSetThermalPassiveCooling.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PopDiagTraceCoolingExtensionActiveUpdate @ 0x1407D3374 (PopDiagTraceCoolingExtensionActiveUpdate.c)
 *     PopDiagTraceCoolingExtensionPassiveUpdate @ 0x140B3C0C4 (PopDiagTraceCoolingExtensionPassiveUpdate.c)
 */

void __fastcall PopPropogateCoolingChange(__int64 a1)
{
  char v2; // bp
  unsigned __int8 v3; // si
  __int64 *i; // rdx
  struct _KEVENT *v5; // rcx
  struct _KEVENT *v6; // rcx
  unsigned __int8 v7; // cl
  __int64 v8; // rdx

  if ( *(_BYTE *)(a1 + 67) )
  {
    *(_BYTE *)(a1 + 67) = 0;
    return;
  }
  do
  {
    while ( 1 )
    {
      v2 = 0;
      v3 = 100;
      if ( *(_BYTE *)(a1 + 64) )
      {
        for ( i = *(__int64 **)(a1 + 16); i != (__int64 *)(a1 + 16); i = (__int64 *)*i )
        {
          if ( *((_BYTE *)i + 18) )
          {
            v7 = *((_BYTE *)i + 16);
            if ( v7 >= v3 )
              v7 = v3;
            v3 = v7;
            if ( *((_BYTE *)i + 17) )
              v2 = 1;
          }
        }
      }
      if ( v3 == *(_BYTE *)(a1 + 66) )
        break;
      *(_BYTE *)(a1 + 66) = v3;
      *(_BYTE *)(a1 + 67) = 1;
      PopReleaseRwLock((struct _KTHREAD *)(a1 + 32));
      PopDiagTraceCoolingExtensionPassiveUpdate(a1);
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 96), v3);
      PopAcquireRwLockExclusive(a1 + 32);
      if ( *(_BYTE *)(a1 + 67) )
      {
        *(_BYTE *)(a1 + 67) = 0;
        break;
      }
    }
    if ( v2 == *(_BYTE *)(a1 + 65) )
      goto LABEL_11;
    *(_BYTE *)(a1 + 65) = v2;
    *(_BYTE *)(a1 + 67) = 1;
    PopReleaseRwLock((struct _KTHREAD *)(a1 + 32));
    PopDiagTraceCoolingExtensionActiveUpdate(a1);
    LOBYTE(v8) = v2;
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 96), v8);
    PopAcquireRwLockExclusive(a1 + 32);
  }
  while ( !*(_BYTE *)(a1 + 67) );
  *(_BYTE *)(a1 + 67) = 0;
LABEL_11:
  v5 = *(struct _KEVENT **)(a1 + 80);
  if ( v5 )
    KeSetEvent(v5, 0, 0);
  v6 = *(struct _KEVENT **)(a1 + 72);
  if ( v6 )
    KeSetEvent(v6, 0, 0);
}
