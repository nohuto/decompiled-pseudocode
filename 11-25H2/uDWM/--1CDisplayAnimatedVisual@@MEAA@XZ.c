/*
 * XREFs of ??1CDisplayAnimatedVisual@@MEAA@XZ @ 0x1800AEF94
 * Callers:
 *     ??_ECDisplayAnimatedVisual@@MEAAPEAXI@Z @ 0x1800AF070 (--_ECDisplayAnimatedVisual@@MEAAPEAXI@Z.c)
 *     ??1CDisplayDisconnectAnimatedVisual@@MEAA@XZ @ 0x1800B00BC (--1CDisplayDisconnectAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800B0200 (--1CDisplayDuplicateAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ @ 0x1800B07CC (--1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayExtendAnimatedVisual@@MEAA@XZ @ 0x1800B1560 (--1CDisplayExtendAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayExtendToDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800B1E5C (--1CDisplayExtendToDuplicateAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayMixedModeAnimatedVisual@@MEAA@XZ @ 0x1800B26B0 (--1CDisplayMixedModeAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayBlackCurtainAnimatedVisual@@MEAA@XZ @ 0x1800B3968 (--1CDisplayBlackCurtainAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplaySecondaryOnlyAnimatedVisual@@MEAA@XZ @ 0x1800B3C04 (--1CDisplaySecondaryOnlyAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800B4018 (--1CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplaySecondaryOnlyToExtendAnimatedVisual@@MEAA@XZ @ 0x1800B4658 (--1CDisplaySecondaryOnlyToExtendAnimatedVisual@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18003E6C0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180065BD0 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800AEF58 (--1-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowData@@@std@@V-$allocator@PEAVCWin.c)
 */

void __fastcall CDisplayAnimatedVisual::~CDisplayAnimatedVisual(CDisplayAnimatedVisual *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CDisplayAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 30) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 46);
  std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::~_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>((void **)this + 44);
  std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::~_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>((void **)this + 42);
  v2 = (void *)*((_QWORD *)this + 35);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 37) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 35) = 0LL;
    *((_QWORD *)this + 36) = 0LL;
    *((_QWORD *)this + 37) = 0LL;
  }
  CRenderDataVisual::~CRenderDataVisual((void **)this);
}
