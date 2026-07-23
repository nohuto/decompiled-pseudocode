/*
 * XREFs of HalpHvTimerSetInterruptVector @ 0x140599BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpHvTimerSetInterruptVector(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r8
  __int64 result; // rax

  LODWORD(a3) = KeGetPcr()->Prcb.Number;
  v3 = __readmsr(0x40000083u);
  v4 = 24 * a3;
  if ( (v3 & 1) == 0 )
    __writemsr(0x40000083u, v3 ^ (*(_QWORD *)(v4 + a1 + 16) ^ v3) & 0xFFFFFFFFFFFFF001uLL | 1);
  __writemsr(0x40000093u, a2);
  result = 196616LL;
  *(_QWORD *)(v4 + a1) = 196616LL;
  __writemsr(0x400000B0u, 0x30008uLL);
  return result;
}
