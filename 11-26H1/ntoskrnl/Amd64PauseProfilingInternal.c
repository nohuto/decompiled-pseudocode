/*
 * XREFs of Amd64PauseProfilingInternal @ 0x1405A7200
 * Callers:
 *     Amd64PauseProfiling @ 0x1405A71E0 (Amd64PauseProfiling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Amd64PauseProfilingInternal(__int64 a1, unsigned int a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ecx

  v2 = a2;
  v3 = 0LL;
  result = KiProcessorBlock[a2];
  v5 = *(_QWORD *)(result + 88);
  if ( *(_DWORD *)(v5 + 4) )
  {
    while ( *(int *)(*(_QWORD *)(v5 + 16) + 48 * v3 + 24) >= 2 )
    {
LABEL_15:
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *(_DWORD *)(v5 + 4) )
        return result;
    }
    LODWORD(v6) = 0;
    if ( *(_DWORD *)v5 != 1 )
    {
      if ( *(_DWORD *)v5 != 100 )
      {
        if ( *(_DWORD *)v5 != 101 )
        {
LABEL_14:
          v9 = *((_DWORD *)&xmmword_140F879E0 + (unsigned int)(v6 + v3));
          result = __readmsr(v9) & 0xFFFFFFFFFFBFFFFFuLL;
          __writemsr(v9, result);
          goto LABEL_15;
        }
        v6 = *(_QWORD *)(KiProcessorBlock[v2] + 88) + 48LL;
        if ( *(_QWORD *)(KiProcessorBlock[v2] + 88) != -48LL )
          LODWORD(v6) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v2] + 88) + 52LL);
      }
      v7 = *(_QWORD *)(KiProcessorBlock[v2] + 88) + 24LL;
      if ( *(_QWORD *)(KiProcessorBlock[v2] + 88) != -24LL )
        LODWORD(v7) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v2] + 88) + 28LL);
      LODWORD(v6) = v7 + v6;
    }
    v8 = *(_QWORD *)(KiProcessorBlock[v2] + 88);
    if ( v8 )
      LODWORD(v8) = *(_DWORD *)(v8 + 4);
    LODWORD(v6) = v8 + v6;
    goto LABEL_14;
  }
  return result;
}
