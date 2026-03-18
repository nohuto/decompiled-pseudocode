/*
 * XREFs of ?CalcApprovedPresentDuration@CGlobalCompositionSurfaceInfo@@UEBAIPEAVIOverlayMonitorTarget@@@Z @ 0x1801FE020
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180036278 (McTemplateU0qqq_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x1801044F0 (McTemplateU0qqqq_EventWriteTransfer.c)
 *     ?GetPresentDuration@CGlobalCompositionSurfaceInfo@@UEBAIXZ @ 0x1801A37A0 (-GetPresentDuration@CGlobalCompositionSurfaceInfo@@UEBAIXZ.c)
 *     ?GetPresentDurationTolerance@CGlobalCompositionSurfaceInfo@@UEBA_NPEAI@Z @ 0x1801BC130 (-GetPresentDurationTolerance@CGlobalCompositionSurfaceInfo@@UEBA_NPEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CalcApprovedPresentDuration(
        CGlobalCompositionSurfaceInfo *this,
        struct IOverlayMonitorTarget *a2)
{
  unsigned int v4; // ebx
  unsigned int PresentDuration; // eax
  unsigned int v6; // esi
  char PresentDurationTolerance; // r14
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r12
  unsigned int v11; // r9d
  unsigned int v12; // r12d
  unsigned __int64 v13; // r8
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // eax
  int v17; // r14d
  int v18; // ecx
  int v19; // esi
  int v20; // eax
  unsigned int v21; // r15d
  unsigned int v22; // r12d
  unsigned int v23; // r13d
  int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // ecx
  _DWORD v28[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v29; // [rsp+38h] [rbp-8h]
  unsigned int v30; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v31; // [rsp+90h] [rbp+50h] BYREF
  unsigned int v32; // [rsp+98h] [rbp+58h] BYREF

  v4 = 0;
  PresentDuration = CGlobalCompositionSurfaceInfo::GetPresentDuration(this);
  v32 = 0;
  v6 = PresentDuration;
  PresentDurationTolerance = CGlobalCompositionSurfaceInfo::GetPresentDurationTolerance(this, &v32);
  result = (*(__int64 (__fastcall **)(struct IOverlayMonitorTarget *))(*(_QWORD *)a2 + 280LL))(a2);
  v29 = result;
  v10 = result;
  if ( result )
  {
    if ( v6 == *((_DWORD *)this + 106)
      && v32 == *((_DWORD *)this + 107)
      && PresentDurationTolerance == *((_BYTE *)this + 432) )
    {
      v4 = *((_DWORD *)this + 105);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000000) != 0 )
      {
        v11 = -1;
        if ( PresentDurationTolerance )
          v11 = v32;
        McTemplateU0qqq_EventWriteTransfer(v9, &CustomDurationUseCachedDuration, v6, v11, v4);
      }
    }
    else
    {
      *((_DWORD *)this + 107) = v32;
      *((_DWORD *)this + 106) = v6;
      *((_BYTE *)this + 432) = PresentDurationTolerance;
    }
    if ( *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL) - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) != 8LL
      && (*(unsigned __int8 (__fastcall **)(struct IOverlayMonitorTarget *))(*(_QWORD *)a2 + 32LL))(a2) )
    {
      v12 = v6;
      (*(void (__fastcall **)(struct IOverlayMonitorTarget *, _DWORD *))(*(_QWORD *)a2 + 160LL))(a2, v28);
      v13 = 10000000 * (unsigned __int64)v28[1] / v28[0];
      if ( CCommonRegistryData::MultimonPrimaryMinFrequency
        && (unsigned int)v13 <= 0x989680u / CCommonRegistryData::MultimonPrimaryMinFrequency )
      {
        LODWORD(v13) = 0x989680u / CCommonRegistryData::MultimonPrimaryMinFrequency;
      }
      v14 = 2;
      if ( v6 > (unsigned int)v13 )
      {
        do
        {
          v15 = v6 / v14++;
          v12 = v15;
        }
        while ( v15 > (unsigned int)v13 );
      }
      v6 = v12;
      v10 = v29;
    }
    v30 = 0;
    v31 = 0;
    if ( PresentDurationTolerance )
    {
      v21 = 1;
      while ( 1 )
      {
        v22 = v6 / v21;
        v23 = v32 / v21;
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)v29 + 328LL))(
                v29,
                v6 / v21,
                &v30,
                &v31);
        v17 = v24;
        if ( v24 < 0 )
          break;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000000) != 0 )
          McTemplateU0qqqq_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &CustomDurationIterationResult,
            v22,
            v23,
            v30,
            v31);
        v25 = -1;
        if ( v30 )
          v25 = v22 - v30;
        v26 = -1;
        v27 = v31;
        if ( v31 )
          v26 = v31 - v22;
        if ( v25 < v26 )
          v27 = v30;
        else
          v25 = v26;
        if ( v25 <= v23 )
        {
          v4 = v27;
          goto LABEL_44;
        }
        ++v21;
        if ( !v30 || v21 > 5 )
          goto LABEL_44;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x2F6u, 0LL);
    }
    else
    {
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)v10 + 328LL))(
              v10,
              v6,
              &v30,
              &v31);
      v17 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x2D8u, 0LL);
      }
      else
      {
        v4 = v31;
        v18 = v31 - v6;
        if ( (int)(v31 - v6) < 0 )
          v18 = v6 - v31;
        v19 = v6 - v30;
        v20 = -v19;
        if ( v19 > 0 )
          v20 = v19;
        if ( v20 < v18 )
          v4 = v30;
LABEL_44:
        if ( v17 >= 0 )
        {
          *((_DWORD *)this + 105) = v4;
          return v4;
        }
      }
    }
    *((_QWORD *)this + 53) = 0LL;
    *((_BYTE *)this + 432) = 0;
    return v4;
  }
  return result;
}
