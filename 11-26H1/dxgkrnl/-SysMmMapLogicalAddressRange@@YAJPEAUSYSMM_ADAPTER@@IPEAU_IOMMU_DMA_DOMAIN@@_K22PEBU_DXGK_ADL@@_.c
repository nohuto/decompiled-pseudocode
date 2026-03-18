/*
 * XREFs of ?SysMmMapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@IPEAU_IOMMU_DMA_DOMAIN@@_K22PEBU_DXGK_ADL@@_N@Z @ 0x140287230
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SysMmMapLogicalAddressRange(
        struct SYSMM_ADAPTER *a1,
        unsigned int a2,
        struct _IOMMU_DMA_DOMAIN *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        const struct _DXGK_ADL *a7,
        bool a8)
{
  struct _IOMMU_DMA_DOMAIN *v8; // r10
  __int64 v9; // rax
  const wchar_t *v10; // r9
  int v11; // edx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+50h] [rbp-20h] BYREF
  _DWORD v16[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h]
  unsigned __int64 v18; // [rsp+68h] [rbp-8h]
  __int64 v19; // [rsp+98h] [rbp+28h] BYREF

  v19 = a4;
  v8 = a3;
  if ( (((unsigned __int16)a6 | (unsigned __int16)(a5 | a4)) & 0xFFF) != 0 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 1182LL;
    v10 = L"Unaligned address";
    goto LABEL_13;
  }
  if ( !a3 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 45) + 48LL * a2 + 16) & 0x10) == 0 )
    {
      WdLogSingleEntry0(1LL);
      v9 = 1198LL;
      v10 = L"The global adapter domain can be used only with GpuVaIommuGlobalRequired";
      v11 = 262146;
LABEL_14:
      WdLogGlobalForLineNumber = v9;
      DxgkLogInternalTriageEvent(0LL, v11, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
      return 3221225485LL;
    }
    v8 = (struct _IOMMU_DMA_DOMAIN *)*((_QWORD *)a1 + 14);
  }
  if ( a5 >> 12 > *(unsigned int *)a7 - (a6 >> 12) )
  {
    WdLogSingleEntry0(2LL);
    v9 = 1208LL;
    v10 = L"Unaligned AdlOffset";
LABEL_13:
    v11 = 0x40000;
    goto LABEL_14;
  }
  v12 = *((_DWORD *)a7 + 1);
  v13 = *((_QWORD *)a7 + 1);
  v16[1] = 0;
  if ( (v12 & 1) != 0 )
  {
    v17 = v13 << 12;
    v16[0] = 1;
    v18 = a5;
  }
  else
  {
    v16[0] = 2;
    v17 = v13 + 8 * (a6 >> 12);
    v18 = a5 >> 12;
  }
  v15 = 0LL;
  return ((__int64 (__fastcall *)(struct _IOMMU_DMA_DOMAIN *, _QWORD, _DWORD *, __int64 *, _QWORD, _QWORD, __int64 *))qword_140169618)(
           v8,
           2 * !a8 + 1,
           v16,
           &v19,
           0LL,
           0LL,
           &v15);
}
