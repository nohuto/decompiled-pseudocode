/*
 * XREFs of LinkNodeFindByName @ 0x1400BC194
 * Callers:
 *     PcisuppGetRoutingInfo @ 0x1400C5414 (PcisuppGetRoutingInfo.c)
 * Callees:
 *     ACPIAmliBuildObjectPathname @ 0x14002C5E4 (ACPIAmliBuildObjectPathname.c)
 */

__int64 __fastcall LinkNodeFindByName(__int64 a1, __int64 *a2)
{
  __int64 i; // rbx
  _QWORD *v5; // rcx
  __int64 result; // rax
  PVOID v7; // rcx
  unsigned __int8 *v8; // rax
  int v9; // r9d
  int v10; // r8d
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  for ( i = LinkNodeListHead - 56; &LinkNodeListHead != (__int64 *)(i + 56); i = *(_QWORD *)(i + 56) - 56LL )
  {
    v5 = *(_QWORD **)(i + 600);
    P = 0LL;
    result = ACPIAmliBuildObjectPathname(v5, &P, 0);
    if ( (int)result < 0 )
      return result;
    v7 = P;
    v8 = (unsigned __int8 *)P;
    do
    {
      v9 = v8[a1 - (_QWORD)P];
      v10 = *v8 - v9;
      if ( v10 )
        break;
      ++v8;
    }
    while ( v9 );
    if ( !v10 )
    {
      *a2 = i;
      ExFreePoolWithTag(v7, 0);
      return 0LL;
    }
    ExFreePoolWithTag(P, 0);
  }
  return 3221226021LL;
}
