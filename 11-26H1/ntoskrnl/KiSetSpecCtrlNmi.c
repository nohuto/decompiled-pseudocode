/*
 * XREFs of KiSetSpecCtrlNmi @ 0x14072E370
 * Callers:
 *     KiNmiInterruptStart @ 0x1407386C0 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x14073CC80 (KiMcheckAbort.c)
 * Callees:
 *     sub_14072E4D2 @ 0x14072E4D2 (sub_14072E4D2.c)
 */

__int64 __fastcall KiSetSpecCtrlNmi()
{
  __int64 v0; // rbp
  unsigned __int64 v1; // rax
  __int64 v2; // rcx

  if ( !KeGetPcr()->Prcb.BpbNmiSpecCtrl
    || (v1 = __readmsr(0x48u),
        *(_DWORD *)(v0 + 192) = v1,
        LOWORD(v1) = KeGetPcr()->Prcb.BpbNmiSpecCtrl,
        v2 = 72LL,
        __writemsr(0x48u, (unsigned __int16)v1),
        (v1 & 1) == 0) )
  {
    if ( (KeGetPcr()->Prcb.BpbFeatures.AllFlags & 2) == 0 )
      JUMPOUT(0x14072E4F6LL);
    v2 = 73LL;
    __writemsr(0x49u, 1uLL);
  }
  sub_14072E4D2(v2, 0LL);
  return sub_14072E3C4();
}
