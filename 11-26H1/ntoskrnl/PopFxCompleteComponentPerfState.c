/*
 * XREFs of PopFxCompleteComponentPerfState @ 0x1404F2BC8
 * Callers:
 *     PopFxProcessWork @ 0x1403B8BD0 (PopFxProcessWork.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404F2DC0 (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxComponentPerfWork @ 0x140607750 (PopFxComponentPerfWork.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x14021BFD0 (PopFxAddLogEntry.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PopDiagTraceFxPerfRequestComplete @ 0x1404F2CD4 (PopDiagTraceFxPerfRequestComplete.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1404F2FFC (PopDiagTraceFxPerfRequestProgress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopFxCompleteComponentPerfState(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v5; // rdi
  int v8; // ebx
  unsigned int i; // r9d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx

  v5 = a3;
  v8 = _InterlockedDecrement((volatile signed __int32 *)(a3 + 40));
  for ( i = 0; i < *(_DWORD *)(v5 + 56); *(_QWORD *)(a3 + v10 + 8) = *(_QWORD *)(*(_QWORD *)(v5 + 48) + 8 * v11 + 8) )
  {
    v10 = *(_QWORD *)(v5 + 152);
    v11 = i++;
    v11 *= 2LL;
    a3 = 32LL * *(unsigned int *)(*(_QWORD *)(v5 + 48) + 8 * v11);
    *(_QWORD *)(a3 + v10 + 16) = *(_QWORD *)(v5 + 64);
    *(_BYTE *)(a3 + v10 + 24) = 0;
  }
  PopDiagTraceFxPerfRequestProgress(v5, v8 & 7, a3);
  if ( v8 >= 0 )
  {
    v8 = _InterlockedDecrement((volatile signed __int32 *)(v5 + 40));
    if ( (v8 & 0x8000000) == 0 )
      PopFxAddLogEntry(*(_QWORD *)(a1 + 48), a2, 15, 1LL);
  }
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 192), a2);
  if ( v8 < 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 40));
    KeSetEvent((PRKEVENT)(v5 + 8), 0, 0);
  }
  LOBYTE(v12) = a4;
  return PopDiagTraceFxPerfRequestComplete(v5, v12);
}
