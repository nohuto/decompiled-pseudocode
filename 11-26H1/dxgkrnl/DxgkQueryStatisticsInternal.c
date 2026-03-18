/*
 * XREFs of DxgkQueryStatisticsInternal @ 0x1402C12E8
 * Callers:
 *     ?VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022AA70 (-VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkQueryStatistics @ 0x1402C12D0 (DxgkQueryStatistics.c)
 *     DxgkQueryStatisticsK @ 0x1404323B0 (DxgkQueryStatisticsK.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?VmBusSendQueryStatistics@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGPROCESS@@@Z @ 0x140231B60 (-VmBusSendQueryStatistics@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGP.c)
 *     ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1402BFC04 (-GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1402BFC94 (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1402BFE58 (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1402C0460 (-QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1402C2A04 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1402C2A24 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1402C30E8 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z @ 0x140413DE0 (-GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z.c)
 */

__int64 __fastcall DxgkQueryStatisticsInternal(__int64 Src, char a2)
{
  char v2; // r15
  char *v3; // r14
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v5; // r12
  struct DXGPROCESS *Current; // r13
  __int64 v7; // rsi
  DXGADAPTER *v8; // r14
  int ProcessStatistics; // eax
  __int64 v10; // rcx
  _OWORD *v12; // rax
  _OWORD *v13; // rcx
  __int64 v14; // rdx
  _OWORD *v15; // rcx
  _OWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned int v20; // edx
  int Statistics; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r9
  DXGADAPTER *v27; // [rsp+58h] [rbp-3F0h] BYREF
  int v28; // [rsp+60h] [rbp-3E8h] BYREF
  __int64 v29; // [rsp+68h] [rbp-3E0h]
  char v30; // [rsp+70h] [rbp-3D8h]
  __int64 v31; // [rsp+78h] [rbp-3D0h]
  DXGADAPTER *v32; // [rsp+80h] [rbp-3C8h] BYREF
  unsigned __int64 v33; // [rsp+88h] [rbp-3C0h] BYREF
  _BYTE v34[808]; // [rsp+90h] [rbp-3B8h] BYREF
  _BYTE v35[16]; // [rsp+3C0h] [rbp-88h] BYREF
  struct DXGPROCESS *v36; // [rsp+3D0h] [rbp-78h]
  char v37; // [rsp+3DCh] [rbp-6Ch]

  v2 = a2;
  v3 = (char *)Src;
  v31 = Src;
  v28 = -1;
  v29 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2049;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 2049);
  memset(v34, 0, sizeof(v34));
  if ( v2 )
  {
    RtlCopyFromUser(v34, v3, 0x328uLL);
  }
  else
  {
    v12 = v3;
    v13 = v34;
    v14 = 6LL;
    do
    {
      *v13 = *v12;
      v13[1] = v12[1];
      v13[2] = v12[2];
      v13[3] = v12[3];
      v13[4] = v12[4];
      v13[5] = v12[5];
      v13[6] = v12[6];
      v13 += 8;
      *(v13 - 1) = v12[7];
      v12 += 8;
      --v14;
    }
    while ( v14 );
    *v13 = *v12;
    v13[1] = v12[1];
    *((_QWORD *)v13 + 4) = *((_QWORD *)v12 + 4);
  }
  memset(&v34[24], 0, 0x308uLL);
  Global = DXGGLOBAL::GetGlobal();
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)&v34[4], (unsigned __int64 *)&v32);
  v32 = v5;
  if ( v5 )
  {
    Current = 0LL;
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v35, *(void **)&v34[16], 0x400u);
    if ( *(_QWORD *)&v34[16] )
    {
      if ( (int)DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v35, 1) < 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 6100;
      }
      else
      {
        if ( !v37 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1846;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_Acquired != FALSE", 1846LL, 0LL, 0LL, 0LL, 0LL);
        }
        Current = v36;
        if ( !v36 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1847;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pProcess != NULL", 1847LL, 0LL, 0LL, 0LL, 0LL);
          Current = v36;
        }
      }
    }
    else
    {
      Current = DXGPROCESS::GetCurrent();
    }
    if ( !Current )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 6384;
      LODWORD(v7) = -1073741811;
LABEL_38:
      DXGADAPTER::ReleaseReference(v5);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v35);
      v2 = a2;
      goto LABEL_39;
    }
    v27 = 0LL;
    LODWORD(v7) = DxgkpGetPairingAdapters(v5, 0, &v27, &v33, 0LL, 0LL, 0);
    if ( (int)v7 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6124;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get pairing adapters from adapter 0x%I64x",
        (__int64)v5,
        0LL,
        0LL,
        0LL,
        0LL);
      v8 = v27;
      goto LABEL_35;
    }
    v8 = v27;
    if ( !v27 )
    {
      LODWORD(v7) = -1073741637;
      WdLogSingleEntry2(2LL, v5, -1073741637LL);
      WdLogGlobalForLineNumber = 6130;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Try to call query process statistics on a display only adapter 0x%I64x (Status = 0x%I64x)!",
        (__int64)v5,
        -1073741637LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_35;
    }
    if ( *((_BYTE *)v27 + 209) )
    {
      Statistics = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryStatistics(
                     (DXGADAPTER *)((char *)v27 + 4712),
                     (struct _D3DKMT_QUERYSTATISTICS *)v34,
                     Current);
      v7 = Statistics;
      if ( Statistics < 0 )
      {
        WdLogSingleEntry2(2LL, v8, Statistics);
        WdLogGlobalForLineNumber = 6141;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Host adapter failed the call. hAdapter (0x%I64x) specified, returning 0x%I64x",
          (__int64)v8,
          v7,
          0LL,
          0LL,
          0LL);
      }
      goto LABEL_35;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v27 + 3);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v8 + 136, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)v8 + 38);
    if ( *((_DWORD *)v8 + 50) != 1 )
    {
LABEL_34:
      _InterlockedDecrement((volatile signed __int32 *)v8 + 38);
      ExReleasePushLockSharedEx((char *)v8 + 136, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v8);
      v5 = v32;
LABEL_35:
      if ( v8 )
        DXGADAPTER::ReleaseReference(v8);
      v3 = (char *)v31;
      goto LABEL_38;
    }
    if ( !*(_QWORD *)(*((_QWORD *)v8 + 396) + 760LL) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6153;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pRenderAdapter->GetRenderCore()->GetVidMmExport()",
        6153LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*(_QWORD *)(*((_QWORD *)v8 + 396) + 736LL) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6154;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pRenderAdapter->GetRenderCore()->GetVidSchExport()",
        6154LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(int *)v34 > 10 )
    {
      if ( *(_DWORD *)v34 == 11 )
      {
        if ( (unsigned int)*(unsigned __int16 *)&v34[800] >= *((_DWORD *)v8 + 74) )
        {
          LODWORD(v7) = -1073741811;
        }
        else
        {
          LODWORD(v7) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 396) + 760LL)
                                                                                       + 8LL)
                                                                           + 280LL))(
                          *(_QWORD *)(*((_QWORD *)v8 + 396) + 768LL),
                          *(unsigned __int16 *)&v34[800],
                          &v34[24]);
          if ( (int)v7 >= 0 )
          {
            LODWORD(v7) = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 396)
                                                                                             + 736LL)
                                                                                 + 8LL)
                                                                     + 712LL))(
                            *(_QWORD *)(*((_QWORD *)v8 + 396) + 744LL),
                            &v34[24]);
            *(_DWORD *)&v34[28] = *(unsigned __int16 *)(352LL * *(unsigned __int16 *)&v34[800] + *((_QWORD *)v8 + 379));
          }
        }
        goto LABEL_34;
      }
      if ( *(_DWORD *)v34 != 12 )
      {
        if ( *(_DWORD *)v34 != 13 && *(_DWORD *)v34 != 14 && *(_DWORD *)v34 != 15 )
        {
          switch ( *(_DWORD *)v34 )
          {
            case 0x10:
              ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 396) + 760LL) + 8LL)
                                                                                             + 1200LL))(
                                    *(_QWORD *)(*((_QWORD *)v8 + 396) + 768LL),
                                    *(unsigned __int16 *)&v34[800],
                                    *(unsigned __int16 *)&v34[802],
                                    &v34[24]);
              goto LABEL_33;
            case 0x11:
              v22 = *((_QWORD *)v8 + 396);
              v23 = *(_QWORD *)(v22 + 760);
              v24 = *((_QWORD *)Current + 8);
              if ( v24 )
                v25 = *(_QWORD *)(v24 + 8LL * (unsigned int)(*(_DWORD *)v23 - 1));
              else
                v25 = 0LL;
              ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _BYTE *))(*(_QWORD *)(v23 + 8) + 1208LL))(
                                    *(_QWORD *)(v22 + 768),
                                    *(unsigned __int16 *)&v34[800],
                                    *(unsigned __int16 *)&v34[802],
                                    v25,
                                    &v34[24]);
              goto LABEL_33;
            case 0x12:
              LODWORD(v7) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 396) + 736LL) + 8LL)
                                                                                       + 720LL))(
                              *(_QWORD *)(*((_QWORD *)v8 + 396) + 744LL),
                              *(unsigned __int16 *)&v34[800],
                              *(unsigned __int16 *)&v34[802],
                              &v34[24]);
              if ( (int)v7 < 0 )
              {
                WdLogSingleEntry1(3LL);
                WdLogGlobalForLineNumber = 6263;
              }
              else if ( *((int *)v8 + 761) >= 2400 )
              {
                *(_DWORD *)&v34[572] = *(unsigned __int16 *)&v34[800];
                *(_DWORD *)&v34[568] = *(unsigned __int16 *)&v34[802];
                LODWORD(v7) = DXGADAPTER::GetNodePerfData(v8, (struct _D3DKMT_NODE_PERFDATA *)&v34[568]);
                if ( (int)v7 < 0 )
                {
                  WdLogSingleEntry1(3LL);
                  WdLogGlobalForLineNumber = 6278;
                }
              }
              goto LABEL_34;
          }
        }
        goto LABEL_32;
      }
      v18 = *(unsigned __int16 *)&v34[802];
      v19 = *(unsigned __int16 *)&v34[800];
LABEL_68:
      ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 396) + 760LL) + 8LL)
                                                                                       + 304LL))(
                            *(_QWORD *)(*((_QWORD *)v8 + 396) + 768LL),
                            v19,
                            v18,
                            &v34[24]);
      goto LABEL_33;
    }
    if ( *(_DWORD *)v34 == 10 )
    {
      if ( *((int *)v8 + 761) < 2400 )
      {
        LODWORD(v7) = -1073741822;
      }
      else
      {
        *(_DWORD *)&v34[24] = *(_DWORD *)&v34[800];
        LODWORD(v7) = DXGADAPTER::GetAdapterPerfData(v8, (struct _D3DKMT_ADAPTER_PERFDATA *)&v34[24]);
        if ( (int)v7 >= 0 )
        {
          *(_DWORD *)&v34[88] = *(_DWORD *)&v34[800];
          LODWORD(v7) = DXGADAPTER::GetAdapterPerfDataCaps(v8, (struct _D3DKMT_ADAPTER_PERFDATACAPS *)&v34[88]);
          if ( (int)v7 >= 0 )
          {
            *(_DWORD *)&v34[128] = *(_DWORD *)&v34[800];
            LODWORD(v7) = DXGADAPTER::GetGpuVersion(v8, (struct _D3DKMT_GPUVERSION *)&v34[128]);
            if ( (int)v7 < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 6323;
            }
          }
          else
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 6314;
          }
        }
        else
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 6305;
        }
      }
      goto LABEL_34;
    }
    if ( !*(_DWORD *)v34 )
    {
      LODWORD(v7) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 396)
                                                                                               + 760LL)
                                                                                   + 8LL)
                                                                       + 280LL))(
                      *(_QWORD *)(*((_QWORD *)v8 + 396) + 768LL),
                      0LL,
                      &v34[24]);
      if ( (int)v7 < 0 )
        goto LABEL_34;
      ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 396)
                                                                                             + 736LL)
                                                                                 + 8LL)
                                                                     + 712LL))(
                            *(_QWORD *)(*((_QWORD *)v8 + 396) + 744LL),
                            &v34[24]);
      goto LABEL_33;
    }
    if ( *(_DWORD *)v34 != 2 )
    {
      if ( *(_DWORD *)v34 == 3 )
      {
        v19 = 0LL;
        v18 = *(unsigned int *)&v34[800];
        goto LABEL_68;
      }
      if ( *(_DWORD *)v34 != 4 )
      {
        if ( *(_DWORD *)v34 == 5 )
        {
          LODWORD(v7) = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 396) + 736LL)
                                                                                                + 8LL)
                                                                                    + 720LL))(
                          *(_QWORD *)(*((_QWORD *)v8 + 396) + 744LL),
                          0xFFFFLL,
                          *(unsigned int *)&v34[800],
                          &v34[24]);
          if ( (int)v7 < 0 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 6228;
          }
          else if ( *((int *)v8 + 761) >= 2400 )
          {
            v20 = *(_DWORD *)&v34[800] % (unsigned int)**((unsigned __int16 **)v8 + 379);
            *(_DWORD *)&v34[572] = *(_DWORD *)&v34[800] / (unsigned int)**((unsigned __int16 **)v8 + 379);
            *(_DWORD *)&v34[568] = v20;
            LODWORD(v7) = DXGADAPTER::GetNodePerfData(v8, (struct _D3DKMT_NODE_PERFDATA *)&v34[568]);
            if ( (int)v7 < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 6243;
            }
          }
          goto LABEL_34;
        }
        if ( *(_DWORD *)v34 == 7 )
        {
          ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 396) + 736LL)
                                                                                             + 8LL)
                                                                                 + 728LL))(
                                *(_QWORD *)(*((_QWORD *)v8 + 396) + 744LL),
                                *(unsigned int *)&v34[800],
                                &v34[24]);
          goto LABEL_33;
        }
      }
    }
LABEL_32:
    ProcessStatistics = QueryProcessStatistics((struct _D3DKMT_QUERYSTATISTICS *)v34, v8, Current);
LABEL_33:
    LODWORD(v7) = ProcessStatistics;
    goto LABEL_34;
  }
  WdLogSingleEntry2(3LL, *(unsigned int *)&v34[4], *(int *)&v34[8]);
  WdLogGlobalForLineNumber = 6394;
  LODWORD(v7) = -1073741811;
LABEL_39:
  if ( (int)v7 >= 0 )
  {
    if ( v2 )
    {
      RtlCopyToUser(v3 + 24, &v34[24], 0x308uLL);
    }
    else
    {
      v15 = v3 + 24;
      v16 = &v34[24];
      v17 = 6LL;
      do
      {
        *v15 = *v16;
        v15[1] = v16[1];
        v15[2] = v16[2];
        v15[3] = v16[3];
        v15[4] = v16[4];
        v15[5] = v16[5];
        v15[6] = v16[6];
        v15 += 8;
        *(v15 - 1) = v16[7];
        v16 += 8;
        --v17;
      }
      while ( v17 );
      *(_QWORD *)v15 = *(_QWORD *)v16;
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
  return (unsigned int)v7;
}
