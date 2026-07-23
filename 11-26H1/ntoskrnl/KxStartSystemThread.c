/*
 * XREFs of KxStartSystemThread @ 0x14072DB10
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __noreturn KxStartSystemThread()
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h]
  __int64 v1; // [rsp+8h] [rbp+8h]

  if ( (KiTrapFeatures & 8) != 0 )
    __asm { stac }
  __writecr8(KeGetCurrentThread()->WaitIrql);
  guard_dispatch_icall_no_overrides(v1, retaddr);
  KeBugCheck(0xEu);
}
