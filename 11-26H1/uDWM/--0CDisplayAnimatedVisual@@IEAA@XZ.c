/*
 * XREFs of ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x18004F168
 * Callers:
 *     ??0CDisplayExtendAnimatedVisual@@IEAA@XZ @ 0x180089FF4 (--0CDisplayExtendAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplayDuplicateAnimatedVisual@@IEAA@XZ @ 0x18008AA90 (--0CDisplayDuplicateAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplayDisconnectAnimatedVisual@@IEAA@XZ @ 0x18008BE70 (--0CDisplayDisconnectAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplayDuplicateToExtendAnimatedVisual@@IEAA@XZ @ 0x1800AFFD4 (--0CDisplayDuplicateToExtendAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplayExtendToDuplicateAnimatedVisual@@IEAA@XZ @ 0x1800B1740 (--0CDisplayExtendToDuplicateAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplayMixedModeAnimatedVisual@@IEAA@XZ @ 0x1800B1F88 (--0CDisplayMixedModeAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplayBlackCurtainAnimatedVisual@@IEAA@XZ @ 0x1800B33F4 (--0CDisplayBlackCurtainAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplaySecondaryOnlyAnimatedVisual@@IEAA@XZ @ 0x1800B3694 (--0CDisplaySecondaryOnlyAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@IEAA@XZ @ 0x1800B3AC4 (--0CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplaySecondaryOnlyToExtendAnimatedVisual@@IEAA@XZ @ 0x1800B4100 (--0CDisplaySecondaryOnlyToExtendAnimatedVisual@@IEAA@XZ.c)
 * Callees:
 *     ??0?$set@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@@std@@QEAA@XZ @ 0x18004F27C (--0-$set@PEAVCWindowData@@U-$less@PEAVCWindowData@@@std@@V-$allocator@PEAVCWindowData@@@3@@std@@.c)
 *     ??0CSolidRectangleVisual@@QEAA@XZ @ 0x18004FF40 (--0CSolidRectangleVisual@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
CDisplayAnimatedVisual *__fastcall CDisplayAnimatedVisual::CDisplayAnimatedVisual(CDisplayAnimatedVisual *this)
{
  int SystemMetrics; // edi
  int v3; // esi
  int v4; // ebx
  int v5; // eax

  CSolidRectangleVisual::CSolidRectangleVisual(this);
  *(_QWORD *)this = &CDisplayAnimatedVisual::`vftable'{for `CSolidRectangleVisual'};
  *((_QWORD *)this + 26) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  *((_WORD *)this + 116) = 0;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  std::set<CWindowData *>::set<CWindowData *>((char *)this + 304);
  std::set<CWindowData *>::set<CWindowData *>((char *)this + 320);
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_WORD *)this + 176) = 0;
  *((_BYTE *)this + 354) = 0;
  SystemMetrics = GetSystemMetrics(76);
  v3 = GetSystemMetrics(77);
  v4 = GetSystemMetrics(78);
  v5 = GetSystemMetrics(79);
  *((_DWORD *)this + 54) = SystemMetrics;
  *((_DWORD *)this + 56) = v4 + SystemMetrics;
  *((_DWORD *)this + 55) = v3;
  *((_DWORD *)this + 57) = v3 + v5;
  return this;
}
