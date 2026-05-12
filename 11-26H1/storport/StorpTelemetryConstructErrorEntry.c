/*
 * XREFs of StorpTelemetryConstructErrorEntry @ 0x140025BA0
 * Callers:
 *     StorpTelemetryCollectErrorData @ 0x140025890 (StorpTelemetryCollectErrorData.c)
 * Callees:
 *     RaidGetIoStartingLbaAndLength @ 0x140026030 (RaidGetIoStartingLbaAndLength.c)
 */

__int64 __fastcall StorpTelemetryConstructErrorEntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        union _LARGE_INTEGER PerformanceFrequency)
{
  union _LARGE_INTEGER v5; // rsi
  int v6; // r12d
  __int64 v7; // r10
  __int64 v9; // r11
  __int64 v11; // rbx
  int v12; // eax
  char v13; // dl
  char v14; // di
  unsigned __int8 v15; // r13
  char *v16; // r9
  _BYTE *v17; // r14
  int v18; // r8d
  bool v19; // zf
  char v20; // al
  __int64 v21; // rax
  int v22; // r14d
  unsigned __int64 v23; // rcx
  __int64 result; // rax
  char *v25; // rcx
  char v26; // al
  unsigned int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 LowPart; // rax
  unsigned __int64 v31; // rcx
  union _LARGE_INTEGER v32; // rcx
  __int64 v33; // rdi
  bool v34; // zf
  LARGE_INTEGER v35; // rax
  char v36; // al
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdi
  __int64 v40; // r13
  ULONG64 UnbiasedInterruptTimePrecise; // rax
  union _LARGE_INTEGER v42; // rcx
  bool v43; // zf
  __int64 v44; // rax
  unsigned int v45; // [rsp+20h] [rbp-48h]
  __int64 v46; // [rsp+28h] [rbp-40h]
  union _LARGE_INTEGER v47; // [rsp+70h] [rbp+8h] BYREF
  __int64 v48; // [rsp+80h] [rbp+18h] BYREF
  int v49; // [rsp+88h] [rbp+20h]

  v5 = PerformanceFrequency;
  v6 = 0;
  v7 = a4;
  v9 = a2;
  v11 = 0LL;
  *(_OWORD *)PerformanceFrequency.QuadPart = 0LL;
  *(_OWORD *)(v5.QuadPart + 16) = 0LL;
  *(_QWORD *)(v5.QuadPart + 32) = 0LL;
  if ( a4 )
  {
    v12 = *(unsigned __int8 *)(a4 + 2);
    v13 = 0;
    v14 = *(_BYTE *)(a4 + 3);
    v15 = 0;
    v16 = 0LL;
    v17 = 0LL;
    if ( (_BYTE)v12 != 40 )
    {
      v18 = v12;
      if ( !(_BYTE)v12 )
      {
        v13 = *(_BYTE *)(v7 + 4);
        v16 = (char *)(v7 + 72);
        v17 = *(_BYTE **)(v7 + 32);
        v15 = *(_BYTE *)(v7 + 11);
        v19 = *(_BYTE *)(v7 + 10) == 0;
LABEL_5:
        if ( v19 )
          v16 = 0LL;
      }
      goto LABEL_7;
    }
    v18 = *(_DWORD *)(v7 + 20);
    if ( v18 || (v27 = *(_DWORD *)(v7 + 56), v28 = 0LL, LODWORD(v48) = 0, (v45 = v27) == 0) )
    {
LABEL_7:
      *(_BYTE *)(v5.QuadPart + 1) = v13;
      *(_BYTE *)(v5.QuadPart + 5) = -1;
      *(_BYTE *)v5.QuadPart = v14 & 0x3F;
      if ( v16 )
      {
        v20 = *v16;
        *(_BYTE *)(v5.QuadPart + 5) = *v16;
        if ( !v18 && ((v20 - 8) & 0x5D) == 0 )
        {
          RaidGetIoStartingLbaAndLength(v16, v5.QuadPart + 24, 0LL);
          if ( v9 )
          {
            v21 = *(_QWORD *)(v9 + 8);
            if ( v21 )
              *(_DWORD *)(v5.QuadPart + 8) = *(_DWORD *)(v21 + 40);
          }
        }
      }
      if ( v14 < 0 )
      {
        if ( v17 )
        {
          if ( v15 >= 0x12u )
          {
            v36 = *v17 & 0x7F;
            if ( v36 == 112 || v36 == 113 )
            {
              *(_BYTE *)(v5.QuadPart + 2) = v17[2] & 0xF;
              *(_BYTE *)(v5.QuadPart + 3) = v17[12];
              *(_BYTE *)(v5.QuadPart + 4) = v17[13];
            }
          }
        }
      }
      goto LABEL_14;
    }
    while ( 1 )
    {
      v29 = *(unsigned int *)(v7 + 4 * v28 + 120);
      if ( (unsigned int)v29 < 0x80 )
        goto LABEL_31;
      LowPart = *(unsigned int *)(v7 + 16);
      v47.LowPart = LowPart;
      if ( (unsigned int)v29 >= (unsigned int)LowPart )
        goto LABEL_31;
      v19 = *(_DWORD *)(v29 + v7) == 64;
      v49 = *(_DWORD *)(v29 + v7);
      v5 = PerformanceFrequency;
      v46 = v29;
      if ( v19 )
        break;
      if ( v49 == 65 )
      {
        LowPart = v47.LowPart;
        v31 = v29 + 56;
LABEL_30:
        if ( v31 <= LowPart )
        {
          v13 = *(_BYTE *)(v46 + v7 + 8);
          v17 = *(_BYTE **)(v46 + v7 + 16);
          v16 = (char *)(v7 + v46 + 24);
          v19 = *(_BYTE *)(v46 + v7 + 10) == 0;
          v15 = *(_BYTE *)(v46 + v7 + 9);
          goto LABEL_5;
        }
        goto LABEL_31;
      }
      if ( v49 == 66 && v29 + 40 <= (unsigned __int64)v47.LowPart )
      {
        v13 = *(_BYTE *)(v29 + v7 + 8);
        v17 = *(_BYTE **)(v29 + v7 + 24);
        v16 = (char *)(v7 + v29 + 32);
        v19 = *(_DWORD *)(v29 + v7 + 12) == 0;
        v15 = *(_BYTE *)(v29 + v7 + 9);
        goto LABEL_5;
      }
LABEL_31:
      v28 = (unsigned int)(v48 + 1);
      LODWORD(v48) = v28;
      if ( (unsigned int)v28 >= v45 )
        goto LABEL_7;
    }
    v31 = v29 + 40;
    goto LABEL_30;
  }
  *(_BYTE *)v5.QuadPart = 4;
  *(_BYTE *)(v5.QuadPart + 5) = -1;
  v25 = *(char **)(a2 + 184);
  v26 = *v25;
  if ( *v25 == 3 )
  {
    *(_BYTE *)(v5.QuadPart + 5) = 40;
    *(_QWORD *)(v5.QuadPart + 24) = *((_QWORD *)v25 + 3);
    *(_DWORD *)(v5.QuadPart + 8) = *((_DWORD *)v25 + 2);
  }
  else if ( v26 == 4 )
  {
    *(_BYTE *)(v5.QuadPart + 5) = 42;
    *(_QWORD *)(v5.QuadPart + 24) = *((_QWORD *)v25 + 3);
    *(_DWORD *)(v5.QuadPart + 8) = *((_DWORD *)v25 + 2);
  }
  else if ( v26 == 9 )
  {
    *(_BYTE *)(v5.QuadPart + 5) = 53;
  }
LABEL_14:
  v22 = 1;
  if ( *(_DWORD *)(a1 + 2372) != 1 )
    goto LABEL_15;
  if ( !a3 )
  {
    if ( v7 )
      goto LABEL_33;
    v39 = *(unsigned int *)(v9 + 168);
    v40 = *(unsigned int *)(v9 + 172);
    v47.QuadPart = 0LL;
    PerformanceFrequency.QuadPart = 0LL;
    v48 = 0LL;
    if ( (int)IoGetIoAttributionHandle(v9, &v48) >= 0 )
    {
      UnbiasedInterruptTimePrecise = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&PerformanceFrequency.QuadPart);
      v42.QuadPart = 10000000LL;
      goto LABEL_96;
    }
    if ( StorEtwLoggingEnabled )
    {
      v43 = UseQPCTime == 0;
    }
    else
    {
      if ( !g_StorpTraceLoggingPerformanceEnabled )
      {
        UnbiasedInterruptTimePrecise = 0LL;
        goto LABEL_95;
      }
      if ( !UseQPCTime )
        goto LABEL_93;
      v43 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
    }
    if ( !v43 )
    {
      UnbiasedInterruptTimePrecise = KeQueryPerformanceCounter(&v47).QuadPart;
LABEL_95:
      v42 = v47;
LABEL_96:
      v44 = UnbiasedInterruptTimePrecise - (v39 | (v40 << 32));
      if ( StorEtwLoggingEnabled )
      {
        if ( !UseQPCTime )
        {
LABEL_107:
          v11 = v44;
          goto LABEL_58;
        }
        if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
        {
          if ( !v42.QuadPart )
          {
            v6 = -1073741762;
            goto LABEL_58;
          }
          v44 = 10000000 * v44 / v42.QuadPart;
        }
      }
      if ( UseQPCTime && g_StorpTraceLoggingPerformanceHighResolutionTimer )
      {
        if ( !v42.QuadPart )
        {
          v6 = -1073741762;
          goto LABEL_58;
        }
        v44 = 10000000 * v44 / v42.QuadPart;
      }
      goto LABEL_107;
    }
LABEL_93:
    UnbiasedInterruptTimePrecise = KeQueryUnbiasedInterruptTime();
    goto LABEL_95;
  }
  v32.QuadPart = 0LL;
  v33 = *(_QWORD *)(a3 + 696);
  PerformanceFrequency.QuadPart = 0LL;
  if ( StorEtwLoggingEnabled )
  {
    v34 = UseQPCTime == 0;
    goto LABEL_40;
  }
  if ( g_StorpTraceLoggingPerformanceEnabled )
  {
    if ( !UseQPCTime )
      goto LABEL_48;
    v34 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
LABEL_40:
    if ( !v34 )
    {
      v35 = KeQueryPerformanceCounter(&PerformanceFrequency);
LABEL_49:
      v32 = PerformanceFrequency;
      goto LABEL_50;
    }
LABEL_48:
    v35.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_49;
  }
  v35.QuadPart = 0LL;
LABEL_50:
  v37 = v35.QuadPart - v33;
  if ( StorEtwLoggingEnabled )
  {
    if ( !UseQPCTime )
    {
LABEL_57:
      v11 = v37;
      goto LABEL_58;
    }
    if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
    {
      if ( !v32.QuadPart )
      {
        v6 = -1073741762;
        goto LABEL_58;
      }
      v37 = 10000000 * v37 / v32.QuadPart;
    }
  }
  if ( !UseQPCTime || !g_StorpTraceLoggingPerformanceHighResolutionTimer )
    goto LABEL_57;
  if ( v32.QuadPart )
  {
    v37 = 10000000 * v37 / v32.QuadPart;
    goto LABEL_57;
  }
  v6 = -1073741762;
LABEL_58:
  if ( v6 >= 0 )
  {
    v38 = v11 / 10000;
    if ( (unsigned __int64)(v11 / 10000) > 0xFFFFFFFF )
    {
      *(_DWORD *)(v5.QuadPart + 12) = -1;
    }
    else if ( v38 || !v11 )
    {
      *(_DWORD *)(v5.QuadPart + 12) = v38;
    }
    else
    {
      *(_DWORD *)(v5.QuadPart + 12) = 1;
    }
  }
LABEL_15:
  if ( a3 )
  {
    v23 = *(_QWORD *)(a3 + 688);
    if ( v23 / 0x2710 > 0xFFFFFFFF )
    {
      v22 = -1;
    }
    else if ( v23 / 0x2710 || !v23 )
    {
      v22 = v23 / 0x2710;
    }
    *(_DWORD *)(v5.QuadPart + 16) = v22;
    goto LABEL_21;
  }
LABEL_33:
  if ( *(_BYTE *)(a1 + 3368) == 1 && *(_BYTE *)v5.QuadPart == 9 )
    *(_DWORD *)(v5.QuadPart + 16) = 5000000 * *(_DWORD *)(a1 + 3392) / 0x2710u;
LABEL_21:
  *(_DWORD *)(v5.QuadPart + 20) = *(_QWORD *)(a1 + 808) / 0x100000000LL;
  result = *(unsigned int *)(a1 + 2480);
  *(_DWORD *)(v5.QuadPart + 32) = result;
  return result;
}
