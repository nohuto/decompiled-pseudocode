/*
 * XREFs of VmpInvalidateSingleGpaRange @ 0x1406C4FB4
 * Callers:
 *     VmpProcessInvalidateList @ 0x140512570 (VmpProcessInvalidateList.c)
 * Callees:
 *     HvlMapGpaPages @ 0x140489414 (HvlMapGpaPages.c)
 *     VmpConvertInvalidateFlagsToMapFlags @ 0x1406C49BC (VmpConvertInvalidateFlagsToMapFlags.c)
 */

__int64 __fastcall VmpInvalidateSingleGpaRange(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r10
  __int64 result; // rax
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  v5 = VmpConvertInvalidateFlagsToMapFlags(a4);
  result = HvlMapGpaPages(v7, v6, v5, a3, 0LL, &v9);
  if ( (int)result < 0 )
    NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
  if ( v9 != a3 )
    NT_ASSERT("PageCountProcessed == NumberOfPages");
  return result;
}
