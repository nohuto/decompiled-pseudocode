/*
 * XREFs of ??1?$unique_ptr@VCDirectFlipInfo@@U?$default_delete@VCDirectFlipInfo@@@std@@@std@@QEAA@XZ @ 0x18021F2A4
 * Callers:
 *     ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x1800F0094 (-ApplyConfiguration@COverlayContext@@QEAAX_NPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@.c)
 * Callees:
 *     ??_GCDirectFlipInfo@@QEAAPEAXI@Z @ 0x180239244 (--_GCDirectFlipInfo@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<CDirectFlipInfo>::~unique_ptr<CDirectFlipInfo>(CDirectFlipInfo **a1, unsigned int a2)
{
  CDirectFlipInfo *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return CDirectFlipInfo::`scalar deleting destructor'(v2, a2);
  return result;
}
