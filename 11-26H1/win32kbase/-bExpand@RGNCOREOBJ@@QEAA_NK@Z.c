/*
 * XREFs of ?bExpand@RGNCOREOBJ@@QEAA_NK@Z @ 0x1401BDB70
 * Callers:
 *     RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x1400458FC (RGNCOREOBJ--bMerge__RGNCOREOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z @ 0x14016C570 (-bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z.c)
 *     ?UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z @ 0x140183E10 (-UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z.c)
 * Callees:
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140021EE0 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?set_sizeScanAlloc@REGION_CORE@@IEAAXK@Z @ 0x1401214AC (-set_sizeScanAlloc@REGION_CORE@@IEAAXK@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

bool __fastcall RGNCOREOBJ::bExpand(REGION_CORE **this, unsigned int a2)
{
  unsigned int sizeScanAlloc; // ebx
  unsigned int sizeScan; // r14d
  __int64 v6; // rax
  void *v7; // rbp
  struct SCAN *pScan; // rax
  char *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  sizeScanAlloc = REGION_CORE::get_sizeScanAlloc(*this);
  if ( a2 <= sizeScanAlloc )
  {
LABEL_6:
    LOBYTE(v6) = 1;
    return v6;
  }
  sizeScan = REGION_CORE::get_sizeScan(*this);
  v6 = Win32AllocPoolZInitImpl(256LL, a2, 0x6E637347u);
  v7 = (void *)v6;
  if ( v6 )
  {
    if ( sizeScanAlloc < sizeScan )
      sizeScan = sizeScanAlloc;
    pScan = REGION_CORE::get_pScan(*this);
    memmove(v7, pScan, sizeScan);
    v9 = (char *)REGION_CORE::get_pScan(*this);
    GreDeleteFastMutex(v9, v10, v11, v12);
    *(_QWORD *)*this = v7;
    REGION_CORE::set_sizeScanAlloc(*this, a2);
    goto LABEL_6;
  }
  return v6;
}
