/*
 * XREFs of ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012320
 * Callers:
 *     GreCombineRgn @ 0x14000DFC0 (GreCombineRgn.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x14000E530 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x140012490 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     GreGetRgnBox @ 0x140013370 (GreGetRgnBox.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x140013CA0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreGetClipBox @ 0x14008E7A0 (GreGetClipBox.c)
 *     GreExtCreateRegion @ 0x140096D00 (GreExtCreateRegion.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x140098C8C (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x140159390 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140177C40 (-bCompute@DC@@QEAAHXZ.c)
 *     EngUpdateDeviceSurface @ 0x1401787B0 (EngUpdateDeviceSurface.c)
 *     GreCopyVisRgn @ 0x14017D470 (GreCopyVisRgn.c)
 *     RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___ @ 0x1401C40E4 (RGNCOREOBJ--iCombine_RGNOBJ__RGNOBJ--iCombine_--_2_--_lambda_1___.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEBVRustAutoHotpatchLockSH@@AEAV1@1J@Z @ 0x1401C4890 (-iCombine@RGNOBJ@@QEAAJAEBVRustAutoHotpatchLockSH@@AEAV1@1J@Z.c)
 * Callees:
 *     ?RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x1400123FC (-RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::iComplexity(RGNOBJ *this, const struct REGION_CORE *a2)
{
  struct REGION_CORE *v2; // rsi
  _DWORD *v3; // rdi
  unsigned int sizeScan; // ecx
  _DWORD *v5; // rcx
  unsigned int v6; // edi

  v2 = qword_1402A10B0;
  v3 = *(_DWORD **)this;
  if ( qword_1402A10B0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v2 + 8, 2LL);
    v5 = v3 + 6;
    if ( !v3 )
      v5 = 0LL;
    v6 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 72LL))(v5);
    ExReleasePushLockSharedEx((char *)v2 + 8, 2LL);
    KeLeaveCriticalRegion();
    return v6;
  }
  else if ( v3[12] == 1 )
  {
    return 1LL;
  }
  else
  {
    if ( qword_1402A10B0 )
      sizeScan = Win32kRS::RegionCore_get_sizeScan((Win32kRS *)(v3 + 6), a2);
    else
      sizeScan = v3[10];
    return (unsigned int)(sizeScan > 0x38) + 2;
  }
}
