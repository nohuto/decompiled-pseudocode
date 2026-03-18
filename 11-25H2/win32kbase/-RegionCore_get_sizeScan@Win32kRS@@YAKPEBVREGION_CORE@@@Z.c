/*
 * XREFs of ?RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x1400123FC
 * Callers:
 *     RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x140011960 (RGNCOREOBJ--bMerge__RGNCOREOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140011FD0 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012320 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x140012950 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     SetRectRgnIndirect @ 0x140014F50 (SetRectRgnIndirect.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x14001FD84 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x14008BC70 (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ?IsEmpty@CRegion@@UEBA_NXZ @ 0x14008BCD0 (-IsEmpty@CRegion@@UEBA_NXZ.c)
 *     ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEBVERECTL@@H@Z @ 0x1400BBC70 (-vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEBVERECTL@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_get_sizeScan(Win32kRS *this, const struct REGION_CORE *a2)
{
  struct REGION_CORE *v2; // rdi
  char *v4; // rbx

  v2 = qword_1402A10B0;
  v4 = (char *)qword_1402A10B0 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 2LL);
  LODWORD(v2) = (*(__int64 (__fastcall **)(Win32kRS *))(*(_QWORD *)v2 + 216LL))(this);
  ExReleasePushLockSharedEx(v4, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
