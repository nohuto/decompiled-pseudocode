/*
 * XREFs of ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x14000EC14
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x14000F920 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x14000EE30 (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x14000F730 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140021EE0 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1401BCB10 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall RGNMEMOBJ::bAddNullScan(RGNMEMOBJ *this, int a2, int a3)
{
  __int64 v3; // rdi
  unsigned int sizeScan; // ebx
  struct SCAN *pscnTail; // rdi
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 result; // rax
  unsigned int sizeScanAlloc; // eax

  v3 = *(_QWORD *)this;
  sizeScan = REGION_CORE::get_sizeScan((REGION_CORE *)(*(_QWORD *)this + 24LL));
  if ( REGION_CORE::get_sizeScanAlloc((REGION_CORE *)(v3 + 24)) - sizeScan < 0x10 )
  {
    sizeScanAlloc = REGION_CORE::get_sizeScanAlloc((REGION_CORE *)(*(_QWORD *)this + 24LL));
    if ( sizeScanAlloc + 1136 < sizeScanAlloc || !(unsigned int)RGNOBJ::bExpand(this, sizeScanAlloc + 1136) )
      return 0LL;
  }
  pscnTail = REGION_CORE::get_pscnTail((REGION_CORE *)(*(_QWORD *)this + 24LL));
  ++*(_DWORD *)(*(_QWORD *)this + 48LL);
  *((_DWORD *)pscnTail + 1) = a2;
  *((_DWORD *)pscnTail + 2) = a3;
  v9 = *(_QWORD *)this;
  v10 = REGION_CORE::get_sizeScan((REGION_CORE *)(*(_QWORD *)this + 24LL));
  REGION_CORE::set_sizeScan((REGION_CORE *)(v9 + 24), v10 + 16);
  result = 1LL;
  *((_DWORD *)pscnTail + 3) = 0;
  *(_DWORD *)pscnTail = 0;
  return result;
}
