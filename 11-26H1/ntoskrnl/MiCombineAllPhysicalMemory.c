/*
 * XREFs of MiCombineAllPhysicalMemory @ 0x140880C48
 * Callers:
 *     MiCombineIdenticalPages @ 0x140B4BC24 (MiCombineIdenticalPages.c)
 * Callees:
 *     MiGetClosestNodeWithProcessors @ 0x140200B4C (MiGetClosestNodeWithProcessors.c)
 *     MiReferencePageRuns @ 0x14028E44C (MiReferencePageRuns.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1402D2C40 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiComputeCombineHash @ 0x1402D5A70 (MiComputeCombineHash.c)
 *     MiCombineCandidate @ 0x1402D6000 (MiCombineCandidate.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiDereferencePageRuns @ 0x1403D34E4 (MiDereferencePageRuns.c)
 *     PsAllocateAffinityToken @ 0x1404EE650 (PsAllocateAffinityToken.c)
 *     PsFreeAffinityToken @ 0x1404F4490 (PsFreeAffinityToken.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x140501124 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeQueryNodeActiveAffinity2 @ 0x140507BA0 (KeQueryNodeActiveAffinity2.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x140509604 (KeSetSystemMultipleGroupAffinityThread.c)
 *     MiProcessCrcList @ 0x140A67C40 (MiProcessCrcList.c)
 *     MiAllocateCrcList @ 0x140B58BB8 (MiAllocateCrcList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCombineAllPhysicalMemory(__int64 *a1)
{
  __int64 *v1; // rdi
  unsigned int v2; // r15d
  int AffinityToken; // r14d
  __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned int *v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  char *v10; // rsi
  char *v11; // r13
  int ClosestNodeWithProcessors; // edi
  int NodeActiveAffinity2; // eax
  unsigned __int16 v14; // r15
  void *PoolMm; // rax
  unsigned __int16 v16; // dx
  PVOID v17; // r15
  unsigned __int64 v18; // rdx
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  unsigned int *v21; // rcx
  unsigned __int64 *v22; // rax
  __int64 v23; // r12
  const __m128i *v24; // rdi
  __int64 v25; // r15
  __int64 v26; // rax
  int v27; // ecx
  int PfnPageSizeIndexUnsynchronized; // eax
  unsigned __int64 v29; // r15
  PVOID v30; // rcx
  PVOID P; // [rsp+20h] [rbp-59h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-51h]
  void *v34; // [rsp+30h] [rbp-49h] BYREF
  int v35; // [rsp+38h] [rbp-41h] BYREF
  __int64 v36; // [rsp+40h] [rbp-39h]
  unsigned int *v37; // [rsp+48h] [rbp-31h]
  unsigned __int64 *v38; // [rsp+50h] [rbp-29h]
  unsigned int *v39; // [rsp+58h] [rbp-21h]
  __int64 *v40; // [rsp+60h] [rbp-19h]
  unsigned int *v41; // [rsp+68h] [rbp-11h]
  __int64 v42; // [rsp+70h] [rbp-9h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-1h]
  char *v44; // [rsp+80h] [rbp+7h]
  __int64 v45; // [rsp+88h] [rbp+Fh]
  int v47; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v48; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v49; // [rsp+F8h] [rbp+7Fh]

  v1 = (__int64 *)*a1;
  v2 = *((_DWORD *)a1 + 35);
  AffinityToken = 0;
  v4 = *(_QWORD *)*a1;
  v42 = a1[1];
  v40 = v1;
  v49 = v2;
  CurrentThread = KeGetCurrentThread();
  v45 = v4;
  v41 = (unsigned int *)MiReferencePageRuns(v4, 1u);
  v5 = 0;
  v36 = *v41;
  v6 = &v41[4 * v36 + 4];
  v39 = v6;
  while ( 1 )
  {
    if ( v5 == (unsigned __int16)KeNumberNodes )
      goto LABEL_44;
    v7 = *(_QWORD *)(v4 + 16);
    LOWORD(v48) = 0;
    v34 = 0LL;
    LOWORD(v47) = 0;
    v8 = *(_QWORD *)(56320LL * v5 + v7 + 13888);
    if ( v8 < 0x10 )
      goto LABEL_38;
    P = (PVOID)((40 * v8 + 4095) & 0xFFFFFFFFFFFFF000uLL);
    v9 = MiAllocateCrcList(v1, v2, &P);
    v10 = (char *)v9;
    if ( !v9 )
    {
      AffinityToken = -1073741670;
      goto LABEL_44;
    }
    v11 = (char *)v9;
    v44 = (char *)(v9 + 40 * ((unsigned __int64)P / 0x28));
    ClosestNodeWithProcessors = MiGetClosestNodeWithProcessors(v5);
    NodeActiveAffinity2 = KeQueryNodeActiveAffinity2(ClosestNodeWithProcessors, 0LL, 0, (unsigned __int16 *)&v47);
    v14 = v47;
    AffinityToken = NodeActiveAffinity2;
    PoolMm = (void *)ExAllocatePoolMm(
                       64LL,
                       16LL * (unsigned __int16)v47,
                       1632069965,
                       ClosestNodeWithProcessors | 0x80000000);
    P = PoolMm;
    if ( !PoolMm )
      goto LABEL_42;
    KeQueryNodeActiveAffinity2(ClosestNodeWithProcessors, (__int64)PoolMm, v14, (unsigned __int16 *)&v48);
    AffinityToken = PsAllocateAffinityToken((__int64 *)&v34);
    if ( AffinityToken < 0 )
    {
      v30 = P;
      goto LABEL_41;
    }
    v16 = v14;
    v17 = P;
    AffinityToken = KeSetSystemMultipleGroupAffinityThread((__int64 *)P, v16, (__int64)v34);
    if ( AffinityToken < 0 )
      break;
    v19 = v36;
    v20 = 0;
    v48 = 0;
    if ( !(_DWORD)v36 )
      goto LABEL_36;
    v21 = v6;
    v22 = (unsigned __int64 *)(v41 + 6);
    v37 = v6;
    v38 = (unsigned __int64 *)(v41 + 6);
    do
    {
      if ( *v21 == v5 )
      {
        v18 = *v22;
        v23 = *(v22 - 1) - 1;
        v33 = *v22;
        v24 = (const __m128i *)(48 * v23 - 0x220000000000LL);
        while ( 1 )
        {
          if ( !v18 )
          {
LABEL_29:
            v22 = v38;
            v21 = v37;
            v20 = v48;
            v19 = v36;
            break;
          }
          if ( v42 && *(_DWORD *)(v42 + 4) || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
          {
            AffinityToken = -1073741248;
            goto LABEL_33;
          }
          v24 += 3;
          ++v23;
          while ( 1 )
          {
            v25 = 1LL;
            v26 = v24[2].m128i_i64[1];
            v27 = HIWORD(v24[2].m128i_i32[0]) & 7;
            v35 = 0;
            v47 = v27;
            if ( (v26 & 0x10000000000LL) != 0 )
            {
              PfnPageSizeIndexUnsynchronized = MiGetPfnPageSizeIndexUnsynchronized((__int64)v24, &v47, &v35);
              v18 = v33;
              if ( PfnPageSizeIndexUnsynchronized != 3 )
              {
                v25 = MiPageSizes[PfnPageSizeIndexUnsynchronized];
                goto LABEL_22;
              }
              v27 = v47;
            }
            if ( v27 > 1 )
              break;
LABEL_22:
            v29 = v25 - (v23 & (v25 - 1));
            if ( v29 >= v18 )
              goto LABEL_29;
            v23 += v29;
            v24 += 3 * v29;
            v18 -= v29;
            v33 = v18;
          }
          if ( (unsigned int)MiCombineCandidate(v40, v49, v24) )
          {
            *((_QWORD *)v11 + 2) = v23;
            if ( (unsigned int)MiComputeCombineHash(a1, v11, 0) )
            {
              v11 += 40;
              if ( v11 == v44 )
              {
                MiProcessCrcList(a1, v10, (v11 - v10) / 40, v5);
                v11 = v10;
              }
            }
          }
          v18 = --v33;
        }
      }
      ++v20;
      v21 += 2;
      v22 += 2;
      v48 = v20;
      v37 = v21;
      v38 = v22;
    }
    while ( v20 < v19 );
LABEL_33:
    if ( v11 != v10 )
      MiProcessCrcList(a1, v10, (v11 - v10) / 40, v5);
    v17 = P;
    v6 = v39;
LABEL_36:
    KeRevertToUserMultipleGroupAffinityThread((__int64)v34, v18);
    PsFreeAffinityToken(v34);
    ExFreePoolWithTag(v17, 0);
    ExFreePoolWithTag(v10, 0);
    if ( AffinityToken < 0 )
      goto LABEL_44;
    v1 = v40;
    v4 = v45;
    v2 = v49;
LABEL_38:
    ++v5;
  }
  PsFreeAffinityToken(v34);
  v30 = v17;
LABEL_41:
  ExFreePoolWithTag(v30, 0);
LABEL_42:
  ExFreePoolWithTag(v10, 0);
LABEL_44:
  MiDereferencePageRuns((__int64)v41);
  return (unsigned int)AffinityToken;
}
