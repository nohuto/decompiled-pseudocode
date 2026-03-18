/*
 * XREFs of ?CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01PEAPEAVCRenderingEffect@@@Z @ 0x18007C9C0
 * Callers:
 *     ?AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PEBUPrimitiveVertexAttributesDesc@@I@Z @ 0x18000E850 (-AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PE.c)
 * Callees:
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014460 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z @ 0x18007B0D0 (-Alloc@-$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x18007D050 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x18007D068 (--0SamplerMode@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateSolidColorRenderingEffect@CCommonRenderingEffectFactory@@AEAAJPEAPEAVCRenderingEffect@@@Z @ 0x1801AC460 (-CreateSolidColorRenderingEffect@CCommonRenderingEffectFactory@@AEAAJPEAPEAVCRenderingEffect@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCommonRenderingEffectFactory::CreateRenderingEffect(
        CCommonRenderingEffectFactory *a1,
        __int64 *a2,
        __int16 *a3,
        _QWORD *a4,
        __int16 *a5,
        struct CRenderingEffect **a6)
{
  char v6; // bl
  unsigned int v10; // ebp
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // r12
  __int64 *v14; // r13
  CDrawListBitmap *v15; // r15
  SamplerMode *v16; // r15
  __int64 v17; // r12
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // r15
  bool v26; // si
  int SolidColorRenderingEffect; // eax
  __int64 v29; // rcx
  __int16 v30; // [rsp+30h] [rbp-58h]
  __int16 v31; // [rsp+40h] [rbp-48h]
  char v32; // [rsp+90h] [rbp+8h]
  char v33; // [rsp+98h] [rbp+10h]

  v6 = 0;
  v10 = 0;
  if ( a2[1] || a4[1] )
  {
    v11 = CThreadLocalObjectCache<CCommonRenderingEffect,CCommonRenderingEffect>::Alloc();
    v12 = v11;
    if ( v11 )
    {
      v31 = *a5;
      v33 = *((_BYTE *)a5 + 2);
      v30 = *a3;
      v32 = *((_BYTE *)a3 + 2);
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)v11);
      v13 = 2LL;
      v14 = v12 + 2;
      *v12 = &CCommonRenderingEffect::`vftable';
      v15 = (CDrawListBitmap *)(v12 + 2);
      do
      {
        CDrawListBitmap::CDrawListBitmap(v15);
        v15 = (CDrawListBitmap *)((char *)v15 + 24);
        --v13;
      }
      while ( v13 );
      v16 = (SamplerMode *)(v12 + 8);
      v17 = 2LL;
      do
      {
        SamplerMode::SamplerMode(v16);
        v16 = (SamplerMode *)((char *)v16 + 3);
        --v17;
      }
      while ( v17 );
      v18 = *a2;
      v19 = *v14;
      *v14 = *a2;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      v20 = a2[1];
      v21 = v12[3];
      v12[3] = v20;
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      *((_BYTE *)v12 + 32) = *((_BYTE *)a2 + 16);
      v22 = *a4;
      v23 = v12[5];
      v12[5] = *a4;
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      v24 = a4[1];
      v25 = v12[6];
      v12[6] = v24;
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      *((_BYTE *)v12 + 56) = *((_BYTE *)a4 + 16);
      *((_WORD *)v12 + 32) = v30;
      *((_BYTE *)v12 + 66) = v32;
      *(_WORD *)((char *)v12 + 67) = v31;
      *((_BYTE *)v12 + 69) = v33;
      v26 = 1;
      if ( a2[1] )
      {
        if ( !CCommonRegistryData::EnableCommonSuperSets
          || !*a2
          || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 40LL))(*a2)
          || (v29 = a2[1]) == 0
          || !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v29 + 72LL))(v29, 0LL) )
        {
          v26 = 0;
        }
      }
      *((_BYTE *)v12 + 70) = v26;
      if ( !a4[1]
        || CCommonRegistryData::EnableCommonSuperSets
        && *a4
        && (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 40LL))(*a4) )
      {
        v6 = 1;
      }
      *((_BYTE *)v12 + 70) = v6 & v26;
      (*(void (__fastcall **)(_QWORD *))*v12)(v12);
      *a6 = (struct CRenderingEffect *)v12;
    }
    else
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2Cu, 0LL);
    }
  }
  else
  {
    SolidColorRenderingEffect = CCommonRenderingEffectFactory::CreateSolidColorRenderingEffect(a1, a6);
    v10 = SolidColorRenderingEffect;
    if ( SolidColorRenderingEffect < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SolidColorRenderingEffect, 0x32u, 0LL);
  }
  return v10;
}
