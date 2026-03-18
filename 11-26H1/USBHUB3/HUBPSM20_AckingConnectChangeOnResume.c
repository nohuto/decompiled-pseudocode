/*
 * XREFs of HUBPSM20_AckingConnectChangeOnResume @ 0x140012410
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_AckPortChangeUsingControlTransfer @ 0x140002954 (HUBHTX_AckPortChangeUsingControlTransfer.c)
 */

__int64 __fastcall HUBPSM20_AckingConnectChangeOnResume(__int64 a1, int a2, int a3, int a4)
{
  HUBHTX_AckPortChangeUsingControlTransfer(*(_QWORD *)(a1 + 960), a2, a3, a4);
  return 1000LL;
}
