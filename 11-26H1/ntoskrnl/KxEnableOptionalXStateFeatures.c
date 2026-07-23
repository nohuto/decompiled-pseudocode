/*
 * XREFs of KxEnableOptionalXStateFeatures @ 0x1405EF914
 * Callers:
 *     KiEnableOptionalXStateFeatures @ 0x1403D5A0C (KiEnableOptionalXStateFeatures.c)
 *     KeEnableOptionalXStateFeaturesApc @ 0x1405EF310 (KeEnableOptionalXStateFeaturesApc.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeCopyXfdMaskToTeb @ 0x1404E3478 (KeCopyXfdMaskToTeb.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KxEnableOptionalXStateFeatures(__int64 a1, __int64 a2, void *a3, char *a4)
{
  unsigned __int8 CurrentIrql; // bl
  int v10; // eax
  size_t v11; // r8
  char v12; // al
  __int64 v13; // rsi

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 544) + 784LL) )
    return 3221225659LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  if ( (a2 & *(_QWORD *)(a1 + 1064)) != 0 )
  {
    v10 = *(_DWORD *)(a1 + 116);
    if ( (v10 & 0x800000) != 0 )
    {
      v12 = 0;
    }
    else
    {
      v11 = (unsigned int)KeDecoupledStateSaveAreaLength;
      *(_DWORD *)(a1 + 116) = v10 | 0x800000;
      *(_QWORD *)(a1 + 96) = a3;
      memset_0(a3, 0, v11);
      v12 = 1;
    }
    *a4 = v12;
    *(_QWORD *)(a1 + 592) |= a2;
    v13 = ~a2;
    *(_QWORD *)(a1 + 1064) &= v13;
    __writemsr(0x1C4u, v13 & __readmsr(0x1C4u));
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    KeCopyXfdMaskToTeb((_QWORD *)a1);
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    *a4 = 0;
  }
  return 0LL;
}
