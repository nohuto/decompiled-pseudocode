/*
 * XREFs of PopDetectSimulatedHeteroProcessors @ 0x140CD9614
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     PopReadSimulatedArchitecturalClasses @ 0x140CD9B7C (PopReadSimulatedArchitecturalClasses.c)
 *     PopReadSimulatedHGSClasses @ 0x140CD9D70 (PopReadSimulatedHGSClasses.c)
 *     PopReadSimulatedWpsContainment @ 0x140CDA41C (PopReadSimulatedWpsContainment.c)
 */

void PopDetectSimulatedHeteroProcessors()
{
  unsigned __int8 v0; // bp
  ULONG_PTR MaximumProcessorCount; // rdi
  unsigned int v2; // r12d
  unsigned int *v3; // r13
  _DWORD *Pool2; // rbx
  ULONG_PTR v5; // rsi
  void *v6; // r14
  unsigned __int8 *v7; // r15
  ULONG_PTR v8; // r14
  unsigned __int8 *v9; // rdx
  ULONG_PTR v10; // r8
  unsigned __int8 v11; // al
  unsigned __int8 v12; // si
  int v13; // edx
  char v14; // r8
  unsigned __int8 *v15; // rax
  ULONG_PTR v16; // rcx
  unsigned __int8 v17; // cl
  int v18; // eax
  bool *v19; // rcx
  ULONG_PTR v20; // rdx
  unsigned int v21; // r9d
  unsigned __int8 *v22; // r10
  __int64 v23; // r11
  unsigned int v24; // eax
  __int64 m; // rbp
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 i; // rbp
  __int64 Prcb; // rax
  char v30; // r8
  unsigned int j; // edx
  unsigned int k; // r8d
  __int64 v33; // rax
  ULONG_PTR v34; // rax
  unsigned int v35; // esi
  unsigned int *v36; // r14
  __int64 v37; // rax
  int v38; // ecx

  v0 = -1;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v2 = 1;
  v3 = 0LL;
  if ( !PsIsCurrentThreadInServerSilo() )
  {
    PpmHeteroSimulationStateConfig = PpmHeteroSimulationStateConfig & 0xFFFFFFFE | PopReadSimulatedArchitecturalClasses(
                                                                                     0LL,
                                                                                     (unsigned int)MaximumProcessorCount) & 1;
    if ( PpmHeteroHgsEnabled )
    {
      v2 = PpmHeteroWorkloadClasses;
      PpmHeteroSimulationStateConfig = PpmHeteroSimulationStateConfig & 0xFFFFFFFD | (2
                                                                                    * (PopReadSimulatedHGSClasses(
                                                                                         0LL,
                                                                                         0LL,
                                                                                         (unsigned int)MaximumProcessorCount,
                                                                                         (unsigned int)PpmHeteroWorkloadClasses) & 1));
    }
    PpmHeteroSimulationStateConfig = PpmHeteroSimulationStateConfig & 0xFFFFFFFB | (4
                                                                                  * (PopReadSimulatedWpsContainment(
                                                                                       0LL,
                                                                                       (unsigned int)MaximumProcessorCount) & 1));
    if ( PpmHeteroSimulationStateConfig )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, (int)(4 * MaximumProcessorCount * v2 + 48), 0x704D5050u);
      if ( Pool2 )
      {
        v5 = ExAllocatePool2(256LL, MaximumProcessorCount, 0x704D5050u);
        if ( !v5 )
        {
LABEL_65:
          ExFreePoolWithTag(Pool2, 0x704D5050u);
          return;
        }
        v6 = (void *)ExAllocatePool2(256LL, 2uLL, 0x704D5050u);
        if ( v6 )
        {
          v7 = (unsigned __int8 *)ExAllocatePool2(256LL, MaximumProcessorCount, 0x704D5050u);
          if ( v7 )
          {
            Pool2[1] = v2;
            *Pool2 = MaximumProcessorCount;
            *((_QWORD *)Pool2 + 2) = v5;
            *((_QWORD *)Pool2 + 3) = v6;
            if ( (PpmHeteroSimulationStateConfig & 1) == 0 )
            {
              v8 = MaximumProcessorCount;
              goto LABEL_45;
            }
            PopReadSimulatedArchitecturalClasses(v7, (unsigned int)MaximumProcessorCount);
            v8 = MaximumProcessorCount;
            if ( (_DWORD)MaximumProcessorCount )
            {
              v9 = v7;
              v10 = MaximumProcessorCount;
              do
              {
                v11 = v0;
                if ( v0 >= *v9 )
                  v11 = *v9;
                ++v9;
                v0 = v11;
                --v10;
              }
              while ( v10 );
            }
            v12 = 0;
            v13 = MaximumProcessorCount;
            while ( 1 )
            {
              v14 = 0;
              if ( (_DWORD)MaximumProcessorCount )
              {
                v15 = v7;
                v16 = MaximumProcessorCount;
                do
                {
                  if ( *v15 == v0 )
                  {
                    v14 = 1;
                    *v15 = v12;
                    --v13;
                  }
                  ++v15;
                  --v16;
                }
                while ( v16 );
              }
              if ( !v13 )
                break;
              ++v0;
              v17 = v12 + 1;
              if ( !v14 )
                v17 = v12;
              v12 = v17;
            }
            v18 = PpmHeteroMultiCoreClassesRegValue;
            if ( PpmHeteroMultiCoreClassesRegValue == -1 )
              v18 = v12 >= 2u;
            PpmHeteroMultiCoreClassesEnabled = v18;
            if ( v18 || (v12 = v12 != 0, !(_DWORD)MaximumProcessorCount) )
            {
              v21 = 0;
              if ( !(_DWORD)MaximumProcessorCount )
              {
LABEL_38:
                for ( i = 0LL; (unsigned int)i < *Pool2; i = (unsigned int)(i + 1) )
                {
                  Prcb = KeGetPrcb(i);
                  v30 = *(_BYTE *)(i + *((_QWORD *)Pool2 + 2));
                  *(_BYTE *)(Prcb + 35352) = v30;
                  if ( v30 && !PpmHeteroMultiCoreClassesEnabled )
                    *(_BYTE *)(Prcb + 35352) = 1;
                }
                PpmMaxCoreClasses = v12 + 1;
LABEL_45:
                if ( (PpmHeteroSimulationStateConfig & 2) != 0 )
                {
                  for ( j = 0; j < (unsigned int)MaximumProcessorCount; ++j )
                  {
                    for ( k = 0; k < v2; LOWORD(Pool2[v33 + 12]) = 257 )
                      v33 = j * v2 + k++;
                  }
                  PopReadSimulatedHGSClasses(Pool2 + 12, v7, (unsigned int)MaximumProcessorCount, v2);
                }
                if ( (PpmHeteroSimulationStateConfig & 4) == 0 )
                  goto LABEL_60;
                v34 = ExAllocatePool2(256LL, 4 * v8, 0x704D5050u);
                v3 = (unsigned int *)v34;
                if ( !v34 )
                  goto LABEL_64;
                PopReadSimulatedWpsContainment(v34, (unsigned int)MaximumProcessorCount);
                v35 = 0;
                if ( (_DWORD)MaximumProcessorCount )
                {
                  v36 = v3;
                  do
                  {
                    v37 = KeGetPrcb(v35);
                    *(_BYTE *)(v37 + 35448) = 2;
                    if ( *v36 )
                    {
                      _BitScanForward((unsigned int *)&v38, *v36);
                      if ( v38 < 3 )
                        *(_BYTE *)(v37 + 35448) = v38;
                    }
                    ++v35;
                    ++v36;
                  }
                  while ( v35 < (unsigned int)MaximumProcessorCount );
                  PpmHeteroCapabilitySimulation = (__int64)Pool2;
                  Pool2 = 0LL;
                }
                else
                {
LABEL_60:
                  PpmHeteroCapabilitySimulation = (__int64)Pool2;
                  Pool2 = 0LL;
                  if ( !v3 )
                    goto LABEL_64;
                }
                ExFreePoolWithTag(v3, 0x704D5050u);
LABEL_64:
                ExFreePoolWithTag(v7, 0x704D5050u);
                if ( !Pool2 )
                  return;
                goto LABEL_65;
              }
            }
            else
            {
              v19 = (bool *)v7;
              v20 = MaximumProcessorCount;
              do
              {
                *v19 = *v19;
                ++v19;
                --v20;
              }
              while ( v20 );
              v21 = 0;
            }
            v22 = v7;
            v23 = 0LL;
            do
            {
              *(_BYTE *)(v23 + *((_QWORD *)Pool2 + 2)) = *v22;
              if ( (PpmHeteroSimulationStateConfig & 2) == 0 )
              {
                v24 = Pool2[1];
                for ( m = 0LL; (unsigned int)m < v24; v24 = Pool2[1] )
                {
                  v26 = *((_QWORD *)Pool2 + 3);
                  v27 = v21 * v24 + (unsigned int)m;
                  BYTE1(Pool2[v27 + 12]) = *v22;
                  LOBYTE(Pool2[v27 + 12]) = v12 - *v22;
                  *(_BYTE *)(v26 + 2 * m) = v12;
                  *(_BYTE *)(v26 + 2 * m + 1) = v12;
                  m = (unsigned int)(m + 1);
                }
              }
              ++v21;
              ++v23;
              ++v22;
            }
            while ( v21 < (unsigned int)MaximumProcessorCount );
            goto LABEL_38;
          }
          ExFreePoolWithTag(v6, 0x704D5050u);
        }
        v7 = (unsigned __int8 *)v5;
        goto LABEL_64;
      }
    }
  }
}
