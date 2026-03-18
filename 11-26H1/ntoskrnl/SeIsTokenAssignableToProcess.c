/*
 * XREFs of SeIsTokenAssignableToProcess @ 0x140AB7984
 * Callers:
 *     PspAssignPrimaryToken @ 0x140773B18 (PspAssignPrimaryToken.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     RtlSidDominatesForTrust @ 0x1402ACB80 (RtlSidDominatesForTrust.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlSidDominates @ 0x140418530 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x140441970 (SepCopyTokenIntegrity.c)
 *     SepIsChildTokenByPointer @ 0x140AB7B4C (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x140AB7BE8 (SepIsSiblingTokenByPointer.c)
 */

__int64 __fastcall SeIsTokenAssignableToProcess(__int64 a1, char *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
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
  __int64 result; // rax
  __int64 v16; // [rsp+20h] [rbp-30h]
  __int64 v17; // [rsp+28h] [rbp-28h]
  void *Buf2[2]; // [rsp+30h] [rbp-20h] BYREF
  void *Buf1[2]; // [rsp+40h] [rbp-10h] BYREF
  bool v20; // [rsp+98h] [rbp+48h] BYREF
  char v21; // [rsp+A0h] [rbp+50h] BYREF
  char v22; // [rsp+A8h] [rbp+58h] BYREF

  v4 = 0;
  *a2 = 0;
  v21 = 0;
  v22 = 0;
  *(_OWORD *)Buf2 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = 0;
  v20 = 0;
  *(_OWORD *)Buf1 = 0LL;
  v9 = 0;
  v10 = PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u, a3, a4);
  if ( !v10 )
    return 3221225473LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v10 + 48), 1u);
  SepCopyTokenIntegrity(v10, (__int64)Buf1);
  v17 = *(_QWORD *)(v10 + 1104);
  ExReleaseResourceLite(*(PERESOURCE *)(v10 + 48));
  KeLeaveCriticalRegion();
  ObFastDereferenceObject((signed __int64 *)&Process[1].ActiveProcessors, v10, 0x746C6644u);
  v12 = KeGetCurrentThread();
  --v12->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  SepCopyTokenIntegrity(a1, (__int64)Buf2);
  v13 = *(_DWORD *)(a1 + 192);
  v14 = *(_DWORD *)(a1 + 196);
  v16 = *(_QWORD *)(a1 + 1104);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  if ( v13 == 2 && v14 < 2 )
    return 3221225637LL;
  result = RtlSidDominates((char *)Buf1[0], (char *)Buf2[0], (char *)&v20);
  if ( (int)result >= 0 )
  {
    if ( !v20 )
      goto LABEL_12;
    v20 = 0;
    result = RtlSidDominatesForTrust(v17, v16, &v20);
    if ( (int)result < 0 )
      return result;
    if ( !v20 )
      goto LABEL_12;
    result = SepIsChildTokenByPointer(a1, &v21);
    v8 = v21;
    if ( !v21 )
    {
      if ( (int)result < 0 )
        return result;
      result = SepIsSiblingTokenByPointer(a1, &v22);
      v9 = v22;
    }
    if ( (int)result >= 0 )
    {
LABEL_12:
      if ( v8 || v9 )
        v4 = 1;
      *a2 = v4;
    }
  }
  return result;
}
