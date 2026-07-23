/*
 * XREFs of MiAttemptPageFileReduction @ 0x1406FD3DC
 * Callers:
 *     MiHandlePageFileSizeChanges @ 0x14052751C (MiHandlePageFileSizeChanges.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetPageFileResizeCandidates @ 0x1404E083C (MiGetPageFileResizeCandidates.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1404E18A4 (MiQueueSyncModifiedWriterApc.c)
 *     MiExcessCommitExists @ 0x1405002A0 (MiExcessCommitExists.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IoSetInformation @ 0x140B34AF0 (IoSetInformation.c)
 */

int __fastcall MiAttemptPageFileReduction(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  char v4; // al
  KIRQL v5; // al
  volatile LONG *v6; // rcx
  unsigned __int64 v7; // rax
  __int64 *v8; // rdi
  char *v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 FileInformation; // [rsp+30h] [rbp-D0h] BYREF
  int v13[24]; // [rsp+40h] [rbp-C0h] BYREF
  int Object[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v15[3]; // [rsp+A8h] [rbp-58h] BYREF
  int v16; // [rsp+C0h] [rbp-40h]
  int v17; // [rsp+C4h] [rbp-3Ch]
  __int64 v18; // [rsp+C8h] [rbp-38h]
  char v19; // [rsp+D0h] [rbp-30h] BYREF

  FileInformation = 0LL;
  memset_0(v13, 0, 0x58uLL);
  memset_0(Object, 0, 0x70uLL);
  v2 = *(_QWORD *)(a1 + 24);
  v15[1] = v15;
  v3 = 16LL;
  BYTE2(Object[0]) = 6;
  v15[0] = v15;
  v4 = *(_BYTE *)(a1 + 87);
  Object[1] = 0;
  v15[2] = v2;
  if ( (v4 & 0x10) != 0 )
  {
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 2112));
    *(_QWORD *)(a1 + 32) = 0LL;
    v6 = (volatile LONG *)(v2 + 2112);
    if ( v5 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    else
      ExReleaseSpinLockExclusive(v6, v5);
    v7 = MiExcessCommitExists(*(_QWORD *)(v2 + 23104), *(_QWORD *)(v2 + 23448));
    if ( !v7 )
      return v7;
    LODWORD(v7) = MiGetPageFileResizeCandidates(v2, v7, 0, 0LL);
    if ( !(_DWORD)v7 )
      return v7;
    v16 = 16;
  }
  else if ( v4 >= 0 )
  {
    v16 = *(unsigned __int8 *)(a1 + 84);
    v17 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    v18 = a1;
  }
  MiQueueSyncModifiedWriterApc(v2, (__int64)v13, (__int64)MiAttemptPageFileReductionApc, (__int64)Object, Object);
  v8 = (__int64 *)(v2 + 22304);
  v9 = &v19;
  do
  {
    v7 = *(unsigned int *)v9;
    if ( (_DWORD)v7 )
    {
      v10 = *v8;
      FileInformation = v7 << 12;
      LODWORD(v7) = IoSetInformation(*(PFILE_OBJECT *)(v10 + 24), FileAllocationInformation, 8u, &FileInformation);
      if ( (int)v7 <= -1 )
      {
        _InterlockedIncrement(&dword_140E36164);
        dword_140E36168 = v7;
      }
    }
    ++v8;
    v9 += 4;
    --v3;
  }
  while ( v3 );
  return v7;
}
