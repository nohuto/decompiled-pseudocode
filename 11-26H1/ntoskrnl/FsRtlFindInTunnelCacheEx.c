/*
 * XREFs of FsRtlFindInTunnelCacheEx @ 0x1409E1060
 * Callers:
 *     FsRtlFindInTunnelCache @ 0x1409E1020 (FsRtlFindInTunnelCache.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     FsRtlEmptyFreePoolList @ 0x1403B70B0 (FsRtlEmptyFreePoolList.c)
 *     RtlCopyUnicodeString @ 0x140419A90 (RtlCopyUnicodeString.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlCompareUnicodeString @ 0x1409E1590 (RtlCompareUnicodeString.c)
 *     FsRtlPruneTunnelCache @ 0x1409E16F0 (FsRtlPruneTunnelCache.c)
 *     ExAllocatePoolWithTag @ 0x140C10340 (ExAllocatePoolWithTag.c)
 */

char __fastcall FsRtlFindInTunnelCacheEx(
        PKGUARDED_MUTEX Mutex,
        unsigned __int64 a2,
        const UNICODE_STRING *a3,
        UNICODE_STRING *a4,
        PUNICODE_STRING a5,
        char a6,
        _DWORD *a7,
        void *a8)
{
  char v11; // bl
  __int64 v12; // rsi
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  LONG v15; // eax
  bool v16; // cc
  unsigned __int16 *v17; // rdi
  wchar_t *PoolWithTag; // rcx
  unsigned __int16 v19; // ax
  _QWORD *v21[7]; // [rsp+20h] [rbp-38h] BYREF

  v11 = 0;
  v12 = 0LL;
  if ( !TunnelMaxEntries )
    return 0;
  v21[1] = v21;
  v21[0] = v21;
  ExAcquireFastMutex(Mutex);
  FsRtlPruneTunnelCache(Mutex, v21);
  v13 = *(_QWORD *)&Mutex[1].Count;
  while ( v13 )
  {
    v12 = v13;
    v14 = *(_QWORD *)(v13 + 48);
    if ( v14 < a2 )
      goto LABEL_8;
    if ( v14 > a2 )
      goto LABEL_16;
    v15 = RtlCompareUnicodeString((PCUNICODE_STRING)(v13 + 8 * (*(_DWORD *)(v13 + 56) & 2 | 8LL)), a3, 1u);
    v16 = v15 <= 0;
    if ( !v15 )
    {
      if ( (a6 & 1) != 0 )
        v15 = RtlCompareUnicodeString((PCUNICODE_STRING)(v13 + 8 * (*(_DWORD *)(v13 + 56) & 2 | 8LL)), a3, 0);
      v16 = v15 <= 0;
    }
    if ( v16 )
    {
      if ( v15 >= 0 )
        break;
LABEL_8:
      v13 = *(_QWORD *)(v13 + 16);
    }
    else
    {
LABEL_16:
      v13 = *(_QWORD *)(v13 + 8);
    }
  }
  if ( v13 )
  {
    RtlCopyUnicodeString(a4, (PCUNICODE_STRING)(v12 + 80));
    v17 = (unsigned __int16 *)(v12 + 64);
    if ( a5->MaximumLength < *(_WORD *)(v12 + 64) )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag((POOL_TYPE)17, *(unsigned __int16 *)(v12 + 64), 0x346E7554u);
      a5->Buffer = PoolWithTag;
      v19 = *v17;
      a5->MaximumLength = *v17;
      a5->Length = v19;
      memmove(PoolWithTag, *(const void **)(v12 + 72), *v17);
    }
    else
    {
      RtlCopyUnicodeString(a5, (PCUNICODE_STRING)(v12 + 64));
    }
    memmove(a8, *(const void **)(v12 + 96), *(unsigned int *)(v12 + 104));
    *a7 = *(_DWORD *)(v12 + 104);
    v11 = 1;
  }
  KeReleaseGuardedMutex(Mutex);
  FsRtlEmptyFreePoolList(v21);
  return v11;
}
