/*
 * XREFs of StorpTelemetryCollectNvmeErrorData @ 0x1400BA2B8
 * Callers:
 *     NvmeCompletionDpcRoutine @ 0x140030E20 (NvmeCompletionDpcRoutine.c)
 * Callees:
 *     StorpNvmeAreTelemetryErrorsEqual @ 0x1400B98FC (StorpNvmeAreTelemetryErrorsEqual.c)
 *     StorpTelemetryNvmeConstructErrorEntry @ 0x1400BD6B4 (StorpTelemetryNvmeConstructErrorEntry.c)
 *     StorpTelemetryNvmeSendNamespaceUniqueErrorData @ 0x1400BFE24 (StorpTelemetryNvmeSendNamespaceUniqueErrorData.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

void __fastcall StorpTelemetryCollectNvmeErrorData(int a1, __int64 a2, _DWORD *a3, int a4)
{
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  unsigned int v14; // eax
  int v15; // ecx
  unsigned __int8 i; // r14
  __int64 v17; // r11
  __int64 v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // r11
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-51h] BYREF
  _OWORD v23[6]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+2Fh]

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset_0(v23, 0, 0x68uLL);
  StorpTelemetryNvmeConstructErrorEntry(a1, a2, (_DWORD)a3, a4, (__int64)v23);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a2 + 608) + 104LL), &LockHandle);
  v8 = *(_QWORD *)(a2 + 608);
  v9 = v23[1];
  *(_OWORD *)(v8 + 120) = v23[0];
  v10 = v23[2];
  *(_OWORD *)(v8 + 136) = v9;
  v11 = v23[3];
  *(_OWORD *)(v8 + 152) = v10;
  v12 = v23[4];
  *(_OWORD *)(v8 + 168) = v11;
  v13 = v23[5];
  *(_OWORD *)(v8 + 184) = v12;
  *(_QWORD *)&v12 = v24;
  *(_OWORD *)(v8 + 200) = v13;
  *(_QWORD *)(v8 + 216) = v12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 608) + 112LL), 1u) == -1 )
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a2 + 608) + 112LL), -1);
  v14 = (unsigned __int8)*a3;
  if ( v14 == 2 || v14 <= 0x19 && (v15 = 33554738, _bittest(&v15, v14)) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 608) + 116LL), 1u) == -1 )
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a2 + 608) + 116LL), -1);
  }
  for ( i = 0; i < 0xAu; ++i )
  {
    v17 = *(_QWORD *)(a2 + 608);
    v18 = 104LL * i;
    v19 = v18 + v17 + 1264;
    v20 = v17 + 120;
    if ( StorpNvmeAreTelemetryErrorsEqual(v17 + 120, v19) )
    {
      ++*(_DWORD *)(v18 + v21 + 1356);
      break;
    }
    memset_0(v23, 0, 0x68uLL);
    if ( StorpNvmeAreTelemetryErrorsEqual(v19, (__int64)v23) )
    {
      *(_OWORD *)v19 = *(_OWORD *)v20;
      *(_OWORD *)(v19 + 16) = *(_OWORD *)(v20 + 16);
      *(_OWORD *)(v19 + 32) = *(_OWORD *)(v20 + 32);
      *(_OWORD *)(v19 + 48) = *(_OWORD *)(v20 + 48);
      *(_OWORD *)(v19 + 64) = *(_OWORD *)(v20 + 64);
      *(_OWORD *)(v19 + 80) = *(_OWORD *)(v20 + 80);
      *(_QWORD *)(v19 + 96) = *(_QWORD *)(v20 + 96);
      *(_DWORD *)(v18 + *(_QWORD *)(a2 + 608) + 1356) = 1;
      StorpTelemetryNvmeSendNamespaceUniqueErrorData(a2, v18 + *(_QWORD *)(a2 + 608) + 1264LL);
      break;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
