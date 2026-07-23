/*
 * XREFs of MiHandleInsertedDataVad @ 0x140996734
 * Callers:
 *     MiMapViewOfDataSection @ 0x140995790 (MiMapViewOfDataSection.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     MiReferenceVad @ 0x14027DE00 (MiReferenceVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140317570 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x140414D68 (MiUnlockAndDereferenceNestedVad.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiLogPerfMemoryEvent @ 0x1404863EC (MiLogPerfMemoryEvent.c)
 *     MiUnmapVad @ 0x140994B10 (MiUnmapVad.c)
 *     MiFillMapFileInfo @ 0x140997BA8 (MiFillMapFileInfo.c)
 *     MiCommitVadMetadataBits @ 0x140997DF4 (MiCommitVadMetadataBits.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140B08044 (MiFinishPlaceholderVadReplacement.c)
 *     MiSecureVad @ 0x140B51BA0 (MiSecureVad.c)
 */

__int64 __fastcall MiHandleInsertedDataVad(__int64 *a1)
{
  struct _KTHREAD *CurrentThread; // r12
  volatile signed __int32 *v3; // r14
  __int64 v4; // rsi
  volatile signed __int64 *v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r10
  BOOL v14; // r11d
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  int v19; // ebp
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // ebp
  ULONG_PTR *v25; // rbx
  ULONG_PTR v26; // rcx
  int v28; // r9d
  int v29; // r14d
  ULONG_PTR v30; // rcx
  _OWORD v31[3]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v32; // [rsp+90h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = (volatile signed __int32 *)a1[3];
  v4 = *a1;
  v5 = (volatile signed __int64 *)a1[13];
  v6 = *(_QWORD *)(*a1 + 88);
  v7 = *(_QWORD *)v3;
  if ( !*((_QWORD *)v3 + 8) && !*(_QWORD *)(v7 + 56) )
    *(_QWORD *)(v7 + 56) = a1[15];
  v8 = (_QWORD *)a1[18];
  if ( v8 )
  {
    v9 = (unsigned __int64)a1[15] >> 16;
    v10 = (unsigned __int64)(-524288 * qword_140E2DFC8 + (v8[1] << 19)) >> 16;
    v11 = (unsigned __int64)a1[16] >> 16;
    if ( v11 >= v10 )
    {
      v12 = v10 + *v8;
      if ( v9 < v12 )
      {
        v13 = (unsigned __int64)a1[15] >> 16;
        if ( v9 < v10 )
          v13 = (unsigned __int64)(-524288 * qword_140E2DFC8 + (v8[1] << 19)) >> 16;
        v14 = v9 < v10;
        if ( v11 >= v12 )
        {
          v11 = v12 - 1;
          v14 = 1;
        }
        v15 = v11 - v10;
        v16 = v13 - v10;
        v17 = v15 - v16 + 1;
        if ( v15 == v16 && !v14 || v16 == v8[2] )
          v8[2] = v15 + 1;
        v18 = v8[4];
        v19 = 0;
        v20 = v15 + 1;
        if ( v18 >= v20 || v8[3] + v18 <= v16 )
        {
          if ( v17 <= 1 || v14 )
            goto LABEL_26;
        }
        else
        {
          v19 = 1;
        }
        v8[4] = v20;
        if ( v17 > 1 && !v14 )
        {
          if ( v19 )
          {
            v21 = v8[3];
            if ( v17 < v21 )
              v21 = v17;
            v8[3] = v21;
          }
          else
          {
            v8[3] = v17;
          }
        }
      }
    }
  }
LABEL_26:
  v22 = *((_DWORD *)a1 + 8);
  if ( (v22 == 4 || v22 == 6) && *((_QWORD *)v3 + 8) )
    _InterlockedIncrement(v3 + 23);
  if ( (PerfGlobalGroupMask & 0x8000) != 0 )
  {
    memset(v31, 0, sizeof(v31));
    if ( (MiReadVadFlags((__int64)v5) & 0x1C) != 4 )
    {
      MiFillMapFileInfo(v23, v31);
      MiLogPerfMemoryEvent(1061, 0x8000u, (__int64)v31, 44, 5249283);
    }
  }
  v24 = 0;
  if ( !*(_DWORD *)(v4 + 120) && !*(_QWORD *)(v4 + 72) )
  {
    v25 = (ULONG_PTR *)(a1 + 17);
    if ( *v25 )
    {
      if ( (_InterlockedExchangeAdd64(v5 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5 + 5);
      KeAbPostRelease((unsigned __int64)(v5 + 5));
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v6);
    }
    else
    {
      MiUnlockVad((__int64)CurrentThread, (__int64)v5);
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v6);
    }
LABEL_35:
    v26 = *v25;
    if ( !*v25 )
      return v24;
LABEL_63:
    MiFinishPlaceholderVadReplacement(v26);
    return v24;
  }
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v6);
  *((_DWORD *)a1 + 14) &= ~1u;
  MiReferenceVad((ULONG_PTR)v5);
  if ( *(_DWORD *)(v4 + 120) )
  {
    v24 = MiCommitVadMetadataBits(v5, 0LL);
    if ( (v24 & 0x80000000) != 0 )
    {
      MiUnmapVad((ULONG_PTR)v5);
      v26 = a1[17];
      if ( !v26 )
        return v24;
      goto LABEL_63;
    }
  }
  if ( !*(_QWORD *)(v4 + 72) )
  {
LABEL_50:
    v25 = (ULONG_PTR *)(a1 + 17);
    if ( *v25 )
      MiUnlockAndDereferenceNestedVad((PVOID)v5);
    else
      MiUnlockAndDereferenceVad((volatile signed __int32 *)v5);
    goto LABEL_35;
  }
  v28 = *(_DWORD *)(v4 + 64);
  v32 = 0LL;
  if ( v28 != 1 && v28 != -2147483647 && v28 != 2 && v28 != 4 )
  {
    v29 = -1073741755;
    goto LABEL_52;
  }
  v29 = MiSecureVad((_DWORD)v5, a1[15], *(_QWORD *)(v4 + 24), v28, 0, (__int64)&v32);
  if ( v29 >= 0 )
  {
    **(_QWORD **)(v4 + 72) = qword_140E2D7C0 ^ v32;
    goto LABEL_50;
  }
LABEL_52:
  MiUnmapVad((ULONG_PTR)v5);
  v30 = a1[17];
  if ( v30 )
    MiFinishPlaceholderVadReplacement(v30);
  return (unsigned int)v29;
}
