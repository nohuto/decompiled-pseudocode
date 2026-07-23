/*
 * XREFs of MiComputeVadCharges @ 0x1404BDF20
 * Callers:
 *     MiDeletePartialVad @ 0x1403C6AC4 (MiDeletePartialVad.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x1408853D4 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiInsertVadCharges @ 0x140996DA0 (MiInsertVadCharges.c)
 * Callees:
 *     MiVadPureReserve @ 0x1403193E0 (MiVadPureReserve.c)
 *     MiResidentPagesForSpan @ 0x140A03850 (MiResidentPagesForSpan.c)
 */

__int64 __fastcall MiComputeVadCharges(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // r11
  __int64 v6; // rdi
  int v7; // edx

  result = 0LL;
  v4 = *(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32);
  v5 = a1;
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( v4 >= 0x7FFFFFFFDLL )
  {
    if ( (*(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32)) == 0x7FFFFFFFDLL )
      *(_QWORD *)(a2 + 16) = 72LL;
  }
  else
  {
    *(_QWORD *)(a2 + 16) = 144LL;
    v6 = 0LL;
    v7 = *(_DWORD *)(a1 + 48);
    if ( (v7 & 0x80000) == 0 && !MiVadPureReserve(a1) )
      *(_QWORD *)(a2 + 8) = 8
                          * ((*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32))
                           - (*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)))
                          + 8;
    result = v7 & 0x1C;
    if ( (_DWORD)result == 4
      || (_DWORD)result == 16
      || (_DWORD)result == 12 && (result = 8912896LL, (v7 & 0x880000) == 0x880000) )
    {
      result = MiResidentPagesForSpan(
                 (*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12,
                 ((*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32)) << 12) | 0xFFF,
                 0LL);
      v6 = result;
    }
    *(_QWORD *)a2 = v6;
  }
  return result;
}
