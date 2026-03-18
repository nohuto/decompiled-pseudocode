/*
 * XREFs of ??0CCommonRenderingEffect@@QEAA@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@@Z @ 0x18007C1A0
 * Callers:
 *     ?CreateRenderingEffect@CProjectedShadowRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180079700 (-CreateRenderingEffect@CProjectedShadowRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x18007C360 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ?CreateSolidColorRenderingEffect@CCommonRenderingEffectFactory@@AEAAJPEAPEAVCRenderingEffect@@@Z @ 0x1801AC460 (-CreateSolidColorRenderingEffect@CCommonRenderingEffectFactory@@AEAAJPEAPEAVCRenderingEffect@@@Z.c)
 * Callees:
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014460 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x18007D050 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x18007D068 (--0SamplerMode@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCommonRenderingEffect::CCommonRenderingEffect(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // rsi
  unsigned __int64 v4; // r13
  __int64 v5; // r14
  unsigned int v6; // r12d
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rcx
  char v14; // bl
  __int64 v15; // rcx
  bool v16; // al
  __int64 v18; // rcx

  v2 = a2;
  CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>(a1);
  *(_QWORD *)a1 = &CCommonRenderingEffect::`vftable';
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)(a1 + 16));
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)(a1 + 40));
  SamplerMode::SamplerMode((SamplerMode *)(a1 + 64));
  SamplerMode::SamplerMode((SamplerMode *)(a1 + 67));
  v4 = *v2;
  v5 = 0LL;
  v6 = 2;
  *(_BYTE *)(a1 + 70) = 1;
  if ( v4 < 2 )
    v6 = v4;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( (unsigned int)v5 >= v4 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      _mm_lfence();
      v7 = *(_QWORD *)(v2[1] + 8 * v5);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 56);
        v9 = *(_QWORD *)(a1 + 24 * v5 + 16);
        v10 = a1 + 24 * v5;
        *(_QWORD *)(v10 + 16) = v8;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        v11 = *(_QWORD *)(v7 + 64);
        v12 = *(_QWORD *)(v10 + 24);
        *(_QWORD *)(v10 + 24) = v11;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        v13 = a1 + 2 * v5;
        *(_BYTE *)(v10 + 32) = *(_BYTE *)(v7 + 72);
        *(_WORD *)(v13 + v5 + 64) = *(_WORD *)(v7 + 80);
        *(_BYTE *)(v13 + v5 + 66) = *(_BYTE *)(v7 + 82);
        v14 = *(_BYTE *)(a1 + 70);
        v16 = 0;
        if ( CCommonRegistryData::EnableCommonSuperSets )
        {
          v15 = *(_QWORD *)(v10 + 16);
          if ( v15 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 40LL))(v15) )
            {
              if ( (_DWORD)v5 == 1
                || (v18 = *(_QWORD *)(v10 + 24)) != 0
                && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 72LL))(v18, 0LL) )
              {
                v16 = 1;
              }
            }
          }
        }
        *(_BYTE *)(a1 + 70) = v16 & v14;
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v6 )
        break;
      v2 = a2;
    }
  }
  return a1;
}
