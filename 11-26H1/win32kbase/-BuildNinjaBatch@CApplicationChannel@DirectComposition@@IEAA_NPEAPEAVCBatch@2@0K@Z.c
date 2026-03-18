/*
 * XREFs of ?BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z @ 0x1401B2C40
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x1400A7400 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1400AE4E0 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400AF058 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x140102548 (-EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@PEAPEAVCResou.c)
 *     ?EmitNonDirtyingUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x140125D5C (-EmitNonDirtyingUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@PEAP.c)
 *     ?EmitDescriptionCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140125E44 (-EmitDescriptionCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitApplicationIdCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14012A60C (-EmitApplicationIdCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14012CCB0 (-EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     EtwTraceDCompCommitBatchEvent @ 0x140137D90 (EtwTraceDCompCommitBatchEvent.c)
 *     ?EmitBatchFenceCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14013FBC4 (-EmitBatchFenceCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetBatchFenceDeferOptionsCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@_N11@Z @ 0x140145380 (-EmitSetBatchFenceDeferOptionsCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::BuildNinjaBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2,
        struct DirectComposition::CBatch **a3,
        int a4)
{
  bool v8; // di
  struct DirectComposition::CBatch *v9; // r10
  int *BatchFragment; // rsi
  DirectComposition::CApplicationChannel *v11; // rcx
  DirectComposition::CApplicationChannel *v12; // rcx
  _DWORD *v13; // rax
  bool result; // al
  struct DirectComposition::CBatch *v15; // [rsp+60h] [rbp+30h] BYREF
  void *v16; // [rsp+68h] [rbp+38h] BYREF

  v8 = 1;
  DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this);
  v9 = 0LL;
  BatchFragment = 0LL;
  if ( (*((_BYTE *)this + 264) & 0x40) != 0
    || (*((_BYTE *)this + 265) & 3) != 0
    || *((_QWORD *)this + 56)
    || *((_QWORD *)this + 58)
    || *((_QWORD *)this + 57)
    || *((_QWORD *)this + 59) )
  {
    BatchFragment = (int *)DirectComposition::CApplicationChannel::GetBatchFragment(this, a4, 1, 1, 1);
    EtwTraceDCompCommitBatchEvent(*((_DWORD *)this + 7), (int)BatchFragment, BatchFragment[4], 1);
    v15 = (struct DirectComposition::CBatch *)BatchFragment;
    if ( !DirectComposition::CApplicationChannel::EmitBatchFenceCommand(
            this,
            (struct DirectComposition::CBatch ***)&v15)
      || !DirectComposition::CApplicationChannel::EmitDescriptionCommand(
            this,
            (struct DirectComposition::CBatch ***)&v15)
      || !DirectComposition::CApplicationChannel::EmitApplicationIdCommand(
            this,
            (struct DirectComposition::CBatch ***)&v15)
      || !DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, &v15)
      || !DirectComposition::CApplicationChannel::EmitCreationCommands(
            this,
            &v15,
            (struct DirectComposition::CResourceMarshaler **)this + 56)
      || !DirectComposition::CApplicationChannel::EmitCreationCommands(
            this,
            &v15,
            (struct DirectComposition::CResourceMarshaler **)this + 58)
      || !DirectComposition::CApplicationChannel::EmitNonDirtyingUpdateCommands(
            v11,
            &v15,
            (struct DirectComposition::CResourceMarshaler **)this + 57)
      || !DirectComposition::CApplicationChannel::EmitNonDirtyingUpdateCommands(
            v12,
            &v15,
            (struct DirectComposition::CResourceMarshaler **)this + 59)
      || (v16 = 0LL,
          !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)&v15, 8uLL, &v16))
      || (v13 = v16,
          *(_DWORD *)v16 = 8,
          v13[1] = 43,
          !DirectComposition::CApplicationChannel::EmitSetBatchFenceDeferOptionsCommand(
             this,
             (struct DirectComposition::CBatch ***)&v15,
             0,
             0,
             1)) )
    {
      v8 = 0;
    }
    v9 = v15;
    *(_BYTE *)(*((_QWORD *)v15 + 17) + 64LL) = 0;
    if ( v8 )
      *((_BYTE *)v9 + 32) |= 0x80u;
  }
  result = v8;
  *a2 = (struct DirectComposition::CBatch *)BatchFragment;
  *a3 = v9;
  return result;
}
