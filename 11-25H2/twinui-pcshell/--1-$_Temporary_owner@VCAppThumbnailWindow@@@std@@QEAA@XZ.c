/*
 * XREFs of ??1?$_Temporary_owner@VCAppThumbnailWindow@@@std@@QEAA@XZ @ 0x180488FCC
 * Callers:
 *     ??$?0VCAppThumbnailWindow@@$0A@@?$shared_ptr@VCAppThumbnailWindow@@@std@@QEAA@PEAVCAppThumbnailWindow@@@Z @ 0x180487E3C (--$-0VCAppThumbnailWindow@@$0A@@-$shared_ptr@VCAppThumbnailWindow@@@std@@QEAA@PEAVCAppThumbnailW.c)
 *     _std::shared_ptr_CAppThumbnailWindow_::shared_ptr_CAppThumbnailWindow__CAppThumbnailWindow_0__::_1_::dtor$0 @ 0x1806C7A10 (_std--shared_ptr_CAppThumbnailWindow_--shared_ptr_CAppThumbnailWindow__CAppThumbnailWindow_0__--.c)
 * Callees:
 *     ??_GCAppThumbnailWindow@@QEAAPEAXI@Z @ 0x180489C5C (--_GCAppThumbnailWindow@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Temporary_owner<CAppThumbnailWindow>::~_Temporary_owner<CAppThumbnailWindow>(
        CAppThumbnailWindow **a1,
        unsigned int a2)
{
  CAppThumbnailWindow *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return CAppThumbnailWindow::`scalar deleting destructor'(v2, a2);
  return result;
}
