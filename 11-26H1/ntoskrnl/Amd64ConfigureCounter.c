/*
 * XREFs of Amd64ConfigureCounter @ 0x1405A5E50
 * Callers:
 *     Amd64DisableMonitoring @ 0x1405A6200 (Amd64DisableMonitoring.c)
 *     Amd64EnableMonitoring @ 0x1405A6350 (Amd64EnableMonitoring.c)
 *     Amd64RestartProfilingInternal @ 0x140BF5ABC (Amd64RestartProfilingInternal.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Amd64ConfigureCounter(unsigned int a1, int a2, char a3, __int64 a4, __int64 a5, char a6)
{
  int v6; // rsp^4
  __int64 v7; // rax
  __int64 v8; // r11
  int v10; // r8d
  __int64 v13; // r10
  int v14; // edx
  int v15; // edx
  __int64 v16; // r9
  __int64 v17; // rbx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rbx
  int v20; // edx
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  int v24; // edx
  __int64 v25; // rbx
  unsigned __int64 v26; // r10
  int v27; // edx
  int v28; // eax
  __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rax
  int v35; // eax
  unsigned __int64 result; // rax

  HIDWORD(v7) = v6;
  LODWORD(v7) = KeGetPcr()->Prcb.Number;
  v8 = (unsigned int)v7;
  v10 = 0;
  v13 = *(_QWORD *)(KiProcessorBlock[v7] + 88);
  if ( a2 )
  {
    v14 = a2 - 1;
    if ( v14 )
    {
      v15 = v14 - 99;
      if ( v15 )
      {
        if ( v15 == 1 )
          v16 = v13 + 72;
        else
          v16 = 0LL;
      }
      else
      {
        v16 = v13 + 48;
      }
    }
    else
    {
      v16 = v13 + 24;
    }
  }
  else
  {
    v16 = *(_QWORD *)(KiProcessorBlock[v7] + 88);
  }
  v17 = *(_QWORD *)(v16 + 16);
  if ( !*(_DWORD *)v16 && *(_BYTE *)(*(_QWORD *)(v17 + 48LL * a1 + 16) + 8LL) )
  {
    if ( a3 )
    {
      v18 = **(_QWORD **)(v17 + 48LL * (a1 + 1) + 16) | 0x400000LL;
      if ( a6 )
        v19 = 0xFFFFLL;
      else
        v19 = 0LL;
      __writemsr(*((_DWORD *)&xmmword_140F87980 + a1 + 1), v19);
      v20 = 0;
      if ( *(_DWORD *)v16 != 1 )
      {
        if ( *(_DWORD *)v16 != 100 )
        {
          if ( *(_DWORD *)v16 != 101 )
          {
LABEL_30:
            __writemsr(*((_DWORD *)&xmmword_140F879E0 + v20 + a1 + 1), v18);
            goto LABEL_38;
          }
          if ( *(_QWORD *)(KiProcessorBlock[(unsigned int)v7] + 88) == -48LL )
            v20 = 0;
          else
            v20 = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[(unsigned int)v7] + 88) + 52LL);
        }
        if ( *(_QWORD *)(KiProcessorBlock[(unsigned int)v7] + 88) == -24LL )
          v21 = 0;
        else
          v21 = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[(unsigned int)v7] + 88) + 28LL);
        v20 += v21;
      }
      v22 = *(_QWORD *)(KiProcessorBlock[v8] + 88);
      if ( v22 )
        v23 = *(_DWORD *)(v22 + 4);
      else
        v23 = 0;
      v20 += v23;
      goto LABEL_30;
    }
    __writemsr(*((_DWORD *)&xmmword_140F879E0 + a1 + 1), 0LL);
LABEL_32:
    v24 = 0;
    if ( *(_DWORD *)v16 != 1 )
    {
      if ( *(_DWORD *)v16 != 100 )
      {
        if ( *(_DWORD *)v16 != 101 )
        {
LABEL_76:
          v26 = 0LL;
          goto LABEL_77;
        }
        if ( *(_QWORD *)(KiProcessorBlock[(unsigned int)v7] + 88) == -48LL )
          v24 = 0;
        else
          v24 = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[(unsigned int)v7] + 88) + 52LL);
      }
      if ( *(_QWORD *)(KiProcessorBlock[(unsigned int)v7] + 88) == -24LL )
        v33 = 0;
      else
        v33 = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[(unsigned int)v7] + 88) + 28LL);
      v24 += v33;
    }
    v34 = *(_QWORD *)(KiProcessorBlock[v8] + 88);
    if ( v34 )
      v35 = *(_DWORD *)(v34 + 4);
    else
      v35 = 0;
    v24 += v35;
    goto LABEL_76;
  }
  if ( !a3 )
    goto LABEL_32;
LABEL_38:
  v25 = 0LL;
  v26 = a5 | 0x400000;
  if ( a6 )
  {
    v25 = a4;
    v26 = a5 | 0x500000;
  }
  v27 = 0;
  if ( *(_DWORD *)v16 != 1 )
  {
    if ( *(_DWORD *)v16 != 100 )
    {
      if ( *(_DWORD *)v16 != 101 )
        goto LABEL_54;
      if ( *(_QWORD *)(KiProcessorBlock[v8] + 88) == -48LL )
        v27 = 0;
      else
        v27 = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v8] + 88) + 52LL);
    }
    if ( *(_QWORD *)(KiProcessorBlock[v8] + 88) == -24LL )
      v28 = 0;
    else
      v28 = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v8] + 88) + 28LL);
    v27 += v28;
  }
  v29 = *(_QWORD *)(KiProcessorBlock[v8] + 88);
  if ( v29 )
    v30 = *(_DWORD *)(v29 + 4);
  else
    v30 = 0;
  v27 += v30;
LABEL_54:
  __writemsr(*((_DWORD *)&xmmword_140F87980 + v27 + a1), -v25);
  v24 = 0;
  if ( *(_DWORD *)v16 != 1 )
  {
    if ( *(_DWORD *)v16 != 100 )
    {
      if ( *(_DWORD *)v16 != 101 )
        goto LABEL_77;
      if ( *(_QWORD *)(KiProcessorBlock[v8] + 88) == -48LL )
        v24 = 0;
      else
        v24 = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v8] + 88) + 52LL);
    }
    if ( *(_QWORD *)(KiProcessorBlock[v8] + 88) == -24LL )
      v31 = 0;
    else
      v31 = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v8] + 88) + 28LL);
    v24 += v31;
  }
  v32 = *(_QWORD *)(KiProcessorBlock[v8] + 88);
  if ( v32 )
    v10 = *(_DWORD *)(v32 + 4);
  v24 += v10;
LABEL_77:
  result = v26;
  __writemsr(*((_DWORD *)&xmmword_140F879E0 + v24 + a1), v26);
  return result;
}
