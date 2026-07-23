/*
 * XREFs of EmonDisableMonitoring @ 0x140597A00
 * Callers:
 *     <none>
 * Callees:
 *     EmonConfigureCounter @ 0x140597850 (EmonConfigureCounter.c)
 *     EmonFindCounterToDisable @ 0x140597D28 (EmonFindCounterToDisable.c)
 *     EmonFreeCounter @ 0x140597DD8 (EmonFreeCounter.c)
 */

__int64 __fastcall EmonDisableMonitoring(unsigned int a1, unsigned int *a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 result; // rax
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(v2) = KeGetPcr()->Prcb.Number;
  v3 = 0;
  v8 = 0;
  v9 = 0;
  if ( a2 )
  {
    v5 = *a2;
    if ( (*a2 & 0x40000000) != 0 )
    {
      v5 &= ~0x40000000u;
      v3 = 1;
    }
    goto LABEL_7;
  }
  v6 = *(_QWORD *)(KiProcessorBlock[v2] + 88);
  if ( (unsigned __int8)EmonFindCounterToDisable(v6, a1, &v9, &v8)
    || (result = EmonFindCounterToDisable(v6 + 24, a1, &v9, &v8), (_BYTE)result) )
  {
    v3 = v8;
    v5 = v9;
LABEL_7:
    EmonConfigureCounter(v5, v3, 0, 0LL, 0, 0);
    result = EmonFreeCounter(v5, v3);
    _InterlockedAdd((volatile signed __int32 *)&KeGetCurrentPrcb()->HalReserved[3], 0xFFFFFFFE);
  }
  return result;
}
