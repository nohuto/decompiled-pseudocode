/*
 * XREFs of StorpTelemetryCollectNvmePerfData @ 0x140056700
 * Callers:
 *     NvmeCompletionDpcRoutine @ 0x140030E20 (NvmeCompletionDpcRoutine.c)
 * Callees:
 *     Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledDeviceUsageNoInline @ 0x1400B2790 (Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0qjzshqusssjqxquuhqi_EtwWriteTransfer @ 0x1400B32A8 (McTemplateK0qjzshqusssjqxquuhqi_EtwWriteTransfer.c)
 */

signed __int64 __fastcall StorpTelemetryCollectNvmePerfData(__int64 a1, int *a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned int v5; // r12d
  __int64 v6; // r14
  unsigned __int64 v7; // rbx
  __int64 v9; // r13
  signed __int64 result; // rax
  unsigned int v11; // esi
  int v12; // eax
  int v13; // ebp
  __int64 v14; // r13
  const int *v15; // rbp
  int v16; // esi
  char v17; // r14
  char v18; // r11^1
  int v19; // edi
  __int64 v20; // r15
  int v21; // r13d
  int v22; // r9d
  _QWORD *v23; // rcx
  int v24; // r11d
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // rax
  _QWORD *v29; // rcx
  unsigned int v30; // eax
  signed __int64 *v31; // r8
  _QWORD *v32; // rcx
  unsigned int v33; // ebp
  int v34; // edx
  __int64 *v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  signed __int64 *v38; // r14
  __int64 v39; // rdx
  __int64 v40; // r10
  char v41; // [rsp+70h] [rbp-98h]
  unsigned int v42; // [rsp+B0h] [rbp-58h]
  int v43; // [rsp+B4h] [rbp-54h]
  int v44; // [rsp+B8h] [rbp-50h]
  int v45; // [rsp+BCh] [rbp-4Ch]
  unsigned int v46; // [rsp+C0h] [rbp-48h]
  __int64 v47; // [rsp+C8h] [rbp-40h]
  unsigned int v51; // [rsp+128h] [rbp+20h]

  v5 = 0;
  v6 = a3;
  v7 = 0LL;
  v42 = 0;
  LOBYTE(v47) = 0;
  v9 = a1;
  if ( (unsigned int)Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledDeviceUsageNoInline() )
  {
    result = *(_QWORD *)(v6 + 608);
    if ( !result || !*(_QWORD *)(result + 8) )
      return result;
  }
  v11 = (unsigned __int8)*a2;
  v46 = v11;
  if ( v11 == 2 )
    goto LABEL_10;
  if ( v11 > 0x19 || (v12 = 33554738, !_bittest(&v12, v11)) )
  {
    v13 = 0;
    v43 = 0;
    v45 = 0;
    goto LABEL_11;
  }
  v43 = 1;
  v13 = 1;
  if ( v11 == 5 )
  {
LABEL_10:
    v45 = 1;
    v13 = 1;
    v43 = 1;
  }
  else
  {
    v45 = 0;
  }
LABEL_11:
  if ( v11 != 9 || (v44 = 1, (a2[11] & 4) == 0) )
    v44 = 0;
  v51 = a4 >> 31;
  if ( v13 )
  {
    v47 = *((_QWORD *)a2 + 5);
    v42 = *(_DWORD *)(v6 + 64) * (unsigned __int16)a2[12];
    v9 = a1;
  }
  result = KeQueryUnbiasedInterruptTime();
  if ( result > *(_QWORD *)(v9 + 64) )
    v7 = result - *(_QWORD *)(v9 + 64);
  if ( v7 >= HighLatencyIoThreshold )
  {
    result = *(_QWORD *)(v6 + 608);
    if ( _InterlockedIncrement((volatile signed __int32 *)result) <= 128 && (byte_14017344A & 0x40) != 0 )
    {
      v14 = *(_QWORD *)(v6 + 16);
      v15 = &dword_140154ADC;
      v16 = *a2;
      v17 = 20;
      v18 = BYTE1(*a2);
      v19 = *a2;
      if ( (*(_BYTE *)(v14 + 136) & 2) == 0 )
        v17 = 17;
      if ( *(_QWORD *)(v14 + 752) )
        v15 = *(const int **)(v14 + 752);
      v41 = v17;
      v6 = a3;
      v20 = *(_QWORD *)(v14 + 128);
      result = McTemplateK0qjzshqusssjqxquuhqi_EtwWriteTransfer(
                 (int)a3 + 160,
                 (int)v20 + 1048,
                 (int)v14 + 841,
                 *(_DWORD *)(v20 + 56),
                 v20 + 1048,
                 *(_QWORD *)(v20 + 1032),
                 *(_QWORD *)(v14 + 792),
                 *(_WORD *)(v14 + 4),
                 *(_DWORD *)(a3 + 56),
                 *(_BYTE *)(v14 + 744),
                 (__int64)v15,
                 v14 + 800,
                 v14 + 841,
                 a3 + 160,
                 v41,
                 HighLatencyIoThreshold / 0x2710uLL,
                 (char)v7 / 16,
                 v16,
                 v18 & 3,
                 SBYTE2(v19),
                 v42,
                 v47);
      v11 = v46;
      v13 = v43;
    }
  }
  if ( v13 )
  {
    v21 = v45;
    v22 = 13;
    v23 = qword_140173030;
    v24 = v45 ^ 1;
    v25 = 0;
    while ( (signed __int64)v7 > *v23 )
    {
      ++v25;
      ++v23;
      if ( v25 >= 0xD )
        goto LABEL_32;
    }
    v22 = v25;
LABEL_32:
    v26 = (unsigned int)dword_14017304C;
    v27 = v44;
    v28 = v24 + v22 * (unsigned int)(unsigned __int16)TelemetryPerfContext;
  }
  else
  {
    v27 = v44;
    if ( !v44 && v11 )
      return result;
    v29 = xmmword_140173060;
    v22 = 4;
    v30 = 0;
    while ( (signed __int64)v7 > *v29 )
    {
      ++v30;
      ++v29;
      if ( v30 >= 4 )
        goto LABEL_40;
    }
    v22 = v30;
LABEL_40:
    v24 = v44;
    v26 = *((unsigned int *)&xmmword_140173070 + 3);
    v21 = v45;
    v28 = v44 + v22 * (unsigned int)(unsigned __int16)xmmword_140173050;
  }
  v31 = (signed __int64 *)(v6 + 608);
  v32 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 608) + 8LL) + (unsigned int)(dword_1401730B8 * a5) + 24 * (v28 + v26));
  if ( (_BYTE)v51 )
    ++v32[1];
  else
    ++*v32;
  v32[2] += v7;
  result = *(unsigned int *)(v6 + 112);
  if ( (result & 0x100) == 0 )
    goto LABEL_53;
  if ( !v13 )
    goto LABEL_61;
  if ( (_BYTE)v51 )
  {
LABEL_53:
    v38 = (signed __int64 *)(v6 + 608);
    if ( !v13 )
      goto LABEL_61;
    v33 = v42;
  }
  else
  {
    v33 = v42;
    v34 = 8;
    v35 = (__int64 *)xmmword_140173090;
    while ( v42 > *v35 )
    {
      ++v5;
      ++v35;
      if ( v5 >= 8 )
        goto LABEL_52;
    }
    v34 = v5;
LABEL_52:
    v36 = (unsigned int)(dword_1401730BC * a5)
        + 16
        * (*((unsigned int *)&xmmword_1401730A0 + 3)
         + (unsigned __int64)(v24
                            + (unsigned __int16)xmmword_140173080 * (v22 * (unsigned int)WORD1(xmmword_140173080) + v34)));
    v37 = *(_QWORD *)(*(_QWORD *)(v6 + 608) + 16LL);
    ++*(_QWORD *)(v36 + v37);
    *(_QWORD *)(v36 + v37 + 8) += v7;
    v38 = (signed __int64 *)(v6 + 608);
  }
  result = *v38;
  v31 = v38;
  v39 = *(_QWORD *)(*v38 + 48);
  if ( v39 )
  {
    v40 = (unsigned int)(dword_1401730D0 * a5);
    if ( *(_QWORD *)(v40 + v39) < v7 )
      *(_QWORD *)(v40 + v39) = v7;
    if ( v21 )
      *(_QWORD *)(v40 + v39 + 8) += v33;
    else
      *(_QWORD *)(v40 + v39 + 16) += v33;
    return result;
  }
LABEL_61:
  if ( v11 )
  {
    if ( v27 )
    {
      result = *v31;
      if ( *(_QWORD *)(*v31 + 96) < v7 )
        *(_QWORD *)(result + 96) = v7;
    }
  }
  else
  {
    result = *v31;
    if ( *(_QWORD *)(*v31 + 88) < v7 )
      *(_QWORD *)(result + 88) = v7;
  }
  return result;
}
