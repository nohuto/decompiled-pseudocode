/*
 * XREFs of FsRtlpOplockStoreKeyForDeleteOperation @ 0x1403F7FF0
 * Callers:
 *     FsRtlCheckOplock @ 0x1403F7F10 (FsRtlCheckOplock.c)
 *     FsRtlCheckOplockEx2 @ 0x1403F8170 (FsRtlCheckOplockEx2.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     IoGetOplockKeyContextEx @ 0x1403F8A80 (IoGetOplockKeyContextEx.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpAllocateOplock @ 0x140AACC9C (FsRtlpAllocateOplock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void __fastcall FsRtlpOplockStoreKeyForDeleteOperation(__int64 *a1, __int64 a2, int a3)
{
  __int64 v5; // r9
  __int64 Oplock; // rsi
  char v7; // bl
  int v8; // ecx
  __int64 OplockKeyContext; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r15
  _OWORD *Pool2; // rax

  v5 = *(_QWORD *)(a2 + 184);
  Oplock = *a1;
  v7 = 0;
  if ( !*(_BYTE *)v5 && (*(_DWORD *)(v5 + 16) & 0x1000) != 0
    || *(_BYTE *)v5 == 6
    && ((v8 = *(_DWORD *)(v5 + 16), v8 == 13) && **(_BYTE **)(a2 + 24) || v8 == 64 && (**(_DWORD **)(a2 + 24) & 1) != 0) )
  {
    OplockKeyContext = IoGetOplockKeyContextEx(*(_QWORD *)(v5 + 48));
    v12 = OplockKeyContext;
    if ( OplockKeyContext )
    {
      if ( (*(_BYTE *)(OplockKeyContext + 2) & 1) != 0 )
      {
        if ( !Oplock )
        {
          Oplock = FsRtlpAllocateOplock(v11, v10);
          *a1 = Oplock;
        }
        if ( (a3 & 0x20000000) == 0 )
          ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
        v7 = 1;
        Pool2 = *(_OWORD **)(Oplock + 136);
        if ( !Pool2 )
        {
          Pool2 = (_OWORD *)ExAllocatePool2(0x122uLL);
          *(_QWORD *)(Oplock + 136) = Pool2;
        }
        *Pool2 = *(_OWORD *)(v12 + 4);
      }
    }
  }
  if ( v7 )
  {
    if ( (a3 & 0x20000000) == 0 )
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  }
}
