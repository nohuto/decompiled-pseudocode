/*
 * XREFs of ExpLimitDpcInsertEntry @ 0x1406D0248
 * Callers:
 *     ExpLimitInsertDpc @ 0x1406D0510 (ExpLimitInsertDpc.c)
 * Callees:
 *     ExpTrackRaiseLimitNotification @ 0x140534998 (ExpTrackRaiseLimitNotification.c)
 */

void __fastcall ExpLimitDpcInsertEntry(signed __int64 *a1)
{
  signed __int64 v1; // rsi
  unsigned int v3; // r8d
  unsigned int v4; // r10d
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 j; // r8
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  ULONG_PTR v13; // rax
  unsigned __int64 v14; // rax
  int v15; // r8d
  int v16; // r12d
  __int64 *v17; // rbx
  volatile signed __int64 *v18; // r15
  signed __int64 v19; // rdi
  __int64 i; // r13
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // r9
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  int v29; // [rsp+50h] [rbp+8h]

  v1 = *a1;
  v29 = 0;
  v3 = LODWORD(stru_140EFF2C0.StackBase) & ((40543 * *(_DWORD *)(*a1 + 8)) ^ ((40543
                                                                             * (unsigned __int64)*(unsigned int *)(*a1 + 8)) >> 32));
  v4 = v3;
  v5 = 0LL;
  do
  {
    v6 = 80LL * v3;
    v7 = *(unsigned int *)(v6 + stru_140EFF2C0.ThreadLock);
    if ( v7 == *(_QWORD *)(v1 + 8) )
    {
      v15 = 1;
      v29 = 1;
      v5 = v6 / 80;
LABEL_22:
      v16 = 0;
      v17 = a1 + 1;
      v18 = (volatile signed __int64 *)(v1 + 32);
      v19 = v1 - (_QWORD)a1;
      for ( i = 56LL; ; i += 8LL )
      {
        if ( !*(__int64 *)((char *)v17 + v19 + 8) )
        {
          v21 = *(__int64 *)((char *)v17 + v19 + 16);
          v22 = *v17;
          if ( !v21 && (v22 || v17[1]) )
          {
            v23 = 0;
            goto LABEL_33;
          }
          v24 = *v17;
          if ( !v21 )
            goto LABEL_32;
        }
        v22 = *v17;
        v24 = *v17;
        if ( !*v17 && v17[1] == v22 )
        {
          v23 = v22 + 1;
        }
        else
        {
LABEL_32:
          v23 = 2;
          v22 = v24;
        }
LABEL_33:
        *(__int64 *)((char *)v17 + v19 + 8) = v22;
        *(__int64 *)((char *)v17 + v19 + 16) = v17[1];
        if ( v15 )
        {
          if ( v23 == 2 )
            goto LABEL_44;
          v25 = 0LL;
          for ( *v18 = v23 != 0; (unsigned int)v25 < (unsigned int)KeNumberProcessors_0; v25 = (unsigned int)(v25 + 1) )
          {
            v26 = 80LL * (unsigned int)v5 + *(&stru_140EFF2C0.ThreadLock + v25);
            if ( *(_DWORD *)v26 )
            {
              if ( !*(_QWORD *)(v26 + 72) )
                _InterlockedCompareExchange64((volatile signed __int64 *)(v26 + 72), v1, 0LL);
              v27 = *(_QWORD *)((-(__int64)(v16 != 0) & 0xFFFFFFFFFFFFFFE8uLL) + v26 + 32);
              if ( v23 )
              {
                *(_QWORD *)(v26 + i) = 1LL;
              }
              else
              {
                *(_QWORD *)(v26 + i) = v27;
                _InterlockedAdd64(v18, v27);
              }
            }
          }
          if ( v23 != 1 )
          {
LABEL_44:
            v28 = *(__int64 *)((char *)v17 + v19 + 16);
            if ( v28 && v28 < *(__int64 *)((char *)v17 + v19 + 24) )
              ExpTrackRaiseLimitNotification(v1);
          }
        }
        v15 = v29;
        ++v16;
        v18 += 3;
        v17 += 3;
        if ( v16 >= 2 )
          return;
      }
    }
    if ( !(_DWORD)v7 )
      break;
    v3 = (__int64)stru_140EFF2C0.StackBase & (v3 + 1);
  }
  while ( v3 != v4 );
  if ( !PoolTrackTableExpansion )
  {
LABEL_21:
    v15 = 0;
    goto LABEL_22;
  }
  for ( j = 0LL; ; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= (unsigned __int64)PoolTrackTableExpansionSize )
      goto LABEL_21;
    v9 = 10 * j;
    if ( !*(_DWORD *)(PoolTrackTableExpansion + 80 * j) )
      goto LABEL_21;
    if ( *(_DWORD *)(PoolTrackTableExpansion + 80 * j) == *(_DWORD *)(v1 + 8) )
      break;
  }
  v10 = 0LL;
  *(_QWORD *)(PoolTrackTableExpansion + 80 * j + 72) = v1;
  do
  {
    v11 = 3 * v10;
    *(_QWORD *)(v1 + 8 * v11 + 16) = *(signed __int64 *)((char *)a1 + v5 + 8);
    v12 = a1[3 * v10 + 2];
    v13 = PoolTrackTableExpansion;
    *(_QWORD *)(v1 + 8 * v11 + 24) = v12;
    if ( v10 )
      v14 = *(_QWORD *)(v13 + 8 * v9 + 8);
    else
      v14 = *(_QWORD *)(v13 + 8 * v9 + 32);
    *(_QWORD *)(v1 + 24 * v10 + 32) = v14;
    if ( v12 )
    {
      if ( v12 < v14 )
        ExpTrackRaiseLimitNotification(v1);
    }
    ++v10;
    v5 += 24LL;
  }
  while ( v10 < 2 );
}
