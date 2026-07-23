/*
 * XREFs of HalpInterruptOfflineProcessor @ 0x14059C8A0
 * Callers:
 *     HalpDpOfflineProcessorForReplace @ 0x140BF3ED0 (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn HalpInterruptOfflineProcessor(volatile signed __int32 *a1)
{
  ULONG_PTR v1; // rdi
  unsigned __int8 CurrentIrql; // cl
  __int64 v4; // rcx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v1 = HalpInterruptController;
  LODWORD(v6) = 0;
  v5 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  if ( *(_QWORD *)(v1 + 80) )
  {
    v6 = 0LL;
    v4 = *(_QWORD *)(v1 + 16);
    v5 = 0LL;
    LODWORD(v5) = 4;
    guard_dispatch_icall_no_overrides(v4, &v5);
  }
  _InterlockedDecrement(&HalpInterruptProcessorsStarted);
  _InterlockedIncrement(a1);
  __halt();
}
