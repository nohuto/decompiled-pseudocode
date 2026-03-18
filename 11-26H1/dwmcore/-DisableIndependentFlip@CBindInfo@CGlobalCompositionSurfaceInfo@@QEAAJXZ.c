/*
 * XREFs of ?DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180128B3C
 * Callers:
 *     ?DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x180127C68 (-DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?DisableIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z @ 0x1801D70B0 (-DisableIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z.c)
 *     ?DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1802664B4 (-DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResetCustomDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ @ 0x180128C90 (-ResetCustomDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ.c)
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x18012A8AC (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 *     McTemplateU0xxqqqqq_EventWriteTransfer @ 0x1801D0098 (McTemplateU0xxqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::DisableIndependentFlip(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  _DWORD *v2; // rsi
  int v3; // ecx
  unsigned int v4; // edi
  int v5; // eax
  bool v6; // zf
  int v8; // [rsp+60h] [rbp+8h] BYREF

  v2 = (_DWORD *)((char *)this + 212);
  v3 = *((_DWORD *)this + 52);
  v4 = 0;
  v8 = 0;
  v5 = NtSetCompositionSurfaceIndependentFlipInfo(
         *(_QWORD *)(*(_QWORD *)this + 32LL),
         (char *)this + 24,
         0LL,
         *((_BYTE *)this + 181) != 0,
         *((_DWORD *)this + 54),
         1 << v3,
         v2,
         &v8);
  if ( v5 < 0 )
  {
    v4 = v5 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5 | 0x10000000, 0x59Au, 0LL);
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    McTemplateU0xxqqqqq_EventWriteTransfer(
      *(_DWORD *)(*(_QWORD *)this + 40LL),
      *((unsigned __int8 *)this + 182),
      *(_DWORD *)(*(_QWORD *)this + 40LL),
      *((_QWORD *)this + 3),
      *v2,
      0,
      *((_BYTE *)this + 181) != 0,
      *((_DWORD *)this + 54),
      *((_BYTE *)this + 182));
  }
  CGlobalCompositionSurfaceInfo::CBindInfo::ResetCustomDuration(this);
  v6 = *((_BYTE *)this + 181) == 0;
  *((_BYTE *)this + 180) = 0;
  *((_BYTE *)this + 182) = 0;
  if ( v6 )
  {
    CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(*(CGlobalCompositionSurfaceInfo **)this);
    *((_BYTE *)this + 181) = 1;
  }
  return v4;
}
