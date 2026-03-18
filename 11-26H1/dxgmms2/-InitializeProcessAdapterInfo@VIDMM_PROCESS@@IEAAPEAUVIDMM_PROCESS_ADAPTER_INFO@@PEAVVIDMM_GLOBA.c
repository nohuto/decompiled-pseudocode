/*
 * XREFs of ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400C7AF4
 * Callers:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400CB9E0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1400046CC (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14002E900 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline @ 0x14003B500 (Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UmdManagesResidency@DXGPROCESS@@QEBAEXZ @ 0x14003B53C (-UmdManagesResidency@DXGPROCESS@@QEBAEXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003F480 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     RtlStringCbPrintfW @ 0x14003F654 (RtlStringCbPrintfW.c)
 *     ??0VIDMM_PROCESS_ADAPTER_INFO_PAGED@@QEAA@XZ @ 0x140044D54 (--0VIDMM_PROCESS_ADAPTER_INFO_PAGED@@QEAA@XZ.c)
 *     ??0CVirtualAddressAllocator@@QEAA@XZ @ 0x1400C7AA0 (--0CVirtualAddressAllocator@@QEAA@XZ.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEBAPEBUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1400C8E94 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEBAPEBUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1400C8FA4 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400E1030 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x140104C9C (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 */

struct VIDMM_PROCESS_ADAPTER_INFO *__fastcall VIDMM_PROCESS::InitializeProcessAdapterInfo(
        struct VIDMM_PARTITION **this,
        struct VIDMM_GLOBAL *a2)
{
  struct VIDMM_PARTITION **v3; // r15
  NTSTATUS v4; // r12d
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  bool v10; // cf
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  VIDMM_PROCESS_ADAPTER_INFO_PAGED *v14; // rax
  VIDMM_PROCESS_ADAPTER_INFO_PAGED *v15; // rax
  unsigned __int16 v16; // r14
  _QWORD *v17; // r13
  CVirtualAddressAllocator *v18; // rax
  wchar_t *v19; // r14
  unsigned int j; // ebp
  __int64 v21; // r13
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v22; // r15d
  _QWORD *v23; // r12
  const struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // r13
  unsigned __int64 v32; // rbp
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rdx
  CVirtualAddressAllocator *v39; // rcx
  __int64 v40; // rcx
  _QWORD *v42; // rcx
  __int64 v43; // rdx
  _QWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rbp
  unsigned int i; // edx
  __int64 v48; // rax
  __int64 v49; // rcx
  DXGPROCESS *v50; // rcx
  struct VIDMM_GLOBAL **v51; // rdx
  struct VIDMM_GLOBAL *v52; // rax
  PPCW_DATA Data; // [rsp+20h] [rbp-98h]
  __int64 v54; // [rsp+28h] [rbp-90h]
  __int64 v55; // [rsp+30h] [rbp-88h]
  __int64 v56; // [rsp+50h] [rbp-68h]
  struct _PCW_DATA v57; // [rsp+58h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-50h] BYREF
  wchar_t *pszDest; // [rsp+D8h] [rbp+20h]
  NTSTRSAFE_PWSTR pszDesta; // [rsp+D8h] [rbp+20h]

  v3 = this;
  v4 = 0;
  v5 = operator new(192LL, 0x33316956u, 64LL);
  v6 = v5;
  if ( !v5 )
  {
    _InterlockedAdd(&dword_14008A75C, 1u);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 830;
    DxgkLogInternalTriageEvent(v40, 262145LL);
    return 0LL;
  }
  *(_QWORD *)(v5 + 104) = 0LL;
  *(_QWORD *)(v5 + 112) = 0LL;
  *(_QWORD *)(v5 + 120) = 0LL;
  *(_QWORD *)(v5 + 128) = 0LL;
  *(_DWORD *)(v5 + 136) = 0;
  *(_QWORD *)(v5 + 144) = 0LL;
  *(_QWORD *)(v5 + 152) = 0LL;
  *(_DWORD *)(v5 + 160) = 0;
  *(_DWORD *)(v5 + 164) = 1;
  *(_DWORD *)(v5 + 168) = 54;
  *(_DWORD *)(v5 + 176) = 33685504;
  *(_BYTE *)(v5 + 180) = 0;
  *(_QWORD *)(v5 + 32) = 0LL;
  v7 = (_QWORD *)(v5 + 88);
  v7[1] = v7;
  *v7 = v7;
  *(_QWORD *)(v6 + 72) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  v8 = *((unsigned int *)a2 + 1738);
  v9 = 304 * v8;
  if ( !is_mul_ok(v8, 0x130uLL) )
    v9 = -1LL;
  v10 = __CFADD__(v9, 8LL);
  v11 = v9 + 8;
  if ( v10 )
    v11 = -1LL;
  v12 = operator new[](v11, 0x61316956u, 256LL);
  if ( v12 )
  {
    v13 = v12 + 8;
    *(_QWORD *)v12 = v8;
    `vector constructor iterator'(
      (char *)(v12 + 8),
      304LL,
      (unsigned int)v8,
      (void (__fastcall *)(char *))VIDMM_PROCESS_PHYSICAL_ADAPTER_INFO::VIDMM_PROCESS_PHYSICAL_ADAPTER_INFO);
  }
  else
  {
    v13 = 0LL;
  }
  *(_QWORD *)(v6 + 8) = v13;
  if ( !v13 )
  {
    _InterlockedAdd(&dword_14008A764, 1u);
    WdLogSingleEntry0(6LL);
    v37 = 838;
    goto LABEL_38;
  }
  v14 = (VIDMM_PROCESS_ADAPTER_INFO_PAGED *)operator new(1752LL, 0x33316956u, 256LL);
  if ( v14 )
    v15 = VIDMM_PROCESS_ADAPTER_INFO_PAGED::VIDMM_PROCESS_ADAPTER_INFO_PAGED(v14);
  else
    v15 = 0LL;
  v56 = v6 + 184;
  *(_QWORD *)(v6 + 184) = v15;
  if ( !v15 )
  {
    _InterlockedAdd(&dword_14008A760, 1u);
    WdLogSingleEntry0(6LL);
    v37 = 846;
    goto LABEL_38;
  }
  v16 = 0;
  v17 = (_QWORD *)(v6 + 8);
  while ( (unsigned int)v16 < *((_DWORD *)a2 + 1738) )
  {
    v31 = *(_QWORD *)(*((_QWORD *)a2 + 5040) + 8LL * v16);
    v32 = *(unsigned int *)(v31 + 136);
    v33 = 184 * v32;
    pszDesta = (NTSTRSAFE_PWSTR)v32;
    if ( !is_mul_ok(v32, 0xB8uLL) )
      v33 = -1LL;
    v10 = __CFADD__(v33, 8LL);
    v34 = v33 + 8;
    if ( v10 )
      v34 = -1LL;
    v35 = operator new[](v34, 0x34316956u, 256LL);
    if ( !v35
      || (*(_QWORD *)v35 = v32,
          v46 = v35 + 8,
          `vector constructor iterator'(
            (char *)(v35 + 8),
            184LL,
            (__int64)pszDesta,
            (void (__fastcall *)(char *))VIDMM_PROCESS_COMMITMENT_INFO::VIDMM_PROCESS_COMMITMENT_INFO),
          !v46) )
    {
      _InterlockedAdd(&dword_14008A764, 1u);
      WdLogSingleEntry0(6LL);
      v37 = 860;
      goto LABEL_38;
    }
    for ( i = 0; i < *(_DWORD *)(v31 + 136); *(_QWORD *)(184 * v48 + v46) = v3 )
      v48 = i++;
    v17 = (_QWORD *)(v6 + 8);
    v49 = 304LL * v16++;
    *(_QWORD *)(v49 + *(_QWORD *)(v6 + 8)) = v46;
  }
  if ( (*((_BYTE *)a2 + 41064) & 0x10) != 0 && ((_DWORD)v3[17] & 2) == 0 )
  {
    v18 = (CVirtualAddressAllocator *)operator new(160LL, 0x4B677844u, 256LL);
    if ( v18 )
      v18 = CVirtualAddressAllocator::CVirtualAddressAllocator(v18);
    *(_QWORD *)(v6 + 24) = v18;
    if ( v18 )
    {
      if ( CVirtualAddressAllocator::InitializeVaAllocator(
             v18,
             1LL << *((_DWORD *)a2 + 10264),
             *((_DWORD *)a2 + 10285),
             a2,
             (struct VIDMM_PROCESS *)v3) >= 0 )
        goto LABEL_20;
      WdLogSingleEntry0(1LL);
      v37 = 893;
    }
    else
    {
      WdLogSingleEntry0(1LL);
      v37 = 881;
    }
    v38 = 0x40000LL;
    goto LABEL_39;
  }
LABEL_20:
  pszDest = (wchar_t *)operator new[](520LL, 0x4B677844u, 258LL);
  v19 = pszDest;
  if ( !pszDest )
  {
    _InterlockedAdd(&dword_14008A8BC, 1u);
    WdLogSingleEntry0(6LL);
    v37 = 902;
LABEL_38:
    v38 = 262145LL;
LABEL_39:
    WdLogGlobalForLineNumber = v37;
    DxgkLogInternalTriageEvent(v36, v38);
LABEL_40:
    v39 = *(CVirtualAddressAllocator **)(v6 + 24);
    if ( v39 )
      CVirtualAddressAllocator::DestroyVaAllocator(v39);
    VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'((VIDMM_PROCESS_ADAPTER_INFO *)v6);
    return 0LL;
  }
  for ( j = 0; j < *((_DWORD *)a2 + 1738); ++j )
  {
    v21 = 304LL * (unsigned __int16)j + *v17 + 8LL;
    v22 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
    *(_QWORD *)(v21 + 16) = v6;
    v23 = (_QWORD *)(v21 + 24);
    do
    {
      SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(a2, j, v22++, this[42]);
      *v23++ = *((_QWORD *)SegmentGroupState + 4);
    }
    while ( v22 < 2 );
    v25 = *((_QWORD *)a2 + 3);
    v3 = this;
    v19 = pszDest;
    DestinationString = 0LL;
    LODWORD(v55) = j;
    LODWORD(v54) = *(_DWORD *)(v25 + 412);
    LODWORD(Data) = *(_DWORD *)(v25 + 416);
    v4 = RtlStringCbPrintfW(
           pszDest,
           0x208uLL,
           L"pid_%u_luid_0x%08X_0x%08X_phys_%u",
           *((unsigned int *)this + 6),
           Data,
           v54,
           v55);
    if ( v4 < 0 )
    {
      WdLogSingleEntry0(1LL);
      v27 = 928;
      v28 = 0x40000LL;
      goto LABEL_28;
    }
    RtlInitUnicodeString(&DestinationString, pszDest);
    v57.Data = (const void *)v21;
    v57.Size = 296;
    v4 = PcwCreateInstance(
           (PPCW_INSTANCE *)(v21 + 248),
           GpuPerformanceCounterSetProcessMemory,
           &DestinationString,
           1u,
           &v57);
    if ( v4 < 0 )
    {
      _InterlockedAdd(&dword_14008A8BC, 1u);
      WdLogSingleEntry0(6LL);
      v27 = 936;
      v28 = 262145LL;
LABEL_28:
      WdLogGlobalForLineNumber = v27;
      DxgkLogInternalTriageEvent(v26, v28);
      break;
    }
    v17 = (_QWORD *)(v6 + 8);
  }
  operator delete(v19);
  if ( v4 < 0 )
    goto LABEL_40;
  v29 = *(_DWORD *)(*(_QWORD *)v56 + 24LL);
  if ( dword_14008A3D8 )
    v30 = v29 & 0xFFFFFFF8 | 6;
  else
    v30 = v29 | 7;
  *(_DWORD *)(*(_QWORD *)v56 + 24LL) = v30;
  if ( (VIDMM_GLOBAL::_Config & 4) != 0
    && DXGPROCESS::GetCurrent()
    && (*((_DWORD *)DXGPROCESS::GetCurrent() + 102) & 4) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)v56 + 36LL) = 1;
  }
  *(_QWORD *)v6 = a2;
  *(_DWORD *)(v6 + 136) = 1;
  *(_QWORD *)(v6 + 16) = v3;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)&DestinationString,
    (struct _KTHREAD **)a2 + 5152);
  v42 = (_QWORD *)((char *)a2 + 41264);
  v43 = *((_QWORD *)a2 + 5158);
  v44 = (_QWORD *)(v6 + 40);
  if ( *(struct VIDMM_GLOBAL **)(v43 + 8) != (struct VIDMM_GLOBAL *)((char *)a2 + 41264) )
LABEL_53:
    __fastfail(3u);
  *v44 = v43;
  *(_QWORD *)(v6 + 48) = v42;
  *(_QWORD *)(v43 + 8) = v44;
  *v42 = v44;
  v45 = *((_QWORD *)a2 + 5653);
  *((_QWORD *)a2 + 5653) = v45 + 1;
  *(_QWORD *)(v6 + 104) = v45;
  if ( (unsigned int)Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline() )
  {
    v50 = *(DXGPROCESS **)(*(_QWORD *)(v6 + 16) + 72LL);
    if ( v50 )
    {
      if ( DXGPROCESS::UmdManagesResidency(v50) )
      {
        v51 = (struct VIDMM_GLOBAL **)*((_QWORD *)a2 + 5022);
        v52 = (struct VIDMM_GLOBAL *)(v6 + 56);
        if ( *v51 != (struct VIDMM_GLOBAL *)((char *)a2 + 40168) )
          goto LABEL_53;
        *(_QWORD *)v52 = (char *)a2 + 40168;
        *(_QWORD *)(v6 + 64) = v51;
        *v51 = v52;
        *((_QWORD *)a2 + 5022) = v52;
      }
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&DestinationString);
  VIDMM_GLOBAL::RequestNewBudget(a2, 1);
  return (struct VIDMM_PROCESS_ADAPTER_INFO *)v6;
}
