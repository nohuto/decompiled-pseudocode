/*
 * XREFs of VidSchiEnsureVSyncEnabled @ 0x1400FDA70
 * Callers:
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x140009B58 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x140011854 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiSubmitCommandPacketToQueueDirectSubmitAware @ 0x140055344 (VidSchiSubmitCommandPacketToQueueDirectSubmitAware.c)
 * Callees:
 *     ?IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140031F30 (-IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     VidSchIsVSyncEnabled @ 0x1400FDD40 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiEnsureVSyncEnabled(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // r14
  __int64 v6; // rbp
  int v7; // ecx
  void (__fastcall *v8)(_QWORD); // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r10
  unsigned int v14; // r9d
  bool v15; // zf
  int v16; // eax
  char v17; // cl
  int v18; // eax
  void (__fastcall *v19)(_QWORD); // rax

  v2 = *(_QWORD *)(a1 + 96);
  v4 = *(_QWORD *)(a2 + 40);
  v6 = *(unsigned int *)(a1 + 168);
  if ( v2 )
  {
    if ( *(_DWORD *)(a1 + 48) == 3 && *(_DWORD *)(*(_QWORD *)(v4 + 8 * v6 + 3448) + 44488LL) != -1 )
    {
      v8 = *(void (__fastcall **)(_QWORD))(v4 + 3304);
      if ( v8 )
        v8(*(_QWORD *)(v4 + 3368));
    }
  }
  if ( (*(_DWORD *)(a1 + 280) & 0x1000000) != 0
    && *(_DWORD *)(*(_QWORD *)(v4 + 8LL * *(unsigned int *)(a1 + 396) + 3448) + 44488LL) != -1 )
  {
    v19 = *(void (__fastcall **)(_QWORD))(v4 + 3304);
    if ( v19 )
      v19(*(_QWORD *)(v4 + 3368));
  }
  if ( *(_DWORD *)(a1 + 48) == 3 && *(_DWORD *)(a1 + 168) != -1 )
  {
    v11 = *(_QWORD *)(a1 + 88);
    if ( v11 )
      v12 = *(_QWORD *)(v11 + 104);
    else
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 40LL) + 8LL);
    v13 = *(_QWORD *)(v12 + 40);
    if ( (*(_DWORD *)(a1 + 72) & 0x800000) != 0 )
      v14 = ((unsigned __int16)*(_DWORD *)(a1 + 880) | (unsigned __int16)(*(_DWORD *)(a1 + 880) >> 10)) & 0x3FF;
    else
      v14 = (1 << *(_DWORD *)(v13 + 160)) - 1;
    v15 = !_BitScanForward((unsigned int *)&v16, v14);
    v17 = -1;
    if ( !v15 )
      v17 = v16;
    while ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 8LL * *(unsigned int *)(a1 + 168) + 3448)
                                                      + 304LL * v17
                                                      + 192));
      v18 = 1 << v17;
      v17 = -1;
      v14 &= ~v18;
      v15 = !_BitScanForward((unsigned int *)&v18, v14);
      if ( !v15 )
        v17 = v18;
    }
  }
  v7 = *(_DWORD *)(a1 + 72);
  if ( (v7 & 0x1000) == 0 || (*(_DWORD *)(a1 + 72) & 0xC00) == 0x400 || (_DWORD)v6 == -1 )
    return;
  if ( (v7 & 0x40000) != 0 )
  {
    if ( (v7 & 0x1000000) == 0 )
      return;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 800));
    IncrementNumberOfQueuedFlipPerSource((struct _VIDSCH_GLOBAL *)v4, v6);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 1836));
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v6 + 1772));
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v6 + 1708));
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 32LL)
                               + 8LL * *(unsigned int *)(*(_QWORD *)(a2 + 40) + 4LL))
                   + 8 * v6
                   + 88);
    if ( (*(_DWORD *)(a1 + 72) & 0x80u) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v4 + 8 * v6 + 6728) + 8LL));
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v10 = *(_DWORD *)(a1 + 72);
    if ( (v10 & 4) == 0 )
    {
      if ( v2 && !*(_DWORD *)(a1 + 48) && (v10 & 0x4000) != 0 && (*(_DWORD *)(a2 + 56) & 2) != 0 )
        goto LABEL_35;
      return;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 800));
    IncrementNumberOfQueuedFlipPerSource((struct _VIDSCH_GLOBAL *)v4, v6);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 1836));
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v6 + 1772));
    if ( !v2 )
      return;
  }
  if ( (*(_DWORD *)(a2 + 56) & 2) != 0 || *(int *)(a1 + 400) >= 4 || *(_BYTE *)(v4 + 164) )
LABEL_35:
    VidSchIsVSyncEnabled((struct _VIDSCH_GLOBAL *)v4, v6);
}
