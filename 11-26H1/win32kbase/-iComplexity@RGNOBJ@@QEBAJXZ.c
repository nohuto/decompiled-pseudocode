/*
 * XREFs of ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012FA0
 * Callers:
 *     GreExtCreateRegion @ 0x140011690 (GreExtCreateRegion.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x140012210 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x14001E310 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     ??$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z @ 0x140022C50 (--$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1400238A0 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?vUpdate_VisRect@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVREGION@@@Z @ 0x140037830 (-vUpdate_VisRect@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVREGION@@@Z.c)
 *     GreGetClipBox @ 0x14003ACA0 (GreGetClipBox.c)
 *     GreCopyVisRgn @ 0x1400C4DA0 (GreCopyVisRgn.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x1401A5920 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 *     EngUpdateDeviceSurface @ 0x1401F1910 (EngUpdateDeviceSurface.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::iComplexity(RGNOBJ *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx

  v1 = *(_QWORD *)this;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v3 = v1 + 24;
    if ( !v1 )
      v3 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 32LL))(v3);
  }
  else if ( *(_DWORD *)(v1 + 48) == 1 )
  {
    return 1LL;
  }
  else if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    return (unsigned int)((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 176LL))(v1 + 24) > 0x38)
         + 2;
  }
  else
  {
    return (unsigned int)(*(_DWORD *)(v1 + 40) > 0x38u) + 2;
  }
}
