/*
 * XREFs of FsRtlpOplockBreakToNone @ 0x1405297A0
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1403F8170 (FsRtlCheckOplockEx2.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1405B8790 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlCheckUpperOplock @ 0x140791080 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403F47AC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpOplockKeysEqual @ 0x1403F7C60 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpClearOwner @ 0x1403F94AC (FsRtlpClearOwner.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1403FAF90 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpModifyThreadPriorities @ 0x1403FB0D4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1404CE5A4 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpWaitOnIrp @ 0x1404E5834 (FsRtlpWaitOnIrp.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14077E784 (FsRtlpOplockTryStartBreakAckTimeout.c)
 */

__int64 __fastcall FsRtlpOplockBreakToNone(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6,
        __int64 *a7,
        _BYTE *a8,
        char *a9)
{
  int v9; // esi
  unsigned int v13; // edi
  int v14; // eax
  __int64 v15; // r14
  _QWORD *v16; // rcx
  __int64 v17; // r14
  __int64 *i; // rsi
  int v19; // eax
  int v20; // eax
  __int128 v22; // [rsp+40h] [rbp-38h] BYREF
  __int64 v23; // [rsp+50h] [rbp-28h]

  v9 = a4;
  v22 = 0LL;
  v23 = 0LL;
  v13 = 0;
  if ( !a1 || *(_DWORD *)(a1 + 144) == 1 || (*(_DWORD *)(a1 + 144) & 0x6000) != 0 )
    return v13;
  v14 = *(_DWORD *)(a1 + 144);
  if ( (v14 & 0x1F00F90) == 0 )
  {
    v15 = *(_QWORD *)a1;
    if ( (v14 & 0x1000) != 0 )
      return v13;
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    *(_BYTE *)(v15 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v15 + 104), 0LL);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v15 + 69));
    if ( *(_BYTE *)(v15 + 68) )
    {
      *(_QWORD *)(v15 + 56) = 8LL;
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
    *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 8LL;
    *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
    IofCompleteRequest(*(PIRP *)a1, 1);
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 144) |= 0x200u;
    goto LABEL_14;
  }
  if ( (v14 & 0x1F0FFDF) == 0x10 || (*(_DWORD *)(a1 + 144) & 0x1F0FFDF) == 0x1010 )
  {
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    v17 = a1 + 40;
    for ( i = *(__int64 **)(a1 + 40); i != (__int64 *)v17; i = (__int64 *)*i )
    {
      if ( *(_DWORD *)(i[2] + 24) != 590400 )
      {
        i = (__int64 *)i[1];
        FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*i, 0, 0, a1);
      }
    }
    v19 = *(_DWORD *)(a1 + 144);
    if ( (v19 & 0x1F0FFDF) == 0x1010 )
      v20 = v19 & 0x8000020 | 0x1000;
    else
      v20 = v19 & 0x8000020 | 1;
    *(_DWORD *)(a1 + 144) = v20;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 144) & 0x100) != 0 )
    {
      if ( (a4 & 0x10010000) != 0 )
        return (unsigned int)-1073739511;
      *(_DWORD *)(a1 + 144) &= ~0x100u;
      *(_DWORD *)(a1 + 144) |= 0x400u;
      goto LABEL_14;
    }
    if ( (*(_DWORD *)(a1 + 144) & 0x80u) == 0 )
    {
LABEL_14:
      if ( (v9 & 8) == 0 && FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), 0) )
        return v13;
      if ( (v9 & 1) != 0 )
        return 264;
      if ( (v9 & 0x10010000) == 0 )
      {
        FsRtlpOplockTryStartBreakAckTimeout(a1 + 160, *(_QWORD *)(a1 + 176), a3, a4);
        FsRtlpModifyThreadPriorities(a1, 0LL, 1);
        FsRtlpOplockSendModernAppTermination(a1, 0LL);
        *a8 = 0;
        return (unsigned int)FsRtlpWaitOnIrp(a1, a3, a6, a7, &v22, 0, a9);
      }
      return (unsigned int)-1073739511;
    }
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x8000020 | 1;
    *(_QWORD *)(a1 + 8) = 0LL;
    if ( *(_QWORD *)(a1 + 24) )
    {
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
    }
  }
  return v13;
}
