/*
 * XREFs of ?Create@CDisplaySecondaryOnlyToExtendAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B32A4
 * Callers:
 *     ?CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDisplayAnimatedVisual@@@Z @ 0x180044ED0 (-CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDis.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CDisplaySecondaryOnlyToExtendAnimatedVisual@@IEAA@XZ @ 0x1800B4100 (--0CDisplaySecondaryOnlyToExtendAnimatedVisual@@IEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::Create(
        struct CDisplaySecondaryOnlyToExtendAnimatedVisual **a1)
{
  int v2; // edi
  CDisplaySecondaryOnlyToExtendAnimatedVisual *v3; // rax
  struct CDisplaySecondaryOnlyToExtendAnimatedVisual *v4; // rbx

  if ( a1 )
  {
    v3 = (CDisplaySecondaryOnlyToExtendAnimatedVisual *)DefaultHeap::AllocClear(0x1B8uLL);
    if ( v3 )
      v4 = CDisplaySecondaryOnlyToExtendAnimatedVisual::CDisplaySecondaryOnlyToExtendAnimatedVisual(v3);
    else
      v4 = 0LL;
    if ( v4 )
    {
      v2 = (*(__int64 (__fastcall **)(struct CDisplaySecondaryOnlyToExtendAnimatedVisual *))(*(_QWORD *)v4 + 8LL))(v4);
      if ( v2 >= 0 )
      {
        *a1 = v4;
        return 0;
      }
    }
    else
    {
      v2 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xFu, 0LL);
    *a1 = 0LL;
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xFu, 0LL);
  }
  return (unsigned int)v2;
}
