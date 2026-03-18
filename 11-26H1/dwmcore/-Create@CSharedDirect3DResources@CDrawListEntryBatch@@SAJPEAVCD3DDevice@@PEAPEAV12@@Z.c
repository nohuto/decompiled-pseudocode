/*
 * XREFs of ?Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAPEAV12@@Z @ 0x1801CADA0
 * Callers:
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x1801CAC48 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z @ 0x18011A590 (-Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z.c)
 *     ??0CSharedDirect3DResources@CDrawListEntryBatch@@AEAA@XZ @ 0x18025F21C (--0CSharedDirect3DResources@CDrawListEntryBatch@@AEAA@XZ.c)
 */

__int64 __fastcall CDrawListEntryBatch::CSharedDirect3DResources::Create(
        struct CD3DDevice *a1,
        struct CDrawListEntryBatch::CSharedDirect3DResources **a2)
{
  CDrawListEntryBatch::CSharedDirect3DResources *v4; // rax
  __int64 v5; // rax
  CDrawListEntryBatch::CSharedDirect3DResources *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx

  v4 = (CDrawListEntryBatch::CSharedDirect3DResources *)MIDL_user_allocate(0x470uLL);
  if ( v4
    && (v5 = CDrawListEntryBatch::CSharedDirect3DResources::CSharedDirect3DResources(v4),
        (v6 = (CDrawListEntryBatch::CSharedDirect3DResources *)v5) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v5 + 8));
    v7 = CDrawListEntryBatch::CSharedDirect3DResources::Init(v6, a1);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x18u, 0LL);
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((volatile signed __int32 *)v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x17u, 0LL);
  }
  return v8;
}
