/*
 * XREFs of ExpSaBinaryArrayInsert @ 0x1404935CC
 * Callers:
 *     ExpSaPageGroupDescriptorAllocate @ 0x1404932FC (ExpSaPageGroupDescriptorAllocate.c)
 * Callees:
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

__int64 __fastcall ExpSaBinaryArrayInsert(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  int v3; // r15d
  __int64 i; // rdi
  __int64 *v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 j; // rcx
  unsigned int v11; // ebx
  __int64 v13; // rax
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF

  v3 = a3;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 0x10 )
      return (unsigned int)-1;
    v7 = *(__int64 **)(a1 + 8 * i);
    v8 = 1 << (i + 2);
    if ( !v7 )
    {
      v14 = 0LL;
      LOBYTE(v14) = 3;
      DWORD2(v14) = v3 | 0x80000000;
      v13 = ExAllocatePool3(64LL, 8 * v8 + 8, 1632860229LL, &v14, 1);
      v7 = (__int64 *)v13;
      if ( !v13 )
        return (unsigned int)-1;
      *(_QWORD *)(a1 + 8 * i) = v13;
    }
    v9 = *v7;
    if ( *v7 < (unsigned __int64)v8 )
      break;
  }
  for ( j = (unsigned int)v9; v7[j + 1]; j = (v8 - 1) & ((_DWORD)j + 1) )
    ;
  v11 = j | v8;
  *v7 = v9 + 1;
  v7[j + 1] = a2;
  return v11;
}
