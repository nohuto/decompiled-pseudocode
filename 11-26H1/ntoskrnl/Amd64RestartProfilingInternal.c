/*
 * XREFs of Amd64RestartProfilingInternal @ 0x140BF5ABC
 * Callers:
 *     Amd64RestartProfiling @ 0x140BF5A80 (Amd64RestartProfiling.c)
 * Callees:
 *     Amd64ConfigureCounter @ 0x1405A5E50 (Amd64ConfigureCounter.c)
 */

unsigned __int64 __fastcall Amd64RestartProfilingInternal(int a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned __int64 result; // rax
  __int64 v4; // rbx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rbp
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax

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
  v7 = *(_QWORD *)(v4 + 16);
  v8 = 0LL;
  if ( *(_DWORD *)(v4 + 4) )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v7 + 48 * v8 + 24);
      if ( v9 >= 2 )
        break;
      result = Amd64ConfigureCounter(
                 v8,
                 *(_DWORD *)v4,
                 1,
                 *(_QWORD *)(v7 + 48 * v8),
                 **(_QWORD **)(v7 + 48 * v8 + 16),
                 v9 != 1);
LABEL_24:
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *(_DWORD *)(v4 + 4) )
        return result;
    }
    LODWORD(v10) = 0;
    if ( *(_DWORD *)v4 != 1 )
    {
      if ( *(_DWORD *)v4 != 100 )
      {
        if ( *(_DWORD *)v4 != 101 )
        {
LABEL_23:
          result = 0LL;
          __writemsr(*((_DWORD *)&xmmword_140F879E0 + (unsigned int)(v10 + v8)), 0LL);
          goto LABEL_24;
        }
        v10 = *(_QWORD *)(KiProcessorBlock[v2] + 88) + 48LL;
        if ( *(_QWORD *)(KiProcessorBlock[v2] + 88) != -48LL )
          LODWORD(v10) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v2] + 88) + 52LL);
      }
      v11 = *(_QWORD *)(KiProcessorBlock[v2] + 88) + 24LL;
      if ( *(_QWORD *)(KiProcessorBlock[v2] + 88) != -24LL )
        LODWORD(v11) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v2] + 88) + 28LL);
      LODWORD(v10) = v11 + v10;
    }
    v12 = *(_QWORD *)(KiProcessorBlock[v2] + 88);
    if ( v12 )
      LODWORD(v12) = *(_DWORD *)(v12 + 4);
    LODWORD(v10) = v12 + v10;
    goto LABEL_23;
  }
  return result;
}
