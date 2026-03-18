/*
 * XREFs of ?Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@USamplerMode@@PEAPEAV1@@Z @ 0x18009E4F0
 * Callers:
 *     ?GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18009CDF0 (-GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGen.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@CObjectCache@@QEAAPEAX_K@Z @ 0x18009E490 (-Alloc@CObjectCache@@QEAAPEAX_K@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z @ 0x18009E7AC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListBrush::Create(
        struct CPrimitiveGroupDrawListBrush *a1,
        __int16 *a2,
        _QWORD *a3)
{
  unsigned int v6; // edi
  CObjectCache *ObjectCache; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int16 v10; // bp
  char v11; // r15

  v6 = 0;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v8 = CObjectCache::Alloc(ObjectCache, 0x58uLL);
  v9 = v8;
  if ( v8 )
  {
    v10 = *a2;
    v11 = *((_BYTE *)a2 + 2);
    v8[1] = 1065353216LL;
    *((_DWORD *)v8 + 4) = 0;
    *(_QWORD *)((char *)v8 + 20) = 1065353216LL;
    *((_DWORD *)v8 + 7) = 0;
    *((_BYTE *)v8 + 52) = 0;
    *((_BYTE *)v8 + 64) = 0;
    *v8 = &CPrimitiveGroupDrawListBrush::`vftable';
    v8[9] = a1;
    if ( a1 )
      (**(void (__fastcall ***)(struct CPrimitiveGroupDrawListBrush *))a1)(a1);
    *((_WORD *)v9 + 40) = v10;
    *((_BYTE *)v9 + 82) = v11;
    *a3 = v9;
  }
  else
  {
    *a3 = 0LL;
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x14u, 0LL);
  }
  return v6;
}
