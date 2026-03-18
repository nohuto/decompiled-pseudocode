/*
 * XREFs of DxgkGetPathsModality @ 0x14031B1E0
 * Callers:
 *     ?GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14031AF4C (-GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x140339B80 (-DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x14033B500 (DxgkGetDisplayConfigBufferSizes.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x140055890 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x140268E8C (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402AC2B8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1402AC310 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x14031CDAC (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x14033C0A8 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x14033D124 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x14033F530 (DxgkGetAdapterDefaultScaling.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1403AE25C (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1403DAF18 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 */

__int64 __fastcall DxgkGetPathsModality(__int64 a1, _DWORD *a2, unsigned __int16 *a3)
{
  __int64 v3; // rbx
  _DWORD *v6; // rsi
  int Active; // edi
  __int64 v8; // rcx
  int AllPaths; // eax
  __int64 v11; // rcx
  const wchar_t *v12; // r9
  int v13; // eax
  unsigned int i; // r8d
  __int64 v15; // rcx
  unsigned int j; // r14d
  __int64 v17; // r15
  char *v18; // r13
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h]
  char v23; // [rsp+60h] [rbp-A0h]
  int v24; // [rsp+70h] [rbp-90h] BYREF
  __int128 v25; // [rsp+78h] [rbp-88h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  __int16 v27; // [rsp+90h] [rbp-70h]
  __int128 v28; // [rsp+98h] [rbp-68h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  _DWORD *v30; // [rsp+B0h] [rbp-50h]
  bool v31; // [rsp+B8h] [rbp-48h]
  int v32; // [rsp+BCh] [rbp-44h]
  int v33; // [rsp+C0h] [rbp-40h]
  _BOOL8 v34; // [rsp+C4h] [rbp-3Ch]
  __int64 v35; // [rsp+D0h] [rbp-30h]
  _BYTE v36[160]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+188h] [rbp+88h]
  unsigned int v38; // [rsp+190h] [rbp+90h] BYREF
  __int64 v39; // [rsp+198h] [rbp+98h] BYREF

  v3 = (unsigned int)a1;
  v21 = -1;
  v22 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 2081;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 2081);
  v39 = retaddr;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v39, 9);
  v6 = &unk_1401688E0;
  if ( a2 )
    v6 = a2;
  if ( (v3 & 0x800000) != 0 )
    v6[6] |= 2u;
  if ( (v3 & 0x14000) != 0 )
  {
    if ( (v3 & 0xFFFEBFFF) == 0 )
    {
      v13 = 0;
      if ( (v3 & 0x4000) != 0 )
        v13 = 2;
      if ( (v3 & 0x10000) != 0 )
        v13 |= 4u;
      for ( i = 0; i < *((unsigned __int16 *)v6 + 10); ++i )
      {
        v15 = *(_QWORD *)&v6[74 * i + 76];
        if ( v15 )
          *(_DWORD *)(v15 + 240) |= v13;
      }
      Active = 0;
      goto LABEL_17;
    }
    WdLogSingleEntry1(1LL);
    v12 = L"D3DKMT_GETPATHSMODALITY_FORCE_FULL_MODE_CHANGE and D3DKMT_GETPATHSMODALITY_FORCE_UNCONDITIONAL_MODE_CACHE_INVA"
           "LIDATE are not valid with any other flags. (Flags = 0x%I64x)";
    WdLogGlobalForLineNumber = 69;
    goto LABEL_34;
  }
  if ( (v3 & 0x100) != 0 )
  {
    if ( (v3 & 0xFFFFFEFF) == 0 )
    {
      v24 = 0;
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0;
      v28 = 0LL;
      v29 = 0LL;
      v31 = v6 == 0LL;
      v30 = v6;
      v32 = 0;
      v33 = 1;
      v34 = 0LL;
      v35 = 0LL;
      AllPaths = CCD_TOPOLOGY::FillPathsTargetFlags((CCD_TOPOLOGY *)&v24);
      goto LABEL_22;
    }
    WdLogSingleEntry1(1LL);
    v12 = L"D3DKMT_GETPATHSMODALITY_FILL_TARGET_INFO_ONLY is not valid with any other flags. (Flags = 0x%I64x)";
    WdLogGlobalForLineNumber = 101;
LABEL_34:
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)v12, v3, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_25;
  }
  if ( (v3 & 0x10) != 0 )
  {
    v24 = 0;
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0;
    v28 = 0LL;
    v29 = 0LL;
    v31 = v6 == 0LL;
    v30 = v6;
    v32 = 0;
    v33 = 1;
    v34 = 0LL;
    v35 = 0LL;
    AllPaths = CCD_TOPOLOGY::RetrieveAllPaths((CCD_TOPOLOGY *)&v24, a3);
LABEL_22:
    Active = AllPaths;
LABEL_16:
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v24);
LABEL_17:
    DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v39, 10);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit);
    }
    return (unsigned int)Active;
  }
  if ( (v3 & 0x12000040) != 0 )
  {
    v24 = 0;
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0;
    v28 = 0LL;
    v29 = 0LL;
    v31 = v6 == 0LL;
    v30 = v6;
    v32 = 0;
    v33 = 1;
    v35 = 0LL;
    v34 = (v3 & 0x1000000) != 0;
    Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)&v24, (v3 & 0x80000) != 0, 0, (v3 & 0x100000) != 0, a3);
    if ( Active >= 0 )
    {
      if ( (v3 & 0x2000000) != 0 )
      {
        CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v36, 0, 0);
        if ( (int)CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)v36, 0x8Fu, 0LL) < 0 )
          CCD_TOPOLOGY::Clear((CCD_TOPOLOGY *)v36);
        for ( j = 0; j < *((unsigned __int16 *)v6 + 10); ++j )
        {
          v38 = 0;
          v17 = 74LL * j;
          v18 = (char *)&v6[v17];
          if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                      (CCD_TOPOLOGY *)v36,
                      (const struct _LUID *)&v6[v17 + 18],
                      v6[v17 + 21],
                      &v38) < 0 )
            DxgkGetAdapterDefaultScaling(&v6[v17 + 18], v18 + 196, v19, v20);
          else
            *((_DWORD *)v18 + 49) = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v36, v38) + 35);
          *(_QWORD *)&v6[v17 + 14] |= 0x10000uLL;
        }
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v36);
      }
      if ( (v3 & 0x10000000) != 0 && (!v30 || !*((_WORD *)v30 + 10)) )
        Active = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)&v24, v3 & 0x140030AF, a3);
    }
    goto LABEL_16;
  }
  if ( (v3 & 0xF) != 0 )
  {
    v24 = 0;
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0;
    v28 = 0LL;
    v29 = 0LL;
    v31 = v6 == 0LL;
    v30 = v6;
    v32 = 0;
    v33 = 1;
    v34 = 0LL;
    v35 = 0LL;
    AllPaths = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)&v24, v3 & 0x140030AF, a3);
    goto LABEL_22;
  }
LABEL_25:
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v39, 10);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
  return 3221225485LL;
}
