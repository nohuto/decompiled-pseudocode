/*
 * XREFs of HalpUpdateConfigurationFromMsct @ 0x140CB8724
 * Callers:
 *     HalpGetNumaProcMemoryCount @ 0x140CB7480 (HalpGetNumaProcMemoryCount.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140CB7A3C (HalpNumaInitializeStaticConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpUpdateConfigurationFromMsct(
        unsigned int *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // r10
  __int64 v11; // r8
  _DWORD *v12; // rsi
  unsigned int v13; // r15d
  unsigned int v14; // ebx
  unsigned __int64 v15; // rbp
  unsigned int v16; // r14d
  unsigned int v17; // r12d
  __int64 v18; // r8
  __int64 i; // rcx
  __int64 v20; // rax
  __int64 v21; // r13
  unsigned int v22; // edi
  unsigned int v23; // ebp
  unsigned int v24; // edx
  unsigned int v25; // r10d
  __int64 j; // rax
  unsigned int *v27; // rcx
  __int64 v28; // rax
  unsigned int k; // edx
  __int64 v30; // rcx
  unsigned int v31; // edi
  __int64 v32; // r9
  __int64 v33; // rcx
  unsigned int *v34; // rdi
  unsigned __int64 v35; // [rsp+0h] [rbp-48h]
  unsigned __int64 v36; // [rsp+8h] [rbp-40h]

  v10 = *(unsigned int *)(HalpAcpiMsct + 4);
  if ( (unsigned int)v10 >= 0x38 )
  {
    v11 = *(unsigned int *)(HalpAcpiMsct + 36);
    if ( (unsigned int)v10 >= (unsigned int)v11 && (unsigned int)v11 >= 0x38 )
    {
      v12 = a5;
      if ( !a5 || (unsigned int)(*(_DWORD *)(HalpAcpiMsct + 44) + 1) >= *a5 )
      {
        v13 = *(_DWORD *)(HalpAcpiMsct + 40) + 1;
        if ( v13 <= a2 )
        {
          v14 = *a1;
          if ( *a1 <= a2 && (!a4 || *a3 <= a4) )
          {
            v15 = HalpAcpiMsct + v10;
            v16 = 0;
            LODWORD(v35) = 0;
            v17 = 0;
            v36 = HalpAcpiMsct + v10;
            v18 = HalpAcpiMsct + v11;
            for ( i = v18; i + 2 <= v15; i = v21 )
            {
              v20 = *(unsigned __int8 *)(i + 1);
              if ( (unsigned __int8)v20 < 2u )
                break;
              v21 = i + v20;
              if ( i + v20 > v15 )
                break;
              v22 = *(_DWORD *)(i + 2);
              v23 = *(_DWORD *)(i + 6);
              if ( v23 < v22 )
                return;
              v24 = v23 - v22 + 1;
              if ( v24 > a2 )
                return;
              v16 += v24;
              if ( v16 > a2 )
                return;
              v25 = *(_DWORD *)(i + 10);
              if ( v25 > 0x800 || a4 && v25 > a4 )
                return;
              v17 += v24 * v25;
              if ( v17 > 0x800 || a4 && v17 > a4 )
                return;
              while ( v22 <= v23 )
              {
                for ( j = 0LL; (unsigned int)j < v14; j = (unsigned int)(j + 1) )
                {
                  if ( *(_DWORD *)(a6 + 4 * j) == v22 )
                  {
                    v35 = (unsigned int)v35 | (unsigned __int64)(1LL << j);
                    if ( *(_DWORD *)(a7 + 4LL * (unsigned int)j) > v25 )
                      return;
                    break;
                  }
                }
                ++v22;
              }
              v15 = v36;
            }
            if ( (unsigned int)v35 == (1LL << v14) - 1 && v13 == v16 )
            {
              v27 = (unsigned int *)(v18 + 2);
              if ( v18 + 2 <= v15 )
              {
                do
                {
                  v28 = *(unsigned __int8 *)(v18 + 1);
                  if ( (unsigned __int8)v28 < 2u || v18 + v28 > v15 )
                    break;
                  for ( k = *v27; k <= *(_DWORD *)(v18 + 6); ++k )
                  {
                    v30 = 0LL;
                    v31 = *(_DWORD *)(v18 + 10);
                    while ( (unsigned int)v30 < *a1 )
                    {
                      if ( *(_DWORD *)(a6 + 4 * v30) == k )
                      {
                        v31 -= *(_DWORD *)(a7 + 4 * v30);
                        break;
                      }
                      v30 = (unsigned int)(v30 + 1);
                    }
                    *(_DWORD *)(a7 + 4 * v30) = *(_DWORD *)(v18 + 10);
                    if ( (_DWORD)v30 == *a1 )
                    {
                      *(_DWORD *)(a6 + 4 * v30) = k;
                      ++*a1;
                    }
                    v32 = *a3;
                    *a3 = v32 + v31;
                    if ( a8 && v31 )
                    {
                      v33 = v31;
                      v34 = (unsigned int *)(a8 + 4 * v32);
                      while ( v33 )
                      {
                        *v34++ = k;
                        --v33;
                      }
                    }
                  }
                  v18 += *(unsigned __int8 *)(v18 + 1);
                  v27 = (unsigned int *)(v18 + 2);
                }
                while ( v18 + 2 <= v15 );
                v12 = a5;
              }
              if ( v12 )
                *v12 = *(_DWORD *)(HalpAcpiMsct + 44) + 1;
            }
          }
        }
      }
    }
  }
}
