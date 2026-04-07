/*
 * XREFs of ??1CGroupingStoryboard@@UEAA@XZ @ 0x1800C6774
 * Callers:
 *     ??1CAppArrangementBase@@UEAA@XZ @ 0x1800C668C (--1CAppArrangementBase@@UEAA@XZ.c)
 *     ??_GCAppSwitch@@UEAAPEAXI@Z @ 0x1800C6950 (--_GCAppSwitch@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18003E6C0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAXPEAUUnifiedTargetRect@CStoryboard@@QEAU12@AEAV?$allocator@UUnifiedTargetRect@CStoryboard@@@0@@Z @ 0x1800C6140 (--$_Destroy_range@V-$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAXPEAUUnifiedTargetR.c)
 */

void __fastcall CGroupingStoryboard::~CGroupingStoryboard(CGroupingStoryboard *this)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)*((_QWORD *)this + 16);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<CStoryboard::UnifiedTargetRect>>(v2, *((_QWORD **)this + 17));
    std::_Deallocate<16,0>(
      *((void **)this + 16),
      (const struct std::nothrow_t *)(16 * ((__int64)(*((_QWORD *)this + 18) - *((_QWORD *)this + 16)) >> 4)));
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
  }
  CStoryboard::~CStoryboard((void **)this);
}
