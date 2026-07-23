/*
 * XREFs of PpmHeteroUpdateHgsConfiguration @ 0x140517458
 * Callers:
 *     PpmHeteroReinitializeWpsProcessors @ 0x1407DA9A8 (PpmHeteroReinitializeWpsProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x140B76758 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     RtlAndAffinityEx @ 0x140253CF4 (RtlAndAffinityEx.c)
 *     RtlSubtractAffinityEx @ 0x14025CBE8 (RtlSubtractAffinityEx.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     KeIsForceParkingEnabled @ 0x1404366F0 (KeIsForceParkingEnabled.c)
 *     PPmHeteroHgsUpdateOrderValue @ 0x1404C1164 (PPmHeteroHgsUpdateOrderValue.c)
 *     PpmEventHgsHardwareTable @ 0x1404E42EC (PpmEventHgsHardwareTable.c)
 *     PpmEventHgsHardwareTableResonChanged @ 0x1404FBFE4 (PpmEventHgsHardwareTableResonChanged.c)
 *     PpmHeteroGetWpsHardwareCapabilities @ 0x140516E88 (PpmHeteroGetWpsHardwareCapabilities.c)
 *     PpmHeteroHgsUpdateContainmentConfiguration @ 0x14051704C (PpmHeteroHgsUpdateContainmentConfiguration.c)
 *     Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline @ 0x14060D2B8 (Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ReinitWpsMinEfficiency__private_IsEnabledDeviceUsageNoInline @ 0x14060D314 (Feature_ReinitWpsMinEfficiency__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline @ 0x14060D3CC (Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmHeteroReadWpsConfigurationFromPlatform @ 0x14060E690 (PpmHeteroReadWpsConfigurationFromPlatform.c)
 *     PpmEventWpsParkingTableUpdateReason @ 0x140612074 (PpmEventWpsParkingTableUpdateReason.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall PpmHeteroUpdateHgsConfiguration(__int64 a1)
{
  __int64 v1; // r12
  int v2; // ebx
  char v3; // si
  unsigned __int16 v4; // cx
  __int64 v5; // rdx
  bool v6; // zf
  BOOL v7; // r13d
  __int64 v8; // rcx
  unsigned int v9; // r15d
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 Prcb; // rsi
  int *v14; // r14
  __int64 v15; // rax
  int v16; // esi
  char v17; // cl
  char v18; // r12
  __int64 v19; // rax
  char v20; // cl
  int IsEnabledDeviceUsageNoInline; // eax
  char v22; // r14
  struct _KAFFINITY_EX *v23; // rcx
  struct _KAFFINITY_EX *v24; // rcx
  char v25; // bl
  int v26; // eax
  __int64 v27; // rbx
  char v28; // al
  __int64 v29; // rcx
  _BYTE *v30; // r10
  int v31; // eax
  int v32; // r9d
  unsigned int v33; // r11d
  size_t j; // rbx
  __int64 v35; // rcx
  __int64 v36; // r8
  char v37; // al
  int v38; // eax
  char v39; // r14
  __int64 v40; // rcx
  unsigned int v41; // r10d
  unsigned int i; // esi
  __int64 v43; // rdx
  _BYTE *v44; // rax
  __int64 v45; // r9
  unsigned __int8 v46; // cl
  int v47; // eax
  __int64 *v48; // rdx
  struct _KAFFINITY_EX *v49; // rax
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int64 *v57; // rcx
  struct _KAFFINITY_EX *v58; // rax
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int64 v66; // rcx
  __int64 v67; // rdx
  char WpsConfigurationFromPlatform; // [rsp+48h] [rbp-C0h]
  __int16 v70; // [rsp+49h] [rbp-BFh]
  char v71; // [rsp+4Bh] [rbp-BDh] BYREF
  __int16 v72; // [rsp+4Ch] [rbp-BCh] BYREF
  char v73; // [rsp+4Eh] [rbp-BAh]
  unsigned int v74; // [rsp+50h] [rbp-B8h] BYREF
  int v75; // [rsp+54h] [rbp-B4h] BYREF
  __int128 v76; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v77; // [rsp+68h] [rbp-A0h]
  __int64 v78; // [rsp+70h] [rbp-98h]
  __int64 v79; // [rsp+78h] [rbp-90h]
  struct _KAFFINITY_EX v80; // [rsp+88h] [rbp-80h] BYREF
  struct _KAFFINITY_EX v81; // [rsp+198h] [rbp+90h] BYREF
  struct _KAFFINITY_EX v82; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int64 v83; // [rsp+3B8h] [rbp+2B0h] BYREF
  _BYTE v84[264]; // [rsp+3C0h] [rbp+2B8h] BYREF
  __int64 v85; // [rsp+4C8h] [rbp+3C0h] BYREF
  _BYTE v86[264]; // [rsp+4D0h] [rbp+3C8h] BYREF
  __int64 v87; // [rsp+5D8h] [rbp+4D0h] BYREF
  _BYTE v88[264]; // [rsp+5E0h] [rbp+4D8h] BYREF

  v1 = a1;
  v79 = a1;
  v72 = 0;
  memset_0(&v81, 0, sizeof(v81));
  memset_0(&v87, 0, 0x108uLL);
  v77 = 0LL;
  v76 = 0LL;
  memset_0(&v80, 0, sizeof(v80));
  v74 = 0;
  memset_0(&v83, 0, 0x108uLL);
  v71 = 0;
  memset_0(&v82, 0, sizeof(v82));
  memset_0(&v85, 0, 0x108uLL);
  v2 = 0;
  v3 = 0;
  v70 = 0;
  if ( PpmHeteroHgsEnabled )
  {
    v4 = 0;
    if ( PpmCheckRegistered.Count )
    {
      while ( !PpmCheckRegistered.Bitmap[v4] )
      {
        if ( ++v4 >= PpmCheckRegistered.Count )
          return v3;
      }
      WpsConfigurationFromPlatform = 0;
      if ( (unsigned int)((__int64 (*)(void))Feature_ReinitWpsMinEfficiency__private_IsEnabledDeviceUsageNoInline)() )
      {
        WpsConfigurationFromPlatform = PpmHeteroReadWpsConfigurationFromPlatform();
        if ( WpsConfigurationFromPlatform )
          goto LABEL_12;
        v6 = PpmHeteroHgsPopulated == 0;
      }
      else
      {
        if ( !PpmHeteroCheckWpsTableUpdated )
          return v3;
        v6 = (unsigned __int8)guard_dispatch_icall_no_overrides(PpmHeteroWpsUpdateInterfaceHandle, v5) == 0;
      }
      if ( !v6 )
      {
LABEL_12:
        v7 = PpmHeteroHgsPopulated == 0;
        PpmHeteroHgsPopulated = 1;
        LODWORD(v78) = v7;
        *(_QWORD *)&v80.Count = 2097153LL;
        memset_0(&v80.8, 0, sizeof(v80.8));
        *(_QWORD *)&PpmParkNewForceParkingMask.Count = 2097153LL;
        memset_0(&PpmParkNewForceParkingMask.8, 0, sizeof(PpmParkNewForceParkingMask.8));
        RtlpCopyAffinityEx(&v80, v80.Size, &PpmCheckRegistered);
        v9 = 0;
        v75 = 0;
        v10 = 2LL;
        if ( *(_DWORD *)(PpmHeteroCapability + 4) )
        {
          do
          {
            *(_QWORD *)&v81.Count = 2097153LL;
            memset_0(&v81.8, 0, sizeof(v81.8));
            *(_QWORD *)&v82.Count = 2097153LL;
            memset_0(&v82.8, 0, sizeof(v82.8));
            v87 = 2097153LL;
            memset_0(v88, 0, 0x100uLL);
            v85 = 2097153LL;
            memset_0(v86, 0, 0x100uLL);
            v83 = 2097153LL;
            memset_0(v84, 0, 0x100uLL);
            *((_QWORD *)&v76 + 1) = PpmCheckRegistered.Bitmap[0];
            LOWORD(v77) = 0;
            *(_QWORD *)&v76 = &PpmCheckRegistered;
            if ( !(unsigned int)KeEnumerateNextProcessor(&v74, (unsigned __int16 **)&v76) )
            {
              while ( 1 )
              {
                v12 = v74;
                Prcb = KeGetPrcb(v74);
                v14 = *(int **)(Prcb + 35456);
                if ( (unsigned int)((__int64 (*)(void))Feature_ReinitWpsMinEfficiency__private_IsEnabledDeviceUsageNoInline)() )
                {
                  v15 = *(_QWORD *)(Prcb + 35424);
                  v16 = *v14;
                  v75 = *v14;
                  v17 = *(_BYTE *)(v15 + 4LL * v9 + 7);
                  v18 = *(_BYTE *)(v15 + 4LL * v9 + 6);
                  LOBYTE(v15) = *((_BYTE *)v14 + 8);
                  v73 = v17;
                  LOBYTE(v72) = v17;
                  HIBYTE(v72) = v15;
                  v71 = v18;
                }
                else
                {
                  PpmHeteroGetWpsHardwareCapabilities(v12, v9, &v72, &v71, &v75, (_BYTE *)&v72 + 1, 0LL);
                  v19 = *(_QWORD *)(Prcb + 35424);
                  v20 = v72;
                  v18 = v71;
                  v16 = v75;
                  *(_BYTE *)(v19 + 4LL * v9 + 7) = v72;
                  v73 = v20;
                  *(_BYTE *)(v19 + 4LL * v9 + 6) = v18;
                  if ( !v9 )
                  {
                    *((_BYTE *)v14 + 8) = HIBYTE(v72);
                    *v14 = v16;
                  }
                }
                if ( !PpmHeteroHgsParkingHintEnabled )
                  break;
                IsEnabledDeviceUsageNoInline = Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline(0LL);
                v22 = PpmHeteroHgsVendor;
                if ( IsEnabledDeviceUsageNoInline )
                {
                  if ( ((PpmHeteroHgsVendor - 1) & 0xFD) == 0 && v9 )
                    goto LABEL_44;
                }
                else if ( PpmHeteroHgsVendor == 3 && v9 )
                {
                  goto LABEL_44;
                }
                if ( !PpmHeteroHgsThreadEnabled || !PpmHeteroHgsEePerfHintsIndependentEnabled )
                {
                  if ( (PpmHeteroHgsVendor != 2 || v73 && v18) && (unsigned int)(v16 - 1) > 1 )
                  {
                    KeAddProcessorAffinityEx((unsigned __int16 *)&v87, v12);
                    v24 = (struct _KAFFINITY_EX *)&v85;
                  }
                  else
                  {
                    KeAddProcessorAffinityEx(&v81.Count, v12);
                    v24 = &v82;
                  }
                  goto LABEL_43;
                }
                if ( PpmHeteroHgsVendor == 2 && !v18
                  || (v23 = (struct _KAFFINITY_EX *)&v85, (unsigned int)(v16 - 1) <= 1) )
                {
                  v23 = &v82;
                }
                KeAddProcessorAffinityEx(&v23->Count, v12);
                if ( (v22 != 2 || v73) && (unsigned int)(v16 - 1) > 1 )
                  goto LABEL_42;
                v24 = &v81;
LABEL_43:
                KeAddProcessorAffinityEx(&v24->Count, v12);
LABEL_44:
                if ( (unsigned int)KeEnumerateNextProcessor(&v74, (unsigned __int16 **)&v76) )
                {
                  v1 = v79;
                  v3 = HIBYTE(v70);
                  goto LABEL_46;
                }
              }
              KeAddProcessorAffinityEx((unsigned __int16 *)&v85, v12);
LABEL_42:
              v24 = (struct _KAFFINITY_EX *)&v87;
              goto LABEL_43;
            }
LABEL_46:
            if ( (unsigned int)Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline(v11)
              && PpmHeteroHgsParkingHintEnabled
              && ((PpmHeteroHgsVendor - 1) & 0xFD) == 0
              && v9 )
            {
              RtlpCopyAffinityEx(&v82, v82.Size, &v80);
              RtlpCopyAffinityEx(&v81, v81.Size, &v80);
              RtlSubtractAffinityEx(&PpmCheckRegistered, &v80, (__int64)&v85);
              RtlSubtractAffinityEx(&PpmCheckRegistered, &v80, (__int64)&v87);
            }
            v25 = v3 | PPmHeteroHgsUpdateOrderValue(v1, (__int64)&v85, (__int64)&v82, v9, 1);
            v3 = v25 | PPmHeteroHgsUpdateOrderValue(v1, (__int64)&v87, (__int64)&v81, v9, 0);
            HIBYTE(v70) = v3;
            RtlAndAffinityEx(&v82.Count, &v81.Count, (__int64)&v83);
            RtlAndAffinityEx(&v80.Count, (unsigned __int16 *)&v83, (__int64)&v80);
            ++v9;
            v2 = 0;
          }
          while ( v9 < *(_DWORD *)(PpmHeteroCapability + 4) );
          LOBYTE(v7) = v78;
        }
        if ( PpmHeteroHgsParkingHintEnabled )
        {
          Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline(v8);
          *((_QWORD *)&v76 + 1) = PpmCheckRegistered.Bitmap[0];
          LOWORD(v77) = 0;
          *(_QWORD *)&v76 = &PpmCheckRegistered;
          v26 = KeEnumerateNextProcessor(&v74, (unsigned __int16 **)&v76);
          while ( !v26 )
          {
            v27 = KeGetPrcb(v74);
            v28 = KeCheckProcessorAffinityEx(&v80.Count, v74);
            if ( *(_BYTE *)(v27 + 35420) != v28 )
            {
              HIBYTE(v70) = 1;
              *(_BYTE *)(v27 + 35420) = v28;
            }
            v26 = KeEnumerateNextProcessor(&v74, (unsigned __int16 **)&v76);
            v2 = 0;
          }
        }
        if ( (unsigned int)((__int64 (*)(void))Feature_ReinitWpsMinEfficiency__private_IsEnabledDeviceUsageNoInline)() )
        {
          v39 = WpsConfigurationFromPlatform;
          if ( WpsConfigurationFromPlatform
            && PpmHeteroHgsVendor == 2
            && PpmHeteroHgsDynamicUpdateEnabled
            && PpmHeteroHgsDynamicUpdateReasonEnabled
            && PpmHeteroHgsNewUpdateReason
            && PpmHeteroHgsOldUpdateReason )
          {
            v41 = 0;
            for ( i = 2 * PpmHeteroWorkloadClasses; v41 < (unsigned int)PpmHeteroWorkloadClasses; v2 = v47 )
            {
              v43 = PpmHeteroHgsTableEntry;
              v44 = PpmHeteroHgsNewUpdateReason;
              v45 = PpmHgsUpdateChangeReasonOffset + PpmHeteroHgsCapabilityBits * v41;
              v46 = *(_BYTE *)(PpmHeteroHgsTableEntry + v45);
              *((_BYTE *)PpmHeteroHgsNewUpdateReason + 2 * v41) = v46;
              LOBYTE(v43) = *(_BYTE *)(v43 + v45 + 1);
              v44[2 * v41 + 1] = v43;
              v47 = v2 + 1;
              if ( (v46 & (unsigned __int8)v43 & 2) == 0 )
                v47 = v2;
              ++v41;
            }
            if ( (unsigned int)Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline()
              && PpmHeteroCheckInitTableBit )
            {
              guard_dispatch_icall_no_overrides(
                0LL,
                (unsigned int)PpmHgsUpdateChangeReasonOffset + PpmHeteroHgsTableEntry);
            }
            LOBYTE(v70) = v2 == (_DWORD)PpmHeteroWorkloadClasses;
            if ( RtlCompareMemory(PpmHeteroHgsNewUpdateReason, PpmHeteroHgsOldUpdateReason, i) != i )
            {
              memmove(PpmHeteroHgsOldUpdateReason, PpmHeteroHgsNewUpdateReason, i);
              PpmEventHgsHardwareTableResonChanged(0);
            }
          }
        }
        else if ( PpmHeteroHgsVendor == 2
               && PpmHeteroHgsDynamicUpdateEnabled
               && PpmHeteroHgsDynamicUpdateReasonEnabled
               && (v30 = PpmHeteroHgsNewUpdateReason) != 0LL
               && PpmHeteroHgsOldUpdateReason )
        {
          v31 = PpmHeteroWorkloadClasses;
          v32 = 0;
          v33 = 0;
          for ( j = (unsigned int)(2 * PpmHeteroWorkloadClasses);
                v33 < (unsigned int)PpmHeteroWorkloadClasses;
                v31 = PpmHeteroWorkloadClasses )
          {
            v35 = PpmHeteroHgsTableEntry;
            v30 = PpmHeteroHgsNewUpdateReason;
            v36 = PpmHgsUpdateChangeReasonOffset + PpmHeteroHgsCapabilityBits * v33;
            v37 = *(_BYTE *)(PpmHeteroHgsTableEntry + v36);
            *((_BYTE *)PpmHeteroHgsNewUpdateReason + 2 * v33) = v37;
            LOBYTE(v35) = *(_BYTE *)(v35 + v36 + 1);
            v30[2 * v33 + 1] = v35;
            LOBYTE(v35) = v37 & v35;
            v38 = v32 + 1;
            if ( (v35 & 2) == 0 )
              v38 = v32;
            ++v33;
            v32 = v38;
          }
          LOBYTE(v70) = v32 == v31;
          if ( RtlCompareMemory(v30, PpmHeteroHgsOldUpdateReason, j) != j )
          {
            memmove(PpmHeteroHgsOldUpdateReason, PpmHeteroHgsNewUpdateReason, j);
            PpmEventHgsHardwareTableResonChanged(0);
          }
          v39 = WpsConfigurationFromPlatform;
        }
        else
        {
          v39 = WpsConfigurationFromPlatform;
        }
        if ( (unsigned int)Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline(v29) )
        {
          if ( ((PpmHeteroHgsVendor - 1) & 0xFD) == 0 )
          {
            *(_QWORD *)&v80.Count = 2097153LL;
            memset_0(&v80.8, 0, sizeof(v80.8));
            *((_QWORD *)&v76 + 1) = PpmCheckRegistered.Bitmap[0];
            *(_QWORD *)&v76 = &PpmCheckRegistered;
            LOWORD(v77) = 0;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v74, (unsigned __int16 **)&v76) )
            {
              if ( **(_DWORD **)(KeGetPrcb(v74) + 35456) == 2 )
                KeAddProcessorAffinityEx(&v80.Count, v74);
            }
            v40 = 0LL;
            if ( v80.Count )
            {
              while ( !v80.Bitmap[(unsigned __int16)v40] )
              {
                LOWORD(v40) = v40 + 1;
                if ( (unsigned __int16)v40 >= v80.Count )
                  goto LABEL_107;
              }
              goto LABEL_98;
            }
          }
        }
        else if ( PpmHeteroHgsVendor == 3 )
        {
          *(_QWORD *)&v80.Count = 2097153LL;
          memset_0(&v80.8, 0, sizeof(v80.8));
          *((_QWORD *)&v76 + 1) = PpmCheckRegistered.Bitmap[0];
          *(_QWORD *)&v76 = &PpmCheckRegistered;
          LOWORD(v77) = 0;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v74, (unsigned __int16 **)&v76) )
          {
            if ( **(_DWORD **)(KeGetPrcb(v74) + 35456) == 2 )
              KeAddProcessorAffinityEx(&v80.Count, v74);
          }
          v40 = 0LL;
          if ( v80.Count )
          {
            while ( !v80.Bitmap[(unsigned __int16)v40] )
            {
              LOWORD(v40) = v40 + 1;
              if ( (unsigned __int16)v40 >= v80.Count )
                goto LABEL_107;
            }
LABEL_98:
            LOBYTE(v40) = 1;
LABEL_108:
            if ( PpmHeteroHgsDynamicUpdateEnabled && KeIsForceParkingEnabled() && (_BYTE)v40 )
            {
              Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline(v40);
              RtlpCopyAffinityEx(&PpmParkNewForceParkingMask, PpmParkNewForceParkingMask.Size, &v80);
            }
            if ( (unsigned int)Feature_ReinitWpsMinEfficiency__private_IsEnabledDeviceUsageNoInline(v40) )
            {
              v57 = &v83;
              v58 = &v80;
              do
              {
                v59 = *(_OWORD *)&v58->StaticBitmap[1];
                *(_OWORD *)v57 = *(_OWORD *)&v58->Count;
                v60 = *(_OWORD *)&v58->StaticBitmap[3];
                *((_OWORD *)v57 + 1) = v59;
                v61 = *(_OWORD *)&v58->StaticBitmap[5];
                *((_OWORD *)v57 + 2) = v60;
                v62 = *(_OWORD *)&v58->StaticBitmap[7];
                *((_OWORD *)v57 + 3) = v61;
                v63 = *(_OWORD *)&v58->StaticBitmap[9];
                *((_OWORD *)v57 + 4) = v62;
                v64 = *(_OWORD *)&v58->StaticBitmap[11];
                *((_OWORD *)v57 + 5) = v63;
                v65 = *(_OWORD *)&v58->StaticBitmap[13];
                v58 = (struct _KAFFINITY_EX *)((char *)v58 + 128);
                *((_OWORD *)v57 + 6) = v64;
                v57 += 16;
                *((_OWORD *)v57 - 1) = v65;
                --v10;
              }
              while ( v10 );
              *v57 = *(_QWORD *)&v58->Count;
              PpmHeteroHgsUpdateContainmentConfiguration(v7, &v83);
              if ( !v39 )
                return HIBYTE(v70);
              if ( PpmHeteroWpsParkingUpdateReasonEnabled )
              {
                Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline(v66);
                PpmEventWpsParkingTableUpdateReason(0LL);
              }
            }
            else
            {
              if ( PpmHeteroWpsParkingUpdateReasonEnabled )
                PpmEventWpsParkingTableUpdateReason(0LL);
              v48 = &v83;
              v49 = &v80;
              do
              {
                v50 = *(_OWORD *)&v49->StaticBitmap[1];
                *(_OWORD *)v48 = *(_OWORD *)&v49->Count;
                v51 = *(_OWORD *)&v49->StaticBitmap[3];
                *((_OWORD *)v48 + 1) = v50;
                v52 = *(_OWORD *)&v49->StaticBitmap[5];
                *((_OWORD *)v48 + 2) = v51;
                v53 = *(_OWORD *)&v49->StaticBitmap[7];
                *((_OWORD *)v48 + 3) = v52;
                v54 = *(_OWORD *)&v49->StaticBitmap[9];
                *((_OWORD *)v48 + 4) = v53;
                v55 = *(_OWORD *)&v49->StaticBitmap[11];
                *((_OWORD *)v48 + 5) = v54;
                v56 = *(_OWORD *)&v49->StaticBitmap[13];
                v49 = (struct _KAFFINITY_EX *)((char *)v49 + 128);
                *((_OWORD *)v48 + 6) = v55;
                v48 += 16;
                *((_OWORD *)v48 - 1) = v56;
                --v10;
              }
              while ( v10 );
              *v48 = *(_QWORD *)&v49->Count;
              PpmHeteroHgsUpdateContainmentConfiguration(v7, &v83);
            }
            PpmEventHgsHardwareTable(0);
            guard_dispatch_icall_no_overrides(PpmHeteroWpsUpdateInterfaceHandle, v67);
            return HIBYTE(v70);
          }
        }
LABEL_107:
        LOBYTE(v40) = v70;
        goto LABEL_108;
      }
    }
  }
  return v3;
}
