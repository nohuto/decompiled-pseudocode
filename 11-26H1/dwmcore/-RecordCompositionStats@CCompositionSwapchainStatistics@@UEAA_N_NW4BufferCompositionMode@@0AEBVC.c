/*
 * XREFs of ?RecordCompositionStats@CCompositionSwapchainStatistics@@UEAA_N_NW4BufferCompositionMode@@0AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A8B30
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pxxxq_EventWriteTransfer @ 0x1801A8DAC (McTemplateU0pxxxq_EventWriteTransfer.c)
 *     ??$_Emplace_reallocate@AEBURenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@@?$vector@URenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@V?$allocator@URenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@@std@@@std@@AEAAPEAURenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@QEAU23@AEBU23@@Z @ 0x1801A8E60 (--$_Emplace_reallocate@AEBURenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@@-$.c)
 *     ?OutputMatchesMonitorTarget@CCompositionSwapchainStatistics@@CA_NAEBUPresentationOutputID@@AEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A8FE8 (-OutputMatchesMonitorTarget@CCompositionSwapchainStatistics@@CA_NAEBUPresentationOutputID@@AEBUt.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCompositionSwapchainStatistics::RecordCompositionStats(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        float *a5,
        int a6,
        struct tagCOMPOSITION_TARGET_ID *a7)
{
  struct tagCOMPOSITION_TARGET_ID *v10; // rdi
  int v11; // ebx
  __int64 v12; // r8
  float *v13; // r15
  unsigned __int32 v14; // xmm1_4
  _QWORD *v15; // rax
  unsigned int v16; // xmm1_4
  _OWORD *v17; // rdx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  char v21; // al
  int v22; // edx
  __int128 v23; // [rsp+40h] [rbp-40h] BYREF
  __int128 v24; // [rsp+50h] [rbp-30h]
  __int128 v25; // [rsp+60h] [rbp-20h]
  __int128 v26; // [rsp+70h] [rbp-10h]
  char v27; // [rsp+A0h] [rbp+20h] BYREF

  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 320LL))(*(_QWORD *)(a1 + 16)) <= *(_DWORD *)(a1 + 56) )
    return 0;
  v10 = a7;
  if ( a3 )
  {
    if ( a3 == 1 )
      v11 = 3;
    else
      v11 = 0;
  }
  else
  {
    v11 = (a7 != 0LL) + 1;
  }
  v12 = *(_QWORD *)(a1 + 24);
  v13 = a5;
  v14 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  while ( v12 != *(_QWORD *)(a1 + 32) )
  {
    if ( *(_DWORD *)v12 == v11
      && (!v10
       || CCompositionSwapchainStatistics::OutputMatchesMonitorTarget(
            (const struct PresentationOutputID *)(v12 + 4),
            v10))
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v12 + 32) - *v13) & v14) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v12 + 36) - v13[1]) & v14) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v12 + 40) - v13[4]) & v14) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v12 + 44) - v13[5]) & v14) <= 0.0000011920929 )
    {
      return 0;
    }
    v12 += 64LL;
  }
  *(_QWORD *)(a1 + 48) = *((_QWORD *)g_pComposition + 110);
  memset_0(&v23, 0, 0x40uLL);
  LODWORD(v23) = v11;
  if ( v10 )
  {
    *(_QWORD *)((char *)&v23 + 4) = *(_QWORD *)v10;
    LODWORD(v24) = *((_DWORD *)v10 + 6);
    HIDWORD(v23) = *((_DWORD *)v10 + 4);
    *(_QWORD *)((char *)&v24 + 4) = *((_QWORD *)v10 + 1);
  }
  BYTE12(v24) = v11 == 2
             && (v15 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 16) + 80LL))(
                                   *(_QWORD *)(a1 + 16),
                                   &v27),
                 *(_QWORD *)((char *)&v24 + 4) != *v15);
  v16 = *((_DWORD *)v13 + 1);
  v17 = *(_OWORD **)(a1 + 32);
  *(float *)&v25 = *v13;
  *(_QWORD *)((char *)&v25 + 4) = __PAIR64__(*((_DWORD *)v13 + 4), v16);
  *((float *)&v25 + 3) = v13[5];
  *(_QWORD *)&v26 = 0LL;
  DWORD2(v26) = a6;
  if ( v17 == *(_OWORD **)(a1 + 40) )
  {
    std::vector<CCompositionSwapchainStatistics::RenderedCompositionFrameInstance>::_Emplace_reallocate<CCompositionSwapchainStatistics::RenderedCompositionFrameInstance const &>(
      a1 + 24,
      v17,
      &v23);
  }
  else
  {
    v18 = v24;
    *v17 = v23;
    v19 = v25;
    v17[1] = v18;
    v20 = v26;
    v17[2] = v19;
    v17[3] = v20;
    *(_QWORD *)(a1 + 32) += 64LL;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 320LL))(*(_QWORD *)(a1 + 16));
    McTemplateU0pxxxq_EventWriteTransfer(
      *(_QWORD *)(a1 + 48),
      v22,
      *(_QWORD *)(a1 + 64),
      *(_QWORD *)(a1 + 72),
      *(_QWORD *)(a1 + 48),
      v21,
      v11);
  }
  return 1;
}
