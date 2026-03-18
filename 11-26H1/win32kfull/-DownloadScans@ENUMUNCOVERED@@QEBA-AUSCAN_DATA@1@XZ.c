/*
 * XREFs of ?DownloadScans@ENUMUNCOVERED@@QEBA?AUSCAN_DATA@1@XZ @ 0x140186CA0
 * Callers:
 *     ?bSpComputeUncoveredSpriteRegion@@YAHAEAVPDEVOBJ@@AEAVRGNOBJ@@@Z @ 0x140186B78 (-bSpComputeUncoveredSpriteRegion@@YAHAEAVPDEVOBJ@@AEAVRGNOBJ@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x140186E18 (--0MALLOCOBJ@@QEAA@K@Z.c)
 */

__int64 __fastcall ENUMUNCOVERED::DownloadScans(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbp
  _BYTE *v5; // rdi
  __int64 v7; // r11
  _DWORD *v8; // r8
  _DWORD *v9; // rcx
  __int64 v10; // rax
  _DWORD *v11; // rbp
  __int64 v12; // r15
  __int64 v13; // r9
  _DWORD *v14; // r14
  _DWORD *v15; // r12
  _DWORD *v16; // r13
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r10
  _DWORD *v20; // [rsp+60h] [rbp+8h] BYREF
  _DWORD *v21; // [rsp+70h] [rbp+18h]

  if ( *(_QWORD *)(a1 + 32) < 0xFFFFFFFFuLL
    && (v4 = *(unsigned int *)(a1 + 32), MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v20, v4), (v5 = v20) != 0LL) )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = v20;
    v9 = &v20[v4 >> 2];
    v21 = v9;
    while ( 1 )
    {
      v10 = *(_QWORD *)(v7 + 8);
      v11 = (_DWORD *)v7;
      v12 = v7;
      v7 += v10;
      v13 = (v10 - 24) >> 4;
      if ( v9 - v8 < 2 * *v8 + 3 || *v8 == -1 || v13 >= 0xFFFFFFFFLL )
        break;
      v14 = v8;
      v15 = v8 + 1;
      v16 = v8 + 2;
      v17 = 0;
      v8 += 3;
      if ( !(_DWORD)v13 )
        goto LABEL_18;
      v18 = v12 + 24;
      v19 = (unsigned int)v13;
      do
      {
        if ( !*(_QWORD *)(v18 + 8) )
        {
          ++v17;
          *v8 = *(_DWORD *)v18;
          v8[1] = *(_DWORD *)(v18 + 4);
          v8 += 2;
        }
        v18 += 16LL;
        --v19;
      }
      while ( v19 );
      if ( v17 )
      {
        *v14 = v17;
        *v15 = *v11;
        *v16 = *(_DWORD *)(v12 + 4);
      }
      else
      {
LABEL_18:
        v8 = v14;
      }
      v9 = v21;
      if ( *(_DWORD *)(v12 + 4) >= *(_DWORD *)a1 )
      {
        *(_QWORD *)a2 = v5;
        *(_DWORD *)(a2 + 8) = ((char *)v8 - v5) >> 2;
        return a2;
      }
    }
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    *(_QWORD *)a2 = 0LL;
    *(_DWORD *)(a2 + 8) = 0;
    Win32FreePool(v5);
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
    *(_DWORD *)(a2 + 8) = 0;
  }
  return a2;
}
