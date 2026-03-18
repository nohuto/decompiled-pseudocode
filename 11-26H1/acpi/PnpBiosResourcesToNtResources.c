/*
 * XREFs of PnpBiosResourcesToNtResources @ 0x1400CE578
 * Callers:
 *     PnpDeviceBiosResourcesToNtResources @ 0x14004B890 (PnpDeviceBiosResourcesToNtResources.c)
 *     TranslateBindMutexResources @ 0x14005CE2C (TranslateBindMutexResources.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1400B1798 (ACPIIoctlTranslateBiosResources.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1400B51C0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     TranslateEjectInterface @ 0x1400BB8B8 (TranslateEjectInterface.c)
 *     LinkNodeGetPossibleResources @ 0x1400BC2C8 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_L @ 0x1400385BC (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_d @ 0x1400386C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qL @ 0x14003B520 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_LL @ 0x14004EF4C (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_dL @ 0x140052490 (WPP_RECORDER_SF_dL.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x140053CF8 (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     WPP_RECORDER_SF_dqLD @ 0x140054E20 (WPP_RECORDER_SF_dqLD.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     PnpiClearAllocatedMemory @ 0x1400A870C (PnpiClearAllocatedMemory.c)
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1400A9ED8 (PnpiBiosExtendedIrqToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1400B76BC (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1400B7B04 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptor @ 0x1400B7F18 (PnpiBiosDmaToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptorV3 @ 0x1400B7FE4 (PnpiBiosDmaToIoDescriptorV3.c)
 *     PnpiBiosFunctionConfigToNtIoDescriptor @ 0x1400B804C (PnpiBiosFunctionConfigToNtIoDescriptor.c)
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1400B80B0 (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 *     PnpiBiosIrqToIoDescriptor @ 0x1400B8114 (PnpiBiosIrqToIoDescriptor.c)
 *     PnpiBiosPortFixedToIoDescriptor @ 0x1400B81E8 (PnpiBiosPortFixedToIoDescriptor.c)
 *     PnpiBiosPortToIoDescriptor @ 0x1400B826C (PnpiBiosPortToIoDescriptor.c)
 *     PnpiBiosSerialBusToIoDescriptor @ 0x1400B8304 (PnpiBiosSerialBusToIoDescriptor.c)
 *     PnpiBiosVendorToNtIoDescriptor @ 0x1400B8368 (PnpiBiosVendorToNtIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1400CE1DC (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosMemoryToIoDescriptor @ 0x1400CF1D4 (PnpiBiosMemoryToIoDescriptor.c)
 *     PnpiGrowResourceList @ 0x1400CF46C (PnpiGrowResourceList.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1400CF578 (PnpiBiosAddressDoubleToIoDescriptor.c)
 */

__int64 __fastcall PnpBiosResourcesToNtResources(ULONG_PTR a1, _BYTE *a2, unsigned int a3, __int64 *a4)
{
  ULONG_PTR v4; // r13
  int v5; // esi
  int v6; // eax
  int v7; // edx
  __int64 v8; // r8
  int v9; // ebx
  PVOID *v10; // r15
  unsigned __int8 v11; // di
  int v12; // edx
  char v13; // al
  _BYTE *v14; // rsi
  __int16 v15; // cx
  int v16; // edx
  int v17; // eax
  int v18; // r9d
  unsigned int v19; // edi
  int v20; // eax
  unsigned __int8 v21; // di
  __int16 v22; // r13
  unsigned __int8 k; // si
  int v24; // r9d
  unsigned __int16 v25; // di
  unsigned __int16 j; // si
  char v27; // al
  int v28; // eax
  int v29; // edx
  char v30; // di
  unsigned __int8 v31; // r13
  unsigned __int8 v32; // al
  __int64 DeviceExtension; // rdi
  unsigned __int8 v34; // r12
  int v35; // eax
  int v36; // edx
  unsigned int v37; // esi
  unsigned int v38; // r13d
  unsigned int v39; // ebx
  int v40; // edi
  _DWORD *v41; // rcx
  int v42; // eax
  int v44; // eax
  unsigned int v45; // ebx
  int v46; // r9d
  __int64 Pool2; // rax
  int v48; // edx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdi
  int v52; // edx
  char *v53; // rdi
  unsigned int v54; // r12d
  _DWORD *v55; // rcx
  int v56; // eax
  size_t v57; // rbx
  char *v58; // rdi
  unsigned int i; // esi
  _DWORD *v60; // rcx
  int v61; // eax
  size_t v62; // rbx
  int v63; // [rsp+28h] [rbp-49h]
  __int64 v64; // [rsp+30h] [rbp-41h]
  char v65; // [rsp+30h] [rbp-41h]
  char v66; // [rsp+30h] [rbp-41h]
  unsigned int v67; // [rsp+58h] [rbp-19h]
  char v68; // [rsp+5Ch] [rbp-15h]
  char v69[3]; // [rsp+5Dh] [rbp-14h] BYREF
  unsigned int v70; // [rsp+60h] [rbp-11h] BYREF
  int v71; // [rsp+64h] [rbp-Dh]
  int v72; // [rsp+68h] [rbp-9h]
  unsigned __int16 v73; // [rsp+6Ch] [rbp-5h]
  unsigned int v74; // [rsp+70h] [rbp-1h]
  int v75; // [rsp+74h] [rbp+3h]
  PVOID P; // [rsp+78h] [rbp+7h] BYREF
  int v77; // [rsp+80h] [rbp+Fh]
  int v78; // [rsp+84h] [rbp+13h]
  _BYTE *v80; // [rsp+E0h] [rbp+6Fh]

  v80 = a2;
  v4 = (ULONG_PTR)a2;
  P = 0LL;
  v70 = 0;
  v67 = 0;
  v5 = 0;
  v74 = 0;
  v69[0] = 0;
  v71 = 0;
  v72 = 0;
  v6 = PnpiGrowResourceList(&P, &v70);
  v9 = v6;
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_L(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        13,
        33,
        (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids,
        v6);
    }
    return (unsigned int)v9;
  }
  v10 = (PVOID *)P;
  v75 = 32;
  while ( 1 )
  {
    v11 = *(_BYTE *)v4;
    v12 = 3;
    v77 = v5;
    if ( (v11 & 0x80u) != 0 )
    {
      v14 = (_BYTE *)(v4 + 1);
      v15 = *(_WORD *)(v4 + 1) + 3;
      v73 = v15;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_LL(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          14,
          35,
          (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids,
          v11,
          v15);
      }
    }
    else
    {
      v13 = (v11 & 7) + 1;
      v73 = (v11 & 7) + 1;
      v11 &= 0x78u;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_LL(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          14,
          34,
          (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids,
          v11,
          v13);
      }
      v14 = (_BYTE *)(v4 + 1);
    }
    if ( v11 == 120 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          14,
          36,
          (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids);
      }
      v36 = 0;
      if ( !v71 || v72 == v71 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v36) = 4;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v36,
            14,
            55,
            (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids);
        }
        PnpiClearAllocatedMemory(v10, v70);
        *a4 = 0LL;
        return (unsigned int)v9;
      }
      if ( *v10 )
        v37 = *((_DWORD *)*v10 + 1);
      else
        v37 = 0;
      v38 = v74;
      v39 = 1;
      v40 = 32;
      while ( v39 <= v38 )
      {
        v41 = v10[v39];
        if ( !v41 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v64) = v39;
            LOBYTE(v36) = 2;
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              v36,
              13,
              57,
              (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids,
              v64);
          }
          goto LABEL_141;
        }
        v42 = v41[1];
        if ( v42 )
        {
          v40 += 32 * (v37 + v42) + 8;
          v75 = v40;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v36) = 4;
            WPP_RECORDER_SF_dL(WPP_GLOBAL_Control->DeviceExtension, v36, 14, 58, v63, v39, v40);
            v36 = 0;
          }
        }
        ++v39;
      }
      if ( v38 )
      {
        v45 = v75;
      }
      else
      {
        if ( !*v10 || (v44 = *((_DWORD *)*v10 + 1)) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
LABEL_141:
            PnpiClearAllocatedMemory(v10, v70);
            *a4 = 0LL;
            return 3221225473LL;
          }
          v46 = 59;
LABEL_148:
          LOBYTE(v36) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v36,
            13,
            v46,
            (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids);
          goto LABEL_141;
        }
        v45 = 32 * v44 + v75 + 8;
      }
      if ( v45 < 0x48 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_141;
        v46 = 60;
        goto LABEL_148;
      }
      Pool2 = ExAllocatePool2(256LL, v45, 1383097153LL);
      *a4 = Pool2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v48) = 4;
        WPP_RECORDER_SF_qL(
          WPP_GLOBAL_Control->DeviceExtension,
          v48,
          14,
          61,
          (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids,
          Pool2,
          v45);
      }
      v51 = *a4;
      v52 = 0;
      if ( !*a4 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v52) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v52,
            13,
            62,
            (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids);
        }
        v9 = -1073741670;
        goto LABEL_159;
      }
      *(_QWORD *)(v51 + 4) = 15LL;
      *(_DWORD *)v51 = v45;
      v53 = (char *)(v51 + 32);
      v54 = 1;
      if ( v38 )
      {
        if ( !v37 )
        {
          for ( i = 1; i <= v38; ++i )
          {
            v60 = v10[i];
            v61 = v60[1];
            if ( v61 )
            {
              v60[1] = v61;
              v62 = (unsigned int)(32 * v61 + 8);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_dqLD((__int64)WPP_GLOBAL_Control->DeviceExtension, 0LL, v49, v50, v63);
              memmove(v53, v10[i], v62);
              v53 += v62;
              ++*(_DWORD *)(*a4 + 28);
            }
          }
          goto LABEL_169;
        }
        do
        {
          v55 = v10[v54];
          v56 = v55[1];
          if ( v56 )
          {
            v57 = (unsigned int)(32 * v56 + 8);
            v55[1] = v37 + v56;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_dqLD((__int64)WPP_GLOBAL_Control->DeviceExtension, 0LL, v49, v50, v63);
            memmove(v53, v10[v54], v57);
            v58 = &v53[v57];
            memmove(v58, (char *)*v10 + 8, 32LL * v37);
            v53 = &v58[32 * v37];
            ++*(_DWORD *)(*a4 + 28);
          }
          v38 = v74;
          ++v54;
        }
        while ( v54 <= v74 );
      }
      if ( !v38 )
      {
        memmove(v53, *v10, 32 * v37 + 8);
        ++*(_DWORD *)(*a4 + 28);
      }
LABEL_169:
      PnpiClearAllocatedMemory(v10, v70);
      return 0LL;
    }
    v16 = v11;
    ++v71;
    v78 = v11;
    if ( v11 <= 0x85u )
    {
      if ( v11 == 133 )
        goto LABEL_119;
      if ( v11 > 0x48u )
      {
        if ( v11 != 80 )
        {
          switch ( v11 )
          {
            case 0x70u:
              ++v72;
              v9 = 0;
LABEL_48:
              v5 = v71;
              goto LABEL_49;
            case 0x81u:
              goto LABEL_119;
            case 0x84u:
              v9 = 0;
              if ( a1 )
              {
                v28 = PnpiBiosVendorToNtIoDescriptor(a1, v4, v8, (__int64)v10, v67, a3, v69);
                if ( v28 < 0 || !v69[0] )
                  ++v72;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v29) = 4;
                  WPP_RECORDER_SF_L(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v29,
                    14,
                    53,
                    (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids,
                    v28);
                }
              }
              else
              {
                ++v72;
              }
              goto LABEL_48;
          }
          goto LABEL_77;
        }
        v17 = PnpiBiosDmaToIoDescriptorV3(v4, (__int64)v10, v67);
        v9 = v17;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_47;
        v18 = 40;
      }
      else
      {
        if ( v11 != 72 )
        {
          switch ( v11 )
          {
            case ' ':
              v25 = *(_WORD *)(v4 + 1);
              v22 = 0;
              for ( j = 0; v25; v25 >>= 1 )
              {
                if ( v9 < 0 )
                  break;
                if ( (v25 & 1) != 0 )
                  v9 = PnpiBiosIrqToIoDescriptor(v80, j, (__int64)v10, v67, v22++);
                ++j;
              }
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_46;
              v24 = 37;
              break;
            case '(':
              v21 = *(_BYTE *)(v4 + 1);
              v22 = 0;
              for ( k = 0; v21; v21 >>= 1 )
              {
                if ( v9 < 0 )
                  break;
                if ( (v21 & 1) != 0 )
                  v9 = PnpiBiosDmaToIoDescriptor((__int64)v80, k, (__int64)v10, v67, v22++);
                ++k;
              }
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
LABEL_46:
                v4 = (ULONG_PTR)v80;
                goto LABEL_47;
              }
              v24 = 39;
              break;
            case '0':
              v19 = v74 + 1;
              v74 = v19;
              v67 = v19;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v16) = 4;
                WPP_RECORDER_SF_L(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v16,
                  14,
                  41,
                  (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids,
                  v19);
              }
              if ( v19 == v70 )
              {
                v20 = PnpiGrowResourceList(&P, &v70);
                v10 = (PVOID *)P;
                v9 = v20;
              }
              goto LABEL_47;
            case '8':
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v16) = 4;
                WPP_RECORDER_SF_L(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v16,
                  14,
                  42,
                  (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids,
                  v67);
              }
              v67 = 0;
              goto LABEL_47;
            case '@':
              v17 = PnpiBiosPortToIoDescriptor(v4, (__int64)v10, v67, a3);
              v9 = v17;
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_47;
              v18 = 43;
              goto LABEL_66;
            default:
              goto LABEL_77;
          }
          v27 = v22;
LABEL_45:
          LOBYTE(v16) = 4;
          WPP_RECORDER_SF_LL(
            WPP_GLOBAL_Control->DeviceExtension,
            v16,
            14,
            v24,
            (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids,
            v27,
            v9);
          goto LABEL_46;
        }
        v17 = PnpiBiosPortFixedToIoDescriptor(v4, (__int64)v10, v67, a3);
        v9 = v17;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_47;
        v18 = 44;
      }
LABEL_66:
      v65 = v17;
      goto LABEL_67;
    }
    switch ( v11 )
    {
      case 0x86u:
LABEL_119:
        v17 = PnpiBiosMemoryToIoDescriptor(v4, v10, v67);
        v9 = v17;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_47;
        v18 = 45;
        goto LABEL_66;
      case 0x87u:
        v17 = PnpiBiosAddressDoubleToIoDescriptor(v4);
        v9 = v17;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_47;
        v18 = 47;
        goto LABEL_66;
      case 0x88u:
        v17 = PnpiBiosAddressToIoDescriptor((unsigned __int8 *)v4, (__int64)v10, v67, a3);
        v9 = v17;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_47;
        v18 = 46;
        goto LABEL_66;
    }
    if ( v11 == 137 )
      break;
    switch ( v11 )
    {
      case 0x8Au:
        v17 = PnpiBiosAddressQuadToIoDescriptor((unsigned __int8 *)v4, (__int64)v10, v67, a3);
        v9 = v17;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_47;
        v18 = 48;
        goto LABEL_66;
      case 0x8Bu:
        v17 = PnpiBiosAddressExtendedToIoDescriptor((unsigned __int8 *)v4, (__int64)v10, v67, a3);
        v9 = v17;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_47;
        v18 = 49;
        goto LABEL_66;
      case 0x8Cu:
        v30 = 0;
        if ( a1 )
        {
          do
          {
            if ( v9 < 0 )
              break;
            v9 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, v4, v8, (__int64)v10, v67, a3);
            ++v30;
          }
          while ( !v30 );
        }
        else
        {
          v9 = -1073741637;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 4;
          WPP_RECORDER_SF_LL(
            WPP_GLOBAL_Control->DeviceExtension,
            v16,
            14,
            51,
            (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids,
            v30,
            v9);
        }
        goto LABEL_47;
      case 0x8Du:
        if ( a1 )
          v9 = PnpiBiosFunctionConfigToNtIoDescriptor(a1, v4, v8, (__int64)v10, v67, a3);
        else
          v9 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_47;
        v18 = 50;
LABEL_90:
        v65 = v9;
LABEL_67:
        LOBYTE(v16) = 4;
        WPP_RECORDER_SF_L(
          WPP_GLOBAL_Control->DeviceExtension,
          v16,
          14,
          v18,
          (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids,
          v65);
        goto LABEL_47;
      case 0x8Eu:
        if ( a1 )
          v9 = PnpiBiosSerialBusToIoDescriptor(a1, v4, v8, (__int64)v10, v67, a3);
        else
          v9 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = 52;
          goto LABEL_90;
        }
LABEL_47:
        if ( v9 < 0 )
        {
          v16 = v78;
          goto LABEL_123;
        }
        goto LABEL_48;
    }
LABEL_77:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_L(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        13,
        54,
        (__int64)&WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids,
        v11);
    }
    v5 = v77;
    v9 = 0;
    v71 = v77;
LABEL_49:
    v4 += v73;
    v80 = (_BYTE *)v4;
  }
  v31 = *(_BYTE *)(v4 + 4);
  v68 = 0;
  v32 = 4 * v31 + 5;
  if ( AcpiInterruptCombiningSupported != 1 || (LOBYTE(v8) = *v14 + 3, (unsigned __int8)v8 <= v32) )
  {
    DeviceExtension = 0LL;
    if ( gAcpiHonorBiosPolarities && a1 )
      DeviceExtension = ACPIInternalGetDeviceExtension(a1);
    if ( v31 )
    {
      v34 = 0;
      do
      {
        if ( v9 < 0 )
          break;
        v35 = PnpiBiosExtendedIrqToIoDescriptor(DeviceExtension, (__int64)v80, v34++, (__int64)v10, v67);
        v9 = v35;
      }
      while ( v34 < v31 );
      v68 = v34;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_46;
    v27 = v68;
    v24 = 38;
    goto LABEL_45;
  }
  if ( a1 )
  {
    v4 = (ULONG_PTR)v80;
    v9 = PnpiBiosInterruptCombineToIoDescriptor(a1, (__int64)v80, (unsigned __int8)v8 - v32 - 1, (int)v10, v67, a3);
    goto LABEL_47;
  }
  v9 = -1073741637;
LABEL_123:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v66 = v16;
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_dL(WPP_GLOBAL_Control->DeviceExtension, v16, 13, 56, v63, v66, v9);
  }
LABEL_159:
  PnpiClearAllocatedMemory(v10, v70);
  return (unsigned int)v9;
}
