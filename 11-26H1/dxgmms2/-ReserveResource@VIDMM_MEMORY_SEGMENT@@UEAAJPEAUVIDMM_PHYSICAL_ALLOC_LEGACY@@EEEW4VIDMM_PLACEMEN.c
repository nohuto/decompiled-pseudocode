/*
 * XREFs of ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EEEW4VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1400F9790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EEEW4VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1400F98E0 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EEEW4VIDMM_PLACEMENT_RESTR.c)
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAXPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x140103F98 (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAXPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::ReserveResource(
        __int64 a1,
        struct VIDMM_CPU_HOST_APERTURE_RANGE **a2,
        __int64 a3)
{
  struct VIDMM_CPU_HOST_APERTURE_RANGE *v3; // rbp
  int v6; // esi
  __int64 result; // rax
  VIDMM_CPU_HOST_APERTURE *v8; // rcx
  int v9; // eax
  struct VIDMM_CPU_HOST_APERTURE_RANGE *v10; // r9
  struct VIDMM_CPU_HOST_APERTURE_RANGE *v11; // r8
  void (__fastcall *v12)(__int64, struct VIDMM_CPU_HOST_APERTURE_RANGE **, struct VIDMM_CPU_HOST_APERTURE_RANGE *, struct VIDMM_CPU_HOST_APERTURE_RANGE *, unsigned __int64); // rax
  unsigned __int64 v13; // [rsp+20h] [rbp-28h]

  v3 = *a2;
  if ( !*((_BYTE *)*a2 + 40) || (*(_DWORD *)(a1 + 64) & 4) != 0 || *(_QWORD *)(a1 + 512) )
  {
    v6 = VIDMM_SEGMENT::ReserveResource(a1, a2, a3);
    if ( v6 >= 0 )
    {
      if ( *((_BYTE *)v3 + 40) )
      {
        v8 = *(VIDMM_CPU_HOST_APERTURE **)(a1 + 512);
        if ( v8 )
        {
          v9 = VIDMM_CPU_HOST_APERTURE::AcquireRange(v8, a2, a2 + 18, (unsigned __int64)a2[15], (unsigned __int64)a2[2]);
          v6 = v9;
          if ( v9 < 0 )
          {
            WdLogSingleEntry2(3LL, a1, v9);
            v10 = a2[2];
            v11 = a2[14];
            v12 = *(void (__fastcall **)(__int64, struct VIDMM_CPU_HOST_APERTURE_RANGE **, struct VIDMM_CPU_HOST_APERTURE_RANGE *, struct VIDMM_CPU_HOST_APERTURE_RANGE *, unsigned __int64))(*(_QWORD *)a1 + 24LL);
            v13 = **((_QWORD **)v3 + 41);
            WdLogGlobalForLineNumber = 716;
            v12(a1, a2, v11, v10, v13);
            a2[16] = 0LL;
            a2[14] = 0LL;
          }
        }
      }
    }
    return (unsigned int)v6;
  }
  else
  {
    WdLogSingleEntry1(3LL, a1);
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 674;
  }
  return result;
}
