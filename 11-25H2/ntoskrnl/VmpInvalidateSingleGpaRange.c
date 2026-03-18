/*
 * XREFs of VmpInvalidateSingleGpaRange @ 0x1404B1E04
 * Callers:
 *     VmpProcessInvalidateList @ 0x14026F09C (VmpProcessInvalidateList.c)
 * Callees:
 *     HvlMapGpaPages @ 0x14026D068 (HvlMapGpaPages.c)
 */

__int64 __fastcall VmpInvalidateSingleGpaRange(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v5 = (unsigned int)((a4 << 31) + 16842752);
  LODWORD(v5) = v5 | 0x8000;
  if ( (a4 & 2) == 0 )
    v5 = (unsigned int)((a4 << 31) + 16842752);
  result = HvlMapGpaPages(a1, a2, v5, a3, 0LL, &v7);
  if ( (int)result < 0 )
    NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
  if ( v7 != a3 )
    NT_ASSERT("PageCountProcessed == NumberOfPages");
  return result;
}
