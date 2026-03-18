/*
 * XREFs of KeQueryUserAffinityThread @ 0x1404C9A3C
 * Callers:
 *     NtQueryInformationThread @ 0x140A1F330 (NtQueryInformationThread.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402518B0 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeQueryUserAffinityThread(__int64 a1, struct _KAFFINITY_EX *a2)
{
  __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v6);
    while ( *(_QWORD *)(v3 + 64) );
  }
  RtlpCopyAffinityEx(a2, a2->Size, *(struct _KAFFINITY_EX **)(v3 + 552));
  *(_QWORD *)(v3 + 64) = 0LL;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
