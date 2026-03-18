/*
 * XREFs of AcquireResidentSystemAddressInCpuHostAperture @ 0x1400B10FC
 * Callers:
 *     AcquireResidentSystemAddress_0 @ 0x1401034F8 (AcquireResidentSystemAddress_0.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEBUVIDMM_PHYSICAL_ALLOC@@_K2_N@Z @ 0x14010384C (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEBUVIDMM_PHYSICAL_AL.c)
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K1PEAU2@@Z @ 0x140103CF0 (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K1.c)
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAXPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x140103F98 (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAXPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1401103FC (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x140124588 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 */

__int64 __fastcall AcquireResidentSystemAddressInCpuHostAperture(
        struct VIDMM_PHYSICAL_ALLOC *a1,
        unsigned __int64 a2,
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_CPU_HOST_APERTURE_RANGE **a4,
        struct _MDL **a5,
        __int64 *a6)
{
  unsigned __int64 v6; // rax
  int v11; // eax
  struct VIDMM_CPU_HOST_APERTURE_RANGE *v12; // rbx
  int v13; // edi
  struct _MDL *v14; // rbp
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v16; // rcx
  struct _MDL **v17; // rax
  struct _MDL **v19; // rax
  struct VIDMM_CPU_HOST_APERTURE_RANGE *v20; // [rsp+60h] [rbp+8h] BYREF

  v6 = *((_QWORD *)a1 + 2);
  v20 = 0LL;
  v11 = VIDMM_CPU_HOST_APERTURE::AcquireRange(this, 0LL, &v20, a2, v6);
  v12 = v20;
  v13 = v11;
  if ( v11 >= 0 )
  {
    v13 = VIDMM_CPU_HOST_APERTURE::MapRange(this, v20, a1, a2, *((_QWORD *)a1 + 2), 0);
    if ( v13 >= 0 )
    {
      v14 = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(this, v12, a2, *((_QWORD *)a1 + 2), 0LL);
      if ( v14 )
      {
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        v16 = (*((__int64 (__fastcall **)(struct _MDL *, _QWORD, __int64))VirtualMemoryInterface + 5))(v14, 0LL, 2LL);
        if ( v16 )
        {
          v19 = a5;
          *a4 = v12;
          *v19 = v14;
          *a6 = v16;
          return 0LL;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1112;
        v13 = -1073741801;
        ExFreePoolWithTag(v14, 0);
      }
      else
      {
        WdLogSingleEntry1(3LL, a1);
        WdLogGlobalForLineNumber = 1092;
        v13 = -1073741801;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, a1);
      WdLogGlobalForLineNumber = 1078;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, a1);
    WdLogGlobalForLineNumber = 1066;
  }
  if ( v12 )
  {
    if ( *((_DWORD *)v12 + 9) != -1 )
      VIDMM_CPU_HOST_APERTURE::UnmapRange(this, v12);
    VIDMM_CPU_HOST_APERTURE::ReleaseRange(this, v12);
  }
  v17 = a5;
  *a4 = 0LL;
  *v17 = 0LL;
  *a6 = 0LL;
  return (unsigned int)v13;
}
