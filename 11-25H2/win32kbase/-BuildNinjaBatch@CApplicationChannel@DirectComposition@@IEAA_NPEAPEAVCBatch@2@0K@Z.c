/*
 * XREFs of ?BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z @ 0x1401981B0
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x14004F890 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400238D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x140023F00 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1400241E0 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?EmitUpdateCommands@CChannelMarshaler@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x14002481C (-EmitUpdateCommands@CChannelMarshaler@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400C01EC (-EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1400C6E9C (-EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@PEAPEAVCResou.c)
 *     ?EmitReleaseCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400D5130 (-EmitReleaseCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDescriptionCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400DD07C (-EmitDescriptionCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitNonDirtyingUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1400DDC20 (-EmitNonDirtyingUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@PEAP.c)
 *     ?EmitApplicationIdCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400DE098 (-EmitApplicationIdCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400E65D0 (-EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     EtwTraceDCompCommitBatchEvent @ 0x1400F4F10 (EtwTraceDCompCommitBatchEvent.c)
 *     ?EmitSetBatchFenceDeferOptionsCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@_N11@Z @ 0x14010C8DC (-EmitSetBatchFenceDeferOptionsCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch.c)
 *     ?EmitBatchFenceCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140116254 (-EmitBatchFenceCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     Feature_EffectHash__private_IsEnabledDeviceUsageNoInline @ 0x1402267A0 (Feature_EffectHash__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall DirectComposition::CApplicationChannel::BuildNinjaBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2,
        struct DirectComposition::CBatch **a3,
        int a4)
{
  char v7; // si
  char v8; // cl
  int *BatchFragment; // r15
  struct DirectComposition::CBatch *v10; // rdi
  DirectComposition::CApplicationChannel *v11; // rcx
  _DWORD *v12; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  char v14; // cl
  char v15; // cl
  _QWORD *v16; // rax
  struct DirectComposition::CBatch *v18; // [rsp+70h] [rbp+40h] BYREF
  struct DirectComposition::CBatch **v19; // [rsp+78h] [rbp+48h]
  void *v20; // [rsp+80h] [rbp+50h] BYREF

  v19 = a2;
  v7 = 1;
  DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this);
  v8 = *((_BYTE *)this + 264);
  if ( (v8 & 2) != 0 )
  {
    DirectComposition::CApplicationChannel::RemoveExpiredAnimations(this);
    *((_BYTE *)this + 264) &= ~2u;
    v8 = *((_BYTE *)this + 264);
  }
  BatchFragment = 0LL;
  v10 = 0LL;
  if ( *((_BYTE *)this + 56)
    || (v8 & 0x40) != 0
    || (*((_BYTE *)this + 265) & 3) != 0
    || *((_QWORD *)this + 60)
    || *((_QWORD *)this + 63)
    || *((_QWORD *)this + 56)
    || *((_QWORD *)this + 58)
    || *((_QWORD *)this + 54)
    || *((_QWORD *)this + 57)
    || *((_QWORD *)this + 59) )
  {
    BatchFragment = (int *)DirectComposition::CApplicationChannel::GetBatchFragment(this, a4, 1, 1, 1);
    EtwTraceDCompCommitBatchEvent(*((_DWORD *)this + 7), (int)BatchFragment, BatchFragment[4], 1);
    v18 = (struct DirectComposition::CBatch *)BatchFragment;
    if ( !DirectComposition::CApplicationChannel::EmitBatchFenceCommand(
            this,
            (struct DirectComposition::CBatch ***)&v18)
      || !DirectComposition::CApplicationChannel::EmitDescriptionCommand(
            this,
            (struct DirectComposition::CBatch ***)&v18)
      || !DirectComposition::CApplicationChannel::EmitApplicationIdCommand(
            this,
            (struct DirectComposition::CBatch ***)&v18)
      || !DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, &v18)
      || !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(
            (DirectComposition::CAnimationBinding **)this,
            (struct DirectComposition::CBatch ***)&v18)
      || !DirectComposition::CApplicationChannel::EmitReleaseCommands(this, &v18)
      || !DirectComposition::CApplicationChannel::EmitCreationCommands(
            this,
            &v18,
            (struct DirectComposition::CResourceMarshaler **)this + 56)
      || !DirectComposition::CApplicationChannel::EmitCreationCommands(
            this,
            &v18,
            (struct DirectComposition::CResourceMarshaler **)this + 58)
      || !DirectComposition::CApplicationChannel::EmitCreationCommands(
            this,
            &v18,
            (struct DirectComposition::CResourceMarshaler **)this + 54)
      || !DirectComposition::CChannelMarshaler::EmitUpdateCommands(
            (DirectComposition::CApplicationChannel *)((char *)this + 56),
            (struct DirectComposition::CBatch ***)&v18)
      || !DirectComposition::CApplicationChannel::EmitNonDirtyingUpdateCommands(
            v11,
            &v18,
            (struct DirectComposition::CResourceMarshaler **)this + 57)
      || !DirectComposition::CApplicationChannel::EmitNonDirtyingUpdateCommands(
            v11,
            &v18,
            (struct DirectComposition::CResourceMarshaler **)this + 59)
      || (v20 = 0LL,
          !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)&v18, 8uLL, &v20))
      || (v12 = v20,
          *(_DWORD *)v20 = 8,
          v12[1] = 44,
          !DirectComposition::CApplicationChannel::EmitSetBatchFenceDeferOptionsCommand(
             this,
             (struct DirectComposition::CBatch ***)&v18,
             0,
             0,
             1)) )
    {
      v7 = 0;
    }
    v10 = v18;
    *(_BYTE *)(*((_QWORD *)v18 + 17) + 64LL) = 0;
    if ( v7 )
    {
      IsEnabledDeviceUsageNoInline = Feature_EffectHash__private_IsEnabledDeviceUsageNoInline(v11);
      v14 = *((_BYTE *)v10 + 32);
      if ( IsEnabledDeviceUsageNoInline )
        v15 = v14 | 0x80;
      else
        v15 = v14 | 0x40;
      *((_BYTE *)v10 + 32) = v15;
    }
  }
  v16 = v19;
  *a3 = v10;
  *v16 = BatchFragment;
  return v7;
}
