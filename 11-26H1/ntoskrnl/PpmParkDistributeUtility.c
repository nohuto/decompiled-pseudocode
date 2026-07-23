/*
 * XREFs of PpmParkDistributeUtility @ 0x14025C334
 * Callers:
 *     PpmHeteroDistributeUtility @ 0x14025B4D0 (PpmHeteroDistributeUtility.c)
 *     PpmParkDistributeAllUtility @ 0x14025C2A0 (PpmParkDistributeAllUtility.c)
 * Callees:
 *     ?RtlpXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14025C98C (-RtlpXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PpmHeteroNormalizedUtilityToUtility @ 0x14025CB58 (PpmHeteroNormalizedUtilityToUtility.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PpmHeteroUtilityToNormalizedUtility @ 0x1404163E0 (PpmHeteroUtilityToNormalizedUtility.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PpmParkDistributeUtility(
        struct _KAFFINITY_EX *a1,
        struct _KAFFINITY_EX *a2,
        unsigned __int16 a3,
        char a4,
        unsigned int a5,
        __int64 a6)
{
  struct _KAFFINITY_EX *v6; // r12
  unsigned __int16 v7; // si
  __int16 v8; // di
  unsigned __int64 v10; // r14
  struct _KAFFINITY_EX *v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 Prcb; // r9
  int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // r14
  unsigned __int16 v21; // bx
  unsigned __int16 v22; // di
  unsigned __int64 v23; // rdx
  _DWORD *v24; // rax
  unsigned int v25; // edx
  int v26; // eax
  unsigned int v27; // r13d
  unsigned int v28; // r15d
  unsigned __int64 v29; // rdi
  __int64 result; // rax
  __int64 v31; // rbx
  char v32; // si
  unsigned __int64 v33; // rdx
  _DWORD *v34; // r8
  unsigned int v35; // r9d
  unsigned int v36; // ecx
  unsigned int v37; // r10d
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned __int64 v41; // r14
  __int64 v42; // rsi
  unsigned __int64 v43; // rdx
  __int64 v44; // r9
  unsigned int v45; // r8d
  __int64 v46; // rax
  unsigned int v47; // ecx
  __int64 v48; // r9
  unsigned __int16 v49; // ax
  unsigned __int64 v50; // rdi
  __int64 v51; // rbx
  unsigned __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned int v54; // r8d
  _DWORD *v55; // rdi
  unsigned __int64 v56; // rdi
  unsigned __int16 i; // bx
  unsigned __int64 v58; // rdx
  int v59; // ebx
  __int64 v60; // rax
  unsigned int v61; // edx
  unsigned int v63; // [rsp+24h] [rbp-DCh] BYREF
  __int16 v64; // [rsp+28h] [rbp-D8h]
  int v65; // [rsp+2Ch] [rbp-D4h]
  int v66; // [rsp+30h] [rbp-D0h]
  __int128 v67; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v68; // [rsp+48h] [rbp-B8h]
  struct _KAFFINITY_EX *v69; // [rsp+50h] [rbp-B0h]
  __int64 v70; // [rsp+58h] [rbp-A8h]
  struct _KAFFINITY_EX *v71; // [rsp+60h] [rbp-A0h]
  struct _KAFFINITY_EX v72; // [rsp+70h] [rbp-90h] BYREF
  __int64 v73; // [rsp+180h] [rbp+80h] BYREF
  _QWORD v74[33]; // [rsp+188h] [rbp+88h] BYREF

  v70 = a6;
  v6 = a2;
  v69 = a2;
  v11 = a1;
  v71 = a1;
  v68 = 0LL;
  v65 = a3;
  v67 = 0LL;
  memset_0(v74, 0, 0x100uLL);
  v63 = 0;
  memset_0(&v72.8, 0, sizeof(v72.8));
  v64 = 0;
  v73 = 2097153LL;
  v7 = 0;
  v8 = 0;
  memset_0(v74, 0, 0x100uLL);
  *(_QWORD *)&v72.Count = 2097153LL;
  memset_0(&v72.8, 0, sizeof(v72.8));
  RtlpXorAffinityEx(v11, v6, &v72, 0x20u);
  v10 = v72.Bitmap[0];
  LOWORD(v11) = 0;
  *(_QWORD *)&v67 = &v72;
LABEL_2:
  v66 = 0;
  while ( 1 )
  {
    if ( v10 )
    {
      _BitScanForward64(&v12, v10);
      v10 &= ~(1LL << v12);
      v63 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v11].Flink
            + (unsigned __int8)v12);
      Prcb = KeGetPrcb(v63);
      if ( *(_BYTE *)(Prcb + 35352) )
      {
        ++v8;
        v16 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v63) & 0x3F;
        v17 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v63) >> 6;
        if ( (unsigned __int16)v73 <= (unsigned int)v17 )
        {
          if ( WORD1(v73) <= (unsigned int)v17 )
            goto LABEL_6;
          LOWORD(v73) = v17 + 1;
        }
        v18 = (unsigned int)v17;
        v19 = v74[v17];
        _bittestandset64(&v19, v16);
        v74[v18] = v19;
      }
      else
      {
        ++v64;
      }
LABEL_6:
      v14 = *(_DWORD *)(Prcb + 35328);
      v15 = *(_DWORD *)(Prcb + 35304);
      if ( v14 )
        v15 = (v14 * v15) >> 16;
      a5 += v15;
      ++v7;
      goto LABEL_2;
    }
    v11 = (struct _KAFFINITY_EX *)(unsigned __int16)((_WORD)v11 + 1);
    if ( (unsigned int)v11 >= v72.Count )
      break;
    v10 = v72.Bitmap[(_QWORD)v11];
  }
  v20 = v6->Bitmap[0];
  v21 = 0;
  LOWORD(v66) = v8;
  v22 = v65;
  *(_QWORD *)&v67 = v6;
  while ( 1 )
  {
    while ( v20 )
    {
      _BitScanForward64(&v23, v20);
      v20 &= ~(1LL << v23);
      v63 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v21].Flink
            + (unsigned __int8)v23);
      v24 = (_DWORD *)KeGetPrcb(v63);
      v25 = v24[8826] - v24[8827];
      v26 = v24[8832];
      if ( v26 )
        v25 = (v26 * v25) >> 16;
      a5 += v25;
    }
    if ( ++v21 >= v6->Count )
      break;
    v20 = v6->Bitmap[v21];
  }
  if ( v7 <= 1u )
    v7 = 1;
  if ( (unsigned __int16)v65 >= v7 )
    v22 = v7;
  if ( v22 <= 1u )
    v22 = 1;
  v27 = a5 / v7;
  v28 = a5 / v22;
  if ( (_WORD)v66 && v64 )
  {
    v41 = v74[0];
    LOWORD(v42) = 0;
    *(_QWORD *)&v67 = &v73;
    while ( 1 )
    {
      while ( !v41 )
      {
        v42 = (unsigned __int16)(v42 + 1);
        if ( (unsigned int)v42 >= (unsigned __int16)v73 )
        {
          v6 = v69;
          goto LABEL_27;
        }
        v41 = v74[v42];
      }
      _BitScanForward64(&v43, v41);
      v41 &= ~(1LL << v43);
      v63 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v42].Flink
            + (unsigned __int8)v43);
      v44 = KeGetPrcb(v63);
      v45 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v63);
      v46 = v45 >> 6;
      if ( v72.Count > (unsigned int)v46 )
        v72.Bitmap[(unsigned int)v46] = v72.Bitmap[v46] & ~(1LL << (v45 & 0x3F));
      v47 = PpmHeteroNormalizedUtilityToUtility(v44 + 35264, v28);
      if ( v47 > *(_DWORD *)(v48 + 35304) )
        goto LABEL_51;
      if ( a4 )
        break;
LABEL_52:
      v49 = v22 - 1;
      if ( !v22 )
        v49 = 0;
      v22 = v49;
    }
    if ( *(_DWORD *)(v48 + 35308) > v47 )
      v47 = *(_DWORD *)(v48 + 35308);
LABEL_51:
    *(_DWORD *)(v48 + 35304) = v47;
    goto LABEL_52;
  }
LABEL_27:
  v29 = v72.Bitmap[0];
  result = (__int64)&v72;
  *(_QWORD *)&v67 = &v72;
  LOWORD(v31) = 0;
LABEL_28:
  v32 = a4;
  while ( 1 )
  {
    while ( v29 )
    {
      _BitScanForward64(&v33, v29);
      v29 &= ~(1LL << v33);
      v63 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v31].Flink
            + (unsigned __int8)v33);
      v34 = (_DWORD *)KeGetPrcb(v63);
      v35 = v34[8826];
      v36 = v35;
      result = (unsigned int)v34[8832];
      if ( (_DWORD)result )
        v36 = ((unsigned int)result * v35) >> 16;
      if ( v27 > v36 )
        goto LABEL_28;
      v37 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v63);
      result = v72.Count;
      v38 = v37 >> 6;
      if ( v72.Count > v37 >> 6 )
      {
        result = v72.Bitmap[v38] & ~(1LL << (v37 & 0x3F));
        v72.Bitmap[v38] = result;
        v35 = v34[8826];
      }
      v39 = v34[8832];
      if ( v39 )
      {
        result = (v28 << 16) / v39;
        v40 = (v28 << 16) / v39;
      }
      else
      {
        v40 = v28;
      }
      v32 = a4;
      if ( v40 <= v35 )
      {
        if ( a4 )
        {
          result = (unsigned int)v34[8827];
          if ( (unsigned int)result <= v40 )
            result = v40;
          v34[8826] = result;
        }
      }
      else
      {
        v34[8826] = v40;
      }
    }
    v31 = (unsigned __int16)(v31 + 1);
    if ( (unsigned int)v31 >= v72.Count )
      break;
    v29 = v72.Bitmap[v31];
  }
  v50 = v72.Bitmap[0];
  LOWORD(v51) = 0;
  while ( 1 )
  {
    while ( v50 )
    {
      _BitScanForward64(&v52, v50);
      v50 &= ~(1LL << v52);
      v63 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v51].Flink
            + (unsigned __int8)v52);
      v53 = KeGetPrcb(v63);
      v54 = *(_DWORD *)(v53 + 35328);
      result = v27;
      if ( v54 )
        result = (v27 << 16) / v54;
      *(_DWORD *)(v53 + 35304) = result;
    }
    v51 = (unsigned __int16)(v51 + 1);
    if ( (unsigned int)v51 >= v72.Count )
      break;
    v50 = v72.Bitmap[v51];
  }
  v55 = (_DWORD *)v70;
  if ( v70 )
  {
    RtlpXorAffinityEx(v71, v6, &v72, v72.Size);
    v59 = 0;
    LOWORD(v68) = 0;
    *((_QWORD *)&v67 + 1) = v72.Bitmap[0];
    while ( 1 )
    {
      result = KeEnumerateNextProcessor(&v63, &v67);
      if ( (_DWORD)result )
        break;
      v60 = KeGetPrcb(v63);
      v61 = *(_DWORD *)(v60 + 35304);
      if ( v61 > 0x2710 )
        v59 += PpmHeteroUtilityToNormalizedUtility(v60 + 35264, v61 - 10000);
    }
    *v55 = v59;
  }
  if ( v32 )
  {
    v56 = v6->Bitmap[0];
    for ( i = 0; ; v56 = v6->Bitmap[i] )
    {
      while ( v56 )
      {
        _BitScanForward64(&v58, v56);
        v56 &= ~(1LL << v58);
        result = KeGetPrcb(*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * i].Flink
                           + (unsigned __int8)v58));
        *(_DWORD *)(result + 35304) = *(_DWORD *)(result + 35308);
      }
      if ( ++i >= v6->Count )
        break;
      result = i;
    }
  }
  return result;
}
