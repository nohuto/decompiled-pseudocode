/*
 * XREFs of sub_140886514 @ 0x140886514
 * Callers:
 *     ntoskrnl_20 @ 0x140A83F40 (ntoskrnl_20.c)
 * Callees:
 *     sub_140886560 @ 0x140886560 (sub_140886560.c)
 */

__int64 __fastcall sub_140886514(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_140886560(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
