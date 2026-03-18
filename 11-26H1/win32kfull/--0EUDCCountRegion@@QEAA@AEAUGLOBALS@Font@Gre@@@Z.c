/*
 * XREFs of ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670
 * Callers:
 *     GreGetTextMetricsW @ 0x140122B58 (GreGetTextMetricsW.c)
 *     GreExtTextOutW @ 0x14012725C (GreExtTextOutW.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1401ACC30 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     GreGetTextExtentW @ 0x1401FB67C (GreGetTextExtentW.c)
 *     NtGdiGetGlyphIndicesWInternal @ 0x14020CC00 (NtGdiGetGlyphIndicesWInternal.c)
 *     NtGdiGetLinkedUFIs @ 0x14027D690 (NtGdiGetLinkedUFIs.c)
 *     NtGdiStartDoc @ 0x14027D880 (NtGdiStartDoc.c)
 *     NtGdiGetStringBitmapW @ 0x14027DD90 (NtGdiGetStringBitmapW.c)
 *     NtGdiExtEscape @ 0x14027EE60 (NtGdiExtEscape.c)
 *     NtGdiExtTextOutW @ 0x14027F4B0 (NtGdiExtTextOutW.c)
 *     NtGdiFontIsLinked @ 0x14027F9A0 (NtGdiFontIsLinked.c)
 *     NtGdiGetCharABCWidthsW @ 0x14027FA40 (NtGdiGetCharABCWidthsW.c)
 *     NtGdiGetCharWidthInfo @ 0x14027FCD0 (NtGdiGetCharWidthInfo.c)
 *     NtGdiGetCharWidthW @ 0x14027FDD0 (NtGdiGetCharWidthW.c)
 *     NtGdiGetFontData @ 0x140280030 (NtGdiGetFontData.c)
 *     NtGdiGetFontUnicodeRanges @ 0x140280260 (NtGdiGetFontUnicodeRanges.c)
 *     NtGdiGetGlyphOutline @ 0x140280390 (NtGdiGetGlyphOutline.c)
 *     NtGdiGetKerningPairs @ 0x140280640 (NtGdiGetKerningPairs.c)
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x140280790 (NtGdiGetOutlineTextMetricsInternalW.c)
 *     NtGdiGetRealizationInfo @ 0x140280940 (NtGdiGetRealizationInfo.c)
 *     NtGdiGetTextCharsetInfo @ 0x140280AC0 (NtGdiGetTextCharsetInfo.c)
 *     NtGdiGetTextExtent @ 0x140280C10 (NtGdiGetTextExtent.c)
 *     NtGdiGetTextExtentExW @ 0x140280E20 (NtGdiGetTextExtentExW.c)
 *     NtGdiGetTextMetricsW @ 0x1402811C0 (NtGdiGetTextMetricsW.c)
 *     NtGdiGetUFI @ 0x1402812D0 (NtGdiGetUFI.c)
 *     NtGdiGetWidthTable @ 0x140281520 (NtGdiGetWidthTable.c)
 *     NtGdiQueryFontAssocInfo @ 0x140281810 (NtGdiQueryFontAssocInfo.c)
 *     GreGetTextCharsetInfo @ 0x14031CA90 (GreGetTextCharsetInfo.c)
 *     NtGdiGetCharacterPlacementW @ 0x14032A5F0 (NtGdiGetCharacterPlacementW.c)
 *     NtGdiGetEmbUFI @ 0x14032AB90 (NtGdiGetEmbUFI.c)
 *     NtGdiPolyTextOutW @ 0x14032B530 (NtGdiPolyTextOutW.c)
 *     NtGdiGetETM @ 0x1403336E0 (NtGdiGetETM.c)
 * Callees:
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140071640 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400717B0 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GrepReleasePushLockCommon@$0A@$0A@P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x140071E5C (--$GrepReleasePushLockCommon@$0A@$0A@P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@.c)
 *     ??0?$PushLockSharedObj@$0A@$0A@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14007253C (--0-$PushLockSharedObj@$0A@$0A@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400C56B0 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x14019AC84 (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 *     Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline @ 0x14032A224 (Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline.c)
 */

EUDCCountRegion *__fastcall EUDCCountRegion::EUDCCountRegion(EUDCCountRegion *this, struct Gre::Font::GLOBALS *a2)
{
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rcx
  struct W32_PUSH_LOCK *v11; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = a2;
  *((_BYTE *)this + 48) = 1;
  if ( (unsigned int)Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    v8 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process )
      {
        LOBYTE(v6) = *(_BYTE *)(CurrentProcessWin32Process + 296);
        if ( (_BYTE)v6 )
        {
          if ( UmfdHostLifeTimeManager::EnsureUmfdHost(v6, v5, v7) )
            *(_BYTE *)(v8 + 296) = 0;
          else
            *((_BYTE *)this + 48) = 0;
        }
      }
    }
  }
  PushLockSharedObj<0,0>::PushLockSharedObj<0,0>(&v11, *((_QWORD *)this + 5));
  GreAcquirePushLockShared2<16,0>(*((_QWORD *)this + 5));
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 5) + 8636LL));
  GreReleasePushLockShared2<16,0>(*((_QWORD *)this + 5));
  CAutoTGO::vGuard(
    this,
    0LL,
    (void (*)(void *))EUDCCountRegion::EUDCCountRegion_::_2_::_lambda_1_::_lambda_invoker_cdecl_);
  GrepReleasePushLockCommon<0,0,void (*)(W32_PUSH_LOCK *,unsigned long)>(v9, v11);
  return this;
}
