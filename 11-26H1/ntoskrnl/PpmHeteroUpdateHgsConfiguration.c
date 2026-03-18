/*
 * XREFs of PpmHeteroUpdateHgsConfiguration @ 0x14025B888
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140A9DA10 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140246720 (KeAddProcessorAffinityEx.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402518B0 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     ?RtlpAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14025A790 (-RtlpAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PPmHeteroHgsUpdateOrderValue @ 0x14025C2E8 (PPmHeteroHgsUpdateOrderValue.c)
 *     PpmEventHgsHardwareTable @ 0x14025D178 (PpmEventHgsHardwareTable.c)
 *     PpmHeteroHgsUpdateContainmentConfiguration @ 0x14025D3AC (PpmHeteroHgsUpdateContainmentConfiguration.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     KeCheckProcessorAffinityEx @ 0x14042D260 (KeCheckProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14043BC70 (KeEnumerateNextProcessor.c)
 *     KeIsForceParkingEnabled @ 0x14043DBE0 (KeIsForceParkingEnabled.c)
 *     PpmEventHgsHardwareTableResonChanged @ 0x140502714 (PpmEventHgsHardwareTableResonChanged.c)
 *     PpmEventWpsParkingTableUpdateReason @ 0x14060EE30 (PpmEventWpsParkingTableUpdateReason.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

char __fastcall PpmHeteroUpdateHgsConfiguration(__int64 a1)
{
  __int64 v1; // r8
  char v2; // si
  unsigned __int16 i; // cx
  BOOL v5; // eax
  __int64 k; // rcx
  unsigned __int16 Size; // r12
  unsigned __int16 v8; // bx
  unsigned __int16 v9; // di
  __int64 v10; // rax
  unsigned int v11; // r13d
  __int64 v12; // r15
  unsigned __int64 v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r14
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned int v20; // ebx
  unsigned __int64 v21; // rdx
  char v22; // r8
  int v23; // edi
  __int64 v24; // rax
  char v25; // r14
  __int64 v26; // r10
  __int64 v27; // rcx
  unsigned int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r10
  __int64 v36; // rcx
  unsigned int v37; // r8d
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  unsigned int v40; // r8d
  __int64 v41; // rcx
  __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  __int64 v44; // r10
  __int64 v45; // rcx
  unsigned int v46; // r8d
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  unsigned int v50; // r8d
  __int64 v51; // rdx
  __int64 v52; // rcx
  char v53; // bl
  _BYTE *v54; // r10
  struct _KAFFINITY_EX *v55; // r8
  struct _KAFFINITY_EX *v56; // rdx
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int64 v64; // rdx
  __int64 v65; // r8
  unsigned __int64 v66; // rdi
  __int64 v67; // rbx
  unsigned __int64 v68; // rdx
  __int64 Prcb; // rsi
  unsigned int v70; // ecx
  __int64 v71; // rdx
  char v72; // al
  int v73; // eax
  int v74; // r9d
  unsigned int v75; // r11d
  size_t j; // rbx
  __int64 v77; // rcx
  __int64 v78; // rcx
  struct _KAFFINITY_EX *v79; // rcx
  struct _KAFFINITY_EX *v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // r8
  char v83; // al
  int v84; // eax
  bool v85; // [rsp+38h] [rbp-D0h]
  char v86; // [rsp+39h] [rbp-CFh]
  __int16 v87; // [rsp+3Ch] [rbp-CCh]
  __int64 v88; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v89; // [rsp+48h] [rbp-C0h]
  BOOL v90; // [rsp+50h] [rbp-B8h]
  __int128 v91; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v92; // [rsp+68h] [rbp-A0h]
  __int64 v93; // [rsp+70h] [rbp-98h]
  __int64 v94; // [rsp+78h] [rbp-90h]
  struct _KAFFINITY_EX v95; // [rsp+88h] [rbp-80h] BYREF
  __int64 v96; // [rsp+198h] [rbp+90h] BYREF
  _QWORD v97[33]; // [rsp+1A0h] [rbp+98h] BYREF
  __int64 v98; // [rsp+2A8h] [rbp+1A0h] BYREF
  _QWORD v99[33]; // [rsp+2B0h] [rbp+1A8h] BYREF
  struct _KAFFINITY_EX v100; // [rsp+3B8h] [rbp+2B0h] BYREF
  struct _KAFFINITY_EX v101; // [rsp+4C8h] [rbp+3C0h] BYREF
  struct _KAFFINITY_EX v102; // [rsp+5D8h] [rbp+4D0h] BYREF

  v94 = a1;
  memset_0(&v100, 0, sizeof(v100));
  memset_0(&v98, 0, 0x108uLL);
  v92 = 0LL;
  v91 = 0LL;
  memset_0(&v95, 0, sizeof(v95));
  LODWORD(v88) = 0;
  memset_0(&v102, 0, sizeof(v102));
  memset_0(&v101, 0, sizeof(v101));
  memset_0(&v96, 0, 0x108uLL);
  v2 = 0;
  v86 = 0;
  v85 = 0;
  if ( PpmHeteroHgsEnabled )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= LOWORD(PpmCheckRegistered[0]) )
        return v2;
      if ( PpmCheckRegistered[i + 1] )
        break;
    }
    if ( PopSleepstudySessionLock.StackLimit
      && (unsigned __int8)guard_dispatch_icall_no_overrides(PopSleepstudySessionLock.StackBase, PpmCheckRegistered, v1) )
    {
      v5 = PpmHeteroHgsPopulated == 0;
      PpmHeteroHgsPopulated = 1;
      v90 = v5;
      v95.Size = 32;
      memset_0(&v95.8, 0, sizeof(v95.8));
      *(_QWORD *)&PpmParkNewForceParkingMask.Count = 2097153LL;
      memset_0(&PpmParkNewForceParkingMask.8, 0, sizeof(PpmParkNewForceParkingMask.8));
      Size = v95.Size;
      v8 = 0;
      v9 = v95.Size;
      v95.Reserved = 0;
      if ( LOWORD(PpmCheckRegistered[0]) <= v95.Size )
        v9 = PpmCheckRegistered[0];
      v95.Count = v9;
      if ( v9 )
      {
        memmove(&v95.8, qword_140E0B638, 8LL * v9);
        do
          ++v8;
        while ( v8 < v9 );
        Size = v95.Size;
      }
      while ( v8 < Size )
      {
        v10 = v8++;
        v95.Bitmap[v10] = 0LL;
        Size = v95.Size;
      }
      v11 = 0;
      v12 = 2LL;
      if ( !*(_DWORD *)(PpmHeteroCapability + 4) )
        goto LABEL_57;
LABEL_18:
      *(_QWORD *)&v100.Count = 2097153LL;
      memset_0(&v100.8, 0, sizeof(v100.8));
      *(_QWORD *)&v101.Count = 2097153LL;
      memset_0(&v101.8, 0, sizeof(v101.8));
      v98 = 2097153LL;
      memset_0(v99, 0, 0x100uLL);
      v96 = 2097153LL;
      memset_0(v97, 0, 0x100uLL);
      *(_QWORD *)&v102.Count = 2097153LL;
      memset_0(&v102.8, 0, sizeof(v102.8));
      v13 = qword_140E0B638[0];
      LOWORD(v14) = 0;
      *(_QWORD *)&v91 = PpmCheckRegistered;
      v87 = 0;
      while ( 1 )
      {
        LODWORD(v89) = 0;
        while ( !v13 )
        {
          v14 = (unsigned __int16)(v14 + 1);
          v87 = v14;
          if ( (unsigned int)v14 >= LOWORD(PpmCheckRegistered[0]) )
          {
            LOWORD(v92) = v14;
            v53 = v86 | PPmHeteroHgsUpdateOrderValue(v94, (unsigned int)&v96, (unsigned int)&v101, v11, 1);
            v86 = v53 | PPmHeteroHgsUpdateOrderValue(v94, (unsigned int)&v98, (unsigned int)&v100, v11, 0);
            RtlpAndAffinityEx(&v101, &v100, &v102, v102.Size);
            RtlpAndAffinityEx(&v95, &v102, &v95, Size);
            if ( ++v11 < *(_DWORD *)(PpmHeteroCapability + 4) )
            {
              Size = v95.Size;
              goto LABEL_18;
            }
LABEL_57:
            if ( PpmHeteroHgsParkingHintEnabled )
            {
              v66 = qword_140E0B638[0];
              LOWORD(v67) = 0;
              *(_QWORD *)&v91 = PpmCheckRegistered;
              while ( 1 )
              {
                k = LOWORD(PpmCheckRegistered[0]);
                while ( !v66 )
                {
                  v67 = (unsigned __int16)(v67 + 1);
                  if ( (unsigned int)v67 >= LOWORD(PpmCheckRegistered[0]) )
                    goto LABEL_58;
                  v66 = PpmCheckRegistered[v67 + 1];
                }
                _BitScanForward64(&v68, v66);
                v66 &= ~(1LL << v68);
                LODWORD(v88) = *((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                               + 64 * (unsigned __int16)v67
                               + (unsigned __int8)v68);
                Prcb = KeGetPrcb((unsigned int)v88);
                v70 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112]
                                + 4LL * (unsigned int)v88);
                v71 = v70 >> 6;
                if ( (unsigned int)v71 >= v95.Count )
                  v72 = 0;
                else
                  v72 = (v95.Bitmap[v71] >> v70) & 1;
                if ( *(_BYTE *)(Prcb + 35420) != v72 )
                {
                  v86 = 1;
                  *(_BYTE *)(Prcb + 35420) = KeCheckProcessorAffinityEx(&v95, (unsigned int)v88);
                }
              }
            }
LABEL_58:
            if ( PpmHeteroHgsVendor != 2 )
              goto LABEL_82;
            if ( PpmHeteroHgsDynamicUpdateEnabled )
            {
              if ( !PpmHeteroHgsDynamicUpdateReasonEnabled )
                goto LABEL_63;
              v54 = *(_BYTE **)&PopSleepstudySessionLock.CurrentRunTime;
              if ( !*(_QWORD *)&PopSleepstudySessionLock.CurrentRunTime || !PopSleepstudySessionLock.KernelStack )
                goto LABEL_63;
              v73 = PpmHeteroWorkloadClasses;
              v74 = 0;
              v75 = 0;
              for ( j = (unsigned int)(2 * PpmHeteroWorkloadClasses);
                    v75 < PpmHeteroWorkloadClasses;
                    v73 = PpmHeteroWorkloadClasses )
              {
                v81 = PpmHeteroHgsTableEntry;
                v54 = *(_BYTE **)&PopSleepstudySessionLock.CurrentRunTime;
                v82 = LODWORD(PopSleepstudySessionLock.CycleTime) + PpmHeteroHgsCapabilityBits * v75;
                v83 = *(_BYTE *)(PpmHeteroHgsTableEntry + v82);
                *(_BYTE *)(*(_QWORD *)&PopSleepstudySessionLock.CurrentRunTime + 2LL * v75) = v83;
                LOBYTE(v81) = *(_BYTE *)(v81 + v82 + 1);
                v54[2 * v75 + 1] = v81;
                LOBYTE(v81) = v83 & v81;
                v84 = v74 + 1;
                if ( (v81 & 2) == 0 )
                  v84 = v74;
                ++v75;
                v74 = v84;
              }
              v85 = v74 == v73;
              if ( RtlCompareMemory(v54, PopSleepstudySessionLock.KernelStack, j) != j )
              {
                memmove(
                  PopSleepstudySessionLock.KernelStack,
                  *(const void **)&PopSleepstudySessionLock.CurrentRunTime,
                  j);
                PpmEventHgsHardwareTableResonChanged(0LL);
              }
LABEL_82:
              if ( PpmHeteroHgsVendor == 3 )
              {
                *(_QWORD *)&v95.Count = 2097153LL;
                memset_0(&v95.8, 0, sizeof(v95.8));
                *((_QWORD *)&v91 + 1) = qword_140E0B638[0];
                LOWORD(v92) = 0;
                *(_QWORD *)&v91 = PpmCheckRegistered;
                while ( !(unsigned int)KeEnumerateNextProcessor(&v88, &v91) )
                {
                  if ( **(_DWORD **)(KeGetPrcb((unsigned int)v88) + 35456) == 2 )
                    KeAddProcessorAffinityEx(&v95.Count, v88);
                }
                for ( k = 0LL; (unsigned __int16)k < v95.Count; LOWORD(k) = k + 1 )
                {
                  if ( v95.Bitmap[(unsigned __int16)k] )
                  {
                    LOBYTE(k) = 1;
                    goto LABEL_64;
                  }
                }
              }
LABEL_63:
              LOBYTE(k) = v85;
LABEL_64:
              if ( PpmHeteroHgsDynamicUpdateEnabled && (unsigned __int8)KeIsForceParkingEnabled(k) && (_BYTE)k )
                RtlpCopyAffinityEx(&PpmParkNewForceParkingMask, PpmParkNewForceParkingMask.Size, &v95);
            }
            if ( PpmHeteroWpsParkingUpdateReasonEnabled )
              PpmEventWpsParkingTableUpdateReason(0LL);
            v55 = &v102;
            v56 = &v95;
            do
            {
              v57 = *(_OWORD *)&v56->StaticBitmap[1];
              *(_OWORD *)&v55->Count = *(_OWORD *)&v56->Count;
              v58 = *(_OWORD *)&v56->StaticBitmap[3];
              *(_OWORD *)&v55->StaticBitmap[1] = v57;
              v59 = *(_OWORD *)&v56->StaticBitmap[5];
              *(_OWORD *)&v55->StaticBitmap[3] = v58;
              v60 = *(_OWORD *)&v56->StaticBitmap[7];
              *(_OWORD *)&v55->StaticBitmap[5] = v59;
              v61 = *(_OWORD *)&v56->StaticBitmap[9];
              *(_OWORD *)&v55->StaticBitmap[7] = v60;
              v62 = *(_OWORD *)&v56->StaticBitmap[11];
              *(_OWORD *)&v55->StaticBitmap[9] = v61;
              v63 = *(_OWORD *)&v56->StaticBitmap[13];
              v56 = (struct _KAFFINITY_EX *)((char *)v56 + 128);
              *(_OWORD *)&v55->StaticBitmap[11] = v62;
              v55 = (struct _KAFFINITY_EX *)((char *)v55 + 128);
              *(_OWORD *)&v55[-1].StaticBitmap[30] = v63;
              --v12;
            }
            while ( v12 );
            LOBYTE(k) = v90;
            *(_QWORD *)&v55->Count = *(_QWORD *)&v56->Count;
            PpmHeteroHgsUpdateContainmentConfiguration(k, &v102);
            PpmEventHgsHardwareTable(0LL);
            guard_dispatch_icall_no_overrides(PopSleepstudySessionLock.StackBase, v64, v65);
            return v86;
          }
          v13 = PpmCheckRegistered[v14 + 1];
        }
        _BitScanForward64(&v15, v13);
        v89 = v13 & ~(1LL << v15);
        LODWORD(v88) = *((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                       + 64 * (unsigned __int16)v14
                       + (unsigned __int8)v15);
        v16 = (unsigned int)v88;
        v93 = KeGetPrcb((unsigned int)v88);
        v17 = *(_QWORD *)(v93 + 35456);
        v18 = KeGetPrcb((unsigned int)v88);
        if ( PpmHeteroCapabilitySimulation && (PpmHeteroSimulationStateConfig & 2) != 0 )
        {
          v20 = *(_DWORD *)(PpmHeteroCapabilitySimulation
                          + 4LL * (v11 + *(_DWORD *)(PpmHeteroCapabilitySimulation + 4) * (_DWORD)v88)
                          + 24);
          LODWORD(v21) = v20 >> 8;
        }
        else
        {
          switch ( PpmHeteroHgsVendor )
          {
            case 2:
              v19 = PpmHeteroHgsCapabilityBits * v11 + *(unsigned __int16 *)(v18 + 35418);
              LOBYTE(v20) = *(_BYTE *)(PpmHeteroHgsTableEntry + v19 + 1);
              LOBYTE(v21) = *(_BYTE *)(PpmHeteroHgsTableEntry + v19);
              break;
            case 1:
              v21 = *(unsigned __int16 *)(v18 + 35418) + (unsigned __int64)(4 * PpmHeteroHgsCapabilityBits * v11);
              LOBYTE(v20) = *(_BYTE *)(PpmHeteroHgsTableEntry + v21);
              LOBYTE(v21) = *(_BYTE *)(PpmHeteroHgsTableEntry + v21 + 4);
              break;
            case 3:
              v77 = *(unsigned __int16 *)(v18 + 35418);
              LOBYTE(v20) = *(_BYTE *)(PpmHeteroHgsTableEntry + v77);
              LOBYTE(v21) = *(_BYTE *)(PpmHeteroHgsTableEntry + v77 + 1);
              v78 = *(unsigned __int16 *)(v18 + 35450);
              v23 = *(_DWORD *)(PpmHeteroWpsParkingTableEntry + v78);
              v22 = *(_BYTE *)(PpmHeteroWpsParkingTableEntry + v78 + 8);
              goto LABEL_24;
            default:
              LOBYTE(v20) = 1;
              LOBYTE(v21) = 1;
              break;
          }
        }
        v22 = 0;
        v23 = 0;
LABEL_24:
        v24 = *(_QWORD *)(v93 + 35424);
        *(_BYTE *)(v24 + 4LL * v11 + 6) = v21;
        *(_BYTE *)(v24 + 4LL * v11 + 7) = v20;
        if ( !v11 )
        {
          *(_DWORD *)v17 = v23;
          *(_BYTE *)(v17 + 4) = v22;
        }
        if ( PpmHeteroHgsParkingHintEnabled )
        {
          v25 = PpmHeteroHgsVendor;
          LOWORD(v14) = v87;
          v13 = v89;
          if ( (unsigned __int8)(PpmHeteroHgsVendor - 2) <= 1u )
          {
            if ( PpmHeteroHgsVendor != 3 || (LOWORD(v14) = v87, v13 = v89, !v11) )
            {
              if ( PpmHeteroHgsEePerfHintsIndependentEnabled && PpmHeteroHgsThreadEnabled )
              {
                if ( PpmHeteroHgsVendor == 2 && !(_BYTE)v21
                  || (v79 = (struct _KAFFINITY_EX *)&v96, (unsigned int)(v23 - 1) <= 1) )
                {
                  v79 = &v101;
                }
                KeAddProcessorAffinityEx(&v79->Count, v16);
                if ( v25 == 2 && !(_BYTE)v20 || (unsigned int)(v23 - 1) <= 1 )
                  v80 = &v100;
                else
                  v80 = (struct _KAFFINITY_EX *)&v98;
                KeAddProcessorAffinityEx(&v80->Count, v16);
                goto LABEL_38;
              }
              if ( (PpmHeteroHgsVendor != 2 || (_BYTE)v20 && (_BYTE)v21) && (unsigned int)(v23 - 1) > 1 )
              {
                v26 = *(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112];
                v27 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4 * v16) >> 6;
                v28 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4 * v16) & 0x3F;
                if ( (unsigned __int16)v98 > (unsigned int)v27 )
                  goto LABEL_35;
                if ( WORD1(v98) > (unsigned int)v27 )
                {
                  LOWORD(v98) = v27 + 1;
LABEL_35:
                  v29 = (unsigned int)v27;
                  v30 = v99[v27];
                  _bittestandset64(&v30, v28);
                  v99[v29] = v30;
                }
                v31 = *(_DWORD *)(v26 + 4 * v16) & 0x3F;
                v32 = *(_DWORD *)(v26 + 4 * v16) >> 6;
                if ( (unsigned __int16)v96 > (unsigned int)v32 )
                  goto LABEL_37;
                v13 = v89;
                if ( WORD1(v96) > (unsigned int)v32 )
                {
                  LOWORD(v96) = v32 + 1;
LABEL_37:
                  v33 = (unsigned int)v32;
                  v34 = v97[v32];
                  _bittestandset64(&v34, v31);
                  v97[v33] = v34;
                  goto LABEL_38;
                }
                goto LABEL_94;
              }
              v35 = *(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112];
              v36 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4 * v16) >> 6;
              v37 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4 * v16) & 0x3F;
              if ( v100.Count <= (unsigned int)v36 )
              {
                if ( v100.Size > (unsigned int)v36 )
                {
                  v100.Count = v36 + 1;
                  goto LABEL_41;
                }
              }
              else
              {
LABEL_41:
                v38 = (unsigned int)v36;
                v39 = v100.Bitmap[v36];
                _bittestandset64((__int64 *)&v39, v37);
                v100.Bitmap[v38] = v39;
              }
              v40 = *(_DWORD *)(v35 + 4 * v16) & 0x3F;
              v41 = *(_DWORD *)(v35 + 4 * v16) >> 6;
              if ( v101.Count > (unsigned int)v41 )
                goto LABEL_43;
              v13 = v89;
              if ( v101.Size > (unsigned int)v41 )
              {
                v101.Count = v41 + 1;
LABEL_43:
                v42 = (unsigned int)v41;
                v43 = v101.Bitmap[v41];
                _bittestandset64((__int64 *)&v43, v40);
                v101.Bitmap[v42] = v43;
                goto LABEL_38;
              }
              goto LABEL_94;
            }
          }
        }
        else
        {
          v44 = *(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112];
          v45 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4 * v16) >> 6;
          v46 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4 * v16) & 0x3F;
          if ( (unsigned __int16)v96 > (unsigned int)v45 )
            goto LABEL_47;
          if ( WORD1(v96) > (unsigned int)v45 )
          {
            LOWORD(v96) = v45 + 1;
LABEL_47:
            v47 = (unsigned int)v45;
            v48 = v97[v45];
            _bittestandset64(&v48, v46);
            v97[v47] = v48;
          }
          v49 = *(_DWORD *)(v44 + 4 * v16) >> 6;
          v50 = *(_DWORD *)(v44 + 4 * v16) & 0x3F;
          if ( (unsigned __int16)v98 > (unsigned int)v49 )
            goto LABEL_49;
          v13 = v89;
          if ( WORD1(v98) > (unsigned int)v49 )
          {
            LOWORD(v98) = v49 + 1;
LABEL_49:
            v51 = (unsigned int)v49;
            v52 = v99[v49];
            _bittestandset64(&v52, v50);
            v99[v51] = v52;
LABEL_38:
            LOWORD(v14) = v87;
            v13 = v89;
            continue;
          }
LABEL_94:
          LOWORD(v14) = v87;
        }
      }
    }
  }
  return v2;
}
