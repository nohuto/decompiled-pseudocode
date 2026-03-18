/*
 * XREFs of ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x140031F58
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1400051E8 (VidSchiSetFlipDevice.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140031F30 (-IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x14003233C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     VidSchiExecuteMmIoFlip @ 0x140032CC4 (VidSchiExecuteMmIoFlip.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x14004C728 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchIsVSyncEnabled @ 0x1400FDD40 (VidSchIsVSyncEnabled.c)
 */

__int64 __fastcall VidSchiSubmitDisablePlanesFlip(struct _VIDSCH_DEVICE *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  int v9; // eax
  unsigned int v10; // edx
  struct _VIDSCH_GLOBAL *v11; // rcx
  __int64 v12; // rcx
  unsigned int i; // r8d
  bool v14; // zf
  int v15; // eax
  char v16; // cl
  __int64 v17; // rdi
  _DWORD *v18; // rbx
  _DWORD *v19; // rbx
  void *v20; // rcx
  unsigned int *v21; // rdx
  int v22; // eax
  int v23; // r15d
  unsigned int v24; // edi
  void (__fastcall *v25)(_QWORD); // rax
  __int64 v26; // [rsp+50h] [rbp-59h]
  __int64 v27; // [rsp+58h] [rbp-51h]
  _QWORD v28[2]; // [rsp+60h] [rbp-49h] BYREF
  struct _KEVENT *v29; // [rsp+70h] [rbp-39h] BYREF
  _QWORD v30[2]; // [rsp+78h] [rbp-31h] BYREF
  char v31; // [rsp+88h] [rbp-21h]
  int v32; // [rsp+8Ch] [rbp-1Dh]
  _QWORD v33[4]; // [rsp+90h] [rbp-19h] BYREF
  __int16 v34; // [rsp+B0h] [rbp+7h]
  char v35; // [rsp+110h] [rbp+67h] BYREF
  char v36; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v37; // [rsp+120h] [rbp+77h]
  void *Src; // [rsp+128h] [rbp+7Fh]

  v2 = *((_QWORD *)a1 + 5);
  v4 = a2;
  v5 = *(_QWORD *)(v2 + 8LL * a2 + 3448);
  v26 = v5;
  if ( !v5 )
    return 0LL;
  v6 = *(_QWORD *)(v5 + 32);
  v27 = v6;
  if ( !v6 )
    return 0LL;
  v7 = *(_QWORD *)(v2 + 16);
  v28[0] = 0LL;
  v28[1] = *(_QWORD *)(v7 + 3168);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v28);
  if ( v28[0] )
  {
    v9 = (1 << *(_DWORD *)(v2 + 160)) - 1;
    Src = (void *)((*(_BYTE *)(v28[0] + 356LL) != 0 ? 0x68 : 0) + v28[0] + 496LL);
    *(_DWORD *)Src ^= (*(_DWORD *)Src ^ (v9 << 10)) & 0xFFC00;
    _InterlockedAdd((volatile signed __int32 *)(v2 + 800), 1u);
    IncrementNumberOfQueuedFlipPerSource((struct _VIDSCH_GLOBAL *)v2, v4);
    _InterlockedAdd((volatile signed __int32 *)a1 + 459, 1u);
    _InterlockedAdd((volatile signed __int32 *)a1 + v4 + 443, 1u);
    VidSchIsVSyncEnabled(v11, v10);
    if ( *(_DWORD *)(*(_QWORD *)(v2 + 8 * v4 + 3448) + 44488LL) != -1 )
    {
      v25 = *(void (__fastcall **)(_QWORD))(v2 + 3304);
      if ( v25 )
        v25(*(_QWORD *)(v2 + 3368));
    }
    v34 = 0;
    v33[0] = v2 + 2016;
    AcquireSpinLock::Acquire((Acquire *)v33);
    v29 = (struct _KEVENT *)v2;
    v32 = 2;
    v30[1] = v30;
    v31 = 0;
    v30[0] = v30;
    _InterlockedAdd((volatile signed __int32 *)a1 + v4 + 427, 1u);
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 6) + 32LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)a1 + 5) + 4LL))
                    + 8 * v4
                    + 88);
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 8 * v4 + 6728) + 8LL), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v12 + 8), 1u);
    ++*(_DWORD *)(v2 + 868);
    ++*((_DWORD *)a1 + 460);
    ++*(_DWORD *)(v26 + 3236);
    for ( i = ((unsigned __int16)*(_DWORD *)Src | (unsigned __int16)(*(_DWORD *)Src >> 10)) & 0x3FF; ; i &= ~(1 << v16) )
    {
      v14 = !_BitScanForward((unsigned int *)&v15, i);
      v16 = -1;
      LODWORD(v37) = 0;
      if ( !v14 )
        v16 = v15;
      if ( !i )
        break;
      ++*(_DWORD *)(304LL * v16 + *(_QWORD *)(v2 + 8 * v4 + 3448) + 196);
    }
    v37 = *(unsigned int *)(v6 + 56);
    v17 = 1400 * v37 + v6;
    v18 = *(_DWORD **)(v17 + 1312);
    memset((void *)(v17 + 120), 0, 0x578uLL);
    *(_QWORD *)(v17 + 1312) = v18;
    memset(v18 + 6, 0, (unsigned int)(v18[1] * (72 * v18[2] + 224)));
    *(_DWORD *)(v17 + 1272) |= 0x10u;
    v19 = Src;
    v20 = *(void **)(v17 + 1312);
    v21 = (unsigned int *)Src;
    *(_QWORD *)(v17 + 1160) = a1;
    v22 = *((_DWORD *)a1 + v4 + 129);
    *(_DWORD *)(v17 + 1272) |= 0x180u;
    *(_DWORD *)(v17 + 1192) = 0;
    *(_DWORD *)(v17 + 1176) = v22;
    memmove(v20, v21, v21[3]);
    v23 = v37;
    v19[4] = 0;
    *(_DWORD *)(v27 + 56) = ((_BYTE)v23 + 1) & 0x3F;
    _InterlockedAdd((volatile signed __int32 *)(v2 + 872), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v26 + 3240), 1u);
    *(_DWORD *)(v17 + 1172) = 4;
    v36 = 0;
    v35 = 0;
    v24 = VidSchiExecuteMmIoFlip(&v29, v2, (unsigned int)v4, v27, v23, &v35, &v36);
    if ( v36 )
      v24 = VidSchiExecuteMmIoFlip(&v29, v2, (unsigned int)v4, v27, v23, &v35, &v36);
    HwQueueStagingList::~HwQueueStagingList(&v29);
    AcquireSpinLock::Release((AcquireSpinLock *)v33);
    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v28);
    return v24;
  }
  else
  {
    _InterlockedAdd(&dword_14008A9A0, 1u);
    WdLogSingleEntry1(6LL, 23065LL);
    WdLogGlobalForLineNumber = 23065;
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88])(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate VidSchSubmitData",
      23065LL,
      0LL,
      0LL,
      0LL,
      0LL);
    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v28);
    return 3221225495LL;
  }
}
