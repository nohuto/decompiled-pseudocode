/*
 * XREFs of ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEBUVIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x140126110
 * Callers:
 *     VidMmUpdateAllocationProperty @ 0x1400474C0 (VidMmUpdateAllocationProperty.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E53F0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?VidMmVerifySupportedSegmentSetAndAdjustFlags@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K2_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x140110DC0 (-VidMmVerifySupportedSegmentSetAndAdjustFlags@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IPEAU_DXGK_ALLOCA.c)
 *     ?VidMmVerifyBudgetGroups@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IPEBUVIDMM_SEGMENT_BASE@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x140111AB8 (-VidMmVerifyBudgetGroups@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IPEBUVIDMM_SEGMENT_BASE@@PEAU_VIDMM_VE.c)
 *     ?VidMmVerifyPreferredSegmentIsSubset@@YA_NU_D3DDDI_SEGMENTPREFERENCE@@I@Z @ 0x140115E78 (-VidMmVerifyPreferredSegmentIsSubset@@YA_NU_D3DDDI_SEGMENTPREFERENCE@@I@Z.c)
 *     ?VidMmGetMostPreferredSegment@@YAPEAUVIDMM_SEGMENT_BASE@@PEAUVIDMM_PHYSICAL_ADAPTER@@U_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x14011681C (-VidMmGetMostPreferredSegment@@YAPEAUVIDMM_SEGMENT_BASE@@PEAUVIDMM_PHYSICAL_ADAPTER@@U_D3DDDI_SE.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateAllocationProperty(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 ***a3,
        const struct VIDMM_UPDATEALLOCPROPERTY *a4,
        unsigned __int64 *a5)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 *v10; // r12
  __int64 v11; // rax
  __int64 v12; // r9
  const struct VIDMM_PHYSICAL_ADAPTER *v13; // r13
  unsigned __int64 v14; // xmm0_8
  unsigned int v15; // r15d
  struct _D3DDDI_SEGMENTPREFERENCE v16; // ebx
  unsigned int v17; // esi
  __int64 v18; // rcx
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *v20; // r8
  bool v21; // al
  __int64 v22; // rcx
  char v23; // r14
  int v24; // esi
  const struct VIDMM_SEGMENT_BASE *MostPreferredSegment; // rax
  _QWORD v26[20]; // [rsp+60h] [rbp-51h] BYREF
  int v29; // [rsp+120h] [rbp+6Fh] BYREF
  __int64 v30; // [rsp+128h] [rbp+77h]

  memset(v26, 0, 0x58uLL);
  v8 = (*((_DWORD *)a3 + 8) >> 2) & 0x3F;
  v9 = HIDWORD(*(_QWORD *)a4);
  v10 = **a3;
  v11 = *((_QWORD *)this + 5040);
  *(_OWORD *)((char *)&v26[4] + 4) = *(_OWORD *)a4;
  LODWORD(v26[0]) = 214;
  v12 = *v10;
  v13 = *(const struct VIDMM_PHYSICAL_ADAPTER **)(v11 + 8 * v8);
  v14 = _mm_srli_si128(*(__m128i *)((char *)&v26[4] + 4), 8).m128i_u64[0];
  v26[2] = a3;
  v15 = *(_DWORD *)(v12 + 40);
  v16.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(v12 + 44);
  v30 = v9;
  if ( (v14 & 0x200000000LL) != 0 )
  {
    v17 = HIDWORD(v26[4]);
    if ( !HIDWORD(v26[4]) )
    {
      WdLogSingleEntry1(1LL, -1073741811LL);
      WdLogGlobalForLineNumber = 5832;
LABEL_4:
      DxgkLogInternalTriageEvent(v18, 0x40000LL);
      return 3221225485LL;
    }
    if ( (HIDWORD(v26[4]) & *((_DWORD *)v13 + 20)) == 0 )
    {
      WdLogSingleEntry1(1LL, -1073741811LL);
      WdLogGlobalForLineNumber = 5844;
      goto LABEL_4;
    }
    if ( ((_DWORD)a3[2][9] & 0x200000) == 0 && (~v15 & HIDWORD(v26[4])) != 0 && (*((_BYTE *)a3 + 28) & 8) != 0 )
    {
      WdLogSingleEntry1(1LL, -1073741811LL);
      WdLogGlobalForLineNumber = 5857;
      goto LABEL_4;
    }
    v20 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *)v10[46];
    v21 = (v10[3] & 0x800000) != 0;
    v29 = 0;
    if ( !VidMmVerifySupportedSegmentSetAndAdjustFlags(
            v13,
            HIDWORD(v26[4]),
            v20,
            *(_QWORD *)(v12 + 16),
            *(_QWORD *)(v12 + 24),
            v21,
            (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&v29) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5866;
      DxgkLogInternalTriageEvent(v22, 0x40000LL);
      return -1073741811LL;
    }
    BYTE4(v26[6]) = v29 & 1;
    BYTE5(v26[6]) = (v29 & 2) != 0;
    if ( v17 == v15 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 5875;
    }
    LODWORD(v9) = v30;
    v15 = v17;
  }
  v23 = v26[6];
  v24 = (LODWORD(v26[6]) >> 2) & 1;
  if ( v24 )
  {
    if ( (_DWORD)v9 == v16.0 )
    {
      WdLogSingleEntry0(3LL);
      LODWORD(v9) = v30;
      WdLogGlobalForLineNumber = 5886;
    }
    v16.0 = (struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F)v9;
  }
  if ( (v14 & 0x200000000LL) != 0 || v24 )
  {
    if ( !VidMmVerifyPreferredSegmentIsSubset(v16, v15) )
    {
      WdLogSingleEntry1(1LL, -1073741811LL);
      WdLogGlobalForLineNumber = 5898;
      goto LABEL_4;
    }
    MostPreferredSegment = VidMmGetMostPreferredSegment(v13, v16, (bool *)&v29);
    if ( !VidMmVerifyBudgetGroups(v13, v15, MostPreferredSegment, (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v26[4]) )
    {
      WdLogSingleEntry1(1LL, -1073741811LL);
      WdLogGlobalForLineNumber = 5908;
      goto LABEL_4;
    }
    v23 = v26[6];
  }
  if ( (v23 & 1) != 0 && (*(_DWORD *)v10[46] & 0x8000) != 0 )
  {
    if ( (v26[5] & 0x100000000LL) == 0 )
    {
      WdLogSingleEntry1(1LL, -1073741811LL);
      WdLogGlobalForLineNumber = 5920;
      goto LABEL_4;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 5927;
  }
  if ( (v23 & 8) != 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 0x200) == 0 )
    {
      WdLogSingleEntry1(1LL, -1073741811LL);
      WdLogGlobalForLineNumber = 5937;
      goto LABEL_4;
    }
    if ( (*((_DWORD *)v10 + 7) & 0x800) != 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 5944;
    }
  }
  return VIDMM_GLOBAL::QueueDeferredCommand(
           (struct VIDMM_WORKER_THREAD **)this,
           a2,
           (struct _VIDMM_DEFERRED_COMMAND *)v26,
           0,
           a5);
}
