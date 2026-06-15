/*
 * XREFs of ??0CConstraintModel@@QEAA@XZ @ 0x180158CFC
 * Callers:
 *     ?Initialize@CConstraintModelResourceManager@@AEAAJPEAUIAudioResourceControl@@@Z @ 0x1800F3914 (-Initialize@CConstraintModelResourceManager@@AEAAJPEAUIAudioResourceControl@@@Z.c)
 * Callees:
 *     ??0?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAA@IMMMI@Z @ 0x18012441C (--0-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VRe.c)
 */

CConstraintModel *__fastcall CConstraintModel::CConstraintModel(CConstraintModel *this, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rdx
  float v4; // xmm4_4
  int v5; // xmm5_4
  __int64 v6; // r9
  __int64 v7; // r10
  CConstraintModel *result; // rax

  *(_QWORD *)this = &CConstraintModel::`vftable';
  ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>(
    (__int64)this + 8,
    a2,
    0.75,
    0.25,
    SLODWORD(FLOAT_2_25));
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v2 + 112) = 0LL;
  *(_DWORD *)(v2 + 120) = 10;
  ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>(
    v2 + 128,
    v3,
    v4,
    0.25,
    v5);
  *(_QWORD *)(v6 + 200) = v7;
  result = (CConstraintModel *)v6;
  *(_QWORD *)(v6 + 208) = v7;
  *(_QWORD *)(v6 + 216) = v7;
  *(_DWORD *)(v6 + 224) = v7;
  *(_DWORD *)(v6 + 232) = v7;
  return result;
}
