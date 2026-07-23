/*
 * XREFs of Amd64ResumeProfilingInternal @ 0x1405A741C
 * Callers:
 *     Amd64ResumeProfiling @ 0x1405A73E0 (Amd64ResumeProfiling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Amd64ResumeProfilingInternal(int a1, unsigned int a2)
{
  __int64 v2; // r10
  __int64 result; // rax
  __int64 v4; // r8
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ecx

  v2 = a2;
  result = KiProcessorBlock[a2];
  v4 = *(_QWORD *)(result + 88);
  if ( a1 )
  {
    v5 = a1 - 1;
    if ( v5 )
    {
      v6 = v5 - 99;
      if ( v6 )
      {
        if ( v6 == 1 )
          v4 += 72LL;
        else
          v4 = 0LL;
      }
      else
      {
        v4 += 48LL;
      }
    }
    else
    {
      v4 += 24LL;
    }
  }
  v7 = 0LL;
  if ( *(_DWORD *)(v4 + 4) )
  {
    while ( *(int *)(*(_QWORD *)(v4 + 16) + 48 * v7 + 24) >= 2 )
    {
LABEL_23:
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *(_DWORD *)(v4 + 4) )
        return result;
    }
    LODWORD(v8) = 0;
    if ( *(_DWORD *)v4 != 1 )
    {
      if ( *(_DWORD *)v4 != 100 )
      {
        if ( *(_DWORD *)v4 != 101 )
        {
LABEL_22:
          v11 = *((_DWORD *)&xmmword_140F879E0 + (unsigned int)(v8 + v7));
          result = __readmsr(v11) | 0x400000;
          __writemsr(v11, result);
          goto LABEL_23;
        }
        v8 = *(_QWORD *)(KiProcessorBlock[v2] + 88) + 48LL;
        if ( *(_QWORD *)(KiProcessorBlock[v2] + 88) != -48LL )
          LODWORD(v8) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v2] + 88) + 52LL);
      }
      v9 = *(_QWORD *)(KiProcessorBlock[v2] + 88) + 24LL;
      if ( *(_QWORD *)(KiProcessorBlock[v2] + 88) != -24LL )
        LODWORD(v9) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v2] + 88) + 28LL);
      LODWORD(v8) = v9 + v8;
    }
    v10 = *(_QWORD *)(KiProcessorBlock[v2] + 88);
    if ( v10 )
      LODWORD(v10) = *(_DWORD *)(v10 + 4);
    LODWORD(v8) = v10 + v8;
    goto LABEL_22;
  }
  return result;
}
