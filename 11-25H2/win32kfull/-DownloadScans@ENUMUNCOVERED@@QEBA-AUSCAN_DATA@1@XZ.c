/*
 * XREFs of ?DownloadScans@ENUMUNCOVERED@@QEBA?AUSCAN_DATA@1@XZ @ 0x1401D49F0
 * Callers:
 *     ?bSpComputeUncoveredSpriteRegion@@YAHAEAVPDEVOBJ@@AEAVRGNOBJ@@@Z @ 0x1401D48E4 (-bSpComputeUncoveredSpriteRegion@@YAHAEAVPDEVOBJ@@AEAVRGNOBJ@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 */

__int64 __fastcall ENUMUNCOVERED::DownloadScans(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rax
  _BYTE *v6; // rbx
  _DWORD *v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rbp
  _DWORD *v10; // r11
  __int64 v11; // rax
  _DWORD *v12; // r10
  __int64 v13; // r8
  _DWORD *v14; // r15
  _DWORD *v15; // r12
  _DWORD *v16; // r13
  int v17; // r9d
  _DWORD *v18; // rcx
  __int64 v19; // r11
  _DWORD *v21; // [rsp+50h] [rbp+8h]

  if ( *(_QWORD *)(a1 + 32) >= 0xFFFFFFFFuLL )
  {
    *(_QWORD *)a2 = 0LL;
    *(_DWORD *)(a2 + 8) = 0;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 32);
    v5 = PALLOCMEM(v4, 1886221383LL);
    v6 = (_BYTE *)v5;
    if ( v5 )
    {
      v7 = (_DWORD *)v5;
      v8 = v4;
      v9 = *(_QWORD *)(a1 + 8);
      v10 = &v7[v8 >> 2];
      v21 = v10;
      while ( 1 )
      {
        v11 = *(_QWORD *)(v9 + 8);
        v12 = (_DWORD *)v9;
        v9 += v11;
        v13 = (v11 - 24) >> 4;
        if ( v10 - v7 < 2 * *v7 + 3 || *v7 == -1 || v13 >= 0xFFFFFFFFLL )
          break;
        v14 = v7;
        v15 = v7 + 1;
        v16 = v7 + 2;
        v17 = 0;
        v7 += 3;
        if ( !(_DWORD)v13 )
          goto LABEL_19;
        v18 = v12 + 6;
        v19 = (unsigned int)v13;
        do
        {
          if ( !*((_QWORD *)v18 + 1) )
          {
            ++v17;
            *v7 = *v18;
            v7[1] = v18[1];
            v7 += 2;
          }
          v18 += 4;
          --v19;
        }
        while ( v19 );
        if ( v17 )
        {
          *v14 = v17;
          *v15 = *v12;
          *v16 = v12[1];
        }
        else
        {
LABEL_19:
          v7 = v14;
        }
        v10 = v21;
        if ( v12[1] >= *(_DWORD *)a1 )
        {
          *(_QWORD *)a2 = v6;
          *(_DWORD *)(a2 + 8) = ((char *)v7 - v6) >> 2;
          return a2;
        }
      }
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      *(_QWORD *)a2 = 0LL;
      *(_DWORD *)(a2 + 8) = 0;
      Win32FreePool(v6);
    }
    else
    {
      EngSetLastError(8u);
      *(_QWORD *)a2 = 0LL;
      *(_DWORD *)(a2 + 8) = 0;
    }
  }
  return a2;
}
