/*
 * XREFs of KiSetProcessorDpcLimits @ 0x1405EE1BC
 * Callers:
 *     KiApplyProcessorDpcLimits @ 0x140BF9624 (KiApplyProcessorDpcLimits.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiSetProcessorDpcLimits(__int64 a1, _DWORD *a2, __int64 a3, _QWORD *a4)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v9; // rax
  unsigned int v10; // ecx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 13 )
    __writecr8(0xDuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 13);
  *(_DWORD *)(a1 + 34396) = 0;
  *(_DWORD *)(a1 + 33708) = 0;
  *(_DWORD *)(a1 + 34400) = *a2;
  *(_DWORD *)(a1 + 33704) = a2[1];
  *(_DWORD *)(a1 + 14540) = a2[2];
  *(_DWORD *)(a1 + 14552) = a2[3];
  *(_DWORD *)(a1 + 34624) = a2[4];
  *(_DWORD *)(a1 + 33716) = a2[5];
  v9 = *(_QWORD *)(a1 + 36584);
  *a4 = 0LL;
  if ( a3 != v9 )
  {
    *a4 = v9;
    *(_QWORD *)(a1 + 36584) = a3;
    *(_DWORD *)(a1 + 33568) = 0;
    if ( a3 )
    {
      v10 = a2[6] - 768;
      *(_DWORD *)(a1 + 33572) = 768;
      *(_DWORD *)(a1 + 14556) = v10;
      *(_QWORD *)(a1 + 33560) = a3 + v10;
      v9 = a3;
    }
    else
    {
      *(_QWORD *)(a1 + 33560) = 0LL;
      v9 = 0LL;
      *(_DWORD *)(a1 + 33572) = 0;
      *(_DWORD *)(a1 + 14556) = 0;
    }
  }
  *(_QWORD *)(a1 + 36592) = v9;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return 0LL;
}
