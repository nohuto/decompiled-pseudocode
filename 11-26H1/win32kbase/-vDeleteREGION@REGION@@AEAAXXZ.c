/*
 * XREFs of ?vDeleteREGION@REGION@@AEAAXXZ @ 0x140015A00
 * Callers:
 *     GreExtCreateRegion @ 0x140011690 (GreExtCreateRegion.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140015950 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     GreCreateRectRgnIndirect @ 0x14001E880 (GreCreateRectRgnIndirect.c)
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x140021698 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x140021D3C (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z @ 0x140022C50 (--$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x140022E10 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 * Callees:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400164D4 (--$FreeIsolatedType@V-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140021EE0 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x1400B80E4 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C1164 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall REGION::vDeleteREGION(REGION *this)
{
  __int64 SessionState; // rax
  __int64 v3; // rsi
  unsigned int sizeScanAlloc; // eax
  REGION_CORE *v5; // rcx
  struct SCAN *pScan; // rax
  struct SCAN *v7; // rax

  SessionState = W32GetSessionState(this);
  if ( this )
  {
    v3 = *(_QWORD *)(SessionState + 88);
    if ( this != *(REGION **)(v3 + 4264) )
    {
      if ( WPP_MAIN_CB.Dpc.DeferredContext )
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 112LL))((char *)this + 24);
      }
      else if ( *((_QWORD *)this + 3) )
      {
        sizeScanAlloc = REGION_CORE::get_sizeScanAlloc((REGION *)((char *)this + 24));
        v5 = (REGION *)((char *)this + 24);
        if ( sizeScanAlloc == 112 )
        {
          pScan = REGION_CORE::get_pScan(v5);
          Win32FreeToPagedLookasideListImpl(*(void **)(v3 + 4240), pScan);
        }
        else if ( REGION_CORE::get_sizeScanAlloc(v5) > 0x70 )
        {
          v7 = REGION_CORE::get_pScan((REGION *)((char *)this + 24));
          GreDeleteFastMutex(v7);
        }
        *((_QWORD *)this + 3) = 0LL;
      }
      if ( *((_QWORD *)this + 14) )
      {
        ReleaseReferenceCountedObjectHandle(2LL);
        *((_QWORD *)this + 14) = 0LL;
      }
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<32768,128>>(this);
    }
  }
}
