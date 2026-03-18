/*
 * XREFs of ?EmitBatchFenceCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14013FBC4
 * Callers:
 *     ?BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z @ 0x1401B2C40 (-BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CApplicationChannel::EmitBatchFenceCommand(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch ***a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  signed __int32 v6; // ecx
  _DWORD *v7; // rdx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 673) || (*((_BYTE *)this + 48) & 1) == 0 )
    return 1;
  v8 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v8) )
  {
    v5 = *(_QWORD *)(W32GetDCompSessionState(v4) + 24);
    do
      v6 = _InterlockedIncrement((volatile signed __int32 *)(v5 + 16));
    while ( !v6 );
    v7 = v8;
    *((_DWORD *)this + 673) = v6;
    *v7 = 12;
    v7[1] = 180;
    v7[2] = *((_DWORD *)this + 673);
    return 1;
  }
  return 0;
}
