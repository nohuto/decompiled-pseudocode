/*
 * XREFs of PepNotifyQueryCoordinatedStates @ 0x1400382BC
 * Callers:
 *     RegisterKernelCoordinatedStates @ 0x1400355DC (RegisterKernelCoordinatedStates.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     memmove @ 0x14000E740 (memmove.c)
 *     memset @ 0x14000EA40 (memset.c)
 *     ValidateCoordinatedDependencyOptions @ 0x140030460 (ValidateCoordinatedDependencyOptions.c)
 *     ValidateCoordinatedState @ 0x140030A84 (ValidateCoordinatedState.c)
 *     PepQueryName @ 0x140038BF4 (PepQueryName.c)
 */

__int64 __fastcall PepNotifyQueryCoordinatedStates(__int64 a1, PVOID **a2)
{
  __int64 v2; // r14
  PVOID *v4; // rdi
  _DWORD *v5; // rsi
  unsigned int *Pool2; // rax
  unsigned int *v7; // r13
  int v8; // ebx
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // ebp
  unsigned int *v12; // rdx
  __int64 v13; // r10
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // r15
  unsigned int v20; // r12d
  _DWORD *v21; // rsi
  __int64 v22; // r13
  __int64 v23; // rbx
  unsigned int v24; // edx
  __int64 v25; // rcx
  size_t v26; // rbx
  __int64 i; // rbp
  PVOID *v28; // r15
  unsigned int j; // r12d
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v33; // eax
  PVOID *v34; // rsi
  __int64 v35; // rbp
  unsigned int *v37; // [rsp+30h] [rbp-58h]
  size_t v40; // [rsp+A0h] [rbp+18h]
  PVOID *v41; // [rsp+A8h] [rbp+20h]

  v2 = (unsigned int)dword_140015C84;
  v4 = 0LL;
  v5 = 0LL;
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, (unsigned int)(16 * dword_140015C84 + 4), 1919119952LL);
  v37 = Pool2;
  v7 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = v2;
    v8 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 29LL, Pool2);
    if ( v8 >= 0 )
    {
      v9 = 0;
      v10 = 0;
      v11 = 0;
      if ( (_DWORD)v2 )
      {
        v12 = v7 + 4;
        v13 = v2;
        do
        {
          v14 = *v12;
          v15 = *(v12 - 1);
          v12 += 4;
          v9 += v15;
          v10 += v14 * v15;
          if ( v11 >= v14 )
            v14 = v11;
          v11 = v14;
          --v13;
        }
        while ( v13 );
      }
      v16 = (320 * v2 + 55) & 0xFFFFFFF8;
      v17 = v16 + 16 * v9;
      v18 = ExAllocatePool2(64LL, (unsigned int)(v17 + 4 * v10), 1919119952LL);
      v41 = (PVOID *)v18;
      v4 = (PVOID *)v18;
      if ( !v18 )
        goto LABEL_10;
      v19 = v18 + v17;
      v20 = 0;
      if ( (_DWORD)v2 )
      {
        v21 = v7 + 4;
        v22 = v18 + v16;
        v23 = v18 + 356;
        do
        {
          KeInitializeAffinityEx2(v23 - 308, 32LL);
          *(_BYTE *)v23 = 1;
          v24 = 0;
          *(_DWORD *)(v23 - 20) = *(v21 - 3);
          *(_DWORD *)(v23 - 16) = *(v21 - 2);
          *(_DWORD *)(v23 - 8) = *(v21 - 1);
          *(_DWORD *)(v23 - 12) = *v21;
          *(_QWORD *)(v23 + 4) = v22;
          v22 += 16LL * (unsigned int)*(v21 - 1);
          if ( *(v21 - 1) )
          {
            do
            {
              v25 = v24++;
              *(_QWORD *)(*(_QWORD *)(v23 + 4) + 16 * v25 + 8) = v19;
              v19 += 4LL * (unsigned int)*v21;
            }
            while ( v24 < *(v21 - 1) );
          }
          PepQueryName(a1, v20++, 27LL, v23 - 44);
          v23 += 320LL;
          v21 += 4;
        }
        while ( v20 < (unsigned int)v2 );
        v4 = v41;
        v7 = v37;
      }
      v26 = 4 * v11 + 24;
      v40 = v26;
      v5 = (_DWORD *)ExAllocatePool2(64LL, v26, 1919119952LL);
      if ( v5 )
      {
        for ( i = 0LL; (unsigned int)i < (unsigned int)v2; i = (unsigned int)(i + 1) )
        {
          v28 = &v4[40 * i];
          for ( j = 0; j < *((_DWORD *)v28 + 87); ++j )
          {
            memset(v5, 0, v26);
            *v5 = i;
            v5[1] = j;
            v5[2] = *((_DWORD *)v28 + 86);
            v8 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))qword_140015980)(*(_QWORD *)(a1 + 1120), v5);
            if ( v8 < 0 )
              goto LABEL_31;
            v8 = ValidateCoordinatedDependencyOptions((__int64)v4, i, j, *((_DWORD *)v28 + 86), (__int64)v5);
            if ( v8 < 0 )
              goto LABEL_31;
            v30 = *((_QWORD *)v5 + 2);
            v31 = (__int64)v28[45] + 16 * j;
            if ( v30 )
              v32 = *(_DWORD *)(v30 + 56);
            else
              v32 = -1;
            *(_DWORD *)v31 = v32;
            v33 = v5[3];
            *(_DWORD *)(v31 + 4) = v33;
            memmove(*(void **)(v31 + 8), v5 + 6, 4LL * v33);
            v26 = v40;
          }
          v8 = ValidateCoordinatedState((__int64)v4, i);
          if ( v8 < 0 )
            goto LABEL_31;
          v26 = v40;
        }
        v8 = 0;
        *a2 = v4;
        v4 = 0LL;
      }
      else
      {
LABEL_10:
        v8 = -1073741670;
      }
    }
LABEL_31:
    ExFreePoolWithTag(v7, (ULONG)1919119952);
    if ( v5 )
      ExFreePoolWithTag(v5, (ULONG)1919119952);
    if ( v4 )
    {
      if ( (_DWORD)v2 )
      {
        v34 = v4 + 40;
        v35 = v2;
        do
        {
          if ( *v34 )
            ExFreePoolWithTag(*v34, (ULONG)1919119952);
          v34 += 40;
          --v35;
        }
        while ( v35 );
      }
      ExFreePoolWithTag(v4, (ULONG)1919119952);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
