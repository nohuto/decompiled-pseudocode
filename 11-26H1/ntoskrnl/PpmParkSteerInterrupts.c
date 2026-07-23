/*
 * XREFs of PpmParkSteerInterrupts @ 0x140255B30
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140255A60 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KeIntSteerPeriodic @ 0x1402563C0 (KeIntSteerPeriodic.c)
 *     KiIntPartGetLowestClassProcessorInMask @ 0x140256D68 (KiIntPartGetLowestClassProcessorInMask.c)
 *     KeIntSteerSnapPerf @ 0x140256EE0 (KeIntSteerSnapPerf.c)
 *     RtlOrAffinityEx @ 0x14025C158 (RtlOrAffinityEx.c)
 *     ?RtlpSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14025F780 (-RtlpSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     HalQueryMaximumProcessorCount @ 0x1404362A0 (HalQueryMaximumProcessorCount.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 PpmParkSteerInterrupts()
{
  __int64 result; // rax
  __int64 v1; // rcx
  unsigned __int16 v2; // di
  unsigned __int16 v3; // bx
  __int64 v4; // rax
  unsigned int v5; // esi
  __int64 v6; // r8
  unsigned int v7; // ecx
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int16 v10; // di
  __int64 v11; // rax
  unsigned __int16 Count; // bx
  unsigned __int16 v13; // dx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // r14d
  int v17; // esi
  unsigned __int64 v18; // r11
  __int64 v19; // r8
  __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  __int64 v22; // r9
  unsigned int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // r10d
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  int v30; // ebx
  __int64 *v31; // rbx
  struct _KAFFINITY_EX *v32; // rsi
  struct _KAFFINITY_EX *v33; // rdi
  unsigned int v34; // r15d
  unsigned int v35; // ecx
  unsigned __int64 *v36; // rdx
  __int64 v37; // r8
  unsigned __int64 *v38; // rdx
  __int64 v39; // r8
  __int64 *v40; // rax
  unsigned __int16 Size; // ax
  unsigned __int16 v42; // di
  unsigned __int16 v43; // bx
  __int64 v44; // rax
  unsigned int LowestClassProcessorInMask; // eax
  struct _KAFFINITY_EX *v46; // rcx
  __int64 v47; // [rsp+28h] [rbp-E0h]
  __int64 v48; // [rsp+30h] [rbp-D8h]
  struct _KAFFINITY_EX *v49; // [rsp+38h] [rbp-D0h]
  __int64 *v50; // [rsp+40h] [rbp-C8h]
  int v51; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v52[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int16 v54; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int16 v55; // [rsp+7Ah] [rbp-8Eh]
  int v56; // [rsp+7Ch] [rbp-8Ch]
  _QWORD Src[33]; // [rsp+80h] [rbp-88h] BYREF
  struct _KAFFINITY_EX v58; // [rsp+188h] [rbp+80h] BYREF
  __int64 v59; // [rsp+298h] [rbp+190h] BYREF
  _BYTE v60[264]; // [rsp+2A0h] [rbp+198h] BYREF
  unsigned __int16 v61; // [rsp+3A8h] [rbp+2A0h] BYREF
  unsigned __int16 v62; // [rsp+3AAh] [rbp+2A2h]
  int v63; // [rsp+3ACh] [rbp+2A4h]
  _QWORD v64[33]; // [rsp+3B0h] [rbp+2A8h] BYREF
  struct _KAFFINITY_EX v65; // [rsp+4B8h] [rbp+3B0h] BYREF
  struct _KAFFINITY_EX v66; // [rsp+5C8h] [rbp+4C0h] BYREF

  memset_0(v64, 0, 0x100uLL);
  v52[0] = 0LL;
  v53 = 0LL;
  memset_0(&v59, 0, 0x108uLL);
  memset_0(&v58.8, 0, sizeof(v58.8));
  memset_0(&v65, 0, sizeof(v65));
  memset_0(Src, 0, 0x100uLL);
  result = (__int64)memset_0(&v66, 0, sizeof(v66));
  v51 = 0;
  if ( PpmIntSteerDisabled )
    return result;
  result = HIDWORD(KsepShimDbLock.UpdateVpThreadPriorityDpcStackListEntry.Next);
  if ( !HIDWORD(KsepShimDbLock.UpdateVpThreadPriorityDpcStackListEntry.Next) )
    return result;
  if ( !PpmIntSteerTrigger )
  {
    HalQueryMaximumProcessorCount();
    result = ExAllocatePool2(0x40uLL);
    PpmIntSteerTrigger = result;
    if ( !result )
      return result;
  }
  v62 = 32;
  memset_0(v64, 0, 0x100uLL);
  v1 = v62;
  v2 = v62;
  v63 = 0;
  v3 = 0;
  if ( *(_WORD *)&stru_140FC11F0.WaitRegister.Flags <= v62 )
    v2 = *(_WORD *)&stru_140FC11F0.WaitRegister.Flags;
  v61 = v2;
  if ( v2 )
  {
    memmove(v64, (char *)&stru_140FC11F0.116 + 4, 8LL * v2);
    do
      ++v3;
    while ( v3 < v2 );
    v1 = v62;
  }
  if ( v3 < (unsigned __int16)v1 )
  {
    do
    {
      v4 = v3++;
      v64[v4] = 0LL;
    }
    while ( v3 < v62 );
  }
  KeIntSteerSnapPerf(v1, &v53, &v51, v52);
  v55 = 32;
  memset_0(Src, 0, 0x100uLL);
  v5 = v55;
  LOWORD(v6) = v55;
  v7 = 0;
  if ( PpmPerfCoreParkingMask.Count <= v55 )
    LOWORD(v6) = PpmPerfCoreParkingMask.Count;
  if ( (_WORD)v6 )
  {
    v7 = (unsigned __int16)v6;
    v8 = 0LL;
    v6 = (unsigned __int16)v6;
    do
    {
      v9 = PpmPerfCoreParkingMask.Bitmap[v8++];
      *(_QWORD *)((char *)&v54 + v8 * 8) = ~v9;
      --v6;
    }
    while ( v6 );
  }
  v56 = 0;
  v10 = v5;
  v54 = v5;
  v55 = v5;
  if ( v7 < v5 )
  {
    do
    {
      v11 = v7++;
      Src[v11] = -1LL;
      v10 = v55;
    }
    while ( v7 < v55 );
    LOWORD(v5) = v54;
  }
  KeQuerySystemAllowedCpuSetAffinity();
  Count = PpmCachedSystemAllowedCpuSet.Count;
  v13 = 0;
  if ( (unsigned __int16)v5 < PpmCachedSystemAllowedCpuSet.Count )
    Count = v5;
  if ( Count > v10 )
    Count = v10;
  v54 = Count;
  if ( Count )
  {
    do
    {
      v14 = v13++;
      Src[v14] &= PpmCachedSystemAllowedCpuSet.Bitmap[v14];
      Count = v54;
    }
    while ( v13 < v54 );
    v10 = v55;
  }
  v56 = 0;
  if ( v13 < v10 )
  {
    do
    {
      v15 = v13++;
      Src[v15] = 0LL;
    }
    while ( v13 < v55 );
    Count = v54;
  }
  *(_QWORD *)&v58.Count = 2097153LL;
  v16 = 0;
  v17 = 0;
  memset_0(&v58.8, 0, sizeof(v58.8));
  v18 = v64[0];
  LOWORD(v19) = 0;
  v20 = v52[0];
LABEL_31:
  LODWORD(v52[0]) = 0;
  while ( 1 )
  {
    if ( v18 )
    {
      _BitScanForward64(&v21, v18);
      v18 &= ~(1LL << v21);
      v22 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v19].Flink
            + (unsigned __int8)v21);
      v23 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v22);
      v24 = v23 >> 6;
      if ( (unsigned int)v24 < Count && ((Src[v24] >> v23) & 1) != 0 )
      {
        ++v17;
        v25 = *(_QWORD *)(PpmIntSteerTrigger + 8 * v22);
        if ( !v25 )
        {
          *(_QWORD *)(PpmIntSteerTrigger + 8 * v22) = v20;
          v25 = v20;
        }
        if ( v20 - v25 >= (unsigned __int64)(10000 * PpmIntSteerTriggerMax) )
        {
          v26 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v22) & 0x3F;
          v27 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v22) >> 6;
          if ( v58.Count > (unsigned int)v27 )
            goto LABEL_39;
          if ( v58.Size > (unsigned int)v27 )
          {
            v58.Count = v27 + 1;
LABEL_39:
            v28 = (unsigned int)v27;
            v29 = v58.Bitmap[v27];
            _bittestandset64((__int64 *)&v29, v26);
            v58.Bitmap[v28] = v29;
          }
          ++v16;
          goto LABEL_31;
        }
      }
      else
      {
        *(_QWORD *)(PpmIntSteerTrigger + 8 * v22) = 0LL;
      }
      goto LABEL_31;
    }
    v19 = (unsigned __int16)(v19 + 1);
    if ( (unsigned int)v19 >= v61 )
      break;
    v18 = v64[v19];
  }
  if ( !v17 )
  {
    if ( PpmCachedSystemAllowedCpuSet.Count == 1 )
    {
      v52[1] = 0LL;
      v52[0] = PpmCachedSystemAllowedCpuSet.Bitmap[0];
      LowestClassProcessorInMask = KiIntPartGetLowestClassProcessorInMask(v52);
    }
    else
    {
      LowestClassProcessorInMask = 0;
    }
    KeAddProcessorAffinityEx(&v54, LowestClassProcessorInMask);
    Count = v54;
    v17 = 1;
  }
  if ( !v16 )
  {
    Size = v58.Size;
    v58.Reserved = 0;
    v42 = v58.Size;
    if ( Count <= v58.Size )
      v42 = Count;
    v43 = 0;
    v58.Count = v42;
    if ( v42 )
    {
      memmove(&v58.8, Src, 8LL * v42);
      do
        ++v43;
      while ( v43 < v42 );
      Size = v58.Size;
    }
    if ( v43 < Size )
    {
      do
      {
        v44 = v43++;
        v58.Bitmap[v44] = 0LL;
      }
      while ( v43 < v58.Size );
    }
    v16 = v17;
  }
  v30 = PpmIntSteerMode;
  switch ( PpmIntSteerMode )
  {
    case 0:
      goto LABEL_54;
    case 1:
      v31 = 0LL;
      v32 = (struct _KAFFINITY_EX *)&v61;
      v33 = 0LL;
      break;
    case 2:
      v31 = 0LL;
      v32 = &v58;
      v33 = 0LL;
      break;
    case 3:
      v31 = 0LL;
      v32 = (struct _KAFFINITY_EX *)&v54;
      v33 = 0LL;
      return KeIntSteerPeriodic(v53, v31, v33, v32, v47, v48, v49, v50);
    default:
      if ( (unsigned int)(PpmIntSteerMode - 5) < 2 )
      {
        v59 = 2097153LL;
        memset_0(v60, 0, 0x100uLL);
        KeAddProcessorAffinityEx((unsigned __int16 *)&v59, v30 - 5);
        v31 = 0LL;
        v32 = (struct _KAFFINITY_EX *)&v59;
        v33 = 0LL;
      }
      else
      {
LABEL_54:
        v33 = &v58;
        v32 = (struct _KAFFINITY_EX *)&v54;
        v31 = 0LL;
        v34 = (PpmIntSteerLoadMax + v51) / (unsigned int)PpmIntSteerLoadMax;
        if ( v34 < v16 )
        {
          v59 = 2097153LL;
          memset_0(v60, 0, 0x100uLL);
          *(_QWORD *)&v66.Count = 2097153LL;
          memset_0(&v66.8, 0, sizeof(v66.8));
          if ( PpmParkPreferenceHandler )
          {
            v50 = &v59;
            v46 = &v66;
            v49 = &v66;
            LOBYTE(v46) = 1;
            v48 = 0LL;
            v47 = 0LL;
            guard_dispatch_icall_no_overrides(v46, PpmCheckTime, v34);
          }
          v35 = 0;
          if ( (_WORD)v59 )
          {
            v36 = (unsigned __int64 *)v60;
            v37 = (unsigned __int16)v59;
            do
            {
              v35 += __popcnt(*v36++);
              --v37;
            }
            while ( v37 );
          }
          if ( v35 <= v34 )
          {
            if ( v35 < v34 )
            {
              *(_QWORD *)&v65.Count = 2097153LL;
              memset_0(&v65.8, 0, sizeof(v65.8));
              RtlpSubtractAffinityEx(&v58, &v66, &v65, v65.Size);
              RtlOrAffinityEx(&v59, &v65, &v59);
              v35 = 0;
              if ( (_WORD)v59 )
              {
                v38 = (unsigned __int64 *)v60;
                v39 = (unsigned __int16)v59;
                do
                {
                  v35 += __popcnt(*v38++);
                  --v39;
                }
                while ( v39 );
              }
            }
            v40 = &v59;
            if ( !v35 )
              v40 = 0LL;
            v31 = v40;
          }
        }
      }
      break;
  }
  return KeIntSteerPeriodic(v53, v31, v33, v32, v47, v48, v49, v50);
}
