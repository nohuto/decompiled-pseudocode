/*
 * XREFs of sub_140880114 @ 0x140880114
 * Callers:
 *     ntoskrnl_20 @ 0x140A7E0D0 (ntoskrnl_20.c)
 * Callees:
 *     sub_140880160 @ 0x140880160 (sub_140880160.c)
 */

__int64 __fastcall sub_140880114(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_140880160(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
