/*
 * XREFs of ?CommitRecordedStatistics@CCompositionSwapchainStatistics@@UEAAJPEAVIOverlaySwapChain@@@Z @ 0x1801AADE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@QEAA_NXZ @ 0x180032E10 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBUFlipPropertyItem@@@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@AEAAPEAUFlipPropertyItem@@QEAU2@AEBU2@@Z @ 0x1801AB130 (--$_Emplace_reallocate@AEBUFlipPropertyItem@@@-$vector@UFlipPropertyItem@@V-$allocator@UFlipProp.c)
 *     McTemplateU0pxxxqqq_EventWriteTransfer @ 0x1801AB28C (McTemplateU0pxxxqqq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSwapchainStatistics::CommitRecordedStatistics(
        CCompositionSwapchainStatistics *this,
        struct IOverlaySwapChain *a2,
        __int64 a3,
        unsigned int a4)
{
  char v4; // r12
  _QWORD *v5; // rsi
  struct IOverlaySwapChain *v6; // r15
  unsigned int v8; // r14d
  __m128i *v9; // rbx
  __m128i *v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // eax
  int v13; // ecx
  GUID *v14; // rdx
  GUID *v15; // rdx
  _DWORD *v16; // rbx
  char v17; // r15
  _DWORD *v18; // r13
  GUID v19; // xmm1
  GUID v20; // xmm0
  int v21; // eax
  int v22; // eax
  void *v23; // rcx
  __m128i v25; // xmm0
  bool v26; // zf
  __m128i v27; // xmm0
  __int64 v28; // rax
  GUID v29; // xmm0
  __int64 (__fastcall *v30)(struct IOverlaySwapChain *); // rax
  __int64 v31; // xmm1_8
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // eax
  __int128 v35; // [rsp+50h] [rbp-69h] BYREF
  char *v36; // [rsp+60h] [rbp-59h]
  int v37; // [rsp+68h] [rbp-51h] BYREF
  GUID v38; // [rsp+70h] [rbp-49h] BYREF
  GUID v39; // [rsp+80h] [rbp-39h]
  __m128i v40; // [rsp+90h] [rbp-29h]
  struct IOverlaySwapChain *v41; // [rsp+B0h] [rbp-9h]
  GUID v42; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v43; // [rsp+C8h] [rbp+Fh]
  GUID *v44; // [rsp+D0h] [rbp+17h]

  v4 = 0;
  v41 = a2;
  v5 = (_QWORD *)((char *)this + 24);
  v6 = a2;
  v8 = 0;
  if ( !*((_QWORD *)this + 8) )
  {
LABEL_22:
    if ( *v5 != v5[1] )
      v5[1] = *v5;
    *((_QWORD *)this + 6) = 0LL;
    return v8;
  }
  v9 = (__m128i *)*((_QWORD *)this + 4);
  while ( 1 )
  {
    v10 = v9;
    if ( v9 == (__m128i *)*v5 )
      break;
    v25 = v9[-3];
    v9 -= 4;
    v39 = (GUID)v25;
    v26 = v9->m128i_i32[0] == 1;
    v27 = v9[3];
    v40 = v9[2];
    if ( !v26 && !(unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v27, 12)) )
    {
      std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
        v10,
        *((_QWORD *)this + 4),
        v9);
      *((_QWORD *)this + 4) -= 64LL;
    }
  }
  if ( *v5 == *((_QWORD *)this + 4) )
  {
LABEL_21:
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::__private_IsEnabled(
                            (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::GetImpl'::`2'::impl,
                            (__int64)a2,
                            a3,
                            a4)
      && *((_QWORD *)this + 12) )
    {
      v43 = 32LL;
      v44 = &v38;
      v28 = *(_QWORD *)v6;
      v39 = 0LL;
      v29 = (GUID)*((_OWORD *)this + 5);
      v30 = *(__int64 (__fastcall **)(struct IOverlaySwapChain *))(v28 + 416);
      v42 = GUID_b7c9e47a_a946_41e2_95a6_04c2e08cfd1b;
      v31 = *((_QWORD *)this + 12);
      v38 = v29;
      *(_QWORD *)&v39.Data1 = v31;
      v32 = v30(v6);
      v33 = *((_QWORD *)this + 8);
      *(_QWORD *)v39.Data4 = v32;
      v34 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *))(*(_QWORD *)v33 + 56LL))(v33, 1LL, &v42);
      v8 = v34;
      if ( v34 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, 0x143u, 0LL);
      *((_QWORD *)this + 12) = 0LL;
    }
    goto LABEL_22;
  }
  v36 = 0LL;
  v35 = 0LL;
  v37 = 2;
  *(_QWORD *)&v39.Data1 = 4LL;
  v38 = GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8;
  *(_QWORD *)v39.Data4 = &v37;
  std::vector<FlipPropertyItem>::_Emplace_reallocate<FlipPropertyItem const &>(&v35, 0LL, &v38);
  v11 = *((_QWORD *)this + 2);
  HIDWORD(v44) = 0;
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 320LL))(v11);
  v14 = (GUID *)*((_QWORD *)&v35 + 1);
  *(_QWORD *)&v42.Data1 = v12;
  *(_QWORD *)v42.Data4 = *((_QWORD *)this + 9);
  v43 = *((_QWORD *)this + 6);
  LODWORD(v44) = (__int64)(v5[1] - *v5) >> 6;
  *(_QWORD *)v39.Data4 = &v42;
  v38 = GUID_7435e52d_bda4_42a3_9202_521c00f87c0c;
  *(_QWORD *)&v39.Data1 = 32LL;
  if ( *((char **)&v35 + 1) == v36 )
  {
    std::vector<FlipPropertyItem>::_Emplace_reallocate<FlipPropertyItem const &>(&v35, *((_QWORD *)&v35 + 1), &v38);
    v15 = (GUID *)*((_QWORD *)&v35 + 1);
  }
  else
  {
    **((_OWORD **)&v35 + 1) = GUID_7435e52d_bda4_42a3_9202_521c00f87c0c;
    v14[1] = v39;
    v15 = (GUID *)(*((_QWORD *)&v35 + 1) + 32LL);
    *((_QWORD *)&v35 + 1) += 32LL;
  }
  v16 = (_DWORD *)*v5;
  v17 = 0;
  v18 = (_DWORD *)v5[1];
  if ( (_DWORD *)*v5 != v18 )
  {
    v19 = GUID_276346ed_6203_420e_9822_1b609efb68e0;
    do
    {
      v38 = v19;
      *(_QWORD *)&v39.Data1 = 60LL;
      *(_QWORD *)v39.Data4 = v16;
      if ( v15 == (GUID *)v36 )
      {
        std::vector<FlipPropertyItem>::_Emplace_reallocate<FlipPropertyItem const &>(&v35, v15, &v38);
        v15 = (GUID *)*((_QWORD *)&v35 + 1);
        v19 = GUID_276346ed_6203_420e_9822_1b609efb68e0;
      }
      else
      {
        v20 = v39;
        *v15 = v19;
        v15[1] = v20;
        v15 = (GUID *)(*((_QWORD *)&v35 + 1) + 32LL);
        *((_QWORD *)&v35 + 1) += 32LL;
      }
      v13 = *v16 - 1;
      if ( *v16 == 1 )
      {
        ++v4;
      }
      else
      {
        v13 = *v16 - 2;
        if ( *v16 == 2 )
        {
          LOBYTE(v8) = v8 + 1;
        }
        else if ( *v16 == 3 )
        {
          ++v17;
        }
      }
      v16 += 16;
    }
    while ( v16 != v18 );
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McTemplateU0pxxxqqq_EventWriteTransfer(
      v13,
      (_DWORD)v15,
      *((_QWORD *)this + 8),
      *(_DWORD *)v42.Data4,
      v43,
      v42.Data1,
      v8,
      v17,
      v4);
    v15 = (GUID *)*((_QWORD *)&v35 + 1);
  }
  v21 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 56LL))(
          *((_QWORD *)this + 8),
          (__int64)((__int64)v15 - v35) >> 5);
  v8 = v21;
  if ( v21 >= 0 )
  {
    v22 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 320LL))(*((_QWORD *)this + 2));
    v23 = (void *)v35;
    *((_DWORD *)this + 14) = v22;
    if ( v23 )
      std::_Deallocate<16>(v23, (v36 - (_BYTE *)v23) & 0xFFFFFFFFFFFFFFE0uLL);
    v6 = v41;
    goto LABEL_21;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x132u, 0LL);
  if ( (_QWORD)v35 )
    std::_Deallocate<16>((void *)v35, (unsigned __int64)&v36[-v35] & 0xFFFFFFFFFFFFFFE0uLL);
  return v8;
}
