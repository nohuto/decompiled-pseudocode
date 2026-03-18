/*
 * XREFs of ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAXPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x140103F98
 * Callers:
 *     AcquireResidentSystemAddressInCpuHostAperture @ 0x1400B10FC (AcquireResidentSystemAddressInCpuHostAperture.c)
 *     ?AddReservedRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEAPEAXPEAPEAU_MDL@@_K3@Z @ 0x1400BC208 (-AddReservedRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEAPEAXPEA.c)
 *     ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EEEW4VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1400F9790 (-ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EEEW4VIDMM_PLACEMEN.c)
 *     MapInCpuHostAperture @ 0x140103194 (MapInCpuHostAperture.c)
 * Callees:
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x140043A8C (McTemplateK0ppqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     AllocateCpuHostApertureRange @ 0x14010432C (AllocateCpuHostApertureRange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_CPU_HOST_APERTURE::AcquireRange(
        VIDMM_CPU_HOST_APERTURE *this,
        void *a2,
        struct VIDMM_CPU_HOST_APERTURE_RANGE **a3,
        __int64 a4,
        unsigned __int64 a5)
{
  struct VIDMM_CPU_HOST_APERTURE_RANGE **v6; // r14
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  unsigned int v12; // ecx
  __int64 CpuHostApertureRange; // rsi
  __int64 v15; // r8
  _QWORD *v16; // rcx
  char v17; // bp
  __int64 v18; // r12
  VIDMM_CPU_HOST_APERTURE *v19; // r14
  VIDMM_CPU_HOST_APERTURE *v20; // r8
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // [rsp+28h] [rbp-40h]

  v6 = a3;
  v8 = *(unsigned int *)(*((_QWORD *)this + 6) + 124LL);
  v9 = ~(unsigned __int64)(unsigned int)(v8 - 1);
  v10 = (v9 & (a5 + a4 + (unsigned int)(v8 - 1) - (a4 & v9))) % v8;
  v11 = (v9 & (a5 + a4 + (unsigned int)(v8 - 1) - (a4 & v9))) / v8;
  if ( !(_DWORD)v11 && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  v12 = *((_DWORD *)this + 18);
  if ( v12 < (unsigned int)v11 )
  {
    v10 = *((_QWORD *)this + 2);
    if ( (VIDMM_CPU_HOST_APERTURE *)v10 == (VIDMM_CPU_HOST_APERTURE *)((char *)this + 16) )
    {
LABEL_8:
      WdLogSingleEntry3(4LL, (unsigned int)v11, v12, v8);
      WdLogGlobalForLineNumber = 545;
      return 3221225495LL;
    }
    while ( 1 )
    {
      v12 += *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * *(unsigned int *)(v10 + 32));
      if ( v12 >= (unsigned int)v11 )
        break;
      v10 = *(_QWORD *)v10;
      if ( (VIDMM_CPU_HOST_APERTURE *)v10 == (VIDMM_CPU_HOST_APERTURE *)((char *)this + 16) )
        goto LABEL_8;
    }
  }
  CpuHostApertureRange = AllocateCpuHostApertureRange((unsigned int)v11, v10);
  if ( !CpuHostApertureRange )
    return 3221225495LL;
  v16 = (_QWORD *)*((_QWORD *)this + 6);
  v17 = *(_BYTE *)(*v16 + 6987LL) & 1;
  if ( v17 || *((_DWORD *)this + 18) < (unsigned int)v11 )
  {
    v18 = v16[1];
    v19 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 2);
    while ( v19 != (VIDMM_CPU_HOST_APERTURE *)((char *)this + 16) )
    {
      v20 = v19;
      v19 = *(VIDMM_CPU_HOST_APERTURE **)v19;
      (*(void (__fastcall **)(__int64, VIDMM_CPU_HOST_APERTURE *, VIDMM_CPU_HOST_APERTURE *))(*(_QWORD *)v18 + 304LL))(
        v18,
        this,
        v20);
      if ( !v17 && *((_DWORD *)this + 18) >= (unsigned int)v11 )
        break;
    }
    v6 = a3;
  }
  v21 = *((unsigned int *)this + 19);
  v22 = v11 - 1;
  *(_DWORD *)(CpuHostApertureRange + 28) = v21;
  if ( (_DWORD)v11 != 1 )
  {
    do
    {
      v21 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v21);
      --v22;
    }
    while ( v22 );
  }
  *(_DWORD *)(CpuHostApertureRange + 32) = v21;
  v23 = *((_QWORD *)this + 5);
  *((_DWORD *)this + 19) = *(_DWORD *)(v23 + 4 * v21);
  *(_DWORD *)(v23 + 4LL * (unsigned int)v21) = v11;
  *((_DWORD *)this + 18) -= v11;
  *(_QWORD *)(CpuHostApertureRange + 16) = a2;
  *v6 = (struct VIDMM_CPU_HOST_APERTURE_RANGE *)CpuHostApertureRange;
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    LODWORD(v24) = 0;
    McTemplateK0ppqq_EtwWriteTransfer(
      v23,
      &EventCpuHostApertureAcquireRange,
      v15,
      **((_QWORD **)this + 6),
      a2,
      v24,
      v11);
  }
  return 0LL;
}
