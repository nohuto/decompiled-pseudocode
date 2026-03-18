/*
 * XREFs of ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1402C0460
 * Callers:
 *     DxgkQueryStatisticsInternal @ 0x1402C12E8 (DxgkQueryStatisticsInternal.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x14002D930 (-VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEA.c)
 *     ?VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x140057DFC (-VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKM.c)
 *     ?VidMmQueryProcessAdapterStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@GPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x140074340 (-VidMmQueryProcessAdapterStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@GPEAVDXGPROCESS@@PEAU_D.c)
 *     ?VidMmQueryProcessSegmentGroupStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@GW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_GROUP_INFORMATION@@@Z @ 0x14007438C (-VidMmQueryProcessSegmentGroupStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@GW4_D3DKMT_MEMORY_.c)
 *     ?VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_VIDPNSOURCE_INFORMATION@@@Z @ 0x1400743F0 (-VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QueryProcessStatistics(
        struct _D3DKMT_QUERYSTATISTICS *a1,
        struct DXGADAPTER *a2,
        struct DXGPROCESS *a3)
{
  __int64 v3; // rbp
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int ProcessStatistics; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // r15d
  unsigned __int16 v15; // r12
  __int64 v16; // r14
  __int64 v17; // r13
  __int64 v18; // rdi
  int ProcessAdapterStatistics; // ebx
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // r15d
  __int64 v24; // r14
  __int64 v25; // r12
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  struct _D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION *v33; // r14
  unsigned __int16 v34; // r8
  struct _D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION *v35; // rbp
  unsigned int v36; // r9d
  unsigned __int16 v37; // r8

  v3 = 0LL;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5879;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pQueryStatistics", 5879LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 || !*((_QWORD *)a2 + 396) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5880;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAdapter && pAdapter->IsRenderAdapter()",
      5880LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5882;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess", 5882LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGFASTMUTEX::IsOwner((struct DXGPROCESS *)((char *)a3 + 104)) && a3 != DXGPROCESS::GetCurrent() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5883;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pProcess->IsMutexOwner() || pProcess == DXGPROCESS::GetCurrent()",
      5883LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 == 19 )
  {
    v12 = *((_QWORD *)a2 + 396);
    v13 = *((_QWORD *)a3 + 8);
    v14 = *((unsigned __int16 *)a1 + 401);
    v15 = *((_WORD *)a1 + 400);
    v16 = *(_QWORD *)(v12 + 736);
    v17 = *(_QWORD *)(v12 + 744);
    if ( v13 )
    {
      v18 = *(_QWORD *)(v13 + 8LL * (unsigned int)(*(_DWORD *)v16 - 1) + 16);
      if ( v18 )
        return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v16 + 8)
                                                                                                 + 752LL))(
                               v17,
                               v15,
                               v14,
                               v18,
                               (char *)a1 + 24);
    }
    else
    {
      v18 = 0LL;
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1348;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidSchProcess", 1348LL, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v16 + 8)
                                                                                             + 752LL))(
                           v17,
                           v15,
                           v14,
                           v18,
                           (char *)a1 + 24);
  }
  if ( v7 == 4 )
  {
    v8 = *((_QWORD *)a2 + 396);
    v9 = *((_QWORD *)a3 + 8);
    v10 = *(_QWORD *)(v8 + 760);
    if ( v9 )
      v3 = *(_QWORD *)(v9 + 8LL * (unsigned int)(*(_DWORD *)v10 - 1));
    return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v10 + 8)
                                                                                            + 312LL))(
                           *(_QWORD *)(v8 + 768),
                           0LL,
                           *((unsigned int *)a1 + 200),
                           v3,
                           (char *)a1 + 24);
  }
  else
  {
    switch ( v7 )
    {
      case 1:
        v30 = *((_QWORD *)a2 + 396);
        v31 = *((_QWORD *)a3 + 8);
        v32 = *(_QWORD *)(v30 + 760);
        if ( v31 )
          v3 = *(_QWORD *)(v31 + 8LL * (unsigned int)(*(_DWORD *)v32 - 1));
        v33 = (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24);
        ProcessAdapterStatistics = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(v32 + 8) + 288LL))(
                                     *(_QWORD *)(v30 + 768),
                                     v3,
                                     (char *)a1 + 24);
        if ( ProcessAdapterStatistics < 0 )
          return (unsigned int)ProcessAdapterStatistics;
        ProcessStatistics = VIDSCH_EXPORT::VidSchQueryProcessStatistics(
                              *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 396) + 736LL),
                              *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 396) + 744LL),
                              a3,
                              v33);
        break;
      case 2:
        v34 = 0;
        goto LABEL_38;
      case 6:
        v21 = *((_QWORD *)a2 + 396);
        v22 = *((_QWORD *)a3 + 8);
        v23 = *((_DWORD *)a1 + 200);
        v24 = *(_QWORD *)(v21 + 736);
        v25 = *(_QWORD *)(v21 + 744);
        if ( v22 )
        {
          v26 = *(_QWORD *)(v22 + 8LL * (unsigned int)(*(_DWORD *)v24 - 1) + 16);
          if ( v26 )
            goto LABEL_22;
        }
        else
        {
          v26 = 0LL;
        }
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1348;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidSchProcess", 1348LL, 0LL, 0LL, 0LL, 0LL);
LABEL_22:
        ProcessStatistics = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, char *))(*(_QWORD *)(v24 + 8)
                                                                                                 + 752LL))(
                              v25,
                              0xFFFFLL,
                              v23,
                              v26,
                              (char *)a1 + 24);
        break;
      case 8:
        ProcessStatistics = VIDSCH_EXPORT::VidSchQueryProcessVidPnSourceStatistics(
                              *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 396) + 736LL),
                              *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 396) + 744LL),
                              *((_DWORD *)a1 + 200),
                              a3,
                              (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
        break;
      case 9:
        v36 = *((_DWORD *)a1 + 200);
        v37 = 0;
        goto LABEL_43;
      case 13:
        v34 = *((_WORD *)a1 + 400);
LABEL_38:
        v35 = (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24);
        ProcessAdapterStatistics = VIDMM_EXPORT::VidMmQueryProcessAdapterStatistics(
                                     *(VIDMM_EXPORT **)(*((_QWORD *)a2 + 396) + 760LL),
                                     *(struct VIDMM_GLOBAL **)(*((_QWORD *)a2 + 396) + 768LL),
                                     v34,
                                     a3,
                                     (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
        if ( ProcessAdapterStatistics < 0 )
          return (unsigned int)ProcessAdapterStatistics;
        ProcessStatistics = VIDSCH_EXPORT::VidSchQueryProcessAdapterStatistics(
                              *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 396) + 736LL),
                              *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 396) + 744LL),
                              a3,
                              v35);
        break;
      case 14:
        v27 = *((_QWORD *)a2 + 396);
        v28 = *((_QWORD *)a3 + 8);
        v29 = *(_QWORD *)(v27 + 760);
        if ( v28 )
          v3 = *(_QWORD *)(v28 + 8LL * (unsigned int)(*(_DWORD *)v29 - 1));
        ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v29 + 8)
                                                                                               + 312LL))(
                              *(_QWORD *)(v27 + 768),
                              *((unsigned __int16 *)a1 + 400),
                              *((unsigned __int16 *)a1 + 401),
                              v3,
                              (char *)a1 + 24);
        break;
      case 15:
        v36 = *((unsigned __int16 *)a1 + 401);
        v37 = *((_WORD *)a1 + 400);
LABEL_43:
        ProcessStatistics = VIDMM_EXPORT::VidMmQueryProcessSegmentGroupStatistics(
                              *(VIDMM_EXPORT **)(*((_QWORD *)a2 + 396) + 760LL),
                              *(struct VIDMM_GLOBAL **)(*((_QWORD *)a2 + 396) + 768LL),
                              v37,
                              v36,
                              a3,
                              (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
        break;
      default:
        ProcessAdapterStatistics = -1073741811;
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 6017;
        return (unsigned int)ProcessAdapterStatistics;
    }
  }
  return ProcessStatistics;
}
