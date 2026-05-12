/*
 * XREFs of StorEtwIORequestServiceTimeEventData @ 0x14004F378
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 *     RaidUnitCompleteRequest @ 0x140017760 (RaidUnitCompleteRequest.c)
 * Callees:
 *     McTemplateK0xpuupuuuuuqxx_EtwWriteTransfer @ 0x1400B0228 (McTemplateK0xpuupuuuuuqxx_EtwWriteTransfer.c)
 */

unsigned __int64 __fastcall StorEtwIORequestServiceTimeEventData(_QWORD *a1, char a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  char v4; // r13
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbp
  char v7; // si
  char v9; // r15
  LARGE_INTEGER v11; // rax
  __int64 v12; // rcx
  LARGE_INTEGER v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 result; // rax
  __int64 v17; // r11
  __int64 v18; // r10
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r9
  __int64 v21; // r8
  unsigned __int64 v22; // r8
  __int64 v23; // r8
  unsigned __int64 v24; // r9
  char *v25; // r8
  char v26; // r11
  unsigned int v27; // r15d
  __int64 v28; // r10
  unsigned __int64 v29; // r9
  __int64 v30; // rdx
  int v31; // ecx
  __int64 v32; // r8
  int v33; // r10d
  char v34; // dl
  char v35; // r9
  union _LARGE_INTEGER v36; // [rsp+C0h] [rbp+8h] BYREF
  char v37; // [rsp+C8h] [rbp+10h]

  v37 = a2;
  v3 = a1[21];
  v4 = 0;
  LOBYTE(v5) = 0;
  v36.QuadPart = 0LL;
  LOBYTE(v6) = 0;
  v7 = 0;
  v9 = a2;
  if ( UseQPCTime )
    v11 = KeQueryPerformanceCounter(&v36);
  else
    v11.QuadPart = KeQueryUnbiasedInterruptTime();
  LODWORD(v12) = v36.LowPart;
  v13 = v11;
  if ( !v9 )
  {
    if ( v11.QuadPart <= 0 || (v14 = a1[87], v13.QuadPart >= v14) )
      v15 = v13.QuadPart - a1[87];
    else
      v15 = v13.QuadPart - v14 - 1;
    if ( UseQPCTime )
    {
      a3 = 0LL;
      if ( v36.QuadPart && v15 )
        a3 = 10000 * (1000 * (v15 % v36.QuadPart) % v36.QuadPart) / v36.QuadPart
           + 10000 * (1000 * (v15 % v36.QuadPart) / v36.QuadPart + 1000 * (v15 / v36.QuadPart));
    }
    else
    {
      a3 = v15;
    }
  }
  result = StorRequestThresholdTime;
  if ( StorRequestThresholdTime && a3 < StorRequestThresholdTime )
    return result;
  v17 = a1[87];
  v18 = a1[88];
  if ( v18 >= v17 )
  {
    v19 = v18 - v17;
    if ( UseQPCTime )
    {
      if ( v36.QuadPart && v19 )
      {
        v20 = 1000 * (v19 % v36.QuadPart);
        result = 10000 * (v20 % v36.QuadPart) / v36.QuadPart;
        v5 = result + 10000 * (v20 / v36.QuadPart + 1000 * (v19 / v36.QuadPart));
      }
    }
    else
    {
      LOBYTE(v5) = v18 - v17;
    }
  }
  if ( v18 )
  {
    v21 = a1[89];
    if ( v21 >= v18 )
    {
      v22 = v21 - v18;
      goto LABEL_27;
    }
  }
  v23 = a1[89];
  if ( v23 >= v17 )
  {
    v22 = v23 - v17;
LABEL_27:
    if ( UseQPCTime )
    {
      if ( v36.QuadPart && v22 )
      {
        v24 = 1000 * (v22 % v36.QuadPart);
        result = 10000 * (v24 % v36.QuadPart) / v36.QuadPart;
        v6 = result + 10000 * (v24 / v36.QuadPart + 1000 * (v22 / v36.QuadPart));
      }
    }
    else
    {
      LOBYTE(v6) = v22;
    }
  }
  if ( *(_BYTE *)(v3 + 2) != 40 )
  {
    v4 = *(_BYTE *)(v3 + 72);
    v7 = *(_BYTE *)(v3 + 4);
    LOBYTE(v12) = *(_BYTE *)(v3 + 5);
    v34 = *(_BYTE *)(v3 + 6);
    v35 = *(_BYTE *)(v3 + 7);
    v33 = *(_DWORD *)(v3 + 16);
    goto LABEL_60;
  }
  v25 = 0LL;
  v26 = 0;
  if ( *(_DWORD *)(v3 + 20) )
    goto LABEL_58;
  v27 = *(_DWORD *)(v3 + 56);
  v28 = 0LL;
  if ( !v27 )
  {
    v9 = v37;
    goto LABEL_58;
  }
  while ( 1 )
  {
    v12 = *(unsigned int *)(v3 + 4 * v28 + 120);
    if ( (unsigned int)v12 >= 0x80 )
    {
      v29 = *(unsigned int *)(v3 + 16);
      if ( (unsigned int)v12 < (unsigned int)v29 )
        break;
    }
LABEL_49:
    v28 = (unsigned int)(v28 + 1);
    if ( (unsigned int)v28 >= v27 )
      goto LABEL_55;
  }
  v30 = (unsigned int)v12;
  v31 = *(_DWORD *)(v12 + v3) - 64;
  if ( v31 )
  {
    LODWORD(v12) = v31 - 1;
    if ( (_DWORD)v12 )
    {
      if ( (_DWORD)v12 == 1 )
      {
        LODWORD(v12) = v30 + 40;
        if ( v30 + 40 <= v29 )
        {
          if ( !*(_DWORD *)(v30 + v3 + 12) )
            goto LABEL_54;
          v32 = v3 + 32;
          goto LABEL_53;
        }
      }
    }
    else
    {
      LODWORD(v12) = v30 + 56;
      if ( v30 + 56 <= v29 )
      {
        v26 = 1;
        if ( *(_BYTE *)(v30 + v3 + 10) )
          v25 = (char *)(v30 + v3 + 24);
        v7 = *(_BYTE *)(v30 + v3 + 8);
      }
    }
    goto LABEL_48;
  }
  LODWORD(v12) = v30 + 40;
  if ( v30 + 40 > v29 )
  {
LABEL_48:
    if ( v26 )
      goto LABEL_55;
    goto LABEL_49;
  }
  if ( !*(_BYTE *)(v30 + v3 + 10) )
    goto LABEL_54;
  v32 = v3 + 24;
LABEL_53:
  v25 = (char *)(v30 + v32);
LABEL_54:
  v7 = *(_BYTE *)(v30 + v3 + 8);
LABEL_55:
  v9 = v37;
  if ( v25 )
    v4 = *v25;
LABEL_58:
  result = *(unsigned int *)(v3 + 52);
  v33 = *(_DWORD *)(v3 + 60);
  LOBYTE(v12) = *(_BYTE *)(result + v3 + 8);
  v34 = *(_BYTE *)(result + v3 + 9);
  v35 = *(_BYTE *)(result + v3 + 10);
LABEL_60:
  if ( v9 )
  {
    if ( (byte_140173441 & 1) != 0 )
      return McTemplateK0xpuupuuuuuqxx_EtwWriteTransfer(
               v12,
               (unsigned int)&EventIOPerformanceMeasurementTarget,
               (int)a1 + 728,
               a3,
               a1[20],
               v4,
               *(_BYTE *)(v3 + 3),
               a1[96],
               *(_BYTE *)(a1[27] + 56LL),
               v12,
               v34,
               v35,
               v7,
               v33,
               v5,
               v6);
  }
  else if ( (byte_140173441 & 1) != 0 )
  {
    return McTemplateK0xpuupuuuuuqxx_EtwWriteTransfer(
             v12,
             (unsigned int)&EventIOPerformanceMeasurement,
             (int)a1 + 728,
             a3,
             a1[20],
             v4,
             *(_BYTE *)(v3 + 3),
             a1[96],
             *(_BYTE *)(a1[27] + 56LL),
             v12,
             v34,
             v35,
             v7,
             v33,
             v5,
             v6);
  }
  return result;
}
