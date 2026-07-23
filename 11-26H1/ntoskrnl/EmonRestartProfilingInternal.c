/*
 * XREFs of EmonRestartProfilingInternal @ 0x140598CA4
 * Callers:
 *     EmonRestartProfiling @ 0x140BF3670 (EmonRestartProfiling.c)
 * Callees:
 *     EmonConfigureCounter @ 0x140597850 (EmonConfigureCounter.c)
 */

__int64 __fastcall EmonRestartProfilingInternal(int a1, int a2)
{
  __int64 v2; // rbx
  int v3; // ecx
  int v4; // ecx
  __int64 result; // rax
  unsigned int v6; // edi
  __int64 i; // rbp
  int v8; // edx
  __int64 j; // r10
  char v10; // si
  char v11; // r11
  int v12; // edx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  int v15; // edx

  v2 = *(_QWORD *)(KiProcessorBlock[a2] + 88);
  if ( a1 )
  {
    v3 = a1 - 1;
    if ( v3 )
    {
      v4 = v3 - 99;
      if ( v4 )
      {
        if ( v4 == 1 )
          v2 += 72LL;
        else
          v2 = 0LL;
      }
      else
      {
        v2 += 48LL;
      }
    }
    else
    {
      v2 += 24LL;
    }
  }
  result = *(unsigned int *)(v2 + 4);
  v6 = 0;
  for ( i = *(_QWORD *)(v2 + 16); v6 < (unsigned int)result; ++v6 )
  {
    v8 = 0;
    for ( j = 0LL; (unsigned int)j <= *(_DWORD *)(v2 + 8); j = (unsigned int)(j + 1) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v2 + 16) + 48 * j + 28) != 3 && ++v8 > v6 )
        goto LABEL_16;
    }
    j = 0xFFFFFFFFLL;
LABEL_16:
    v10 = 0;
    v11 = 1;
    v12 = *(_DWORD *)(i + 48 * j + 24);
    v13 = *(_QWORD *)(i + 48 * j);
    v14 = **(unsigned int **)(i + 48 * j + 16);
    if ( v12 )
    {
      v15 = v12 - 1;
      if ( v15 )
      {
        if ( v15 == 1 )
        {
          if ( *(_DWORD *)v2 )
          {
            if ( *(_DWORD *)v2 == 1 )
              __readmsr(0x38Du);
          }
          else
          {
            __writemsr(j + 193, v13);
            __writemsr(j + 390, v14);
          }
          goto LABEL_26;
        }
        v11 = 0;
        v13 = 0LL;
        LODWORD(v14) = 0;
      }
    }
    else
    {
      v10 = 1;
    }
    EmonConfigureCounter(j, *(_DWORD *)v2, v11, v13, v14, v10);
LABEL_26:
    result = *(unsigned int *)(v2 + 4);
  }
  return result;
}
