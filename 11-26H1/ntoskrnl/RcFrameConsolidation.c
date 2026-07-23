/*
 * XREFs of RcFrameConsolidation @ 0x140537490
 * Callers:
 *     <none>
 * Callees:
 *     KeKernelShadowStackRestoreContext @ 0x14036A1B0 (KeKernelShadowStackRestoreContext.c)
 *     KeCheckStackAndTargetAddress @ 0x140470910 (KeCheckStackAndTargetAddress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall RcFrameConsolidation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        unsigned __int64 a19)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF
  void *v33; // [rsp+F8h] [rbp+F8h]

  v33 = (void *)guard_dispatch_icall_no_overrides(a1, a2);
  if ( (a6 & 0xFFFFFF3F) == 0x10000F )
  {
    _mm_setcsr(HIDWORD(a6));
    KeCheckStackAndTargetAddress((unsigned __int64)v33, a19);
    if ( (KiKernelCetEnabled & 1) != 0 )
    {
      __asm { rdsspq  rdx }
      KeKernelShadowStackRestoreContext((__int64)&retaddr, _RDX, 0LL);
    }
    retaddr = v33;
    _disable();
    __asm { iretq }
  }
  JUMPOUT(0x140537295LL);
}
