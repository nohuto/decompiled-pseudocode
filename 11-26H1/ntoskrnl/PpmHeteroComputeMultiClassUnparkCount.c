/*
 * XREFs of PpmHeteroComputeMultiClassUnparkCount @ 0x14060F474
 * Callers:
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x14041574C (PpmCheckComputeMultiClassHeteroResponse.c)
 * Callees:
 *     RtlOrAffinityEx @ 0x14025C158 (RtlOrAffinityEx.c)
 *     RtlSubtractAffinityEx @ 0x14025CBE8 (RtlSubtractAffinityEx.c)
 *     PpmEventTraceMultiClassHeteroResponse @ 0x140415324 (PpmEventTraceMultiClassHeteroResponse.c)
 *     PpmHeteroComputeUnparkCount @ 0x14041552C (PpmHeteroComputeUnparkCount.c)
 *     PpmHeteroComputeCoreParkingUtilities @ 0x140415BAC (PpmHeteroComputeCoreParkingUtilities.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdate @ 0x1404F8FBC (PpmEventTraceMultiClassHeteroResponseUpdate.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall PpmHeteroComputeMultiClassUnparkCount(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        void *a4,
        unsigned int a5,
        char a6,
        char a7)
{
  unsigned __int64 v8; // rsi
  unsigned int v9; // edx
  __int64 v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // edi
  unsigned int v14; // r15d
  unsigned int v15; // r14d
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // r14d
  unsigned int v19; // ecx
  unsigned int v20; // r9d
  __int64 v21; // r12
  char v22; // r10
  __int64 v23; // r13
  unsigned int v24; // r8d
  char v25; // al
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned int *v28; // r8
  unsigned int v29; // edi
  unsigned __int64 v30; // rcx
  __int64 v31; // r9
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  char v35; // [rsp+40h] [rbp-C0h]
  unsigned int v36; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v37[12]; // [rsp+54h] [rbp-ACh] BYREF
  void *v38; // [rsp+60h] [rbp-A0h]
  unsigned int *v39; // [rsp+68h] [rbp-98h]
  __int64 v40; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h]
  struct _KAFFINITY_EX v42; // [rsp+80h] [rbp-80h] BYREF

  v39 = a3;
  v41 = a2;
  v38 = a4;
  memset_0(&v42.8, 0, sizeof(v42.8));
  v8 = *(_QWORD *)(a1 + 1120);
  v36 = 0;
  v40 = 0LL;
  if ( a7 )
  {
    v9 = 1;
    for ( *(_QWORD *)(a1 + 1160) = 0LL;
          v9 < *(unsigned __int8 *)(a1 + 10);
          *(_QWORD *)(624 * v10 + *(_QWORD *)(a1 + 1256) + 16) = 0LL )
    {
      v10 = v9++;
    }
  }
  *(_QWORD *)&v42.Count = 2097153LL;
  LOBYTE(v11) = (unsigned __int8)memset_0(&v42.8, 0, sizeof(v42.8));
  LOBYTE(v12) = *(_BYTE *)(a1 + 10);
  v13 = 0;
  v14 = 0;
  v15 = 1;
  if ( (unsigned __int8)v12 > 1u )
  {
    do
    {
      v16 = *(_QWORD *)(a1 + 1256);
      v17 = 624LL * v15;
      v13 += *(unsigned __int16 *)(v17 + v16 + 8);
      v14 += *(unsigned __int16 *)(v17 + v16);
      LOBYTE(v11) = RtlOrAffinityEx(&v42, (struct _KAFFINITY_EX *)(v16 + 24 + v17), (__int64)&v42);
      v12 = *(unsigned __int8 *)(a1 + 10);
      ++v15;
    }
    while ( v15 < v12 );
    v18 = 1;
    if ( (unsigned __int8)v12 > 1u )
    {
      LOBYTE(v19) = *(_BYTE *)(a1 + 10);
      LOBYTE(v11) = v19;
      do
      {
        v20 = a5;
        LOBYTE(v12) = v11;
        if ( !a5 )
          break;
        v21 = 624LL * v18;
        v22 = 0;
        *(_QWORD *)&v37[4] = 0LL;
        v23 = *(_QWORD *)(a1 + 1256);
        *(_QWORD *)v37 = v18 + 1;
        v13 -= *(unsigned __int16 *)(v21 + v23 + 8);
        v14 -= *(unsigned __int16 *)(v21 + v23);
        if ( *(_DWORD *)v37 == (unsigned __int8)v19 )
        {
          v24 = 0;
        }
        else
        {
          PpmHeteroComputeCoreParkingUtilities(v18, (__int64)&v42, v39, v38, &v40, &v37[4]);
          v25 = PpmHeteroComputeUnparkCount(
                  v18,
                  v41,
                  1,
                  (__int64)v39,
                  0LL,
                  (int *)v38,
                  *(__int64 *)&v37[4],
                  v13,
                  v14,
                  &v36);
          v24 = v36;
          v22 = v25;
          v20 = a5;
          if ( v36 >= a5 )
            v24 = a5;
        }
        v26 = *(unsigned __int16 *)(v21 + v23);
        v27 = v20 - v24;
        v35 = v24;
        v36 = v24;
        v28 = v39;
        if ( v27 >= v26 )
          v27 = v26;
        *(_QWORD *)(v21 + v23 + 16) += v8 * v27;
        a5 = v20 - v27;
        PpmEventTraceMultiClassHeteroResponse(
          v18,
          &v42.Count,
          (ULONGLONG)v28,
          (ULONGLONG)v38,
          v37[4],
          v13,
          v22,
          v27,
          v35,
          v8);
        RtlSubtractAffinityEx(&v42, (struct _KAFFINITY_EX *)(v21 + v23 + 24), (__int64)&v42);
        v19 = *(unsigned __int8 *)(a1 + 10);
        v18 = *(_DWORD *)v37;
        LOBYTE(v11) = *(_BYTE *)(a1 + 10);
        LOBYTE(v12) = v11;
      }
      while ( *(_DWORD *)v37 < v19 );
    }
  }
  *(_QWORD *)(a1 + 1160) += v8;
  if ( a6 )
  {
    v29 = 1;
    if ( (unsigned __int8)v12 > 1u )
    {
      do
      {
        v30 = *(_QWORD *)(a1 + 1160);
        v31 = *(_QWORD *)(a1 + 1256) + 624LL * v29;
        if ( !v30 )
          v30 = 1LL;
        *(_QWORD *)(a1 + 1160) = v30;
        v32 = (*(_QWORD *)(v31 + 16) + (v30 >> 1)) / v30;
        if ( (unsigned __int16)v32 >= *(_WORD *)v31 )
          LOWORD(v32) = *(_WORD *)v31;
        *(_WORD *)(v31 + 6) = v32;
        if ( (_WORD)v32 )
        {
          if ( !v8 )
            v8 = 1LL;
          v33 = 100LL * *(_QWORD *)(*(_QWORD *)(v31 + 576) + 8LL * (unsigned __int16)v32) / v8;
        }
        else
        {
          LOBYTE(v33) = 0;
        }
        *(_BYTE *)(v31 + 620) = v33;
        PpmEventTraceMultiClassHeteroResponseUpdate(v29, v31, *(_QWORD *)(a1 + 1160));
        v11 = *(unsigned __int8 *)(a1 + 10);
        ++v29;
      }
      while ( v29 < v11 );
    }
  }
  return v11;
}
