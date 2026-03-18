/*
 * XREFs of ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x1801CAC48
 * Callers:
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x180133624 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ??0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z @ 0x180058AB4 (--0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1801826C0 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAPEAV12@@Z @ 0x1801CADA0 (-Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAPEAV12@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CDrawListBatchManager::CreateRenderingResources(CDrawListBatchManager *this)
{
  __int64 v2; // rax
  volatile signed __int32 *v3; // rcx
  int v4; // eax
  unsigned int v5; // edi
  CBatchOptimizer *v6; // rax
  char *v7; // rsi
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v2 = (__int64)this + 1100;
  if ( !this )
    v2 = 1124LL;
  if ( *(_DWORD *)v2 )
  {
    v5 = -2003304307;
    v9 = 100;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, v9, 0LL);
    return v5;
  }
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  if ( v3 )
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v3);
  v4 = CDrawListEntryBatch::CSharedDirect3DResources::Create(
         (struct CD3DDevice *)(((unsigned __int64)this - 24) & -(__int64)(this != 0LL)),
         (struct CDrawListEntryBatch::CSharedDirect3DResources **)this + 15);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x67u, 0LL);
    return v5;
  }
  if ( CCommonRegistryData::EnablePrimitiveReordering )
  {
    v6 = (CBatchOptimizer *)MIDL_user_allocate(0x1098uLL);
    if ( v6 )
      v6 = CBatchOptimizer::CBatchOptimizer(v6, this);
    v7 = (char *)*((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = v6;
    if ( v7 )
    {
      *(_QWORD *)v7 = &CBatchOptimizer::`vftable';
      `vector destructor iterator'(
        v7 + 80,
        520LL,
        8LL,
        (void (__fastcall *)(char *))SharedStateLayer::~SharedStateLayer);
      operator delete(v7, 0x1098uLL);
    }
    if ( !*((_QWORD *)this + 17) )
    {
      v5 = -2147024882;
      v9 = 111;
      goto LABEL_15;
    }
  }
  return v5;
}
