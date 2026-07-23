/*
 * XREFs of EmonPauseProfilingInternal @ 0x14059848C
 * Callers:
 *     EmonPauseProfiling @ 0x140598450 (EmonPauseProfiling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EmonPauseProfilingInternal(int a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rbp
  unsigned int v7; // ebx
  unsigned int v8; // r9d
  unsigned __int64 i; // r10
  int v10; // edi
  __int64 j; // rdx
  unsigned int k; // r9d
  int v13; // r10d
  __int64 m; // rdx

  result = KiProcessorBlock[a2];
  v3 = *(_QWORD *)(result + 88);
  if ( a1 )
  {
    v4 = a1 - 1;
    if ( v4 )
    {
      v5 = v4 - 99;
      if ( v5 )
      {
        if ( v5 == 1 )
          v3 += 72LL;
        else
          v3 = 0LL;
      }
      else
      {
        v3 += 48LL;
      }
    }
    else
    {
      v3 += 24LL;
    }
  }
  v6 = *(_QWORD *)(v3 + 16);
  if ( *(_DWORD *)v3 )
  {
    if ( *(_DWORD *)v3 == 1 )
    {
      v7 = *(_DWORD *)(v3 + 4);
      v8 = 0;
      for ( i = __readmsr(0x38Fu); v8 < v7; ++v8 )
      {
        v10 = 0;
        for ( j = 0LL; (unsigned int)j <= *(_DWORD *)(v3 + 8); j = (unsigned int)(j + 1) )
        {
          if ( *(_DWORD *)(v6 + 48 * j + 28) != 3 && ++v10 > v8 )
            goto LABEL_18;
        }
        LODWORD(j) = -1;
LABEL_18:
        if ( *(int *)(v6 + 48LL * (unsigned int)j + 24) < 2 )
          _bittestandreset64((__int64 *)&i, (unsigned int)(j + 32));
      }
      result = i;
      __writemsr(0x38Fu, i);
    }
  }
  else
  {
    result = *(unsigned int *)(v3 + 4);
    for ( k = 0; k < (unsigned int)result; ++k )
    {
      v13 = 0;
      for ( m = 0LL; (unsigned int)m <= *(_DWORD *)(v3 + 8); m = (unsigned int)(m + 1) )
      {
        if ( *(_DWORD *)(v6 + 48 * m + 28) != 3 && ++v13 > k )
          goto LABEL_29;
      }
      LODWORD(m) = -1;
LABEL_29:
      if ( *(int *)(v6 + 48LL * (unsigned int)m + 24) < 2 )
        __writemsr(m + 390, __readmsr((int)m + 390) & 0xFFBFFFFF);
      result = *(unsigned int *)(v3 + 4);
    }
  }
  return result;
}
