/*
 * XREFs of PnprAllocateMappingReserves @ 0x1407B1C64
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1407B0E20 (PnpReplacePartitionUnit.c)
 * Callees:
 *     PnprFreeMappingReserve @ 0x1407B2144 (PnprFreeMappingReserve.c)
 *     PnprInitializeMappingReserve @ 0x1407B25D8 (PnprInitializeMappingReserve.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnprAllocateMappingReserves(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v5; // rdi
  _QWORD *Pool2; // rsi
  int v7; // ebx
  __int64 i; // rbp
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx

  v5 = 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( Pool2 && (v5 = (_QWORD *)ExAllocatePool2(0x40uLL)) != 0LL )
  {
    for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
    {
      v7 = PnprInitializeMappingReserve(2LL, &Pool2[3 * i]);
      if ( v7 < 0 )
        goto LABEL_14;
      v7 = PnprInitializeMappingReserve(2050LL, &v5[3 * i]);
      if ( v7 < 0 )
      {
        PnprFreeMappingReserve(&Pool2[3 * i]);
        goto LABEL_11;
      }
    }
    v7 = 0;
  }
  else
  {
    v7 = -1073741670;
  }
LABEL_11:
  if ( v7 >= 0 )
    goto LABEL_19;
  if ( Pool2 )
  {
    if ( v5 )
    {
LABEL_14:
      if ( *Pool2 && *v5 )
      {
        v9 = PnprContext;
        v10 = *(unsigned int *)(PnprContext + 180);
        if ( !Pool2[3 * v10] )
        {
          *(_OWORD *)&Pool2[3 * v10] = *(_OWORD *)Pool2;
          Pool2[3 * v10 + 2] = Pool2[2];
          v11 = 3LL * *(unsigned int *)(v9 + 180);
          *(_OWORD *)&v5[v11] = *(_OWORD *)v5;
          v5[v11 + 2] = v5[2];
          *(_OWORD *)Pool2 = 0LL;
          Pool2[2] = 0LL;
          *(_OWORD *)v5 = 0LL;
          v5[2] = 0LL;
        }
        v7 = 0;
LABEL_19:
        *a1 = Pool2;
        *a2 = v5;
        return (unsigned int)v7;
      }
    }
    ExFreePoolWithTag(Pool2, 0x51706E50u);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0x51706E50u);
  return (unsigned int)v7;
}
