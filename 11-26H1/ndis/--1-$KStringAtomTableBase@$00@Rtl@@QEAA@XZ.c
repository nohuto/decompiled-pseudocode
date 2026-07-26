/*
 * XREFs of ??1?$KStringAtomTableBase@$00@Rtl@@QEAA@XZ @ 0x14014D154
 * Callers:
 *     ??1NdisBindBuilderGlobal@@QEAA@XZ @ 0x14014D2D0 (--1NdisBindBuilderGlobal@@QEAA@XZ.c)
 * Callees:
 *     ?FreeBuckets@?$KHashTableBase@$00@Rtl@@CAXPEAX0@Z @ 0x14014D440 (-FreeBuckets@-$KHashTableBase@$00@Rtl@@CAXPEAX0@Z.c)
 */

__int64 __fastcall Rtl::KStringAtomTableBase<1>::~KStringAtomTableBase<1>(__int64 a1)
{
  unsigned int *v1; // rdi
  unsigned int *v3; // rsi
  _QWORD *v4; // rdx
  unsigned int *v5; // rcx
  _QWORD *v6; // r10
  _QWORD **j; // rdx
  _QWORD *i; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h]

  v1 = (unsigned int *)(a1 + 4);
  v3 = (unsigned int *)(a1 + 4);
  while ( 1 )
  {
    v4 = *(_QWORD **)(a1 + 8);
    v5 = v1;
    if ( !v4 )
      break;
    v5 = v3;
    if ( (*v4 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = v1;
    v6 = (_QWORD *)*v4;
    if ( (*v4 & 1) != 0 )
      break;
LABEL_10:
    if ( !v6 )
      return Rtl::KHashTableBase<1>::FreeBuckets(*(_QWORD *)(a1 + 8), a1);
    v3 = (unsigned int *)(a1 + 4);
    v10 = v6[1] & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8LL
                       * (((*(_DWORD *)(a1 + 4) >> 5) - 1) & (HIBYTE(v10)
                                                            - 877075889
                                                            + 442596621 * (unsigned __int8)v10
                                                            + 37
                                                            * (BYTE6(v10)
                                                             + 37
                                                             * (BYTE5(v10)
                                                              + 37
                                                              * (BYTE4(v10)
                                                               + 37
                                                               * (BYTE3(v10)
                                                                + 37 * (BYTE2(v10) + 37 * (unsigned int)BYTE1(v10)))))))));
          (*i & 1) == 0;
          i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == v6 )
      {
        *i = *v6;
        --*(_DWORD *)a1;
        *v6 |= 0x8000000000000002uLL;
        break;
      }
    }
    ExFreePoolWithTag(v6, 0x6D74414Bu);
  }
  for ( j = (_QWORD **)(v4 + 1); (unsigned __int64)j < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*v5 >> 5); ++j )
  {
    v6 = *j;
    if ( ((unsigned __int8)*j & 1) == 0 )
      goto LABEL_10;
  }
  return Rtl::KHashTableBase<1>::FreeBuckets(*(_QWORD *)(a1 + 8), a1);
}
