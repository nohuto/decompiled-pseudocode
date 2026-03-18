/*
 * XREFs of ??_GCDirectFlipInfo@@QEAAPEAXI@Z @ 0x180239244
 * Callers:
 *     ?ClearDirectFlip@COverlayContext@@IEAAXXZ @ 0x18021E3C4 (-ClearDirectFlip@COverlayContext@@IEAAXXZ.c)
 *     ??1?$unique_ptr@VCDirectFlipInfo@@U?$default_delete@VCDirectFlipInfo@@@std@@@std@@QEAA@XZ @ 0x18021F2A4 (--1-$unique_ptr@VCDirectFlipInfo@@U-$default_delete@VCDirectFlipInfo@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??1CDirectFlipInfo@@QEAA@XZ @ 0x18020A20C (--1CDirectFlipInfo@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CDirectFlipInfo *__fastcall CDirectFlipInfo::`scalar deleting destructor'(CDirectFlipInfo *this)
{
  CDirectFlipInfo::~CDirectFlipInfo(this);
  operator delete(this);
  return this;
}
