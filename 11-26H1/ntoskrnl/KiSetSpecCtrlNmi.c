/*
 * XREFs of KiSetSpecCtrlNmi @ 0x1407297A0
 * Callers:
 *     KiNmiInterruptStart @ 0x140733AC0 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x140738080 (KiMcheckAbort.c)
 * Callees:
 *     sub_140729902 @ 0x140729902 (sub_140729902.c)
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
      JUMPOUT(0x140729926LL);
    v2 = 73LL;
    __writemsr(0x49u, 1uLL);
  }
  sub_140729902(v2, 0LL);
  return sub_1407297F4();
}
