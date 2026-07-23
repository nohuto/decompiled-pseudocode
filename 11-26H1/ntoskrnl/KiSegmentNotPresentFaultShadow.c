/*
 * XREFs of KiSegmentNotPresentFaultShadow @ 0x140C5F6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn KiSegmentNotPresentFaultShadow(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  _KIDTENTRY64 *v5; // rsi
  _KIDTENTRY64 v6; // [rsp-30h] [rbp-30h] BYREF
  _KIDTENTRY64 v7; // [rsp-20h] [rbp-20h]
  _KIDTENTRY64 v8; // [rsp-10h] [rbp-10h]

  if ( (v7.OffsetLow & 1) != 0 )
  {
    __asm { swapgs }
    _mm_lfence();
    if ( !_bittest(MK_FP(__GS__, 45080LL), 1u) )
      __writecr3((unsigned __int64)&v6);
    __writegsqword(0x10u, v2);
    v5 = KeGetPcr()->IdtBase + 1056;
    v8 = v5[-1];
    v7 = v5[-2];
    v6 = v5[-3];
    __writegsqword(0x10u, 0LL);
    KiSegmentNotPresentFault(a1, a2);
  }
  _mm_lfence();
  KiSegmentNotPresentFault(a1, a2);
}
