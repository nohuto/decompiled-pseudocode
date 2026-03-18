/*
 * XREFs of ?VidMmInitializePhysicalAdapter@@YAJPEAUVIDMM_PHYSICAL_ADAPTER@@@Z @ 0x1400B48B0
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x14009E770 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     RtlStringCbPrintfW @ 0x14003F654 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     InitializeGpuVaState @ 0x1400B3BBC (InitializeGpuVaState.c)
 *     ?InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z @ 0x14012411C (-InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z.c)
 */

__int64 __fastcall VidMmInitializePhysicalAdapter(struct VIDMM_PHYSICAL_ADAPTER *a1)
{
  __int64 v2; // r15
  int v3; // eax
  unsigned int v4; // edi
  unsigned int v5; // ebx
  __int64 result; // rax
  __int64 v7; // r9
  NTSTATUS v8; // eax
  unsigned int v9; // r12d
  __int64 v10; // rcx
  __int64 v11; // rdx
  NTSTATUS v12; // eax
  char v13; // cl
  char v14; // dl
  int v15; // eax
  NTSTATUS v16; // eax
  int v17; // eax
  unsigned __int64 v18; // rdx
  int v19; // eax
  int Data; // [rsp+28h] [rbp-69h]
  int v21; // [rsp+30h] [rbp-61h]
  struct _PCW_DATA v22; // [rsp+58h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-29h] BYREF
  wchar_t pszDest[40]; // [rsp+78h] [rbp-19h] BYREF

  v2 = *((_QWORD *)a1 + 7);
  v3 = (*(__int64 (__fastcall **)(struct VIDMM_PHYSICAL_ADAPTER *))(*(_QWORD *)a1 + 8LL))(a1);
  v4 = 0;
  v5 = v3;
  if ( v3 < 0 )
  {
    WdLogSingleEntry2(3LL, *((unsigned __int16 *)a1 + 36), v3);
    result = v5;
    WdLogGlobalForLineNumber = 882;
    return result;
  }
  v21 = *((unsigned __int16 *)a1 + 36);
  Data = *(_QWORD *)(*(_QWORD *)(v2 + 24) + 412LL);
  v7 = HIDWORD(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 412LL));
  DestinationString = 0LL;
  v8 = RtlStringCbPrintfW(pszDest, 0x208uLL, L"luid_0x%08X_0x%08X_phys_%u", v7, Data, v21);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(1LL, v8);
    WdLogGlobalForLineNumber = 911;
    v11 = 0x40000LL;
LABEL_5:
    DxgkLogInternalTriageEvent(v10, v11);
    return v9;
  }
  RtlInitUnicodeString(&DestinationString, pszDest);
  v22.Data = a1;
  v22.Size = 1864;
  v12 = PcwCreateInstance(
          (PPCW_INSTANCE *)a1 + 218,
          GpuPerformanceCounterSetAdapterMemory,
          &DestinationString,
          1u,
          &v22);
  v9 = v12;
  if ( v12 < 0 )
  {
    _InterlockedIncrement(&dword_14008A8BC);
    WdLogSingleEntry1(6LL, v12);
    WdLogGlobalForLineNumber = 922;
LABEL_8:
    v11 = 262145LL;
    goto LABEL_5;
  }
  v13 = *((_BYTE *)a1 + 558);
  if ( (v13 & 6) == 6 )
  {
    v13 |= 0x80u;
    *((_BYTE *)a1 + 558) = v13;
  }
  v14 = *((_BYTE *)a1 + 632) | 2;
  *((_BYTE *)a1 + 632) = v14;
  if ( (v13 & 1) != 0 )
  {
    *((_DWORD *)a1 + 154) = dword_14008A564;
    VIDMM_GLOBAL::InitializeSegmentGroupState(
      (VIDMM_GLOBAL *)v2,
      *((unsigned __int16 *)a1 + 36),
      (struct VIDMM_PHYSICAL_ADAPTER *)((char *)a1 + 664),
      0LL);
    v15 = dword_14008A568;
    *((_BYTE *)a1 + 656) |= 3u;
    *((_DWORD *)a1 + 160) = v15;
    RtlInitUnicodeString(&DestinationString, pszDest);
    v22.Data = (char *)a1 + 664;
    v22.Size = 344;
    v16 = PcwCreateInstance(
            (PPCW_INSTANCE *)a1 + 125,
            GpuPerformanceCounterSetLocalAdapterMemory,
            &DestinationString,
            1u,
            &v22);
    v9 = v16;
    if ( v16 < 0 )
    {
      _InterlockedIncrement(&dword_14008A8BC);
      WdLogSingleEntry1(6LL, v16);
      WdLogGlobalForLineNumber = 963;
      goto LABEL_8;
    }
  }
  else
  {
    v17 = dword_14008A568;
    *((_BYTE *)a1 + 656) &= ~2u;
    *((_BYTE *)a1 + 632) = v14 | 1;
    *((_DWORD *)a1 + 154) = v17;
  }
  v18 = *(_QWORD *)(v2 + 7096);
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 24) + 444LL) & 8) != 0 )
  {
    *(_BYTE *)(v2 + 7105) = v18 != 0;
    *((_BYTE *)a1 + 556) |= 2u;
  }
  else
  {
    *(_BYTE *)(v2 + 7105) = v18 >= qword_14008A310;
  }
  if ( (*(_BYTE *)(v2 + 41064) & 0x10) == 0 )
    return 0LL;
  v19 = InitializeGpuVaState(a1);
  if ( v19 < 0 )
    return (unsigned int)v19;
  return v4;
}
