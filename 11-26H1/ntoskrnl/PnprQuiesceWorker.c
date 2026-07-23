/*
 * XREFs of PnprQuiesceWorker @ 0x140BF8BF0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     PnprCompleteWake @ 0x1405DE4FC (PnprCompleteWake.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PnprLockPagesForReplace @ 0x1407B29F8 (PnprLockPagesForReplace.c)
 *     PnprQuiesceDevices @ 0x140BF80F0 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x140BF8D2C (PnprWakeDevices.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnprQuiesceWorker(PVOID P)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // ebx
  PVOID Object[2]; // [rsp+40h] [rbp-78h] BYREF
  int v6[20]; // [rsp+50h] [rbp-68h] BYREF

  memset_0(v6, 0, sizeof(v6));
  Object[0] = (PVOID)(PnprContext + 33064);
  Object[1] = (PVOID)(PnprContext + 33112);
  if ( KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) != 1 )
  {
    PnprLockPagesForReplace();
    v2 = PnprQuiesceDevices(v6);
    v3 = PnprContext;
    v4 = v2;
    *(_DWORD *)(PnprContext + 33160) = v2;
    KeSetEvent((PRKEVENT)(v3 + 33088), 0, 0);
    if ( v4 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(PnprContext + 33112), Executive, 0, 0, 0LL);
      PnprWakeDevices(v6);
    }
    PnprCompleteWake();
  }
  KeSetEvent((PRKEVENT)(PnprContext + 33136), 0, 0);
  ExFreePoolWithTag(P, 0x51706E50u);
}
