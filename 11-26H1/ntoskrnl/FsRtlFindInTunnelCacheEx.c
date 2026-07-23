/*
 * XREFs of FsRtlFindInTunnelCacheEx @ 0x1409DE060
 * Callers:
 *     FsRtlFindInTunnelCache @ 0x1409DE020 (FsRtlFindInTunnelCache.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     FsRtlEmptyFreePoolList @ 0x1403C0FB0 (FsRtlEmptyFreePoolList.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlCompareUnicodeString @ 0x1409DE5A0 (RtlCompareUnicodeString.c)
 *     FsRtlPruneTunnelCache @ 0x1409DE700 (FsRtlPruneTunnelCache.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 */

char __fastcall FsRtlFindInTunnelCacheEx(
        PKGUARDED_MUTEX Mutex,
        unsigned __int64 a2,
        const UNICODE_STRING *a3,
        UNICODE_STRING *a4,
        PUNICODE_STRING DestinationString,
        char a6,
        _DWORD *a7,
        void *a8)
{
  UNICODE_STRING *v8; // r13
  PKGUARDED_MUTEX v10; // r14
  char v11; // di
  __int64 v12; // rsi
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  const UNICODE_STRING *v15; // r13
  LONG v16; // eax
  bool v17; // cc
  unsigned __int16 *v18; // rdi
  wchar_t *PoolWithTag; // rcx
  unsigned __int16 v20; // ax
  _QWORD *v22[9]; // [rsp+20h] [rbp-48h] BYREF

  v8 = a4;
  v10 = Mutex;
  v11 = 0;
  v12 = 0LL;
  if ( !TunnelMaxEntries )
    return 0;
  v22[1] = v22;
  v22[0] = v22;
  ExAcquireFastMutex(Mutex);
  FsRtlPruneTunnelCache(v10, v22);
  v13 = *(_QWORD *)&v10[1].Count;
  if ( !v13 )
    goto LABEL_11;
  do
  {
    v12 = v13;
    v14 = *(_QWORD *)(v13 + 48);
    if ( v14 < a2 )
      goto LABEL_8;
    if ( v14 <= a2 )
    {
      v15 = (const UNICODE_STRING *)(v13 + 64);
      v16 = RtlCompareUnicodeString((PCUNICODE_STRING)(v13 + 8 * (*(_DWORD *)(v13 + 56) & 2 | 8LL)), a3, 1u);
      v17 = v16 <= 0;
      if ( !v16 )
      {
        if ( (a6 & 1) != 0 )
        {
          if ( (*(_BYTE *)(v13 + 56) & 2) != 0 )
            v15 = (const UNICODE_STRING *)(v13 + 80);
          v16 = RtlCompareUnicodeString(v15, a3, 0);
        }
        v17 = v16 <= 0;
      }
      if ( v17 )
      {
        if ( v16 >= 0 )
          break;
LABEL_8:
        v13 = *(_QWORD *)(v13 + 16);
        continue;
      }
    }
    v13 = *(_QWORD *)(v13 + 8);
  }
  while ( v13 );
  v10 = Mutex;
  v8 = a4;
LABEL_11:
  if ( v13 )
  {
    RtlCopyUnicodeString(v8, (PCUNICODE_STRING)(v12 + 80));
    v18 = (unsigned __int16 *)(v12 + 64);
    if ( DestinationString->MaximumLength < *(_WORD *)(v12 + 64) )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag((POOL_TYPE)17, *(unsigned __int16 *)(v12 + 64), 0x346E7554u);
      DestinationString->Buffer = PoolWithTag;
      v20 = *v18;
      DestinationString->MaximumLength = *v18;
      DestinationString->Length = v20;
      memmove(PoolWithTag, *(const void **)(v12 + 72), *v18);
    }
    else
    {
      RtlCopyUnicodeString(DestinationString, (PCUNICODE_STRING)(v12 + 64));
    }
    memmove(a8, *(const void **)(v12 + 96), *(unsigned int *)(v12 + 104));
    *a7 = *(_DWORD *)(v12 + 104);
    v11 = 1;
  }
  KeReleaseGuardedMutex(v10);
  FsRtlEmptyFreePoolList(v22);
  return v11;
}
