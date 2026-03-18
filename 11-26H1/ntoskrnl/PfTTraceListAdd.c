/*
 * XREFs of PfTTraceListAdd @ 0x140AF5F5C
 * Callers:
 *     PfTGenerateTrace @ 0x140A06960 (PfTGenerateTrace.c)
 *     PfpSectInfoHandleFullBuffer @ 0x140AF5EA0 (PfpSectInfoHandleFullBuffer.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     PfpPartitionDereferenceParent @ 0x140381780 (PfpPartitionDereferenceParent.c)
 *     PfpPartitionReferenceParentSafe @ 0x140382960 (PfpPartitionReferenceParentSafe.c)
 *     PfTTraceListTrim @ 0x1407C6BF8 (PfTTraceListTrim.c)
 *     PfTTraceListFree @ 0x140AF610C (PfTTraceListFree.c)
 *     PfTAccessTracingCleanup @ 0x140BF8DFC (PfTAccessTracingCleanup.c)
 */

__int64 __fastcall PfTTraceListAdd(__int64 a1, __int64 a2)
{
  struct _FAST_MUTEX *v3; // r12
  _DWORD *v5; // rcx
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  unsigned int v8; // r8d
  _QWORD *v9; // rdi
  _QWORD *v10; // rbp
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 result; // rax
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  v15[1] = v15;
  v3 = (struct _FAST_MUTEX *)(a1 + 624);
  v15[0] = v15;
  ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 624));
  v5 = (_DWORD *)(a1 + 600);
  v6 = *(_DWORD *)(a1 + 600);
  v7 = *(_DWORD *)(a1 + 604);
  if ( *(_DWORD *)(a2 + 28) == 1 )
  {
    v8 = *(_DWORD *)(a1 + 612);
    v5 = (_DWORD *)(a1 + 608);
    v9 = (_QWORD *)(a1 + 584);
    if ( *(_DWORD *)(a1 + 608) + 1 == v8 )
      ++*(_DWORD *)(a1 + 700);
    v10 = (_QWORD *)(a1 + 568);
  }
  else
  {
    v9 = (_QWORD *)(a1 + 568);
    v10 = (_QWORD *)(a1 + 568);
    v8 = *(_DWORD *)(a1 + 604);
    if ( *v5 + 1 == v7 )
      ++*(_DWORD *)(a1 + 696);
    *(_DWORD *)(a1 + 616) = 1;
  }
  v11 = (_QWORD *)v9[1];
  if ( (_QWORD *)*v11 != v9 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 8) = v11;
  *(_QWORD *)a2 = v9;
  *v11 = a2;
  v9[1] = a2;
  if ( ++*v5 > v8 )
    PfTTraceListTrim(a1, *(_DWORD *)(a2 + 28), v8, (__int64)v15);
  if ( v9 == v10 && (_QWORD *)*v9 == v9 )
    *(_DWORD *)(a1 + 616) = 0;
  v12 = PfpPartitionReferenceParentSafe((__int64 *)a1);
  v13 = v12;
  if ( v6 < v7 && v12 && *(_DWORD *)(a1 + 600) >= *(_DWORD *)(a1 + 604) )
    PfTAccessTracingCleanup(a1, 2LL, 0LL);
  KeSetEvent(*(PRKEVENT *)(a1 + 680), 0, 0);
  KeReleaseGuardedMutex(v3);
  result = PfTTraceListFree(a1, v15);
  if ( v13 )
    return PfpPartitionDereferenceParent(v13);
  return result;
}
