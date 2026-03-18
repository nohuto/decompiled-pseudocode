/*
 * XREFs of MxCreateNodeFreeZeroList @ 0x140CF5D60
 * Callers:
 *     MxCreateSparsePfnDatabase @ 0x140CF64E4 (MxCreateSparsePfnDatabase.c)
 * Callees:
 *     MxCreateFreePages @ 0x140CF5CA8 (MxCreateFreePages.c)
 *     MxFindFreePageDescriptor @ 0x140CF6A30 (MxFindFreePageDescriptor.c)
 */

unsigned __int64 __fastcall MxCreateNodeFreeZeroList(unsigned int a1)
{
  int v2; // ebp
  unsigned __int64 v3; // rdi
  __int64 *v4; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r8
  __int64 v7; // rdx

  v2 = 0;
  v3 = 0x100000LL;
  v4 = &MxBootState[250 * a1];
  result = v4[22];
  if ( result <= 0x100000 )
  {
    v3 = v4[22];
    if ( !result )
      return result;
  }
  do
  {
    result = v4[24];
    if ( result )
    {
      if ( v3 <= v4[16] )
        goto LABEL_7;
      v2 = 1;
    }
    result = MxFindFreePageDescriptor(a1);
    if ( !result )
      break;
LABEL_7:
    v6 = v3;
    if ( v3 > *(_QWORD *)(result + 40) )
      v6 = *(_QWORD *)(result + 40);
    result = MxCreateFreePages((__int64)v4, result, v6);
    if ( !result )
      break;
    v3 -= result;
  }
  while ( v3 );
  if ( v3 )
  {
    if ( v2 )
    {
      v7 = v4[24];
      if ( v7 )
      {
        if ( v3 > *(_QWORD *)(v7 + 40) )
          v3 = *(_QWORD *)(v7 + 40);
        return MxCreateFreePages((__int64)v4, v7, v3);
      }
    }
  }
  return result;
}
