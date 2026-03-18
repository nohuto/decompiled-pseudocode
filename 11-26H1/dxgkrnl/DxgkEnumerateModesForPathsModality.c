/*
 * XREFs of DxgkEnumerateModesForPathsModality @ 0x1403D6DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1CCD_MODE_RESULT_SET@@QEAA@XZ @ 0x14006A970 (--1CCD_MODE_RESULT_SET@@QEAA@XZ.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ??0CCD_MODE_RESULT_SET@@QEAA@XZ @ 0x140193E08 (--0CCD_MODE_RESULT_SET@@QEAA@XZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402AC2B8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x14034038C (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 *     ?PopLastMode@CCD_MODE_RESULT_SET@@QEAA_NAEAUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1403D73E4 (-PopLastMode@CCD_MODE_RESULT_SET@@QEAA_NAEAUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1403D74F4 (--0CCD_TOPOLOGY@@QEAA@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1403D7540 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 */

__int64 __fastcall DxgkEnumerateModesForPathsModality(
        __int64 a1,
        struct D3DKMT_GETPATHSMODALITY *a2,
        unsigned int a3,
        PVOID *a4,
        unsigned int *a5)
{
  int v8; // edi
  int v9; // r15d
  NTSTATUS v10; // edi
  unsigned int v11; // r12d
  __int64 v12; // r14
  unsigned __int64 v13; // rax
  unsigned int v14; // r14d
  __int64 v15; // r9
  __int64 v16; // r9
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  PVOID BaseAddress; // [rsp+50h] [rbp-178h] BYREF
  int v24; // [rsp+58h] [rbp-170h] BYREF
  __int64 v25; // [rsp+60h] [rbp-168h]
  char v26; // [rsp+68h] [rbp-160h]
  unsigned int i; // [rsp+70h] [rbp-158h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-150h] BYREF
  SIZE_T Length; // [rsp+80h] [rbp-148h]
  _BYTE v30[48]; // [rsp+88h] [rbp-140h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-110h]
  _DWORD v32[28]; // [rsp+C0h] [rbp-108h] BYREF
  _BYTE v33[76]; // [rsp+130h] [rbp-98h] BYREF
  int v34; // [rsp+17Ch] [rbp-4Ch]
  int v35; // [rsp+184h] [rbp-44h]

  v8 = a1;
  v24 = -1;
  v25 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 2171;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 2171);
  if ( a2 && a4 && a5 )
  {
    *a4 = 0LL;
    *a5 = 0;
    if ( (v8 & 0xFEFD7FFF) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 290;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(Flags & ~(D3DKMT_GETPATHSMODALITY_DIAG_LOG_FUNCTIONAL_VIDPN | D3DKMT_GETPATHSMODALITY_ALLOW_BML_RAWMOD"
                  "E | D3DKMT_GETPATHSMODALITY_INCLUDING_NON_DESKTOP)) == 0",
        290LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v33, a2);
    v9 = v34;
    if ( (v8 & 0x8000) != 0 )
      v34 |= 1u;
    if ( (v8 & 0x1000000) != 0 )
      v35 |= 1u;
    CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v30);
    v10 = CCD_TOPOLOGY::EnumerateFunctionalModesWorker(
            (CCD_TOPOLOGY *)v33,
            v8 | 0x40000u,
            a3,
            (struct CCD_MODE_RESULT_SET *)v30);
    if ( v10 >= 0 )
    {
      v10 = 0;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1021;
    }
    if ( v10 < 0 )
      goto LABEL_37;
    v11 = v31;
    v12 = (unsigned int)v31;
    v13 = 88LL * (unsigned int)v31;
    if ( v13 > 0xFFFFFFFF )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 319;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to allocated a buffer to store %I64d modes.",
        v12,
        0LL,
        0LL,
        0LL,
        0LL);
      CCD_MODE_RESULT_SET::~CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v30);
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v33);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
      if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
      return 3221225621LL;
    }
    else
    {
      BaseAddress = 0LL;
      Length = (unsigned int)v13;
      RegionSize = (unsigned int)v13;
      v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
      if ( v10 >= 0 )
      {
        ProbeForWrite(BaseAddress, Length, 1u);
        v14 = 0;
        for ( i = 0; v14 < v11; i = v14 )
        {
          memset(v32, 0, sizeof(v32));
          if ( !CCD_MODE_RESULT_SET::PopLastMode(
                  (CCD_MODE_RESULT_SET *)v30,
                  (struct D3DKMT_PATHMODALITY_MODE_RESULT *)v32) )
            break;
          v15 = 88LL * v14;
          *(_DWORD *)((char *)BaseAddress + v15 + 48) = v32[16];
          *(_DWORD *)((char *)BaseAddress + v15 + 52) = v32[17];
          *(_DWORD *)((char *)BaseAddress + v15 + 56) = v32[19];
          *((_BYTE *)BaseAddress + v15 + 76) = v32[26];
          DMMVideoSignalInfoToDisplayConfigVideoSignalInfo((__int64)v32, (__int64)BaseAddress + v15);
          *(_DWORD *)((char *)BaseAddress + v16 + 60) = v32[22];
          *(_DWORD *)((char *)BaseAddress + v16 + 64) = v32[23];
          *(_DWORD *)((char *)BaseAddress + v16 + 68) = v32[24];
          *(_DWORD *)((char *)BaseAddress + v16 + 72) = v32[25];
          v17 = v32[27] >> 2;
          *(_DWORD *)((char *)BaseAddress + v16 + 80) ^= ((unsigned __int8)*(_DWORD *)((char *)BaseAddress + v16 + 80) ^ (unsigned __int8)(v32[27] >> 2)) & 0x3F;
          *(_DWORD *)((char *)BaseAddress + v16 + 80) ^= (*(_DWORD *)((char *)BaseAddress + v16 + 80) ^ v17) & 0xFC0000;
          *(_DWORD *)((char *)BaseAddress + v16 + 80) ^= (*(_DWORD *)((char *)BaseAddress + v16 + 80) ^ v17) & 0x3F000;
          *(_DWORD *)((char *)BaseAddress + v16 + 80) ^= ((unsigned __int16)*(_DWORD *)((char *)BaseAddress + v16 + 80) ^ (unsigned __int16)v17) & 0xFC0;
          *(_DWORD *)((char *)BaseAddress + v16 + 80) ^= (*(_DWORD *)((char *)BaseAddress + v16 + 80) ^ v17) & 0x3F000000;
          ++v14;
        }
        *a4 = BaseAddress;
        *a5 = v11;
LABEL_37:
        v34 = v9;
        CCD_MODE_RESULT_SET::~CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v30);
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v33);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
        if ( v26 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
        }
        return (unsigned int)v10;
      }
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 329;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate virtual memory for %I64d modes.",
        v12,
        0LL,
        0LL,
        0LL,
        0LL);
      CCD_MODE_RESULT_SET::~CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v30);
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v33);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
      if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
      return 3221225626LL;
    }
  }
  else
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
}
