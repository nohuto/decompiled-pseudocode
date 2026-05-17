/*
 * XREFs of PssNtCaptureSnapshot @ 0x1800B4D70
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18000E5E0 (RtlQueryPerformanceCounter.c)
 *     PsspCaptureThreadInformation @ 0x1800B36E0 (PsspCaptureThreadInformation.c)
 *     PsspCaptureProcessInformation @ 0x1800B53C8 (PsspCaptureProcessInformation.c)
 *     PssNtFreeSnapshot @ 0x1800B5590 (PssNtFreeSnapshot.c)
 *     PsspCaptureHandleInformation @ 0x1800B624C (PsspCaptureHandleInformation.c)
 *     PsspCaptureVaSpaceInformation @ 0x1800B6854 (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureAuxiliaryPages @ 0x1801059D8 (PsspCaptureAuxiliaryPages.c)
 *     PsspSampleCounters @ 0x18010E2B0 (PsspSampleCounters.c)
 *     PsspCaptureIptTrace @ 0x1801597AC (PsspCaptureIptTrace.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     ZwQueryInformationThread @ 0x18015F3E0 (ZwQueryInformationThread.c)
 *     ZwCreateProcessEx @ 0x18015F8E0 (ZwCreateProcessEx.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PssNtCaptureSnapshot(void **a1, __int64 a2, unsigned int a3, signed int a4)
{
  __int64 v4; // r14
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // r12d
  _DWORD *v11; // rcx
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // rcx
  unsigned int v17; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // eax
  __int64 v22; // rcx
  _DWORD *v23; // [rsp+50h] [rbp-79h] BYREF
  int v24; // [rsp+58h] [rbp-71h]
  __int64 v25; // [rsp+60h] [rbp-69h] BYREF
  int v26; // [rsp+68h] [rbp-61h]
  __int64 v27; // [rsp+70h] [rbp-59h] BYREF
  int v28; // [rsp+78h] [rbp-51h]
  __int64 v29; // [rsp+80h] [rbp-49h] BYREF
  signed int v30; // [rsp+88h] [rbp-41h]
  __int64 v31; // [rsp+90h] [rbp-39h]
  int v32; // [rsp+98h] [rbp-31h]
  __int64 v33; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v36; // [rsp+B8h] [rbp-11h] BYREF
  __int128 v37; // [rsp+C8h] [rbp-1h] BYREF

  v4 = 0LL;
  v30 = a4;
  v31 = a2;
  v33 = 0LL;
  v25 = 0LL;
  *(_QWORD *)&v36 = 0LL;
  v34 = 0LL;
  if ( (a3 & 0x3FF8000) != 0 )
    return 3221225485LL;
  v28 = a3 & 0x1C000000;
  if ( (a3 & 0x1C000000) == 0x4000000 )
    return 3221225520LL;
  v29 = 0LL;
  *(_QWORD *)&v37 = 0LL;
  v7 = 0LL;
  v27 = 0LL;
  v8 = 0LL;
  v35 = 0LL;
  v9 = 0LL;
  v10 = a3 & 0x40000000;
  if ( (a3 & 0x40000000) != 0 )
  {
    v8 = MEMORY[0x7FFE0300];
    PsspSampleCounters(&v29, &v35);
    v9 = v29;
  }
  v11 = *a1;
  v23 = v11;
  v26 = 0;
  if ( !v11 )
  {
    v33 = 1144LL;
    result = ZwAllocateVirtualMemory(-1LL, &v23, 0LL, &v33, 4096, 4);
    if ( (int)result < 0 )
      return result;
    v11 = v23;
    *a1 = v23;
    v26 = 1;
  }
  memset_thunk_772440563353939046(v11, 0, 0x478uLL);
  v12 = v26;
  v13 = v31;
  *v23 = 1146311504;
  v23[1] = v12;
  v23[2] = a3;
  v24 = PsspCaptureProcessInformation(v23, v13, a3);
  if ( v24 < 0 )
    goto LABEL_17;
  if ( (a3 & 2) != 0 )
  {
    if ( v10 )
    {
      PsspSampleCounters(&v27, &v37);
      v7 = v27;
    }
    v29 = 2147352576LL;
    v24 = PsspCaptureAuxiliaryPages(v23, v31, a3, &v29);
    if ( v24 < 0 )
      goto LABEL_17;
    if ( v10 )
    {
      PsspSampleCounters(&v25, &v36);
      *((_QWORD *)v23 + 135) = v36 - v37;
      v14 = 1000000 * (v25 - v7) % v8;
      *((_QWORD *)v23 + 136) = 1000000 * (v25 - v7) / v8;
    }
  }
  if ( (a3 & 0x800) == 0 )
    goto LABEL_9;
  if ( v10 )
  {
    PsspSampleCounters(&v27, &v37);
    v7 = v27;
  }
  v24 = PsspCaptureVaSpaceInformation(v23, v31, a3);
  if ( v24 < 0 )
  {
LABEL_17:
    PssNtFreeSnapshot(v23);
    result = (unsigned int)v24;
    *a1 = 0LL;
    return result;
  }
  if ( v10 )
  {
    v36 = 0LL;
    RtlQueryPerformanceCounter(&v25, v14);
    if ( (int)ZwQueryInformationThread(-2LL, 23LL, &v36, 16LL, 0LL) < 0 )
    {
      *(_QWORD *)&v36 = 0LL;
      v16 = 0LL;
    }
    else
    {
      v16 = v36;
    }
    *((_QWORD *)v23 + 133) = v16 - v37;
    v14 = 1000000 * (v25 - v7) % v8;
    *((_QWORD *)v23 + 134) = 1000000 * (v25 - v7) / v8;
  }
LABEL_9:
  if ( (a3 & 1) != 0 )
  {
    if ( v10 )
    {
      PsspSampleCounters(&v27, &v37);
      v7 = v27;
    }
    v17 = v28;
    v18 = ((int)a3 >> 31) & 0x1000;
    v26 = v18;
    while ( 1 )
    {
      v19 = v18;
      v20 = v17 & 0x10000000;
      v21 = v17 & 0x8000000;
      v32 = v20;
      LODWORD(v29) = v21;
      if ( v20 )
      {
        v19 = v18 | 0x400;
      }
      else if ( v21 )
      {
        v19 = v18 | 1;
      }
      v24 = ZwCreateProcessEx(&v34, 5144LL, 0LL, v31, v19, 0LL, 0LL, 0LL, 0);
      if ( v24 >= 0 )
        break;
      if ( (v28 & 0x4000000) == 0 )
        goto LABEL_17;
      if ( v32 )
      {
        v17 = v28 & 0xEFFFFFFF;
      }
      else
      {
        if ( !(_DWORD)v29 )
          goto LABEL_17;
        v17 = v28 & 0xF7FFFFFF;
      }
      v18 = v26;
      v28 = v17;
    }
    *((_QWORD *)v23 + 110) = MEMORY[0x7FFE0014];
    *((_QWORD *)v23 + 109) = v34;
    if ( v10 )
    {
      v36 = 0LL;
      RtlQueryPerformanceCounter(&v25, v14);
      if ( (int)ZwQueryInformationThread(-2LL, 23LL, &v36, 16LL, 0LL) < 0 )
      {
        *(_QWORD *)&v36 = 0LL;
        v22 = 0LL;
      }
      else
      {
        v22 = v36;
      }
      *((_QWORD *)v23 + 131) = v22 - v37;
      v14 = 1000000 * (v25 - v7) % v8;
      *((_QWORD *)v23 + 132) = 1000000 * (v25 - v7) / v8;
    }
  }
  if ( (a3 & 4) != 0 )
  {
    if ( v10 )
    {
      PsspSampleCounters(&v27, &v37);
      v7 = v27;
    }
    LODWORD(v29) = PsspCaptureHandleInformation(v23, v31, a3);
    if ( (int)v29 < 0 )
    {
      PssNtFreeSnapshot(v23);
      result = (unsigned int)v29;
      *a1 = 0LL;
      return result;
    }
    if ( v10 )
    {
      PsspSampleCounters(&v25, &v36);
      *((_QWORD *)v23 + 137) = v36 - v37;
      v14 = 1000000 * (v25 - v7) % v8;
      *((_QWORD *)v23 + 138) = 1000000 * (v25 - v7) / v8;
    }
  }
  if ( (a3 & 0x80u) != 0 )
  {
    if ( v10 )
    {
      PsspSampleCounters(&v27, &v37);
      v7 = v27;
    }
    v30 = PsspCaptureThreadInformation((__int64)v23, v31, a3, v30);
    if ( v30 < 0 )
    {
      PssNtFreeSnapshot(v23);
      result = (unsigned int)v30;
      *a1 = 0LL;
      return result;
    }
    if ( !v10 )
      goto LABEL_25;
    PsspSampleCounters(&v25, &v36);
    *((_QWORD *)v23 + 139) = v36 - v37;
    v14 = 1000000 * (v25 - v7) % v8;
    *((_QWORD *)v23 + 140) = 1000000 * (v25 - v7) / v8;
    goto LABEL_47;
  }
  if ( v10 )
  {
LABEL_47:
    v37 = 0LL;
    RtlQueryPerformanceCounter(&v25, v14);
    if ( (int)ZwQueryInformationThread(-2LL, 23LL, &v37, 16LL, 0LL) >= 0 )
      v4 = v37;
    *((_QWORD *)v23 + 129) = v4 - v35;
    *((_QWORD *)v23 + 130) = 1000000 * (v25 - v9) / v8;
  }
LABEL_25:
  if ( (a3 & 0x2000) != 0 )
    PsspCaptureIptTrace(v23, v31);
  return 0LL;
}
