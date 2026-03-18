/*
 * XREFs of ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIQEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x140286618
 * Callers:
 *     DpiFdoCreateSysMmAdapter @ 0x14023FEBC (DpiFdoCreateSysMmAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??$SmmInitializeSpinLock@$00@@YAXPEAU?$SYSMM_SPINLOCK@$00@@@Z @ 0x14009BAE0 (--$SmmInitializeSpinLock@$00@@YAXPEAU-$SYSMM_SPINLOCK@$00@@@Z.c)
 *     ??0DXGK_LOG@@QEAA@XZ @ 0x14009D7CC (--0DXGK_LOG@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?SmmInitializeIommu@@YAJPEAUSYSMM_IOMMU@@PEBUSYSMM_ADAPTER_CREATE_PARAMS@@@Z @ 0x1402850B4 (-SmmInitializeIommu@@YAJPEAUSYSMM_IOMMU@@PEBUSYSMM_ADAPTER_CREATE_PARAMS@@@Z.c)
 *     ?SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x140285ADC (-SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x140285CDC (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 *     SmmCreateHardwareReservedRanges @ 0x140285FC8 (SmmCreateHardwareReservedRanges.c)
 *     SmmInitializeDmaDevices @ 0x140286178 (SmmInitializeDmaDevices.c)
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x140286DB8 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14028785C (-SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@.c)
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1402879D0 (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 */

__int64 __fastcall SysMmCreateAdapter(
        struct _DEVICE_OBJECT *a1,
        struct _DEVICE_OBJECT **a2,
        unsigned int a3,
        struct _DXGK_PHYSICAL_MEMORY_RANGE *a4,
        unsigned int a5,
        unsigned int a6,
        struct SYSMM_ADAPTER_CREATE_PARAMS *a7,
        struct SYSMM_ADAPTER **a8)
{
  __int64 v10; // rbp
  unsigned int v11; // edi
  unsigned __int64 v12; // rbx
  void *v13; // rax
  __int64 v14; // r14
  int v15; // ecx
  int v16; // eax
  int HardwareReservedRanges; // edi
  __int64 v18; // rbx
  __int64 Pool2; // rax
  unsigned int v21; // r10d
  __int64 v22; // r8
  _QWORD *v23; // rdx
  __int64 v24; // r9
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rax
  const wchar_t *v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  int v31; // eax
  unsigned __int64 v32; // rax
  struct SYSMM_LOGICAL_ALLOCATOR **v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // r14
  unsigned int v36; // ebp
  struct SYSMM_LOGICAL_BLOCK **v37; // r9
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r8
  char v40; // [rsp+50h] [rbp-78h]
  __int128 SystemInformation; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v43; // [rsp+78h] [rbp-50h]

  v10 = a3;
  v11 = 0;
  v40 = 1;
  if ( a3 )
  {
    do
    {
      SystemInformation = 0LL;
      v12 = *((_QWORD *)a7 + 3 * v11);
      v43 = 0LL;
      if ( ZwQuerySystemInformation(SystemPrefetcherInformation|0x80, &SystemInformation, 0x18u, 0LL) < 0 || v12 < v43 )
      {
        v40 = 0;
        if ( (*((_DWORD *)a7 + 6 * v11 + 4) & 4) == 0 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 502;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Highest address is not visible and DmaRemappingSupported is false",
            502LL,
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225473LL;
        }
        if ( (dword_1401696C0 & 0x100) != 0 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 513;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Highest address is not visible and IdentityMappedPassthrough is true",
            513LL,
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225659LL;
        }
      }
      ++v11;
    }
    while ( v11 < (unsigned int)v10 );
  }
  v13 = (void *)operator new(0x180uLL, 0x30737844u, 64LL);
  v14 = (__int64)v13;
  if ( !v13 )
  {
    _InterlockedIncrement(&dword_140169700);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 528;
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)L"Failed to allocate SYSMM_ADAPTER", 528LL, 0LL, 0LL, 0LL, 0LL);
    HardwareReservedRanges = -1073741801;
    goto LABEL_76;
  }
  memset(v13, 0, 0x180uLL);
  DXGK_LOG::DXGK_LOG((DXGK_LOG *)(v14 + 256));
  *(_DWORD *)(v14 + 16) = a6;
  *(_QWORD *)v14 = a1;
  *(_QWORD *)(v14 + 360) = 0LL;
  *(_DWORD *)(v14 + 24) = v10;
  *(_QWORD *)(v14 + 8) = *(_QWORD *)a7;
  *(_DWORD *)(v14 + 20) = 0;
  v15 = *((_DWORD *)a7 + 3) & 1;
  *(_DWORD *)(v14 + 20) = v15;
  v16 = *((_DWORD *)a7 + 3) & 2;
  *(_QWORD *)(v14 + 352) = 0LL;
  *(_QWORD *)(v14 + 368) = 0LL;
  *(_DWORD *)(v14 + 20) = v15 | v16;
  *(_DWORD *)(v14 + 28) = 0;
  SmmInitializeSpinLock<1>((_DWORD *)(v14 + 32));
  *(_QWORD *)(v14 + 48) = v14 + 40;
  *(_QWORD *)(v14 + 40) = v14 + 40;
  HardwareReservedRanges = SmmInitializeIommu((struct SYSMM_IOMMU *)(v14 + 64), a7);
  v18 = v14;
  if ( HardwareReservedRanges >= 0 )
  {
    Pool2 = ExAllocatePool2(256LL, 48 * v10, 930314308LL);
    *(_QWORD *)(v14 + 360) = Pool2;
    if ( !Pool2 )
    {
      _InterlockedIncrement(&dword_140169700);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 557;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate SYSMM_PHYSICAL_ADAPTER array",
        557LL,
        0LL,
        0LL,
        0LL,
        0LL);
      HardwareReservedRanges = -1073741801;
      goto LABEL_11;
    }
    v21 = 0;
    if ( (_DWORD)v10 )
    {
      v22 = 0LL;
      v23 = (_QWORD *)((char *)a7 + 16);
      while ( 1 )
      {
        v24 = *(_QWORD *)(v14 + 360);
        *(_QWORD *)(v22 + v24 + 40) = *a2;
        v25 = *((_DWORD *)v23 - 1);
        if ( (((unsigned __int8)v25 ^ *(_BYTE *)(v14 + 20)) & 1) != 0
          || (((unsigned __int8)*(_DWORD *)(v14 + 20) ^ (unsigned __int8)v25) & 2) != 0 )
        {
          break;
        }
        *(_OWORD *)(v22 + v24) = *((_OWORD *)v23 - 1);
        *(_QWORD *)(v22 + v24 + 16) = *v23;
        if ( (*(_DWORD *)v23 & 1) != 0 )
          *(_DWORD *)(v14 + 88) |= 1u;
        if ( (*(_DWORD *)v23 & 8) != 0 )
          *(_DWORD *)(v14 + 88) |= 8u;
        if ( (*(_DWORD *)v23 & 0x10) != 0 )
          *(_DWORD *)(v14 + 88) |= 0x10u;
        if ( (*(_DWORD *)v23 & 4) != 0 )
          *(_DWORD *)(v14 + 88) |= 4u;
        v26 = *(_QWORD *)(v14 + 8);
        if ( v26 >= *(v23 - 2) )
          v26 = *(v23 - 2);
        ++v21;
        v22 += 48LL;
        *(_QWORD *)(v14 + 8) = v26;
        ++a2;
        v23 += 3;
        if ( v21 >= (unsigned int)v10 )
          goto LABEL_29;
      }
      WdLogSingleEntry0(2LL);
      v27 = 570LL;
      v28 = L"LDA Iommu miscofiguration";
      goto LABEL_32;
    }
LABEL_29:
    if ( (*(_BYTE *)(v14 + 88) & 0x18) == 0x18 )
    {
      WdLogSingleEntry0(2LL);
      v27 = 604LL;
      v28 = L"Both GpuVaIommuRequired and GpuVaIommuGlobalRequired are defined";
LABEL_32:
      WdLogGlobalForLineNumber = v27;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v28, v27, 0LL, 0LL, 0LL, 0LL);
      HardwareReservedRanges = -1073741811;
      goto LABEL_11;
    }
    HardwareReservedRanges = SmmCreateHardwareReservedRanges(v14, (__int128 *)a4, a5);
    if ( HardwareReservedRanges >= 0 )
    {
      if ( (*(_DWORD *)(v14 + 20) & 1) == 0 )
      {
        HardwareReservedRanges = SmmInitializeDmaDevices(v14, v29, v30);
        if ( HardwareReservedRanges < 0 )
          goto LABEL_11;
        if ( (*(_DWORD *)(v14 + 20) & 2) == 0 )
        {
          HardwareReservedRanges = SmmUnblockDevice((struct SYSMM_ADAPTER *)v14);
          if ( HardwareReservedRanges < 0 )
          {
            WdLogSingleEntry1(4LL);
            WdLogGlobalForLineNumber = 637;
            goto LABEL_11;
          }
          v31 = *(_DWORD *)(v14 + 88);
          if ( (v31 & 8) != 0 )
          {
            HardwareReservedRanges = SysMmEnableIommu(v14, 0x80u);
            if ( HardwareReservedRanges < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 653;
              goto LABEL_11;
            }
            *(_DWORD *)(v14 + 92) |= 2u;
          }
          else if ( (v31 & 0x10) != 0 )
          {
            HardwareReservedRanges = SysMmEnableIommu(v14, 0x100u);
            if ( HardwareReservedRanges < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 663;
              goto LABEL_11;
            }
            *(_DWORD *)(v14 + 92) |= 4u;
          }
          if ( (dword_1401696C0 & 3) != 0 && (*(_DWORD *)(v14 + 88) & 5) != 0 )
          {
            HardwareReservedRanges = SysMmEnableIommu(v14, 8u);
            if ( HardwareReservedRanges < 0 )
            {
              if ( (dword_1401696C0 & 3) != 2 )
                goto LABEL_11;
              WdLogSingleEntry1(4LL);
              WdLogGlobalForLineNumber = 684;
            }
          }
          if ( (*(_DWORD *)(v14 + 88) & 2) != 0 )
          {
            HardwareReservedRanges = SysMmEnableIommu(v14, 0x20u);
            if ( HardwareReservedRanges < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 704;
              goto LABEL_11;
            }
          }
          if ( !v40
            || (dword_1401696C0 & 0x80u) != 0 && (*(_DWORD *)(v14 + 88) & 4) != 0
            || (*(_DWORD *)(v14 + 88) & 0x10) != 0 )
          {
            if ( (*(_DWORD *)(v14 + 88) & 4) == 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 720;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pAdapter->Iommu.Caps.DmaRemappingSupported",
                720LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v32 = *(_QWORD *)(v14 + 8);
            v33 = (struct SYSMM_LOGICAL_ALLOCATOR **)(v14 + 352);
            *(_DWORD *)(v14 + 92) |= 1u;
            v34 = 0xFFFFFFFFFFFFLL;
            if ( v32 < 0xFFFFFFFFFFFFLL )
              v34 = v32;
            v35 = v34 + 1;
            HardwareReservedRanges = SmmCreateLogicalAllocator(v34 + 1, v33);
            if ( HardwareReservedRanges < 0 )
            {
              WdLogSingleEntry1(4LL);
              WdLogGlobalForLineNumber = 733;
              goto LABEL_11;
            }
            v36 = 0;
            if ( a5 )
            {
              while ( 1 )
              {
                v37 = (struct SYSMM_LOGICAL_BLOCK **)(*(_QWORD *)(v18 + 368) + 24LL * v36);
                v38 = (unsigned __int64)*v37;
                if ( (unsigned __int64)*v37 < v35 )
                {
                  v39 = (unsigned __int64)v37[1];
                  if ( v38 + v39 > v35 )
                    v39 = v35 - v38;
                  HardwareReservedRanges = SmmAllocateLogicalAddressAt(
                                             *(struct SYSMM_LOGICAL_ALLOCATOR **)(v18 + 352),
                                             v38,
                                             v39,
                                             v37,
                                             v37 + 2);
                  if ( HardwareReservedRanges < 0 )
                    break;
                }
                if ( ++v36 >= a5 )
                  goto LABEL_71;
              }
              WdLogSingleEntry1(4LL);
              WdLogGlobalForLineNumber = 765;
              goto LABEL_11;
            }
LABEL_71:
            HardwareReservedRanges = SysMmEnableIommu(v18, 2u);
            if ( HardwareReservedRanges < 0 )
            {
              WdLogSingleEntry1(4LL);
              WdLogGlobalForLineNumber = 779;
              goto LABEL_11;
            }
          }
        }
      }
      *a8 = (struct SYSMM_ADAPTER *)v18;
      return 0LL;
    }
  }
LABEL_11:
  SysMmDestroyAdapter((struct SYSMM_ADAPTER *)v18);
LABEL_76:
  *a8 = 0LL;
  return (unsigned int)HardwareReservedRanges;
}
