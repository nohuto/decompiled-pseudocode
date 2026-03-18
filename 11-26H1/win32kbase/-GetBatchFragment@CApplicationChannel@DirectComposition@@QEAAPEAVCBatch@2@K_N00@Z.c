/*
 * XREFs of ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400AF058
 * Callers:
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z @ 0x1400A6900 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x1400A7400 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1400AC320 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AE7A8 (-EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AEA20 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCommands@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAA_NPEAPEAVCBatch@3@@Z @ 0x1400AEB78 (-EmitCommands@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AEE00 (-EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AEF40 (-EmitCreationCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInsertChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AF364 (-EmitInsertChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AF5D0 (-EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1400B0798 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EmitUpdateTouchConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B1F94 (-EmitUpdateTouchConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 *     ?EmitUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B212C (-EmitUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAV.c)
 *     ?EmitUpdatePenConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B2360 (-EmitUpdatePenConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?ReferenceTypeMarshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1@Z @ 0x140119AF8 (-ReferenceTypeMarshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MI.c)
 *     ?EmitSetSources@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401207CC (-EmitSetSources@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetReferenceInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401209FC (-EmitSetReferenceInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ??$EmitSetProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140127214 (--$EmitSetProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectC.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe4772___lambda_cef133924e7ba8c5c0c6519b3ed084f6___ @ 0x1401397D4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe477.c)
 *     ?EmitSetManipulations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140146CC0 (-EmitSetManipulations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z @ 0x1401B2C40 (-BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1400AE3A8 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1400AE5A4 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1400B0C9C (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1400B46B8 (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z.c)
 */

struct DirectComposition::CBatch *__fastcall DirectComposition::CApplicationChannel::GetBatchFragment(
        DirectComposition::CApplicationChannel *this,
        int a2,
        char a3,
        char a4,
        bool a5)
{
  struct DirectComposition::CBatch *v6; // rsi
  __int64 v7; // rcx
  char v9; // r14
  int v10; // r15d
  PSLIST_ENTRY v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  DirectComposition::CBatch *v15; // rdi
  struct DirectComposition::CBatchSharedMemoryPool *v16; // r14
  struct DirectComposition::CBatchSharedMemoryPool *v17; // rdi
  __int64 v18; // r15
  __int64 v19; // rcx
  struct DirectComposition::CBatchSharedMemoryPool **v20; // rax
  struct DirectComposition::CBatchSharedMemoryPool *v21; // rcx
  struct DirectComposition::CBatchSharedMemoryPool *v22; // rax
  __int64 v23; // rax
  struct _ERESOURCE *v24; // rcx
  struct _SLIST_ENTRY *Next; // rax
  int v27; // ebp
  struct DirectComposition::CBatchSharedMemoryPool *v28; // [rsp+20h] [rbp-48h] BYREF
  struct DirectComposition::CBatch *v29; // [rsp+70h] [rbp+8h] BYREF
  int v30; // [rsp+78h] [rbp+10h]
  char v31; // [rsp+80h] [rbp+18h]

  v31 = a3;
  v30 = a2;
  v6 = 0LL;
  v7 = *((_QWORD *)this + 30);
  v9 = a3;
  v29 = 0LL;
  v10 = a2;
  KeResetEvent(*(PRKEVENT *)(v7 + 8));
  while ( 1 )
  {
    v11 = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 13);
    v15 = (DirectComposition::CBatch *)v11;
    if ( !v11 )
      break;
    --*((_DWORD *)this + 63);
    Next = v11[4].Next;
    if ( (unsigned __int64)Next > *((_QWORD *)this + 32) )
    {
      *((_BYTE *)this + 264) |= 2u;
      *((_QWORD *)this + 32) = Next;
    }
    DirectComposition::CBatch::Clear(v15, v12, v13, v14);
    *(_QWORD *)v15 = *((_QWORD *)this + 24);
    *((_QWORD *)this + 24) = v15;
  }
  if ( *((_QWORD *)this + 22) )
  {
    v6 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = 0LL;
  }
  else
  {
    v16 = (DirectComposition::CApplicationChannel *)((char *)this + 2632);
    while ( 1 )
    {
      v17 = *(struct DirectComposition::CBatchSharedMemoryPool **)v16;
      v18 = 0LL;
      v28 = 0LL;
      while ( v17 != v16 )
      {
        if ( !*((_BYTE *)v17 + 64) )
        {
          v19 = *((_QWORD *)v17 + 5);
          if ( (unsigned __int64)(4096 - v19) >= 0x228 )
          {
            *((_BYTE *)v17 + 64) = 1;
            v18 = v19;
            v20 = (struct DirectComposition::CBatchSharedMemoryPool **)*((_QWORD *)v17 + 1);
            if ( v20 != (struct DirectComposition::CBatchSharedMemoryPool **)v16 )
            {
              v21 = *(struct DirectComposition::CBatchSharedMemoryPool **)v17;
              if ( *(struct DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v17 + 8LL) == v17 && *v20 == v17 )
              {
                *v20 = v21;
                *((_QWORD *)v21 + 1) = v20;
                goto LABEL_14;
              }
              goto LABEL_15;
            }
            goto LABEL_17;
          }
        }
        v17 = *(struct DirectComposition::CBatchSharedMemoryPool **)v17;
      }
      if ( (int)DirectComposition::CBatchSharedMemoryPool::Create(
                  (DirectComposition::CApplicationChannel *)((char *)this + 2632),
                  *((_BYTE *)this + 2656),
                  &v28) >= 0 )
        break;
      if ( !a5 )
        return v6;
      DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0);
    }
    v17 = v28;
    if ( !*((_BYTE *)v28 + 64) && (unsigned __int64)(4096LL - *((_QWORD *)v28 + 5)) >= 0x228 )
    {
      v18 = *((_QWORD *)v28 + 5);
      *((_BYTE *)v28 + 64) = 1;
    }
LABEL_14:
    v22 = *(struct DirectComposition::CBatchSharedMemoryPool **)v16;
    if ( *(struct DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v16 + 8LL) != v16 )
LABEL_15:
      __fastfail(3u);
    *(_QWORD *)v17 = v22;
    *((_QWORD *)v17 + 1) = v16;
    *((_QWORD *)v22 + 1) = v17;
    *(_QWORD *)v16 = v17;
LABEL_17:
    if ( !v17 )
      return v6;
    v23 = *((_QWORD *)v17 + 5);
    if ( (unsigned __int64)(4096 - v23) >= 0x28 )
      *((_QWORD *)v17 + 5) = v23 + 40;
    v6 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 24);
    if ( v6 )
    {
      *((_QWORD *)this + 24) = *(_QWORD *)v6;
    }
    else
    {
      do
      {
        v27 = DirectComposition::CApplicationChannel::CreateBatch(this, &v29);
        if ( v27 < 0
          && *((int *)this + 63) > 0
          && DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0) )
        {
          v6 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 24);
          v27 = 0;
          v29 = v6;
          *((_QWORD *)this + 24) = *(_QWORD *)v6;
        }
        else
        {
          v6 = v29;
        }
      }
      while ( a5 && v27 < 0 );
    }
    v9 = v31;
    if ( v6 )
    {
      *((_QWORD *)v6 + 17) = v17;
      *((_QWORD *)v6 + 18) = v18;
    }
    else
    {
      *((_BYTE *)v17 + 64) = 0;
    }
    v10 = v30;
  }
  if ( v6 )
  {
    *((_DWORD *)v6 + 4) = v10;
    *((_BYTE *)v6 + 32) = v9 | *((_BYTE *)v6 + 32) & 0xFE;
    *(_QWORD *)v6 = 0LL;
    if ( a4 )
    {
      ++*((_DWORD *)this + 63);
      *((_BYTE *)this + 264) |= 8u;
      v24 = (struct _ERESOURCE *)*((_QWORD *)this + 49);
      if ( v24 )
      {
        DirectComposition::CCriticalSection::AcquireExclusive(v24);
        if ( ++*((_DWORD *)this + 62) == 1 )
          KeResetEvent(*(PRKEVENT *)(*((_QWORD *)this + 48) + 8LL));
        ExReleaseResourceLite(*((PERESOURCE *)this + 49));
        KeLeaveCriticalRegion();
      }
    }
  }
  return v6;
}
