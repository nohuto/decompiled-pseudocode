/*
 * XREFs of RtlpCreateRangeListEntry @ 0x140B1244C
 * Callers:
 *     RtlInvertRangeListEx @ 0x140B12270 (RtlInvertRangeListEx.c)
 *     RtlAddRange @ 0x140B123A0 (RtlAddRange.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 */

_BYTE *__fastcall RtlpCreateRangeListEntry(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  _BYTE *result; // rax

  result = ExAllocateFromNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&PspTlsContext.StackBase);
  if ( result )
  {
    result[33] = 0;
    *((_WORD *)result + 17) = 0;
    *((_QWORD *)result + 3) = a5;
    *(_QWORD *)result = a1;
    *((_QWORD *)result + 1) = a2;
    result[32] = a3;
    *((_QWORD *)result + 2) = a4;
  }
  return result;
}
