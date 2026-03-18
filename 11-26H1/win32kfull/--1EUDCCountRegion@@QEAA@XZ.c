/*
 * XREFs of ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8
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
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140071770 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140071870 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall EUDCCountRegion::~EUDCCountRegion(EUDCCountRegion *this)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // r14
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v6; // rbx
  char v7; // dl
  struct _KTHREAD *v8; // rbp
  __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  _QWORD *v13; // rcx
  int v15; // edx
  unsigned __int64 i; // rcx
  int v17; // eax
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v20; // ebx
  __int64 v21; // rax

  if ( *((_DWORD *)this + 8) )
  {
    PopThreadGuardedObject(this);
    *((_DWORD *)this + 8) = 0;
  }
  v2 = *((_QWORD *)this + 5);
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v6 = (_QWORD *)((v3 + 8) & -(__int64)(v3 != 0));
  if ( v6 )
  {
    if ( (*v6 & 0xFFFFFFDFFFFF0000uLL) != 0 && (*v6 & 0x10000LL) == 0 )
    {
      v15 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v17 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & *v6) == 0 )
          v17 = v15;
        v15 = v17;
      }
      if ( v17 > 16 && v17 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v17);
    }
    v7 = *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x18);
    *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x18) = v7 + 1;
    if ( !v7 )
      *v6 |= 0x10000uLL;
  }
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)(v2 + 8608), 2u);
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 5) + 8636LL));
  W32ReleasePushLockSharedEx((struct W32_PUSH_LOCK *)(*((_QWORD *)this + 5) + 8608LL), 2u);
  v8 = KeGetCurrentThread();
  v9 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v20 = W32GetCurrentWin32kSessionId(),
        v21 = PsGetCurrentThreadProcess(),
        v20 == (unsigned int)PsGetProcessSessionIdEx(v21)) )
  {
    v10 = (__int64 *)PsGetThreadWin32Thread(v8);
    if ( v10 )
      v9 = *v10;
  }
  v11 = v9 + 8;
  v12 = -v9;
  v13 = (_QWORD *)(v11 & -(__int64)(v12 != 0));
  if ( v13 )
  {
    if ( (*(_BYTE *)((v11 & -(__int64)(v12 != 0)) + 0x18))-- == 1 )
      *v13 &= ~0x10000uLL;
    if ( !*v13 )
      GrepOnAllLocksReleased();
  }
  if ( *((_DWORD *)this + 8) )
  {
    PopThreadGuardedObject(this);
    *((_DWORD *)this + 8) = 0;
  }
}
