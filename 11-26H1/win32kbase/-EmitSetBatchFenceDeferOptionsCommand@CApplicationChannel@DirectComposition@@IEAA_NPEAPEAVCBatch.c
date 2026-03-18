/*
 * XREFs of ?EmitSetBatchFenceDeferOptionsCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@_N11@Z @ 0x140145380
 * Callers:
 *     ?BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z @ 0x1401B2C40 (-BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CApplicationChannel::EmitSetBatchFenceDeferOptionsCommand(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch ***a2,
        char a3,
        char a4,
        bool a5)
{
  bool v8; // bl
  _DWORD *v9; // rcx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 673) )
    return 1;
  if ( (*((_BYTE *)this + 48) & 1) == 0 )
    return 1;
  v8 = a5;
  if ( !a3 && !a5 )
    return 1;
  v10 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v10) )
  {
    v9 = v10;
    *(_DWORD *)v10 = 12;
    v9[1] = 194;
    *((_BYTE *)v9 + 8) = a3;
    *((_BYTE *)v9 + 9) = a4;
    *((_BYTE *)v9 + 10) = v8;
    return 1;
  }
  return 0;
}
