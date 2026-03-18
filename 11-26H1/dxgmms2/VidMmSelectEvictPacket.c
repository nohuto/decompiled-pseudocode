/*
 * XREFs of VidMmSelectEvictPacket @ 0x1400FEB68
 * Callers:
 *     VidMmFlushEvictQueue @ 0x1400FEA50 (VidMmFlushEvictQueue.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VidMmSelectEvictPacket(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rcx

  v3 = a1 + 184;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *(_QWORD *)(v3 + 8) = KeGetCurrentThread();
  if ( *(_DWORD *)(a2 + 104) == 1 )
  {
    v4 = (_QWORD *)(a2 + 32);
    v5 = *(_QWORD **)(a2 + 32);
    if ( (_QWORD *)v5[1] != v4 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    *v5 = 0LL;
    v5[1] = 0LL;
    *(_QWORD *)(v3 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v3, 0LL);
    KeLeaveCriticalRegion();
    return v5;
  }
  else
  {
    *(_QWORD *)(v3 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v3, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
}
