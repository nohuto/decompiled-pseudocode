/*
 * XREFs of SbpUpdateCache @ 0x180084310
 * Callers:
 *     SbSelectProcedure @ 0x180083640 (SbSelectProcedure.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     SbGetCurrentSwitchContext @ 0x1800848B0 (SbGetCurrentSwitchContext.c)
 *     SbpResolveBasedOnName @ 0x180084D68 (SbpResolveBasedOnName.c)
 */

__int64 __fastcall SbpUpdateCache(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rdi
  __int64 CurrentSwitchContext; // rax
  int v7; // r9d
  __int64 v8; // r10
  __int64 v9; // rbx
  __int128 v10; // xmm0
  __int64 v11; // rbx
  _DWORD *v12; // rax
  __int64 v13; // r12
  __int64 v14; // rbp
  unsigned int v15; // ebx
  unsigned int i; // edx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // r9d
  __int64 v22; // rbx
  __int64 j; // rdx
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned int v26; // ecx
  __int64 result; // rax
  unsigned int k; // edx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+20h] [rbp-58h]
  __int128 v33; // [rsp+28h] [rbp-50h]

  v5 = a2;
  CurrentSwitchContext = SbGetCurrentSwitchContext();
  v9 = CurrentSwitchContext;
  if ( !CurrentSwitchContext )
    return 0LL;
  if ( !v7 )
  {
    v11 = *(_QWORD *)CurrentSwitchContext;
    v32 = *(_QWORD *)CurrentSwitchContext;
    v33 = *(_OWORD *)(CurrentSwitchContext + 48);
    goto LABEL_5;
  }
  if ( v7 != 1 )
    return 0LL;
  RtlAcquireSRWLockShared(&SbpContextLock);
  v10 = *(_OWORD *)(v9 + 64);
  v11 = *(_QWORD *)v9;
  v32 = v11;
  v33 = v10;
  RtlReleaseSRWLockShared(&SbpContextLock);
  v7 = a4;
  v8 = a1;
LABEL_5:
  v12 = *(_DWORD **)(v5 + 24);
  v13 = 0LL;
  if ( *v12 )
  {
    do
    {
      v14 = *(_QWORD *)&v12[2 * v13 + 2];
      if ( v14 )
      {
        v15 = 0;
LABEL_8:
        if ( v15 < *(_DWORD *)(v14 + 68) )
        {
          for ( i = 0; ; ++i )
          {
            if ( i >= *(_DWORD *)(a3 + 60) )
            {
              ++v15;
              goto LABEL_8;
            }
            v17 = v14 + ((unsigned __int64)v15 << 7);
            v18 = 16 * (i + 4LL);
            v19 = *(_QWORD *)(v17 + 184) - *(_QWORD *)(v18 + a3);
            if ( !v19 )
              v19 = *(_QWORD *)(v17 + 192) - *(_QWORD *)(v18 + a3 + 8);
            if ( !v19 )
              break;
          }
          if ( !*(_QWORD *)(v17 + 80) && *(_DWORD *)(v17 + 88) == 2 )
          {
            v20 = SbpResolveBasedOnName(*(_QWORD *)(v17 + 72));
            v8 = a1;
            *(_QWORD *)(v17 + 80) = v20;
          }
          *(_QWORD *)(v8 + 8 * v13 + 16) = v17 + 72;
        }
        v21 = *(_DWORD *)(v14 + 68);
        if ( v15 >= v21 )
        {
          v22 = 0LL;
LABEL_20:
          if ( (unsigned int)v22 < v21 )
          {
            for ( j = 0LL; ; j = (unsigned int)(j + 1) )
            {
              if ( (unsigned int)j >= 4 )
              {
                v22 = (unsigned int)(v22 + 1);
                goto LABEL_20;
              }
              v24 = *(_QWORD *)(v14 + 16 * (j + 8 * v22) + 120) - v33;
              if ( !v24 )
                v24 = *(_QWORD *)(v14 + 16 * (j + 8 * v22) + 128) - *((_QWORD *)&v33 + 1);
              if ( !v24 )
                break;
            }
            v25 = ((unsigned __int64)(unsigned int)v22 << 7) + v14;
            if ( !*(_QWORD *)(v25 + 80) && *(_DWORD *)(v25 + 88) == 2 )
            {
              v30 = SbpResolveBasedOnName(*(_QWORD *)(v25 + 72));
              v8 = a1;
              *(_QWORD *)(v25 + 80) = v30;
            }
            *(_QWORD *)(v8 + 8 * v13 + 16) = v25 + 72;
          }
          v26 = *(_DWORD *)(v14 + 68);
          if ( (unsigned int)v22 >= v26 )
          {
            for ( k = 0; k < v26; ++k )
            {
              v29 = v14 + ((unsigned __int64)k << 7);
              if ( *(_DWORD *)(v29 + 104) )
              {
                if ( !*(_QWORD *)(v29 + 80) && *(_DWORD *)(v29 + 88) == 2 )
                {
                  v31 = SbpResolveBasedOnName(*(_QWORD *)(v29 + 72));
                  v8 = a1;
                  *(_QWORD *)(v29 + 80) = v31;
                }
                *(_QWORD *)(v8 + 8 * v13 + 16) = v29 + 72;
                break;
              }
            }
          }
        }
        v5 = a2;
      }
      v12 = *(_DWORD **)(v5 + 24);
      v13 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v13 < *v12 );
    v7 = a4;
    v11 = v32;
  }
  result = 1LL;
  *(_QWORD *)v8 = v11;
  *(_DWORD *)(v8 + 8) = v7;
  return result;
}
