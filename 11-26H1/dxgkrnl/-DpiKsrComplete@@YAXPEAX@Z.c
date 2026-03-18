/*
 * XREFs of ?DpiKsrComplete@@YAXPEAX@Z @ 0x1402519AC
 * Callers:
 *     DpiKsrCallback @ 0x140252220 (DpiKsrCallback.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x14025124C (-DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z.c)
 */

void __fastcall DpiKsrComplete(void *a1)
{
  __int64 v1; // rcx

  if ( !qword_140169380
    || (DpIterateFdoContexts((int (__fastcall *)(__int64 *, void *))DpiKsrRestoreMemoryCallback, 0LL),
        v1 = 1LL,
        *(_BYTE *)(qword_140169380 + 28) = 1,
        !qword_140169380) )
  {
    v1 = 0LL;
  }
  DxgkLogInternalTriageEvent(
    0LL,
    65540,
    -1,
    (__int64)L"KSR Complete routine has called and the driver iteration was %1",
    v1,
    0LL,
    0LL,
    0LL,
    0LL);
}
