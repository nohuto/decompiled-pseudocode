/*
 * XREFs of FsRtlpOplockBreakToII @ 0x14050E330
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1403F8170 (FsRtlCheckOplockEx2.c)
 *     FsRtlCheckUpperOplock @ 0x140791080 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpOplockKeysEqual @ 0x1403F7C60 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpClearOwner @ 0x1403F94AC (FsRtlpClearOwner.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1403FAF90 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpModifyThreadPriorities @ 0x1403FB0D4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1404CE5A4 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpWaitOnIrp @ 0x1404E5834 (FsRtlpWaitOnIrp.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14077E784 (FsRtlpOplockTryStartBreakAckTimeout.c)
 */

__int64 __fastcall FsRtlpOplockBreakToII(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        _QWORD *a6,
        __int64 *a7,
        _BYTE *a8,
        char *a9)
{
  __int64 v11; // r9
  unsigned int v13; // edi
  __int64 v14; // rsi
  __int64 v15; // r14
  _QWORD *v16; // rcx
  int v17; // eax
  int v18; // eax
  __int128 v20; // [rsp+40h] [rbp-38h] BYREF
  __int64 v21; // [rsp+50h] [rbp-28h]

  v11 = a2;
  v20 = 0LL;
  v21 = 0LL;
  if ( (*(_DWORD *)(a1 + 144) & 0x40) == 0 || (*(_DWORD *)(a1 + 144) & 0x7000) != 0 )
    return 0;
  if ( (a4 & 8) != 0 )
  {
    v13 = 0;
  }
  else
  {
    v13 = 0;
    if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), 0) )
      return v13;
  }
  if ( (a4 & 0x10010000) != 0 )
    return (unsigned int)-1073739511;
  if ( (*(_DWORD *)(a1 + 144) & 0x1F00F80) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 144) & 0x80u) != 0 )
    {
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x8000020 | 1;
      *(_QWORD *)(a1 + 8) = 0LL;
      return v13;
    }
    goto LABEL_19;
  }
  v14 = *(_QWORD *)a1;
  v15 = 7LL;
  *(_BYTE *)(v14 + 69) = KeAcquireQueuedSpinLock(7uLL);
  _InterlockedExchange64((volatile __int64 *)(v14 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v14 + 69));
  if ( !*(_BYTE *)(v14 + 68) )
  {
    v17 = *(_DWORD *)(a1 + 144);
    if ( (v17 & 6) != 0 )
    {
      v18 = v17 | 0x100;
    }
    else
    {
      v18 = v17 | 0x200;
      v15 = 8LL;
    }
    *(_DWORD *)(a1 + 144) = v18;
    *(_QWORD *)(*(_QWORD *)a1 + 56LL) = v15;
    *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
    IofCompleteRequest(*(PIRP *)a1, 1);
    *(_QWORD *)a1 = 0LL;
LABEL_19:
    if ( (a4 & 1) != 0 )
    {
      return 264;
    }
    else
    {
      FsRtlpOplockTryStartBreakAckTimeout(a1 + 160, *(_QWORD *)(a1 + 176), a3, v11);
      FsRtlpModifyThreadPriorities(a1, 0LL, 1);
      FsRtlpOplockSendModernAppTermination(a1, 0LL);
      *a8 = 0;
      return (unsigned int)FsRtlpWaitOnIrp(a1, a3, a6, a7, &v20, 0, a9);
    }
  }
  *(_QWORD *)(v14 + 56) = 8LL;
  FsRtlpModifyThreadPriorities(a1, 0LL, 0);
  FsRtlpClearOwner(a1, 0LL);
  *(_BYTE *)(a1 + 32) = 0;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
    *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)a1 + 48LL) = -1073741536;
  IofCompleteRequest(*(PIRP *)a1, 1);
  *(_QWORD *)a1 = 0LL;
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x8000020 | 1;
  while ( 1 )
  {
    v16 = *(_QWORD **)(a1 + 88);
    if ( v16 == (_QWORD *)(a1 + 88) )
      break;
    FsRtlpRemoveAndCompleteWaitingIrp(v16);
  }
  return v13;
}
