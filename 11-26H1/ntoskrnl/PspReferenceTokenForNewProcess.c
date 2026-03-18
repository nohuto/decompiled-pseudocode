/*
 * XREFs of PspReferenceTokenForNewProcess @ 0x140ADCE18
 * Callers:
 *     PspCreateProcess @ 0x140ADC7C0 (PspCreateProcess.c)
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall PspReferenceTokenForNewProcess(__int64 a1, void *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KLOCK_ENTRIES *v4; // rdi
  NTSTATUS result; // eax
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // [rsp+48h] [rbp+10h] BYREF

  v4 = a4;
  LOBYTE(a4) = a3;
  if ( a2 )
  {
    v7 = 0LL;
    result = ObReferenceObjectByHandle(a2, 1u, (POBJECT_TYPE)SeTokenObjectType, a3, (PVOID *)&v7, 0LL);
    v6 = v7;
    if ( result < 0 )
      return result;
  }
  else if ( a1 )
  {
    v6 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u, a3, a4);
  }
  else
  {
    v6 = PspBootAccessToken;
    PsReferenceSiloContext((void *)PspBootAccessToken);
  }
  v4->Thread = (_KTHREAD *)v6;
  return 0;
}
