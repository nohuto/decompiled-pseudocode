/*
 * XREFs of VerifierIoDisconnectInterruptEx @ 0x140C46B50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall VerifierIoDisconnectInterruptEx(__int64 a1)
{
  void *v1; // rbx
  int v3; // ecx
  __int64 v4; // rcx

  v1 = 0LL;
  v3 = *(_DWORD *)a1;
  if ( (VfRuleClasses & 0x800) == 0 || !ViCtxInitializedIsrStateBlocks )
    goto LABEL_9;
  if ( (unsigned int)(v3 - 1) <= 1 )
  {
    v4 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    if ( v3 != 3 )
      goto LABEL_9;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
  }
  if ( v4 )
    v1 = *(void **)(v4 + 48);
LABEL_9:
  guard_dispatch_icall_no_overrides(a1, a1);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
