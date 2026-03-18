/*
 * XREFs of sub_1407F09C4 @ 0x1407F09C4
 * Callers:
 *     ntoskrnl_20 @ 0x140978FD0 (ntoskrnl_20.c)
 * Callees:
 *     sub_1407F0A10 @ 0x1407F0A10 (sub_1407F0A10.c)
 */

__int64 __fastcall sub_1407F09C4(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1407F0A10(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
