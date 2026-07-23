/*
 * XREFs of SeIsTokenAssignableToProcess @ 0x140AB8FC4
 * Callers:
 *     PspAssignPrimaryToken @ 0x140776B18 (PspAssignPrimaryToken.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlSidDominatesForTrust @ 0x1403AF7B0 (RtlSidDominatesForTrust.c)
 *     RtlSidDominates @ 0x14040CB40 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x14043A480 (SepCopyTokenIntegrity.c)
 *     SepIsChildTokenByPointer @ 0x140AB918C (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x140AB9228 (SepIsSiblingTokenByPointer.c)
 */

NTSTATUS __fastcall SeIsTokenAssignableToProcess(__int64 a1, char *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // di
  _KPROCESS *Process; // r13
  char v8; // si
  char v9; // r15
  ULONG_PTR v10; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v12; // rax
  int v13; // ebx
  int v14; // r13d
  NTSTATUS result; // eax
  PSID v16; // [rsp+20h] [rbp-30h]
  PSID v17; // [rsp+28h] [rbp-28h]
  PSID Sid2[2]; // [rsp+30h] [rbp-20h] BYREF
  PSID Sid1[2]; // [rsp+40h] [rbp-10h] BYREF
  BOOLEAN Dominates; // [rsp+98h] [rbp+48h] BYREF
  char v21; // [rsp+A0h] [rbp+50h] BYREF
  char v22; // [rsp+A8h] [rbp+58h] BYREF

  v4 = 0;
  *a2 = 0;
  v21 = 0;
  v22 = 0;
  *(_OWORD *)Sid2 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = 0;
  Dominates = 0;
  *(_OWORD *)Sid1 = 0LL;
  v9 = 0;
  v10 = PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u, a3, a4);
  if ( !v10 )
    return -1073741823;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v10 + 48), 1u);
  SepCopyTokenIntegrity(v10, (__int64)Sid1);
  v17 = *(PSID *)(v10 + 1104);
  ExReleaseResourceLite(*(PERESOURCE *)(v10 + 48));
  KeLeaveCriticalRegion();
  ObFastDereferenceObject((signed __int64 *)&Process[1].ActiveProcessors, v10, 0x746C6644u);
  v12 = KeGetCurrentThread();
  --v12->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  SepCopyTokenIntegrity(a1, (__int64)Sid2);
  v13 = *(_DWORD *)(a1 + 192);
  v14 = *(_DWORD *)(a1 + 196);
  v16 = *(PSID *)(a1 + 1104);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  if ( v13 == 2 && v14 < 2 )
    return -1073741659;
  result = RtlSidDominates(Sid1[0], Sid2[0], &Dominates);
  if ( result >= 0 )
  {
    if ( !Dominates )
      goto LABEL_12;
    Dominates = 0;
    result = RtlSidDominatesForTrust(v17, v16, &Dominates);
    if ( result < 0 )
      return result;
    if ( !Dominates )
      goto LABEL_12;
    result = SepIsChildTokenByPointer(a1, &v21);
    v8 = v21;
    if ( !v21 )
    {
      if ( result < 0 )
        return result;
      result = SepIsSiblingTokenByPointer(a1, &v22);
      v9 = v22;
    }
    if ( result >= 0 )
    {
LABEL_12:
      if ( v8 || v9 )
        v4 = 1;
      *a2 = v4;
    }
  }
  return result;
}
