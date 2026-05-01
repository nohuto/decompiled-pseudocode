/*
 * XREFs of ??_GCAppThumbnailWindow@@QEAAPEAXI@Z @ 0x18049A8DC
 * Callers:
 *     ??1?$_Temporary_owner@VCAppThumbnailWindow@@@std@@QEAA@XZ @ 0x180499BAC (--1-$_Temporary_owner@VCAppThumbnailWindow@@@std@@QEAA@XZ.c)
 *     ?_Destroy@?$_Ref_count@VCAppThumbnailWindow@@@std@@EEAAXXZ @ 0x18049DAD0 (-_Destroy@-$_Ref_count@VCAppThumbnailWindow@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAppThumbnailWindow@@QEAA@XZ @ 0x180499D68 (--1CAppThumbnailWindow@@QEAA@XZ.c)
 */

CAppThumbnailWindow *__fastcall CAppThumbnailWindow::`scalar deleting destructor'(CAppThumbnailWindow *this)
{
  CAppThumbnailWindow::~CAppThumbnailWindow(this);
  operator delete(this, (const struct std::nothrow_t *)0x258);
  return this;
}
