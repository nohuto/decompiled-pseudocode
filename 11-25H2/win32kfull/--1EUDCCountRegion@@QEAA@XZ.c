/*
 * XREFs of ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0
 * Callers:
 *     GreExtTextOutW @ 0x140057230 (GreExtTextOutW.c)
 *     NtGdiGetTextCharsetInfo @ 0x140080680 (NtGdiGetTextCharsetInfo.c)
 *     NtGdiGetRealizationInfo @ 0x140080FE0 (NtGdiGetRealizationInfo.c)
 *     NtGdiGetTextMetricsW @ 0x140082190 (NtGdiGetTextMetricsW.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1400835D0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiGetGlyphOutline @ 0x1400AED00 (NtGdiGetGlyphOutline.c)
 *     NtGdiGetFontData @ 0x1400B0BF0 (NtGdiGetFontData.c)
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1400BB700 (NtGdiGetOutlineTextMetricsInternalW.c)
 *     NtGdiGetWidthTable @ 0x1400BE340 (NtGdiGetWidthTable.c)
 *     GreGetTextExtentW @ 0x1400C0134 (GreGetTextExtentW.c)
 *     GreGetTextMetricsW @ 0x1400C0230 (GreGetTextMetricsW.c)
 *     NtGdiExtTextOutW @ 0x14015E570 (NtGdiExtTextOutW.c)
 *     NtGdiExtEscape @ 0x140167C30 (NtGdiExtEscape.c)
 *     NtGdiGetTextExtentExW @ 0x14016C1C0 (NtGdiGetTextExtentExW.c)
 *     NtGdiGetKerningPairs @ 0x1401785E0 (NtGdiGetKerningPairs.c)
 *     NtGdiGetCharABCWidthsW @ 0x140185970 (NtGdiGetCharABCWidthsW.c)
 *     NtGdiGetLinkedUFIs @ 0x14018BEC0 (NtGdiGetLinkedUFIs.c)
 *     NtGdiGetCharWidthW @ 0x1401AF3A0 (NtGdiGetCharWidthW.c)
 *     NtGdiGetGlyphIndicesWInternal @ 0x1401B6AB0 (NtGdiGetGlyphIndicesWInternal.c)
 *     NtGdiGetFontUnicodeRanges @ 0x1401C7B20 (NtGdiGetFontUnicodeRanges.c)
 *     NtGdiGetUFI @ 0x1401DB280 (NtGdiGetUFI.c)
 *     NtGdiGetCharWidthInfo @ 0x1401DD760 (NtGdiGetCharWidthInfo.c)
 *     NtGdiFontIsLinked @ 0x1401DF320 (NtGdiFontIsLinked.c)
 *     NtGdiQueryFontAssocInfo @ 0x1401E8510 (NtGdiQueryFontAssocInfo.c)
 *     NtGdiGetTextExtent @ 0x140203B20 (NtGdiGetTextExtent.c)
 *     NtGdiGetStringBitmapW @ 0x1402093C0 (NtGdiGetStringBitmapW.c)
 *     NtGdiPolyTextOutW @ 0x14021F600 (NtGdiPolyTextOutW.c)
 *     GreGetTextCharsetInfo @ 0x1403050AC (GreGetTextCharsetInfo.c)
 *     NtGdiGetETM @ 0x140311420 (NtGdiGetETM.c)
 *     NtGdiStartDoc @ 0x140329180 (NtGdiStartDoc.c)
 *     NtGdiGetCharacterPlacementW @ 0x140339260 (NtGdiGetCharacterPlacementW.c)
 *     NtGdiGetEmbUFI @ 0x140339880 (NtGdiGetEmbUFI.c)
 * Callees:
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400828F0 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140082A30 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall EUDCCountRegion::~EUDCCountRegion(EUDCCountRegion *this)
{
  __int64 v2; // r14
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *ThreadWin32Thread; // rax
  __int64 *v6; // rbx
  __int64 v7; // r8
  char v8; // dl
  struct _KTHREAD *v9; // rbp
  __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  _QWORD *v14; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v18; // ebx
  __int64 v19; // rax
  int v20; // edx
  unsigned __int64 i; // rcx
  int v22; // eax

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
  v6 = (__int64 *)((v3 + 8) & -(__int64)(v3 != 0));
  if ( v6 )
  {
    v7 = *v6;
    if ( (*v6 & 0xFFFFFFFFFFFF0000uLL) != 0 && (*v6 & 0x10000) == 0 )
    {
      v20 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v22 = i;
        if ( !_bittest64(&v7, i) )
          v22 = v20;
        v20 = v22;
      }
      if ( v22 > 16 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v22, v7);
    }
    v8 = *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x18);
    *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x18) = v8 + 1;
    if ( !v8 )
      *v6 |= 0x10000uLL;
  }
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)(v2 + 8608), 2u);
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 5) + 8636LL));
  W32ReleasePushLockSharedEx((struct W32_PUSH_LOCK *)(*((_QWORD *)this + 5) + 8608LL), 2u);
  v9 = KeGetCurrentThread();
  v10 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v18 = W32GetCurrentWin32kSessionId(),
        v19 = PsGetCurrentThreadProcess(),
        v18 == (unsigned int)PsGetProcessSessionIdEx(v19)) )
  {
    v11 = (__int64 *)PsGetThreadWin32Thread(v9);
    if ( v11 )
      v10 = *v11;
  }
  v12 = v10 + 8;
  v13 = -v10;
  v14 = (_QWORD *)(v12 & -(__int64)(v13 != 0));
  if ( v14 )
  {
    if ( (*(_BYTE *)((v12 & -(__int64)(v13 != 0)) + 0x18))-- == 1 )
      *v14 &= ~0x10000uLL;
    if ( !*v14 )
      GrepOnAllLocksReleased();
  }
  if ( *((_DWORD *)this + 8) )
  {
    PopThreadGuardedObject(this);
    *((_DWORD *)this + 8) = 0;
  }
}
