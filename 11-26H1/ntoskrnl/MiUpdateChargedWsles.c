/*
 * XREFs of MiUpdateChargedWsles @ 0x140526724
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x1402A46AC (MiMakeZeroedPageTablesEx.c)
 *     MiCommitPageTablesForVad @ 0x140996FF8 (MiCommitPageTablesForVad.c)
 *     MiCommitVadGetCharges @ 0x140998630 (MiCommitVadGetCharges.c)
 *     MiComputeProcessUserVa @ 0x140A086A0 (MiComputeProcessUserVa.c)
 *     MiDeleteVadBitmap @ 0x140AFCE30 (MiDeleteVadBitmap.c)
 *     MiReturnPageTablePageCommitment @ 0x140B262B8 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     <none>
 */

volatile signed __int64 *__fastcall MiUpdateChargedWsles(__int64 a1, unsigned __int64 a2)
{
  volatile signed __int64 *result; // rax

  result = (volatile signed __int64 *)&unk_140E379B0;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    result = (volatile signed __int64 *)(a1 + 240);
  _InterlockedAdd64(result, a2);
  return result;
}
