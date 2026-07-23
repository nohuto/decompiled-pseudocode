/*
 * XREFs of PopFxTransitionCriticalResource @ 0x1406085B0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopFxTransitionCriticalResource(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  ULONG_PTR v5; // rdx
  signed __int32 v6; // eax
  signed __int32 v7; // ecx

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 872) + 8LL * a2);
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 92), 0, 0);
  if ( a3 )
  {
    if ( (v6 & 1) == 0 )
      PopFxBugCheck(0x606uLL, v5, *(int *)(v5 + 92), a3);
    v7 = v6 & 0xFFFFFFFE;
  }
  else
  {
    if ( (v6 & 1) != 0 )
      PopFxBugCheck(0x606uLL, v5, *(int *)(v5 + 92), 0LL);
    v7 = v6 | 1;
  }
  if ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 92), v7, v6) )
    PopFxBugCheck(0x606uLL, v5, v5 + 88, v7);
  return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 192), a2);
}
