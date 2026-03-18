/*
 * XREFs of MiUpdateChargedWsles @ 0x1405240B4
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x1402A515C (MiMakeZeroedPageTablesEx.c)
 *     MiComputeProcessUserVa @ 0x140962818 (MiComputeProcessUserVa.c)
 *     MiCommitPageTablesForVad @ 0x1409C6018 (MiCommitPageTablesForVad.c)
 *     MiCommitVadGetCharges @ 0x1409C7650 (MiCommitVadGetCharges.c)
 *     MiDeleteVadBitmap @ 0x140AFAF24 (MiDeleteVadBitmap.c)
 *     MiReturnPageTablePageCommitment @ 0x140B23EB8 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     <none>
 */

volatile signed __int64 *__fastcall MiUpdateChargedWsles(__int64 a1, unsigned __int64 a2)
{
  volatile signed __int64 *result; // rax

  result = (volatile signed __int64 *)&unk_140E37830;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    result = (volatile signed __int64 *)(a1 + 240);
  _InterlockedAdd64(result, a2);
  return result;
}
