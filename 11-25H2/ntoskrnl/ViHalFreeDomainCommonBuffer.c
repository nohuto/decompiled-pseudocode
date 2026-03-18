/*
 * XREFs of ViHalFreeDomainCommonBuffer @ 0x140B79198
 * Callers:
 *     VfFreeCommonBuffer @ 0x140B76680 (VfFreeCommonBuffer.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

char __fastcall ViHalFreeDomainCommonBuffer(_QWORD *a1)
{
  char v2; // bl
  __int64 *v3; // rdi
  KIRQL v4; // al
  __int64 *v5; // rdx
  KIRQL v6; // r8
  __int64 v7; // rcx
  __int64 *v8; // rax

  v2 = 0;
  v3 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140F03710);
  v5 = (__int64 *)ViDomainCommonBufferList;
  v6 = v4;
  while ( v5 != &ViDomainCommonBufferList )
  {
    v3 = v5;
    v7 = *v5;
    if ( v5[2] == *a1 )
    {
      v2 = 1;
      if ( *(__int64 **)(v7 + 8) != v5 || (v8 = (__int64 *)v5[1], (__int64 *)*v8 != v5) )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      break;
    }
    v5 = (__int64 *)*v5;
  }
  KeReleaseSpinLock(&qword_140F03710, v6);
  if ( v2 )
    ExFreePoolWithTag(v3, 0);
  return v2;
}
