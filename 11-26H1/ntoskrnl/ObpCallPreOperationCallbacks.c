/*
 * XREFs of ObpCallPreOperationCallbacks @ 0x1408F5C04
 * Callers:
 *     ObpPreInterceptHandleDuplicate @ 0x1408F4924 (ObpPreInterceptHandleDuplicate.c)
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeCallbackValidationEpilogue @ 0x1404D9E98 (KeCallbackValidationEpilogue.c)
 *     KeCallbackValidationPrologue @ 0x1404E22FC (KeCallbackValidationPrologue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpCallPostOperationCallbacks @ 0x1409BB9AC (ObpCallPostOperationCallbacks.c)
 *     ObpUnlockObjectType @ 0x140A67A10 (ObpUnlockObjectType.c)
 *     ObpLockObjectTypeShared @ 0x140A682F0 (ObpLockObjectTypeShared.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall ObpCallPreOperationCallbacks(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _EX_RUNDOWN_REF **v3; // r13
  __int64 v5; // rbx
  struct _EX_RUNDOWN_REF *v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v9; // r15
  struct _EX_RUNDOWN_REF *i; // rsi
  unsigned __int64 Count; // rbx
  __int64 Pool2; // rax
  _QWORD *v14; // rax
  __int128 v15; // [rsp+20h] [rbp-30h] BYREF
  __int128 v16; // [rsp+30h] [rbp-20h]
  __int128 v17; // [rsp+40h] [rbp-10h]
  __int64 v19; // [rsp+98h] [rbp+48h] BYREF

  v3 = (struct _EX_RUNDOWN_REF **)(a1 + 200);
  v15 = 0LL;
  v5 = a1;
  v16 = 0LL;
  v6 = 0LL;
  v17 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v19 = 0LL;
  --CurrentThread->KernelApcDisable;
  ObfReferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
  ObpLockObjectTypeShared(v5);
  for ( i = *v3; i != (struct _EX_RUNDOWN_REF *)v3; i = (struct _EX_RUNDOWN_REF *)i->Count )
  {
    if ( (HIDWORD(i[2].Ptr) & 1) != 0 && (i[2].Count & *(_DWORD *)a2) != 0 )
    {
      if ( ExAcquireRundownProtection_0(i + 7) )
      {
        ObpUnlockObjectType(v5);
        if ( v6 )
        {
          ExReleaseRundownProtection_0(v6);
          v6 = 0LL;
        }
        if ( i[6].Count )
        {
          Pool2 = ExAllocatePool2(0x100uLL);
          v9 = (_QWORD *)Pool2;
          if ( !Pool2 )
          {
            ExReleaseRundownProtection_0(i + 7);
            if ( (_QWORD *)*a3 == a3 )
            {
              KeLeaveCriticalRegion();
              ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
            }
            else
            {
              *(_QWORD *)&v15 = *(_QWORD *)a2;
              v16 = *(unsigned __int64 *)(a2 + 16);
              *((_QWORD *)&v15 + 1) = *(_QWORD *)(a2 + 8);
              v17 = 0xC000009AuLL;
              ObpCallPostOperationCallbacks(&v15, a3);
            }
            return 3221225626LL;
          }
          *(_QWORD *)(Pool2 + 16) = i;
          *(_QWORD *)(Pool2 + 24) = 0LL;
          v14 = (_QWORD *)a3[1];
          if ( (_QWORD *)*v14 != a3 )
            __fastfail(3u);
          *v9 = a3;
          v9[1] = v14;
          *v14 = v9;
          a3[1] = v9;
        }
        if ( i[5].Count )
        {
          Count = i[3].Count;
          KeCallbackValidationPrologue((__int64)&v19);
          guard_dispatch_icall_no_overrides(*(_QWORD *)(Count + 8), a2);
          KeCallbackValidationEpilogue((__int64)&v19, i[5].Count, 0x101u);
          if ( i[6].Count )
            v9[3] = *(_QWORD *)(a2 + 24);
          else
            v6 = i + 7;
          v5 = a1;
          *(_QWORD *)(a2 + 24) = 0LL;
        }
        ObpLockObjectTypeShared(v5);
      }
      v3 = (struct _EX_RUNDOWN_REF **)(v5 + 200);
    }
  }
  ObpUnlockObjectType(v5);
  if ( v6 )
    ExReleaseRundownProtection_0(v6);
  if ( (_QWORD *)*a3 == a3 )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
