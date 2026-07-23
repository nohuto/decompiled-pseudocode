/*
 * XREFs of PpmHeteroRestrictToFavoredClass @ 0x1404201A8
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x14025E0F0 (PpmParkComputeUnparkMask.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int8 *__fastcall PpmHeteroRestrictToFavoredClass(
        struct _KAFFINITY_EX *a1,
        unsigned __int8 *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        unsigned __int16 *a8,
        __int64 a9,
        unsigned __int16 *a10)
{
  int v11; // edi
  int v12; // ebx
  bool v13; // cl
  char v14; // si
  unsigned __int64 v15; // r14
  unsigned __int8 v16; // r15
  unsigned __int16 v17; // bx
  unsigned __int64 v18; // rdx
  unsigned int v19; // edi
  __int64 Prcb; // rax
  __int64 v21; // rdi
  unsigned __int8 v22; // al
  _WORD *v23; // rdx
  unsigned __int16 v24; // bx
  unsigned __int64 i; // r14
  unsigned __int64 v26; // rdx
  int v27; // ecx
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  char v31; // al
  int v32; // eax
  unsigned int v33; // r8d
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  char v37; // bl
  unsigned int v38; // esi
  struct _KAFFINITY_EX *v39; // r8
  unsigned __int8 *result; // rax
  unsigned __int64 v41; // r14
  __int64 v42; // rdi
  unsigned __int64 v43; // rdx
  unsigned int v44; // edx
  char v45; // al
  unsigned __int8 v46; // [rsp+20h] [rbp-E0h]
  int v47; // [rsp+24h] [rbp-DCh]
  unsigned int v48; // [rsp+24h] [rbp-DCh]
  struct _KAFFINITY_EX v50; // [rsp+50h] [rbp-B0h] BYREF

  v11 = a3;
  v12 = a4;
  memset_0(&v50, 0, sizeof(v50));
  v47 = 0;
  if ( PopHeteroSystem == 3 )
  {
    v13 = 1;
  }
  else if ( PopHeteroSystem == 6 )
  {
    v13 = a7 != 0;
  }
  else
  {
    v13 = a6 < a5;
  }
  v14 = v13;
  if ( !PpmHeteroPolicy )
    v14 = 1;
  if ( PpmHeteroHgsParkingEnabled )
  {
    v47 = v11;
    if ( !v14 )
      v47 = v12;
  }
  v15 = a1->Bitmap[0];
  v16 = 0;
  v17 = 0;
LABEL_8:
  v46 = v16;
  while ( 1 )
  {
    if ( v15 )
    {
      _BitScanForward64(&v18, v15);
      v15 &= ~(1LL << v18);
      v19 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v17].Flink
            + (unsigned __int8)v18);
      Prcb = KeGetPrcb(v19);
      if ( PpmHeteroHgsParkingEnabled )
      {
        v21 = v47 + (unsigned int)PpmHeteroWorkloadClasses * v19;
        if ( v14 )
          v22 = *(_BYTE *)(PpmHeteroCapability + 4 * v21 + 49);
        else
          v22 = *(_BYTE *)(PpmHeteroCapability + 4 * v21 + 48);
      }
      else if ( v14 )
      {
        v22 = *(_BYTE *)(Prcb + 35353);
      }
      else
      {
        v22 = *(_BYTE *)(Prcb + 35354);
      }
      v16 = v22;
      if ( v46 > v22 )
        v16 = v46;
      goto LABEL_8;
    }
    if ( ++v17 >= a1->Count )
      break;
    v15 = a1->Bitmap[v17];
  }
  *(_QWORD *)&v50.Count = 2097153LL;
  memset_0(&v50.8, 0, sizeof(v50.8));
  memset_0(a10 + 4, 0, 8LL * *a10);
  v23 = (_WORD *)a9;
  *a10 = 1;
  v24 = 0;
  for ( i = *(_QWORD *)(a9 + 8); ; i = *(_QWORD *)&v23[4 * v24 + 4] )
  {
    while ( i )
    {
      _BitScanForward64(&v26, i);
      v27 = v24 << 6;
      i &= ~(1LL << v26);
      v28 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
            + (unsigned int)(unsigned __int8)v26
            + v27);
      v29 = KeGetPrcb(*((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                      + (unsigned int)(unsigned __int8)v26
                      + v27));
      if ( PpmHeteroHgsParkingEnabled )
      {
        v30 = (unsigned int)(v47 + PpmHeteroWorkloadClasses * v28);
        if ( v14 )
          v31 = *(_BYTE *)(PpmHeteroCapability + 4 * v30 + 49);
        else
          v31 = *(_BYTE *)(PpmHeteroCapability + 4 * v30 + 48);
      }
      else if ( v14 )
      {
        v31 = *(_BYTE *)(v29 + 35353);
      }
      else
      {
        v31 = *(_BYTE *)(v29 + 35354);
      }
      v23 = (_WORD *)a9;
      if ( v31 == v16 )
      {
        KeAddProcessorAffinityEx(a10, v28);
        v32 = KeCheckProcessorAffinityEx(a1, (unsigned int)v28);
        v23 = (_WORD *)a9;
        if ( v32 )
        {
          v33 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v28) & 0x3F;
          v34 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v28) >> 6;
          if ( v50.Count > (unsigned int)v34 )
            goto LABEL_32;
          if ( v50.Size > (unsigned int)v34 )
          {
            v50.Count = v34 + 1;
LABEL_32:
            v35 = (unsigned int)v34;
            v36 = v50.Bitmap[v34];
            _bittestandset64((__int64 *)&v36, v33);
            v50.Bitmap[v35] = v36;
            v23 = (_WORD *)a9;
          }
        }
      }
    }
    if ( ++v24 >= *v23 )
      break;
  }
  v37 = 1;
  memset_0(a8 + 4, 0, 8LL * *a8);
  *a8 = 1;
  v38 = -1;
  if ( PpmHeteroHgsParkingEnabled )
  {
    v41 = v50.Bitmap[0];
    LOWORD(v42) = 0;
    while ( 1 )
    {
      while ( !v41 )
      {
        v42 = (unsigned __int16)(v42 + 1);
        if ( (unsigned int)v42 >= v50.Count )
          goto LABEL_34;
        v41 = v50.Bitmap[v42];
      }
      _BitScanForward64(&v43, v41);
      v41 &= ~(1LL << v43);
      v48 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v42].Flink
            + (unsigned __int8)v43);
      v44 = *(unsigned __int8 *)(*(_QWORD *)(KeGetPrcb(v48) + 35456) + 8LL);
      if ( v38 == -1 )
        break;
      v45 = v37;
      v37 = 0;
      if ( v44 == v38 )
        v37 = v45;
      if ( v44 < v38 )
      {
        v38 = v44;
        memset_0(a8 + 4, 0, 8LL * *a8);
        *a8 = 1;
        goto LABEL_46;
      }
      if ( v44 == v38 )
LABEL_46:
        KeAddProcessorAffinityEx(a8, v48);
    }
    v38 = v44;
    goto LABEL_46;
  }
LABEL_34:
  v39 = (struct _KAFFINITY_EX *)a8;
  if ( v37 )
    v39 = &v50;
  RtlpCopyAffinityEx(a1, a1->Size, v39);
  result = a2;
  *a2 = v16;
  return result;
}
