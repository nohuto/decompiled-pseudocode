/*
 * XREFs of ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4
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

EUDCCountRegion *__fastcall EUDCCountRegion::EUDCCountRegion(EUDCCountRegion *this, struct Gre::Font::GLOBALS *a2)
{
  struct W32_PUSH_LOCK *v2; // rbx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // rbp
  __int64 *ThreadWin32Thread; // rax
  int v7; // r14d
  __int64 *v8; // rdi
  __int64 v9; // rcx
  char v10; // cl
  __int64 v11; // r12
  __int64 v12; // rbp
  struct _KTHREAD *v13; // r15
  __int64 *v14; // rax
  __int64 v15; // r8
  __int64 *v16; // rdi
  __int64 v17; // rdx
  char v18; // dl
  struct _KTHREAD *v19; // r14
  __int64 v20; // rbp
  __int64 *v21; // rax
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rbp
  _QWORD *v25; // rcx
  bool v26; // zf
  struct _KTHREAD *v27; // rbp
  __int64 v28; // rdi
  __int64 *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdi
  _QWORD *v32; // rcx
  int CurrentWin32kSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  int v36; // edi
  __int64 v37; // rax
  int v38; // edi
  __int64 v39; // rax
  int v40; // ebx
  __int64 v41; // rax
  unsigned __int64 j; // rcx
  int v43; // eax
  int v44; // r8d
  unsigned __int64 i; // rdx
  int v46; // eax

  *((_DWORD *)this + 8) = 0;
  v2 = (struct Gre::Font::GLOBALS *)((char *)a2 + 8624);
  *((_QWORD *)this + 5) = a2;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v7 = 37;
  v8 = (__int64 *)((v5 + 8) & -(__int64)(v5 != 0));
  if ( v8 )
  {
    v9 = *v8;
    if ( *v8 && (v9 & 1) == 0 )
    {
      v44 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v46 = i;
        if ( !_bittest64(&v9, i) )
          v46 = v44;
        v44 = v46;
      }
      if ( v46 > 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, i, (unsigned int)v46);
    }
    v10 = *(_BYTE *)(((v5 + 8) & -(__int64)(v5 != 0)) + 8);
    *(_BYTE *)(((v5 + 8) & -(__int64)(v5 != 0)) + 8) = v10 + 1;
    if ( !v10 )
      *v8 |= 1uLL;
  }
  W32AcquirePushLockSharedEx(v2, 2u);
  v11 = *((_QWORD *)this + 5);
  v12 = 0LL;
  v13 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v36 = W32GetCurrentWin32kSessionId(),
        v37 = PsGetCurrentThreadProcess(),
        v36 == (unsigned int)PsGetProcessSessionIdEx(v37)) )
  {
    v14 = (__int64 *)PsGetThreadWin32Thread(v13);
    if ( v14 )
      v12 = *v14;
  }
  v16 = (__int64 *)((v12 + 8) & -(__int64)(v12 != 0));
  if ( v16 )
  {
    v17 = *v16;
    if ( (*v16 & 0xFFFFFFFFFFFF0000uLL) != 0 && (*v16 & 0x10000) == 0 )
    {
      for ( j = 0LL; j < 0x40; ++j )
      {
        v43 = j;
        if ( !_bittest64(&v17, j) )
          v43 = v7;
        v7 = v43;
      }
      if ( v43 > 16 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(j, v17, v15);
    }
    v18 = *(_BYTE *)(((v12 + 8) & -(__int64)(v12 != 0)) + 0x18);
    *(_BYTE *)(((v12 + 8) & -(__int64)(v12 != 0)) + 0x18) = v18 + 1;
    if ( !v18 )
      *v16 |= 0x10000uLL;
  }
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)(v11 + 8608), 2u);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 5) + 8636LL));
  W32ReleasePushLockSharedEx((struct W32_PUSH_LOCK *)(*((_QWORD *)this + 5) + 8608LL), 2u);
  v19 = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v38 = W32GetCurrentWin32kSessionId(),
        v39 = PsGetCurrentThreadProcess(),
        v38 == (unsigned int)PsGetProcessSessionIdEx(v39)) )
  {
    v21 = (__int64 *)PsGetThreadWin32Thread(v19);
    if ( v21 )
      v20 = *v21;
  }
  v23 = v20 + 8;
  v24 = -v20;
  v25 = (_QWORD *)(v23 & -(__int64)(v24 != 0));
  if ( v25 )
  {
    v26 = (*(_BYTE *)((v23 & -(__int64)(v24 != 0)) + 0x18))-- == 1;
    if ( v26 )
      *v25 &= ~0x10000uLL;
    if ( !*v25 )
      GrepOnAllLocksReleased();
  }
  if ( !*((_DWORD *)this + 8) )
  {
    PushThreadGuardedObject(this, 0LL, EUDCCountRegion::EUDCCountRegion_::_2_::_lambda_1_::_lambda_invoker_cdecl_, v22);
    *((_DWORD *)this + 8) = 1;
  }
  W32ReleasePushLockSharedEx(v2, 2u);
  v27 = KeGetCurrentThread();
  v28 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v40 = W32GetCurrentWin32kSessionId(),
        v41 = PsGetCurrentThreadProcess(),
        v40 == (unsigned int)PsGetProcessSessionIdEx(v41)) )
  {
    v29 = (__int64 *)PsGetThreadWin32Thread(v27);
    if ( v29 )
      v28 = *v29;
  }
  v30 = v28 + 8;
  v31 = -v28;
  v32 = (_QWORD *)(v30 & -(__int64)(v31 != 0));
  if ( v32 )
  {
    v26 = (*(_BYTE *)((v30 & -(__int64)(v31 != 0)) + 8))-- == 1;
    if ( v26 )
      *v32 &= ~1uLL;
    if ( !*v32 )
      GrepOnAllLocksReleased();
  }
  return this;
}
