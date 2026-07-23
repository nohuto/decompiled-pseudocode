/*
 * XREFs of EtwpCovSampCaptureBufferQueue @ 0x14030A994
 * Callers:
 *     EtwpCovSampCaptureSample @ 0x1406CC924 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140A36480 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x14030AB58 (EtwpCovSampTryAcquireBufferLock.c)
 *     EtwpCovSampSampleBufferGet @ 0x14030ABE0 (EtwpCovSampSampleBufferGet.c)
 *     ExSaDecodeHandle @ 0x14030C290 (ExSaDecodeHandle.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x140470B28 (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampSampleBufferDecRef @ 0x1406CCD50 (EtwpCovSampSampleBufferDecRef.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

int __fastcall EtwpCovSampCaptureBufferQueue(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // rcx
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rax
  __int16 v9; // r11
  unsigned __int16 v10; // r13
  unsigned __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // rsi
  PSLIST_ENTRY v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // r12
  int v18; // ecx
  KIRQL v19; // dl
  size_t v20; // r8
  int v21; // ecx
  KIRQL NewIrql; // [rsp+78h] [rbp+10h] BYREF
  size_t Size; // [rsp+80h] [rbp+18h]

  v2 = *(unsigned __int16 *)(a2 + 62);
  if ( !(_WORD)v2 )
  {
    v15 = *(_QWORD *)(a2 + 48);
    v16 = *(_QWORD *)(v15 + 32);
    if ( *(_DWORD *)(v15 + 40) )
    {
      RtlpInterlockedPushEntrySList(*(PSLIST_HEADER *)(a2 + 48), (PSLIST_ENTRY)a2);
      LODWORD(v14) = *(_DWORD *)(v15 + 40);
      if ( (_DWORD)v14 )
        return (int)v14;
    }
    else
    {
      RtlpInterlockedPushEntrySList(*(PSLIST_HEADER *)(v15 + 32), (PSLIST_ENTRY)a2);
      LODWORD(v14) = _InterlockedIncrement((volatile signed __int32 *)(v16 + 76));
      if ( (unsigned int)v14 < *(_DWORD *)(v16 + 72) )
        return (int)v14;
    }
    LODWORD(v14) = KiInsertQueueDpc(a1 + 1192, 0LL, 0LL, 0LL, 0);
    return (int)v14;
  }
  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0LL;
  LODWORD(Size) = 8 * v2;
  v7 = 0LL;
  NewIrql = 0;
  v8 = ExSaDecodeHandle(v5);
  v10 = v9 + 8;
  v11 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = v7;
      if ( !(unsigned int)EtwpCovSampTryAcquireBufferLock(v11, &NewIrql) )
      {
        v13 = 0LL;
        goto LABEL_29;
      }
      v13 = *(_QWORD *)(v11 + 8);
      if ( v13 )
        break;
      if ( v7 )
      {
        if ( !*(_DWORD *)(v11 + 120) )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)v11, NewIrql);
          goto LABEL_30;
        }
        *(_QWORD *)(v11 + 8) = v7;
        v7 = 0LL;
        v13 = v12;
        break;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v11, NewIrql);
      v7 = EtwpCovSampSampleBufferGet(a1);
      if ( !v7 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 316));
        goto LABEL_8;
      }
    }
    v17 = *(int *)(v13 + 60);
    v18 = v17 + v10;
    if ( v18 <= *(_DWORD *)(v13 + 64) )
      break;
    v19 = NewIrql;
    *(_QWORD *)(v11 + 8) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)v11, v19);
    EtwpCovSampSampleBufferDecRef(a1, v13);
  }
  ++*(_DWORD *)(v13 + 56);
  *(_DWORD *)(v13 + 60) = v18;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v13 + 48)) <= 1 )
    __fastfail(0xEu);
  KeReleaseSpinLock((PKSPIN_LOCK)v11, NewIrql);
  v6 = v13 + v17 + 72;
  *(_DWORD *)v6 = v17;
  *(_WORD *)(v6 + 4) = v10;
LABEL_29:
  if ( !v7 )
    goto LABEL_31;
LABEL_30:
  EtwpCovSampSampleBufferDecRef(a1, v7);
LABEL_31:
  if ( v6 )
  {
    v20 = (unsigned int)Size;
    v21 = *(_DWORD *)(v6 + 4) ^ (*(_DWORD *)(v6 + 4) ^ (*(unsigned __int16 *)(a2 + 62) << 16)) & 0x7FFF0000;
    *(_DWORD *)(v6 + 4) = v21;
    *(_DWORD *)(v6 + 4) = v21 & 0x7FFFFFFF | ((*(_DWORD *)(a2 + 56) & 0xFFFFFFFC) << 29);
    memmove((void *)(v6 + 8), (const void *)(a2 + 64), v20);
    EtwpCovSampSampleBufferDecRef(a1, v13);
    LODWORD(v14) = EtwpCovSampCaptureBufferRelease(a1, a2);
    return (int)v14;
  }
  LOBYTE(v13) = 0;
LABEL_8:
  if ( KeGetCurrentIrql() > 2u )
  {
    v14 = RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 1072), (PSLIST_ENTRY)a2);
    if ( !v14 )
      LODWORD(v14) = KiInsertQueueDpc(a1 + 1128, 0LL, 0LL, 0LL, v13);
  }
  else
  {
    v14 = RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 1088), (PSLIST_ENTRY)a2);
    if ( !v14 )
      LODWORD(v14) = KeSetEvent((PRKEVENT)(a1 + 1104), *(_DWORD *)(a1 + 1304), 0);
  }
  return (int)v14;
}
