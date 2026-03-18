/*
 * XREFs of ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_RESET_BACKING_STORE_REASON@@@Z @ 0x14010FE30
 * Callers:
 *     ?VidMmReleaseTemporaryResourcesForLegacyAllocation@@YAXPEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@PEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N@Z @ 0x1400B37E4 (-VidMmReleaseTemporaryResourcesForLegacyAllocation@@YAXPEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@PEAUVI.c)
 *     ProcessSystemMemoryOfferList @ 0x14010E534 (ProcessSystemMemoryOfferList.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14012A730 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14012ACD0 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCA.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z @ 0x14012B6B8 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x14012C3C4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqtt_EtwWriteTransfer @ 0x140041490 (McTemplateK0pqtt_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400F57D0 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400F57F0 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x140110248 (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ResetBackingStore(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rbp
  __int64 v5; // rcx
  int IsActive; // eax
  __int64 v8; // rdx
  int v9; // r9d
  bool v10; // cl
  bool v11; // r14
  __int64 v12; // rcx
  int v13; // esi
  int v14; // esi
  VIDMM_PROCESS *v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-98h]
  __int64 v20; // [rsp+28h] [rbp-90h]
  __int64 v21; // [rsp+30h] [rbp-88h]
  struct _KAPC_STATE v22; // [rsp+58h] [rbp-60h] BYREF
  PRKPROCESS *v23; // [rsp+88h] [rbp-30h]

  v3 = *a2;
  v5 = a2[6];
  if ( v5 )
  {
    if ( (*((_BYTE *)a2 + 36) & 1) != 0 )
    {
      *((_DWORD *)a2 + 6) |= 0x400000u;
      return;
    }
    if ( (*((_DWORD *)a2 + 7) & 0x100) != 0 )
    {
      if ( a3 == 1 )
      {
        v11 = 1;
      }
      else
      {
        if ( (a3 & 0xFFFFFFFD) != 0 )
          return;
        IsActive = VIDMM_POLICY::IsActive((VIDMM_POLICY *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 32LL)
                                                                                 + 8LL
                                                                                 * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 240LL))
                                                                     + 184LL)
                                                         + 24LL));
        v9 = *(_DWORD *)(v8 + 36);
        v10 = IsActive != 0;
        v11 = v9 != 0;
        if ( v9 )
          v10 = IsActive != 0;
        if ( !v10 )
          return;
      }
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 40320) + 8LL * ((*(_DWORD *)(v3 + 52) >> 2) & 0x3F));
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 216LL))(v12, v3);
      v13 = 4;
      if ( *(_WORD *)(a2[46] + 8) == 3 )
      {
        if ( *((_DWORD *)a2 + 72) == 1 )
        {
          v13 = 3;
        }
        else if ( *((_DWORD *)a2 + 72) == 3 )
        {
          v13 = 5;
        }
      }
      v23 = *(PRKPROCESS **)(a2[6] + 8);
      VIDMM_PROCESS::SafeAttach(v23, &v22);
      v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, bool))(*(_QWORD *)a2[27] + 32LL))(
              a2[27],
              a2[28],
              *(_QWORD *)(a2[6] + 16),
              *(_QWORD *)(v3 + 16),
              v13,
              v11);
      VIDMM_PROCESS::SafeDetach(v15, &v22);
      if ( v14 < 0 )
      {
        _InterlockedIncrement(&dword_14008A748);
        WdLogSingleEntry0(6LL);
        HIDWORD(v21) = 0;
        HIDWORD(v20) = 0;
        WdLogGlobalForLineNumber = 7447;
        HIDWORD(v19) = 0;
        DxgkLogInternalTriageEvent(v18, 262145LL);
        *((_DWORD *)a2 + 6) |= 0x400000u;
      }
      v17 = *(_QWORD *)(v3 + 16);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 7360));
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 7368), v17);
      if ( (byte_14008A201 & 1) != 0 )
      {
        LODWORD(v21) = v14 >= 0;
        LODWORD(v20) = v11;
        LODWORD(v19) = *(_QWORD *)(v3 + 16) >> 12;
        McTemplateK0pqtt_EtwWriteTransfer(*(_QWORD *)(v3 + 16) >> 12, v14 >= 0, v16, a2, v19, v20, v21);
      }
      if ( v14 >= 0 )
        *((_DWORD *)a2 + 8) |= 8u;
    }
  }
}
