/*
 * XREFs of ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x140015468
 * Callers:
 *     GreExtCreateRegion @ 0x140011690 (GreExtCreateRegion.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x140011C5C (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     _RGNOBJ::iCombine_::_2_::_lambda_1_::operator() @ 0x140012020 (_RGNOBJ--iCombine_--_2_--_lambda_1_--operator().c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x140012210 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___ @ 0x140022050 (RGNCOREOBJ--bMerge__RGNOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ??$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z @ 0x140022C50 (--$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x140022E10 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x1400237E0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1400238A0 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140037910 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140038140 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x14003E960 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1400C5040 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x1401A5920 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1401BABF0 (GreIntersectVisRect.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1401BCB10 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     EngUpdateDeviceSurface @ 0x1401F1910 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400164D4 (--$FreeIsolatedType@V-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140021EE0 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x1400B80E4 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C1164 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall RGNMEMOBJTMP::~RGNMEMOBJTMP(RGNMEMOBJTMP *this)
{
  RGNMEMOBJTMP *v1; // rsi
  _QWORD *v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  __int64 SessionState; // rax
  __int64 v6; // rbp
  unsigned int sizeScanAlloc; // eax
  REGION_CORE *v8; // rcx
  struct SCAN *pScan; // rax
  struct SCAN *v10; // rax

  v1 = this;
  if ( *(_QWORD *)this )
  {
    v2 = (_QWORD *)(*(_QWORD *)this + 80LL);
    if ( *(_QWORD *)this != -80LL )
    {
      v3 = *v2;
      if ( *(_QWORD **)(*v2 + 8LL) != v2 || (this = *(RGNMEMOBJTMP **)(*(_QWORD *)this + 88LL), *(_QWORD **)this != v2) )
        __fastfail(3u);
      *(_QWORD *)this = v3;
      *(_QWORD *)(v3 + 8) = this;
      v2[1] = v2;
      *v2 = v2;
    }
  }
  v4 = *(_QWORD **)v1;
  SessionState = W32GetSessionState(this);
  if ( v4 )
  {
    v6 = *(_QWORD *)(SessionState + 88);
    if ( v4 != *(_QWORD **)(v6 + 4264) )
    {
      if ( WPP_MAIN_CB.Dpc.DeferredContext )
      {
        (*(void (__fastcall **)(_QWORD *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 112LL))(v4 + 3);
      }
      else if ( v4[3] )
      {
        sizeScanAlloc = REGION_CORE::get_sizeScanAlloc((REGION_CORE *)(v4 + 3));
        v8 = (REGION_CORE *)(v4 + 3);
        if ( sizeScanAlloc == 112 )
        {
          pScan = REGION_CORE::get_pScan(v8);
          Win32FreeToPagedLookasideListImpl(*(void **)(v6 + 4240), pScan);
        }
        else if ( REGION_CORE::get_sizeScanAlloc(v8) > 0x70 )
        {
          v10 = REGION_CORE::get_pScan((REGION_CORE *)(v4 + 3));
          GreDeleteFastMutex(v10);
        }
        v4[3] = 0LL;
      }
      if ( v4[14] )
      {
        ReleaseReferenceCountedObjectHandle(2LL);
        v4[14] = 0LL;
      }
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<32768,128>>(v4);
    }
  }
  *(_QWORD *)v1 = 0LL;
}
