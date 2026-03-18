/*
 * XREFs of ?CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x18007CCB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014460 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?IsBoundless@CSurfaceDrawListBrush@@QEBA_NXZ @ 0x18003D470 (-IsBoundless@CSurfaceDrawListBrush@@QEBA_NXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x18007D050 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x18007D068 (--0SamplerMode@@QEAA@XZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z @ 0x18007DFEC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingEffectFactory::CreateRenderingEffect(
        struct CBrushRenderingEffect *a1,
        __m128i *a2,
        _QWORD *a3)
{
  unsigned int v5; // r12d
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v7; // rbx
  int v8; // r10d
  _QWORD *v9; // rdi
  __m128i v10; // xmm6
  CDrawListBitmap *v11; // rsi
  __int64 v12; // rbp
  _QWORD *v13; // r13
  __int64 v14; // rbp
  SamplerMode *v15; // rsi
  _QWORD *v16; // rax
  _BYTE *v17; // r14
  _QWORD *v18; // r15
  _QWORD *v19; // rcx
  float *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // rcx
  __int64 v25; // rbp
  __int128 v26; // xmm0
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // rdx^4
  unsigned int v31; // xmm1_4
  _QWORD *v32; // [rsp+30h] [rbp-88h]
  __int64 v33; // [rsp+38h] [rbp-80h]
  char v34[8]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v35; // [rsp+58h] [rbp-60h]
  char *v37; // [rsp+D8h] [rbp+20h]
  signed __int64 v38; // [rsp+D8h] [rbp+20h]

  v5 = 0;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v7 = 0LL;
  v8 = *((_DWORD *)ObjectCache + 1);
  if ( v8 )
  {
    v7 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v7;
    *((_DWORD *)ObjectCache + 1) = v8 - 1;
  }
  if ( v7 || (v7 = MIDL_user_allocate(0x110uLL)) != 0LL )
  {
    v9 = (_QWORD *)*((_QWORD *)a1 + 1);
    v10 = *a2;
    v37 = (char *)a1 + 16;
    CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)v7);
    *v7 = &CBrushRenderingEffect::`vftable';
    v11 = (CDrawListBitmap *)(v7 + 3);
    v7[2] = 0LL;
    v12 = 4LL;
    do
    {
      CDrawListBitmap::CDrawListBitmap(v11);
      v11 = (CDrawListBitmap *)((char *)v11 + 24);
      --v12;
    }
    while ( v12 );
    v13 = v7 + 15;
    v14 = 4LL;
    v15 = (SamplerMode *)(v7 + 15);
    do
    {
      SamplerMode::SamplerMode(v15);
      v15 = (SamplerMode *)((char *)v15 + 3);
      --v14;
    }
    while ( v14 );
    if ( (_QWORD *)v7[2] != v9 )
    {
      if ( v9 )
        (**(void (__fastcall ***)(_QWORD))*v9)(*v9);
      v16 = (_QWORD *)v7[2];
      v7[2] = v9;
      if ( v16 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 8LL))(*v16);
    }
    if ( v10.m128i_i64[0] )
    {
      v38 = v37 - (char *)v7;
      v17 = (char *)v7 + 260;
      v18 = v7 + 4;
      v19 = (_QWORD *)_mm_srli_si128(v10, 8).m128i_u64[0];
      v20 = (float *)(v7 + 20);
      v32 = v19;
      v33 = -260LL - (_QWORD)v7;
      do
      {
        v21 = *v19;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 8LL))(v21, 2LL) )
        {
          v22 = *(_QWORD *)(v21 + 56);
          v23 = *(v18 - 1);
          *(v18 - 1) = v22;
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
          if ( v23 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
          v24 = *(_QWORD *)(v21 + 64);
          v25 = *v18;
          *v18 = v24;
          if ( v24 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
          if ( v25 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          *((_BYTE *)v18 + 8) = *(_BYTE *)(v21 + 72);
          *(_WORD *)v13 = *(_WORD *)(v21 + 80);
          *((_BYTE *)v13 + 2) = *(_BYTE *)(v21 + 82);
          v17[4] = *(_BYTE *)(v21 + 145);
          if ( (unsigned __int64)&v17[v33] >= 4 )
          {
            ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
            __debugbreak();
          }
          *v17 = v17[v38 - 260];
          if ( !*(_BYTE *)(v21 + 145)
            && (*(_BYTE *)(v21 + 52) || CSurfaceDrawListBrush::IsBoundless((CSurfaceDrawListBrush *)v21)) )
          {
            v26 = 0LL;
          }
          else
          {
            v26 = *(_OWORD *)(v21 + 120);
          }
          *(_OWORD *)(v20 - 7) = v26;
          v27 = *(_QWORD *)(v21 + 64);
          LODWORD(v28) = 0;
          v29 = 0;
          if ( v27 )
          {
            v28 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v27 + 32LL))(v27, v34);
            v29 = HIDWORD(v28);
          }
          *(v20 - 3) = (float)(int)v28;
          *(v20 - 2) = (float)v29;
          *v20 = 1.0 / (float)v29;
          *(v20 - 1) = 1.0 / (float)(int)v28;
        }
        else
        {
          HIDWORD(v35) = *(_DWORD *)(v21 + 68);
          *(float *)&v31 = *((float *)&v35 + 3) * *(float *)(v21 + 60);
          *(float *)&v35 = *((float *)&v35 + 3) * *(float *)(v21 + 56);
          *(_QWORD *)((char *)&v35 + 4) = __PAIR64__(*((float *)&v35 + 3) * *(float *)(v21 + 64), v31);
          *(_OWORD *)(v20 - 7) = v35;
        }
        ++v17;
        v19 = ++v32;
        v13 = (_QWORD *)((char *)v13 + 3);
        v18 += 3;
        v20 += 8;
      }
      while ( (unsigned __int64)&v17[v33] < v10.m128i_i64[0] );
    }
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v7 + 1));
    *a3 = v7;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x4Au, 0LL);
  }
  return v5;
}
