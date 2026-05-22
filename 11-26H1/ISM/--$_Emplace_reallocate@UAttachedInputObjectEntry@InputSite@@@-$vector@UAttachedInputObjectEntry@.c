/*
 * XREFs of ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@AEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x180040190
 * Callers:
 *     ??$AttachObject@VBamoResizeControllerClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoResizeControllerClientProxy@@@Z @ 0x18003EC18 (--$AttachObject@VBamoResizeControllerClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PE.c)
 *     ?push_back@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAX$$QEAUAttachedInputObjectEntry@InputSite@@@Z @ 0x180040148 (-push_back@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@.c)
 *     ??$AttachObject@VBamoInputDelegationInputObjectProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoInputDelegationInputObjectProxy@@@Z @ 0x180051058 (--$AttachObject@VBamoInputDelegationInputObjectProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy.c)
 *     ??$AttachObject@VBamoWindowsMessageDeliveryProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoWindowsMessageDeliveryProxy@@@Z @ 0x1800513FC (--$AttachObject@VBamoWindowsMessageDeliveryProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PE.c)
 *     ??$AttachObject@VBamoAnimationTargetClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoAnimationTargetClientProxy@@@Z @ 0x18005A524 (--$AttachObject@VBamoAnimationTargetClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEA.c)
 *     ??$AttachObject@VBamoDragManagerClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoDragManagerClientProxy@@@Z @ 0x18005D1AC (--$AttachObject@VBamoDragManagerClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBam.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18002DF80 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@AEAAXQEAUAttachedInputObjectEntry@InputSite@@_K1@Z @ 0x18003FB1C (-_Change_array@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEn.c)
 *     ??$_Uninitialized_move@PEAUAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAPEAUAttachedInputObjectEntry@InputSite@@QEAU12@0PEAU12@AEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@0@@Z @ 0x18006ABE8 (--$_Uninitialized_move@PEAUAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObject.c)
 *     ??$construct@UAttachedInputObjectEntry@InputSite@@U12@@?$_Default_allocator_traits@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@SAXAEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@1@QEAUAttachedInputObjectEntry@InputSite@@$$QEAU34@@Z @ 0x180071AD8 (--$construct@UAttachedInputObjectEntry@InputSite@@U12@@-$_Default_allocator_traits@V-$allocator@.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@QEAA@XZ @ 0x1800CCB78 (--1_Reallocation_guard@-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V-$.c)
 */

unsigned __int64 __fastcall std::vector<InputSite::AttachedInputObjectEntry>::_Emplace_reallocate<InputSite::AttachedInputObjectEntry>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+38h] [rbp-40h]
  unsigned __int64 v23; // [rsp+40h] [rbp-38h]

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength(a1);
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v21[0] = a1;
  v14 = v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL);
  v21[2] = v3;
  v15 = v13;
  v23 = v14 + 16;
  std::_Default_allocator_traits<std::allocator<InputSite::AttachedInputObjectEntry>>::construct<InputSite::AttachedInputObjectEntry,InputSite::AttachedInputObjectEntry>(
    v16,
    v14,
    a3);
  v17 = a1[1];
  v18 = v15;
  v19 = *a1;
  v22 = v14;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<InputSite::AttachedInputObjectEntry *>(v19, a2, v15);
    v17 = a1[1];
    v18 = v14 + 16;
    v19 = a2;
    v22 = v15;
  }
  std::_Uninitialized_move<InputSite::AttachedInputObjectEntry *>(v19, v17, v18);
  v21[1] = 0LL;
  std::vector<InputSite::AttachedInputObjectEntry>::_Change_array(a1, v15, v9, v3);
  std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::_Reallocation_guard::~_Reallocation_guard(v21);
  return v14;
}
