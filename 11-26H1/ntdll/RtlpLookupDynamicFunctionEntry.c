/*
 * XREFs of RtlpLookupDynamicFunctionEntry @ 0x1800D4C10
 * Callers:
 *     RtlLookupFunctionEntry @ 0x180035420 (RtlLookupFunctionEntry.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpLookupDynamicFunctionEntry(unsigned __int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  int v9; // eax
  __int64 v10; // rbp
  unsigned int *v11; // rsi
  __int64 (__fastcall *v12)(unsigned __int64, __int64); // rsi
  __int64 v13; // rdi
  __int64 result; // rax
  int v15; // edx
  unsigned int *v16; // rdi
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r8
  unsigned int *v19; // rcx
  bool v20; // sf
  int v21; // edx
  int v22; // r10d
  int v23; // r9d
  unsigned __int64 v24; // rbx
  unsigned int i; // edi

  RtlAcquireSRWLockShared(&RtlpDynamicFunctionTableLock);
  v4 = (_QWORD *)RtlpDynamicCallbackTableTreeMin;
  if ( RtlpDynamicCallbackTableTreeMin )
  {
    do
    {
      if ( a1 < *(v4 - 7) )
      {
        v4 = (_QWORD *)*v4;
      }
      else
      {
        if ( a1 < *(v4 - 6) )
          break;
        v4 = (_QWORD *)v4[1];
      }
    }
    while ( v4 );
  }
  v5 = v4 - 11;
  if ( !v4 )
  {
    v6 = (_QWORD *)RtlpDynamicCallbackTableTreeMax;
    if ( RtlpDynamicCallbackTableTreeMax )
    {
      do
      {
        if ( a1 >= *(v6 - 10) )
        {
          if ( a1 < *(v6 - 9) )
            break;
          v6 = (_QWORD *)v6[1];
        }
        else
        {
          v6 = (_QWORD *)*v6;
        }
      }
      while ( v6 );
    }
    v5 = v6 - 14;
    if ( !v6 )
    {
      v7 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
      if ( RtlpDynamicFunctionTableTreeMin )
      {
        do
        {
          if ( a1 < *(v7 - 7) )
          {
            v7 = (_QWORD *)*v7;
          }
          else
          {
            if ( a1 < *(v7 - 6) )
              break;
            v7 = (_QWORD *)v7[1];
          }
        }
        while ( v7 );
      }
      v5 = v7 - 11;
      if ( !v7 )
      {
        v8 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
        if ( RtlpDynamicFunctionTableTreeMax )
        {
          do
          {
            if ( a1 >= *(v8 - 10) )
            {
              if ( a1 < *(v8 - 9) )
                break;
              v8 = (_QWORD *)v8[1];
            }
            else
            {
              v8 = (_QWORD *)*v8;
            }
          }
          while ( v8 );
        }
        v5 = v8 - 14;
        if ( !v8 )
        {
LABEL_54:
          RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
          return 0LL;
        }
      }
    }
  }
  v9 = *((_DWORD *)v5 + 20);
  v10 = v5[6];
  v11 = (unsigned int *)v5[2];
  if ( v9 && v9 != 3 )
  {
    if ( v9 != 1 )
    {
      v12 = (__int64 (__fastcall *)(unsigned __int64, __int64))v5[7];
      v13 = v5[8];
      RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
      *a2 = v10;
      return v12(a1, v13);
    }
    v24 = a1 - v10;
    for ( i = 0; i < *((_DWORD *)v5 + 21); ++i )
    {
      if ( v24 >= *v11 && v24 < v11[1] )
      {
        RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
        result = (__int64)v11;
        *a2 = v10;
        return result;
      }
      v11 += 3;
    }
    goto LABEL_54;
  }
  v15 = *((_DWORD *)v5 + 21);
  v16 = 0LL;
  if ( !v15 )
    goto LABEL_46;
  v17 = a1 - v10;
  v18 = v11[3 * (v15 - 1)];
  v19 = &v11[3 * (v15 - 1)];
  if ( v17 < v18 )
  {
    v20 = v15 - 2 < 0;
    v21 = v15 - 2;
    v22 = 0;
    if ( !v20 )
    {
      do
      {
        v23 = (v22 + v21) >> 1;
        v19 = &v11[3 * v23];
        if ( v17 < *v19 )
        {
          v21 = v23 - 1;
        }
        else
        {
          LODWORD(v18) = v11[3 * v23];
          if ( v17 < v19[3] )
            break;
          v22 = v23 + 1;
        }
        LODWORD(v18) = v11[3 * v23];
      }
      while ( v21 >= v22 );
    }
  }
  if ( v17 >= (unsigned int)v18 && v17 < v19[1] )
  {
    v16 = v19;
    RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
    if ( v16 )
      *a2 = v10;
  }
  else
  {
LABEL_46:
    RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
  }
  return (__int64)v16;
}
