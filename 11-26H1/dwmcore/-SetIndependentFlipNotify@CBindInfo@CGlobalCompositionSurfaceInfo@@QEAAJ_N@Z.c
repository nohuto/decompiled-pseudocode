/*
 * XREFs of ?SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x180217A4C
 * Callers:
 *     ?SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801601D0 (-SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatri.c)
 *     ?SetRecentlyComposed@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x180191780 (-SetRecentlyComposed@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?SetIndependentFlipNotify@CGlobalCompositionSurfaceInfo@@UEAAJ_K_N@Z @ 0x180266930 (-SetIndependentFlipNotify@CGlobalCompositionSurfaceInfo@@UEAAJ_K_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x18012A8AC (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 *     McTemplateU0xxqqqqq_EventWriteTransfer @ 0x1801D0098 (McTemplateU0xxqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlipNotify(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        unsigned __int8 a2)
{
  int v2; // esi
  unsigned int v3; // edi
  _DWORD *v5; // r14
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-48h]
  void *v9; // [rsp+28h] [rbp-40h]
  __int64 v10; // [rsp+30h] [rbp-38h]
  __int64 v11; // [rsp+38h] [rbp-30h]
  int v12; // [rsp+40h] [rbp-28h]
  int v13; // [rsp+78h] [rbp+10h] BYREF

  v2 = a2;
  v3 = 0;
  if ( a2 != *((_BYTE *)this + 181) )
  {
    v5 = (_DWORD *)((char *)this + 212);
    v13 = 0;
    v6 = NtSetCompositionSurfaceIndependentFlipInfo(
           *(_QWORD *)(*(_QWORD *)this + 32LL),
           (char *)this + 24,
           1LL,
           a2,
           *((_DWORD *)this + 54),
           1 << *((_DWORD *)this + 52),
           (char *)this + 212,
           &v13);
    if ( v6 >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      {
        v12 = *((unsigned __int8 *)this + 182);
        LODWORD(v11) = *((_DWORD *)this + 54);
        LODWORD(v10) = v2;
        LODWORD(v9) = 1;
        LODWORD(v8) = *v5;
        McTemplateU0xxqqqqq_EventWriteTransfer(
          (unsigned int)*v5,
          *((unsigned __int8 *)this + 182),
          *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32),
          *((_QWORD *)this + 3),
          v8,
          v9,
          v10,
          v11,
          v12);
      }
      *((_BYTE *)this + 181) = v2;
      if ( (_BYTE)v2 )
        CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(*(CGlobalCompositionSurfaceInfo **)this);
    }
    else
    {
      v3 = v6 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6 | 0x10000000, 0x544u, 0LL);
    }
  }
  return v3;
}
