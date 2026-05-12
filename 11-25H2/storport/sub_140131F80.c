/*
 * XREFs of sub_140131F80 @ 0x140131F80
 * Callers:
 *     sub_140131CA0 @ 0x140131CA0 (sub_140131CA0.c)
 *     sub_140131D8C @ 0x140131D8C (sub_140131D8C.c)
 *     HandleInformation @ 0x140132940 (HandleInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140131F80(__int64 a1, int a2)
{
  __int64 v2; // rdi
  ULONGLONG UnbiasedInterruptTime; // rax
  ULONGLONG *v5; // r8

  if ( a1 )
  {
    v2 = a2;
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    v5 = (ULONGLONG *)(a1 + 168);
    if ( (unsigned int)v2 <= 5 )
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 8 * v2 + 176), UnbiasedInterruptTime - *v5);
    *v5 = UnbiasedInterruptTime;
  }
}
