/*
 * XREFs of FsRtlpOplockGetThreadIntegrityLevel @ 0x140791B6C
 * Callers:
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14077E784 (FsRtlpOplockTryStartBreakAckTimeout.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140AE4C60 (FsRtlpOplockTryPrepForAckTimeout.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     PsReferenceImpersonationTokenEx @ 0x1408BD210 (PsReferenceImpersonationTokenEx.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 */

char __fastcall FsRtlpOplockGetThreadIntegrityLevel(__int64 a1, PVOID *a2)
{
  char v4; // di
  void *v5; // rbx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  __int64 v9; // [rsp+40h] [rbp-28h] BYREF
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF
  __int64 v11; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v5 = (void *)PsReferenceImpersonationTokenEx(a1, 1LL, 1953261124LL, &v11, &v10, &v9, 0LL);
  if ( v5 || (v5 = (void *)PsReferencePrimaryTokenWithTag(*(_QWORD *)(a1 + 544), 0x746C6644u, v6, v7)) != 0LL )
  {
    if ( SeQueryInformationToken(v5, TokenIntegrityLevel, a2) < 0 || (v4 = 1, v5) )
      ObfDereferenceObject(v5);
  }
  return v4;
}
