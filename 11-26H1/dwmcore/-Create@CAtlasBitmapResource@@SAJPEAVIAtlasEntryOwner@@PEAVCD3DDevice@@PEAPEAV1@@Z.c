/*
 * XREFs of ?Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1800371A4
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x180103060 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 * Callees:
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x180036E7C (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 *     ??0CAtlasBitmapResource@@IEAA@PEAVIAtlasEntryOwner@@@Z @ 0x180037278 (--0CAtlasBitmapResource@@IEAA@PEAVIAtlasEntryOwner@@@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAtlasBitmapResource::Create(
        struct IAtlasEntryOwner *a1,
        struct CD3DDevice *a2,
        struct CAtlasBitmapResource **a3)
{
  CAtlasBitmapResource *v6; // rax
  CAtlasBitmapResource *v7; // rax
  CAtlasBitmapResource *v8; // rbx
  int GradientStrip; // edi
  unsigned int v10; // eax

  *a3 = 0LL;
  v6 = (CAtlasBitmapResource *)MIDL_user_allocate(0x38uLL);
  if ( !v6 )
  {
    v8 = 0LL;
    goto LABEL_9;
  }
  v7 = CAtlasBitmapResource::CAtlasBitmapResource(v6, a1);
  v8 = v7;
  if ( !v7 )
  {
LABEL_9:
    GradientStrip = -2147024882;
    v10 = 23;
    goto LABEL_5;
  }
  (*(void (__fastcall **)(CAtlasBitmapResource *))(*(_QWORD *)v7 + 8LL))(v7);
  GradientStrip = CAtlasManager::AllocateGradientStrip(
                    (__int64 **)(((unsigned __int64)a2 + 504) & -(__int64)(a2 != 0LL)),
                    (CAtlasBitmapResource *)((char *)v8 + 24));
  if ( GradientStrip >= 0 )
  {
    *a3 = v8;
    return (unsigned int)GradientStrip;
  }
  v10 = 25;
LABEL_5:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, GradientStrip, v10, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(CAtlasBitmapResource *))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)GradientStrip;
}
