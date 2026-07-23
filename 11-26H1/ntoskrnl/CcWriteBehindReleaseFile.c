/*
 * XREFs of CcWriteBehindReleaseFile @ 0x140387F44
 * Callers:
 *     CcWriteBehindPostProcess @ 0x140386A84 (CcWriteBehindPostProcess.c)
 *     CcQueueAsyncLazywriteCompletion @ 0x1405B6238 (CcQueueAsyncLazywriteCompletion.c)
 * Callees:
 *     CcApplyLowIoPriorityToThread @ 0x140387538 (CcApplyLowIoPriorityToThread.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall CcWriteBehindReleaseFile(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax

  v4 = *(_QWORD *)(a1 + 264);
  if ( *(_DWORD *)(v4 + 128) == 2 )
  {
    v6 = *(_QWORD *)(v4 + 16);
    v7 = *(_QWORD *)(v6 + 536);
  }
  else
  {
    v6 = *(_QWORD *)(v4 + 24);
    v7 = *(_QWORD *)(v4 + 136);
  }
  CcApplyLowIoPriorityToThread(v7, 0, (_DWORD *)v6, a4);
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v6 + 512) + 204LL), -*(_DWORD *)(a1 + 252));
  if ( (*(_DWORD *)(v6 + 152) & 0x1000000) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v6 + 512) + 208LL), -*(_DWORD *)(a1 + 252));
  v8 = *(_QWORD *)(v6 + 512);
  *(_QWORD *)(v8 + 296) += *(unsigned int *)(v8 + 204);
  ++*(_QWORD *)(v8 + 312);
  *(_QWORD *)(v8 + 320) += *(unsigned int *)(*(_QWORD *)(v6 + 512) + 208LL);
  ++*(_QWORD *)(v8 + 336);
  if ( *(_QWORD *)(v8 + 304) <= (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v6 + 512) + 204LL) )
    v9 = *(unsigned int *)(*(_QWORD *)(v6 + 512) + 204LL);
  else
    v9 = *(_QWORD *)(v8 + 304);
  *(_QWORD *)(v8 + 304) = v9;
  if ( *(_QWORD *)(v8 + 328) <= (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v6 + 512) + 208LL) )
    v10 = *(unsigned int *)(*(_QWORD *)(v6 + 512) + 208LL);
  else
    v10 = *(_QWORD *)(v8 + 328);
  *(_QWORD *)(v8 + 328) = v10;
  guard_dispatch_icall_no_overrides(*(_QWORD *)(v6 + 224), *(_QWORD *)(v6 + 216), v8);
  return 1;
}
