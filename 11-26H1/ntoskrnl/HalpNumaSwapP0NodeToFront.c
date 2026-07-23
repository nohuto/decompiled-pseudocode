/*
 * XREFs of HalpNumaSwapP0NodeToFront @ 0x140594ED0
 * Callers:
 *     HalpAcpiInitSystem @ 0x140BF1270 (HalpAcpiInitSystem.c)
 * Callees:
 *     HalpInterruptGetIdentifiers @ 0x1404F6820 (HalpInterruptGetIdentifiers.c)
 *     HalpGetNumaProcMemoryCount @ 0x140CB7480 (HalpGetNumaProcMemoryCount.c)
 */

void HalpNumaSwapP0NodeToFront()
{
  __int64 v0; // rbx
  unsigned int i; // ecx
  __int64 v2; // rdi
  unsigned int v3; // r11d
  int v4; // r8d
  _DWORD *v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // r8
  _DWORD *v8; // rcx
  int v9; // edx
  _DWORD *v10; // rcx
  int v11; // edx
  __int64 v12; // r10
  __int64 v13; // r9
  __int16 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rdx
  __int16 v22; // r8
  int v23; // [rsp+50h] [rbp+28h] BYREF
  unsigned int v24; // [rsp+58h] [rbp+30h] BYREF
  int v25; // [rsp+60h] [rbp+38h] BYREF
  int v26; // [rsp+68h] [rbp+40h] BYREF

  v23 = 0;
  v26 = 0;
  v24 = 0;
  v25 = 0;
  if ( HalpAcpiSrat )
  {
    v0 = HalpNumaConfig;
    if ( HalpNumaConfig )
    {
      if ( (unsigned __int8)HalpGetNumaProcMemoryCount(&v26, &v25, &v24, &v23)
        && (v23 = 0, (int)HalpInterruptGetIdentifiers(0, &v23, 0LL) >= 0) )
      {
        for ( i = 0; i < *(_DWORD *)(v0 + 60); ++i )
        {
          if ( *(_DWORD *)(*(_QWORD *)v0 + 4LL * i) == v23 )
          {
            v2 = HalpNumaConfig;
            v3 = 0;
            v4 = *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 16) + 4LL * i);
            while ( v3 < *(_DWORD *)(HalpNumaConfig + 56) )
            {
              v5 = *(_DWORD **)(HalpNumaConfig + 24);
              if ( v5[v3] == v4 )
              {
                if ( v3 )
                {
                  v6 = 1;
                  v5[v3] = *v5;
                  **(_DWORD **)(v2 + 24) = v4;
                  v7 = HalpNumaConfig;
                  v8 = *(_DWORD **)(HalpNumaConfig + 32);
                  v9 = v8[v3];
                  v8[v3] = *v8;
                  **(_DWORD **)(v7 + 32) = v9;
                  v10 = *(_DWORD **)(v7 + 40);
                  v11 = v10[v3];
                  v10[v3] = *v10;
                  for ( **(_DWORD **)(v7 + 40) = v11; v6 < *(_DWORD *)(v2 + 56); ++v6 )
                  {
                    if ( v6 != v3 )
                    {
                      v12 = HalpNumaConfig;
                      v13 = *(_QWORD *)(HalpNumaConfig + 48);
                      v14 = *(_WORD *)(v13 + 2LL * (v6 + *(_DWORD *)(HalpNumaConfig + 64) * v3));
                      *(_WORD *)(v13 + 2LL * (v6 + *(_DWORD *)(HalpNumaConfig + 64) * v3)) = *(_WORD *)(v13 + 2LL * v6);
                      *(_WORD *)(*(_QWORD *)(v12 + 48) + 2LL * v6) = v14;
                      v15 = *(_QWORD *)(v12 + 48);
                      v16 = *(_DWORD *)(v12 + 64) * v6;
                      LOWORD(v13) = *(_WORD *)(v15 + 2LL * (v3 + (unsigned int)v16));
                      *(_WORD *)(v15 + 2LL * (v3 + (unsigned int)v16)) = *(_WORD *)(v15 + 2 * v16);
                      *(_WORD *)(*(_QWORD *)(v12 + 48) + 2LL * *(_DWORD *)(v12 + 64) * v6) = v13;
                    }
                  }
                  if ( v24 )
                  {
                    v17 = 0LL;
                    v18 = v24;
                    do
                    {
                      v19 = *(_DWORD *)((char *)HalpNumaMemoryRanges + v17 + 8);
                      if ( v19 )
                      {
                        if ( v19 == v3 )
                          *(_DWORD *)((char *)HalpNumaMemoryRanges + v17 + 8) = 0;
                      }
                      else
                      {
                        *(_DWORD *)((char *)HalpNumaMemoryRanges + v17 + 8) = v3;
                      }
                      v17 += 16LL;
                      --v18;
                    }
                    while ( v18 );
                  }
                  if ( dword_140F87A80 )
                  {
                    v20 = 0LL;
                    v21 = (unsigned int)dword_140F87A80;
                    do
                    {
                      v22 = *(_WORD *)((char *)qword_140F87A78 + v20 + 10);
                      if ( v22 )
                      {
                        if ( v22 == (_WORD)v3 )
                          *(_WORD *)((char *)qword_140F87A78 + v20 + 10) = 0;
                      }
                      else
                      {
                        *(_WORD *)((char *)qword_140F87A78 + v20 + 10) = v3;
                      }
                      v20 += 16LL;
                      --v21;
                    }
                    while ( v21 );
                  }
                }
                return;
              }
              ++v3;
            }
            return;
          }
        }
      }
      else
      {
        HalpNumaConfig = 0LL;
      }
    }
  }
}
