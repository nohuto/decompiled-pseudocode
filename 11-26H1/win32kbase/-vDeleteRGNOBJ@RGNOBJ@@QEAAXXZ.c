/*
 * XREFs of ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x14000F920 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x140011690 (GreExtCreateRegion.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x140015370 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x140017500 (GreSelectVisRgnShared.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAH_N@Z @ 0x140019F20 (-bCleanDC@XDCOBJ@@QEAAH_N@Z.c)
 *     vRestoreRegion @ 0x140035B00 (vRestoreRegion.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140037910 (-bCompute@DC@@QEAAHXZ.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x140038094 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     ?bDelete@XDCOBJ@@QEAA_NK@Z @ 0x14003E5B4 (-bDelete@XDCOBJ@@QEAA_NK@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x14003E960 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x140055690 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1400C0C00 (GreCreatePolyPolygonRgnInternal.c)
 *     NtGdiCreateRectRgn @ 0x140102C20 (NtGdiCreateRectRgn.c)
 *     EngDeleteClip @ 0x140121E60 (EngDeleteClip.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x14015672C (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vReleaseVis@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140179DF8 (-vReleaseVis@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreCreateRectRgn @ 0x140194400 (GreCreateRectRgn.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x1401A5920 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 *     ?CleanUpRegion@@YAXPEAVREGION@@@Z @ 0x1401EDB10 (-CleanUpRegion@@YAXPEAVREGION@@@Z.c)
 * Callees:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400164D4 (--$FreeIsolatedType@V-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140021EE0 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x1400B80E4 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C1164 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall RGNOBJ::vDeleteRGNOBJ(RGNOBJ *this)
{
  _QWORD *v1; // rbx
  __int64 SessionState; // rax
  __int64 v4; // rsi
  unsigned int sizeScanAlloc; // eax
  REGION_CORE *v6; // rcx
  struct SCAN *pScan; // rax
  struct SCAN *v8; // rax

  v1 = *(_QWORD **)this;
  SessionState = W32GetSessionState(this);
  if ( v1 )
  {
    v4 = *(_QWORD *)(SessionState + 88);
    if ( v1 != *(_QWORD **)(v4 + 4264) )
    {
      if ( WPP_MAIN_CB.Dpc.DeferredContext )
      {
        (*(void (__fastcall **)(_QWORD *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 112LL))(v1 + 3);
      }
      else if ( v1[3] )
      {
        sizeScanAlloc = REGION_CORE::get_sizeScanAlloc((REGION_CORE *)(v1 + 3));
        v6 = (REGION_CORE *)(v1 + 3);
        if ( sizeScanAlloc == 112 )
        {
          pScan = REGION_CORE::get_pScan(v6);
          Win32FreeToPagedLookasideListImpl(*(void **)(v4 + 4240), pScan);
        }
        else if ( REGION_CORE::get_sizeScanAlloc(v6) > 0x70 )
        {
          v8 = REGION_CORE::get_pScan((REGION_CORE *)(v1 + 3));
          GreDeleteFastMutex(v8);
        }
        v1[3] = 0LL;
      }
      if ( v1[14] )
      {
        ReleaseReferenceCountedObjectHandle(2LL);
        v1[14] = 0LL;
      }
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<32768,128>>(v1);
    }
    *(_QWORD *)this = 0LL;
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
}
