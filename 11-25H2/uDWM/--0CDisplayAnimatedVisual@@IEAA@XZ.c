/*
 * XREFs of ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x18008598C
 * Callers:
 *     ??0CDisplayExtendAnimatedVisual@@IEAA@XZ @ 0x1800971B0 (--0CDisplayExtendAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplayDuplicateAnimatedVisual@@IEAA@XZ @ 0x180097840 (--0CDisplayDuplicateAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplayDisconnectAnimatedVisual@@IEAA@XZ @ 0x1800989A8 (--0CDisplayDisconnectAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplayDuplicateToExtendAnimatedVisual@@IEAA@XZ @ 0x1800B072C (--0CDisplayDuplicateToExtendAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplayExtendToDuplicateAnimatedVisual@@IEAA@XZ @ 0x1800B1DE4 (--0CDisplayExtendToDuplicateAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplayMixedModeAnimatedVisual@@IEAA@XZ @ 0x1800B25D8 (--0CDisplayMixedModeAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplayBlackCurtainAnimatedVisual@@IEAA@XZ @ 0x1800B3918 (--0CDisplayBlackCurtainAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplaySecondaryOnlyAnimatedVisual@@IEAA@XZ @ 0x1800B3BB0 (--0CDisplaySecondaryOnlyAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@IEAA@XZ @ 0x1800B3FC0 (--0CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplaySecondaryOnlyToExtendAnimatedVisual@@IEAA@XZ @ 0x1800B45EC (--0CDisplaySecondaryOnlyToExtendAnimatedVisual@@IEAA@XZ.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180009E0C (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ??0?$set@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@@std@@QEAA@XZ @ 0x180085AA0 (--0-$set@PEAVCWindowData@@U-$less@PEAVCWindowData@@@std@@V-$allocator@PEAVCWindowData@@@3@@std@@.c)
 */

// Hidden C++ exception states: #wind=3
CDisplayAnimatedVisual *__fastcall CDisplayAnimatedVisual::CDisplayAnimatedVisual(CDisplayAnimatedVisual *this)
{
  int SystemMetrics; // esi
  int v3; // edi
  int v4; // ebx
  int v5; // eax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)this = &CDisplayAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 30) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  *((_WORD *)this + 132) = 0;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  std::set<CWindowData *>::set<CWindowData *>((char *)this + 336);
  std::set<CWindowData *>::set<CWindowData *>((char *)this + 352);
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_WORD *)this + 192) = 0;
  *((_BYTE *)this + 386) = 0;
  SystemMetrics = GetSystemMetrics(76);
  v3 = GetSystemMetrics(77);
  v4 = GetSystemMetrics(78);
  v5 = GetSystemMetrics(79);
  *((_DWORD *)this + 62) = SystemMetrics;
  *((_DWORD *)this + 64) = v4 + SystemMetrics;
  *((_DWORD *)this + 63) = v3;
  *((_DWORD *)this + 65) = v3 + v5;
  return this;
}
