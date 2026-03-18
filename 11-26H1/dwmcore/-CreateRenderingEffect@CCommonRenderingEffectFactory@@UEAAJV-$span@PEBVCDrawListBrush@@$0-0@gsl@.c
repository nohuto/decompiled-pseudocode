/*
 * XREFs of ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x18007C360
 * Callers:
 *     ?AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_NPEA_N@Z @ 0x1800BE540 (-AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexA.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800C0E10 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014460 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z @ 0x18007B0D0 (-Alloc@-$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z.c)
 *     ??0CCommonRenderingEffect@@QEAA@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@@Z @ 0x18007C1A0 (--0CCommonRenderingEffect@@QEAA@V-$span@PEBVCDrawListBrush@@$0-0@gsl@@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x18007D050 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x18007D068 (--0SamplerMode@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCommonRenderingEffectFactory::CreateRenderingEffect(__int64 a1, __int128 *a2, _QWORD *a3)
{
  _DWORD *Value; // rdi
  int v6; // ecx
  char *v7; // rbx
  HANDLE ProcessHeap; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  bool v11; // cf
  unsigned int v12; // r14d
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r15
  char *v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // r15
  char *v19; // rcx
  char v20; // di
  __int64 v21; // rcx
  bool v22; // al
  char v23; // di
  unsigned int v24; // ebx
  __int64 v26; // rcx
  void (__fastcall ***v27)(_QWORD); // rax
  CThreadContext *v28; // rax
  CThreadContext *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rbx
  unsigned __int64 v32[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v33; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v35; // [rsp+88h] [rbp+10h] BYREF

  if ( *(_QWORD *)a2 )
  {
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v28 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( !v28 || (v29 = CThreadContext::CThreadContext(v28), (Value = v29) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v29);
    }
    v6 = Value[69];
    v7 = 0LL;
    if ( v6 )
    {
      v7 = (char *)*((_QWORD *)Value + 35);
      *((_QWORD *)Value + 35) = *(_QWORD *)v7;
      Value[69] = v6 - 1;
    }
    if ( !v7 )
    {
      ProcessHeap = GetProcessHeap();
      v7 = (char *)HeapAlloc(ProcessHeap, 0, 0x48uLL);
      if ( !v7 )
      {
        v24 = -2147024882;
        v35 = 0LL;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x43u, 0LL);
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v35);
        return v24;
      }
    }
    v33 = *a2;
    CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)v7);
    *(_QWORD *)v7 = &CCommonRenderingEffect::`vftable';
    CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)(v7 + 16));
    CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)(v7 + 40));
    SamplerMode::SamplerMode((SamplerMode *)(v7 + 64));
    SamplerMode::SamplerMode((SamplerMode *)(v7 + 67));
    v9 = *(_QWORD *)a2;
    v10 = 2LL;
    v11 = *(_QWORD *)a2 < 2uLL;
    v7[70] = 1;
    v12 = 0;
    v32[0] = v9;
    if ( v11 )
      v10 = v9;
    v35 = v10;
    if ( (_DWORD)v10 )
    {
      do
      {
        if ( v12 >= v9 )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        _mm_lfence();
        v13 = *(_QWORD *)(*((_QWORD *)&v33 + 1) + 8LL * v12);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 56);
          v15 = *(_QWORD *)&v7[24 * v12 + 16];
          v16 = &v7[24 * v12];
          *((_QWORD *)v16 + 2) = v14;
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          v17 = *(_QWORD *)(v13 + 64);
          v18 = *((_QWORD *)v16 + 3);
          *((_QWORD *)v16 + 3) = v17;
          if ( v17 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
          if ( v18 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          v19 = &v7[2 * v12];
          v16[32] = *(_BYTE *)(v13 + 72);
          *(_WORD *)&v19[v12 + 64] = *(_WORD *)(v13 + 80);
          v19[v12 + 66] = *(_BYTE *)(v13 + 82);
          v20 = v7[70];
          v22 = 0;
          if ( CCommonRegistryData::EnableCommonSuperSets )
          {
            v21 = *((_QWORD *)v16 + 2);
            if ( v21 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v21 + 40LL))(v21) )
              {
                if ( v12 == 1
                  || (v26 = *((_QWORD *)v16 + 3)) != 0
                  && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 72LL))(v26, 0LL) )
                {
                  v22 = 1;
                }
              }
            }
          }
          v9 = v32[0];
          v23 = v22 & v20;
          LODWORD(v10) = v35;
          v7[70] = v23;
        }
        ++v12;
      }
      while ( v12 < (unsigned int)v10 );
    }
    (**(void (__fastcall ***)(LPVOID))v7)(v7);
    *a3 = v7;
  }
  else
  {
    v27 = (void (__fastcall ***)(_QWORD))CCommonRenderingEffectFactory::s_cpSolidColorEffect;
    if ( !CCommonRenderingEffectFactory::s_cpSolidColorEffect )
    {
      v30 = CThreadLocalObjectCache<CCommonRenderingEffect,CCommonRenderingEffect>::Alloc();
      if ( v30 )
      {
        v32[0] = 0LL;
        v32[1] = 0LL;
        v27 = (void (__fastcall ***)(_QWORD))CCommonRenderingEffect::CCommonRenderingEffect((__int64)v30, v32);
        v31 = CCommonRenderingEffectFactory::s_cpSolidColorEffect;
        CCommonRenderingEffectFactory::s_cpSolidColorEffect = (__int64)v27;
        if ( v27 )
        {
          (**v27)(v27);
          v27 = (void (__fastcall ***)(_QWORD))CCommonRenderingEffectFactory::s_cpSolidColorEffect;
        }
      }
      else
      {
        v31 = CCommonRenderingEffectFactory::s_cpSolidColorEffect;
        v27 = 0LL;
        CCommonRenderingEffectFactory::s_cpSolidColorEffect = 0LL;
      }
      if ( v31 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
        v27 = (void (__fastcall ***)(_QWORD))CCommonRenderingEffectFactory::s_cpSolidColorEffect;
      }
      if ( !v27 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x59u, 0LL);
        v24 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x49u, 0LL);
        return v24;
      }
    }
    *a3 = v27;
    (**(void (__fastcall ***)(__int64))CCommonRenderingEffectFactory::s_cpSolidColorEffect)(CCommonRenderingEffectFactory::s_cpSolidColorEffect);
  }
  return 0;
}
