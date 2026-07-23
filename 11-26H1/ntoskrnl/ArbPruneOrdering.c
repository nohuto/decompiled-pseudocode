/*
 * XREFs of ArbPruneOrdering @ 0x14078BAF0
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x14078AC9C (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbPruneOrdering(unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v6; // ebx
  char *Pool2; // rsi
  __int64 v8; // rax
  char *v9; // rbx
  unsigned __int64 *v10; // rcx
  unsigned __int64 i; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 result; // rax
  void *v19; // rcx

  if ( a3 < a2 )
    return (unsigned int)-1073741811;
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v8 = *a1;
  v9 = Pool2;
  if ( (_WORD)v8 )
  {
    v10 = (unsigned __int64 *)*((_QWORD *)a1 + 1);
    for ( i = (unsigned __int64)&v10[2 * v8]; ; i = *((_QWORD *)a1 + 1) + 16LL * *a1 )
    {
      if ( (unsigned __int64)v10 >= i )
        goto LABEL_20;
      v12 = *v10;
      if ( a3 < *v10 )
        break;
      v13 = v10[1];
      if ( a2 > v13 )
        break;
      if ( a2 <= v12 )
      {
        if ( a3 >= v13 )
          goto LABEL_18;
        *(_QWORD *)v9 = a3 + 1;
        *((_QWORD *)v9 + 1) = v10[1];
        goto LABEL_17;
      }
      v14 = a2 - 1;
      if ( a3 >= v13 )
      {
        *(_QWORD *)v9 = v12;
        v15 = 16LL;
        *((_QWORD *)v9 + 1) = v14;
      }
      else
      {
        *(_QWORD *)v9 = a3 + 1;
        *((_QWORD *)v9 + 1) = v10[1];
        *((_QWORD *)v9 + 2) = *v10;
        v15 = 32LL;
        *((_QWORD *)v9 + 3) = v14;
      }
      v9 += v15;
LABEL_18:
      v10 += 2;
    }
    *(_OWORD *)v9 = *(_OWORD *)v10;
LABEL_17:
    v9 += 16;
    goto LABEL_18;
  }
LABEL_20:
  v16 = (v9 - Pool2) >> 4;
  if ( (_WORD)v16 )
  {
    if ( (unsigned __int16)v16 > a1[1] )
    {
      v17 = ExAllocatePool2(0x100uLL);
      if ( !v17 )
      {
        v6 = -1073741670;
        ExFreePoolWithTag(Pool2, 0);
        return v6;
      }
      v19 = (void *)*((_QWORD *)a1 + 1);
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
      *((_QWORD *)a1 + 1) = v17;
      a1[1] = v16;
    }
    memmove(*((void **)a1 + 1), Pool2, 16LL * (unsigned __int16)v16);
  }
  ExFreePoolWithTag(Pool2, 0);
  result = 0LL;
  *a1 = v16;
  return result;
}
