/*
 * XREFs of MapInCpuHostAperture @ 0x140103194
 * Callers:
 *     MapInVideoMemory @ 0x140102EA8 (MapInVideoMemory.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?ReclaimRange@VIDMM_CPU_HOST_APERTURE@@QEAA_NPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x140103438 (-ReclaimRange@VIDMM_CPU_HOST_APERTURE@@QEAA_NPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEBUVIDMM_PHYSICAL_ALLOC@@_K2_N@Z @ 0x14010384C (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEBUVIDMM_PHYSICAL_AL.c)
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K1PEAU2@@Z @ 0x140103CF0 (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K1.c)
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAXPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x140103F98 (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAXPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z.c)
 *     ?OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x14011D334 (-OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x140124588 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 */

__int64 __fastcall MapInCpuHostAperture(__int64 a1, __int64 a2, __int64 **a3)
{
  unsigned int v3; // edi
  VIDMM_CPU_HOST_APERTURE *v4; // r14
  char v5; // r13
  char v6; // r12
  __int64 v7; // rbx
  unsigned __int64 *v8; // rsi
  struct VIDMM_CPU_HOST_APERTURE_RANGE **v9; // r15
  __int64 v10; // rcx
  __int64 v12; // rbp
  struct _MDL *v13; // r15
  int v14; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct VIDMM_CPU_HOST_APERTURE_RANGE *v18; // rdx

  v3 = 0;
  v4 = *(VIDMM_CPU_HOST_APERTURE **)(a2 + 512);
  v5 = 0;
  v6 = 0;
  v7 = **a3;
  v8 = *(unsigned __int64 **)v7;
  v9 = (struct VIDMM_CPU_HOST_APERTURE_RANGE **)(*(_QWORD *)v7 + 144LL);
  if ( *v9 && VIDMM_CPU_HOST_APERTURE::ReclaimRange(v4, *v9) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v10);
      WdLogGlobalForLineNumber = 4038;
    }
LABEL_5:
    *(_BYTE *)(v7 + 43) = 1;
    return v3;
  }
  LODWORD(v12) = VIDMM_CPU_HOST_APERTURE::AcquireRange(v4, v8, v9, v8[9], v8[2]);
  if ( (int)v12 < 0 )
  {
    WdLogSingleEntry1(3LL, v8);
    WdLogGlobalForLineNumber = 4057;
  }
  else
  {
    v5 = 1;
    LODWORD(v12) = VIDMM_CPU_HOST_APERTURE::MapRange(v4, *v9, (const struct VIDMM_PHYSICAL_ALLOC *)v8, v8[9], v8[2], 0);
    if ( (int)v12 < 0 )
    {
      WdLogSingleEntry1(3LL, v8);
      WdLogGlobalForLineNumber = 4070;
    }
    else
    {
      v6 = 1;
      v13 = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(v4, *v9, v8[9], v8[2], 0LL);
      if ( v13 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, struct _MDL *, unsigned __int64, _QWORD, _QWORD, _DWORD))(**(_QWORD **)(*v8 + 216) + 48LL))(
                *(_QWORD *)(*v8 + 216),
                a1,
                *(_QWORD *)(*v8 + 224),
                1LL,
                v13,
                v8[2],
                0LL,
                0LL,
                0);
        v12 = v14;
        if ( v14 >= 0 )
        {
          v15 = v8[8];
          if ( !v15 )
            v15 = v8[16];
          _InterlockedIncrement((volatile signed __int32 *)(v15 + 520));
          *(_BYTE *)(v7 + 36) |= 1u;
          v3 = v12;
          goto LABEL_5;
        }
        ExFreePoolWithTag(v13, 0);
        WdLogSingleEntry1(1LL, v12);
        WdLogGlobalForLineNumber = 4104;
        DxgkLogInternalTriageEvent(v16, 0x40000LL);
      }
      else
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4084;
        DxgkLogInternalTriageEvent(v17, 0x40000LL);
        LODWORD(v12) = -1073741801;
      }
    }
  }
  v18 = (struct VIDMM_CPU_HOST_APERTURE_RANGE *)v8[18];
  if ( v18 )
  {
    if ( v6 )
    {
      VIDMM_CPU_HOST_APERTURE::OfferRange(v4, v18);
    }
    else if ( v5 )
    {
      VIDMM_CPU_HOST_APERTURE::ReleaseRange(v4, v18);
      v8[18] = 0LL;
    }
  }
  return (unsigned int)v12;
}
