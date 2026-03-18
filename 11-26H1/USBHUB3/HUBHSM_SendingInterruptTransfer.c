/*
 * XREFs of HUBHSM_SendingInterruptTransfer @ 0x140009EC0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_SendInterruptTransfer @ 0x140005BC4 (HUBHTX_SendInterruptTransfer.c)
 *     HUBFDO_ReleaseWdfPowerReference @ 0x14000F07C (HUBFDO_ReleaseWdfPowerReference.c)
 */

__int64 __fastcall HUBHSM_SendingInterruptTransfer(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBFDO_ReleaseWdfPowerReference(v1);
  HUBHTX_SendInterruptTransfer(v1);
  *(_WORD *)(v1 + 52) = 0;
  return 2053LL;
}
