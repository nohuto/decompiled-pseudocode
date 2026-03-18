/*
 * XREFs of WdtpTimerCallback @ 0x140719C80
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     WdtpArmTimer @ 0x1403AA03C (WdtpArmTimer.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall WdtpTimerCallback(__int64 a1, __int64 a2)
{
  int v3; // eax
  int v4; // edx

  v3 = *(_DWORD *)(a2 + 136) + 1;
  *(_DWORD *)(a2 + 136) = v3;
  if ( v3 == 1 )
  {
    if ( *(_QWORD *)(a2 + 16) )
      guard_dispatch_icall_no_overrides(a2 + 141, a2);
    if ( *(_QWORD *)(a2 + 24) )
    {
      KeResetEvent((PRKEVENT)(a2 + 96));
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 56), CriticalWorkQueue);
    }
    v4 = *(_DWORD *)(a2 + 36);
    if ( v4 )
      WdtpArmTimer(a2, v4 - *(_DWORD *)(a2 + 32));
  }
  else if ( v3 == 2 )
  {
    guard_dispatch_icall_no_overrides(a2 + 141, a2);
  }
}
