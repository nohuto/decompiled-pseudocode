/*
 * XREFs of ACPIBusIrpQueryResourceRequirements @ 0x1400C9940
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x14001B834 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x14003D6E4 (ACPIDebugGetIrpText.c)
 *     ACPIInternalInterruptPolarityCacheStorePolaritiesFromList @ 0x14004B7F4 (ACPIInternalInterruptPolarityCacheStorePolaritiesFromList.c)
 *     ACPIRangeValidatePciResources @ 0x14004BB74 (ACPIRangeValidatePciResources.c)
 *     ACPIRangeFilterPICInterrupt @ 0x14006814C (ACPIRangeFilterPICInterrupt.c)
 *     ACPIInternalSetSpare @ 0x1400CA548 (ACPIInternalSetSpare.c)
 *     PnpBiosGetDeviceResourceList @ 0x1400CA68C (PnpBiosGetDeviceResourceList.c)
 *     ACPIInternalSetProximityDomain @ 0x1400CA8FC (ACPIInternalSetProximityDomain.c)
 */

__int64 __fastcall ACPIBusIrpQueryResourceRequirements(ULONG_PTR a1, IRP *a2)
{
  char v2; // si
  unsigned __int8 MinorFunction; // r12
  __int64 DeviceExtension; // rdi
  const char *v7; // r14
  __int64 v8; // rcx
  int DeviceResourceList; // ebx
  const char *v10; // r8
  __int64 v11; // rax
  char *IrpText; // rax
  const char *v13; // r8
  const char *v14; // r10
  char v15; // r11
  __int64 v16; // rcx
  _DWORD *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rax
  char *v20; // rax
  const char *v21; // r8
  int v22; // eax
  char v23; // r10
  const char *v24; // r8
  const char *v25; // rdx
  __int64 v26; // rcx
  _DWORD *v27; // r8
  unsigned int i; // r9d
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  char v31; // cl
  unsigned __int64 j; // rcx
  _DWORD *v33; // rcx
  unsigned int k; // r8d
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  const char *v38; // rdx
  const char *v39; // rcx
  __int64 v40; // rcx
  char *v41; // rax
  const char *v42; // r8
  PVOID P; // [rsp+98h] [rbp+10h] BYREF

  v2 = 0;
  P = 0LL;
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  ACPIInternalSetProximityDomain(DeviceExtension);
  ACPIInternalSetSpare(DeviceExtension);
  v7 = byte_140075A82;
  DeviceResourceList = PnpBiosGetDeviceResourceList(a1, 1LL, &P);
  v10 = byte_140075A82;
  if ( DeviceExtension )
  {
    v11 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v11 & 0x200000000000LL) != 0 && (v11 & 0x400000000000LL) != 0 )
      v10 = *(const char **)(DeviceExtension + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v8, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x32u,
      (__int64)&WPP_fcfdf8e587be3a45444c0aabc3a31ffd_Traceguids,
      (char)a2,
      IrpText,
      DeviceResourceList,
      v15,
      v14,
      v13);
  }
  if ( DeviceResourceList < 0 )
    goto LABEL_12;
  v16 = *(_QWORD *)(DeviceExtension + 8);
  v17 = P;
  v18 = v16 & 0x2000000;
  if ( P )
  {
    if ( (v16 & 0x2000000) != 0 )
    {
      ACPIRangeValidatePciResources(DeviceExtension, (ULONG_PTR)P, (unsigned __int64)v10);
    }
    else if ( (v16 & 0x200000000LL) != 0 )
    {
      v22 = ACPIRangeFilterPICInterrupt((__int64)P);
      if ( v22 < 0 )
      {
        v23 = 0;
        v24 = byte_140075A82;
        v25 = byte_140075A82;
        if ( DeviceExtension )
        {
          v26 = *(_QWORD *)(DeviceExtension + 8);
          v23 = DeviceExtension;
          if ( (v26 & 0x200000000000LL) != 0 )
          {
            v24 = *(const char **)(DeviceExtension + 608);
            if ( (v26 & 0x400000000000LL) != 0 )
              v25 = *(const char **)(DeviceExtension + 616);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            5u,
            0x33u,
            (__int64)&WPP_fcfdf8e587be3a45444c0aabc3a31ffd_Traceguids,
            (char)a2,
            v22,
            v23,
            v24,
            v25);
        ExFreePoolWithTag(v17, 0);
        v17 = 0LL;
      }
    }
    if ( _bittest64((const signed __int64 *)(DeviceExtension + 8), 0x25u) )
    {
      if ( *(_BYTE *)(DeviceExtension + 184) )
      {
        v27 = v17 + 8;
        for ( i = 0; i < v17[7]; v27 += 8 * (unsigned int)v27[1] + 2 )
        {
          v29 = (unsigned __int64)(v27 + 2);
          v30 = (unsigned __int64)&v27[8 * v27[1] + 2];
          while ( v29 < v30 )
          {
            v31 = *(_BYTE *)(v29 + 1);
            if ( v31 == 3 || v31 == 7 )
            {
              for ( j = v29 + 32; j < v30 && *(_BYTE *)(j + 1) == 0x81; j += 32LL )
              {
                if ( *(_WORD *)(j + 4) == 1 )
                {
                  *(_WORD *)(v29 + 4) |= 0x100u;
                  break;
                }
              }
            }
            v29 += 32LL;
          }
          ++i;
        }
      }
    }
    if ( (*(_DWORD *)(DeviceExtension + 8) & 0x8000LL) != 0 )
    {
      v33 = v17 + 8;
      for ( k = 0; k < v17[7]; v33 += 8 * (unsigned int)v33[1] + 2 )
      {
        v35 = (unsigned __int64)(v33 + 2);
        v36 = (unsigned __int64)&v33[8 * v33[1] + 2];
        while ( v35 < v36 )
        {
          if ( *(_BYTE *)(v35 + 1) == 2 )
            *(_WORD *)(v35 + 4) |= 8u;
          v35 += 32LL;
        }
        ++k;
      }
    }
    DeviceResourceList = ACPIInternalInterruptPolarityCacheStorePolaritiesFromList(DeviceExtension, (__int64)v17);
    if ( DeviceResourceList >= 0 )
    {
      a2->IoStatus.Information = (unsigned __int64)v17;
      goto LABEL_61;
    }
    v37 = *(_QWORD *)(DeviceExtension + 8);
    v38 = byte_140075A82;
    v39 = byte_140075A82;
    if ( (v37 & 0x200000000000LL) != 0 )
    {
      v38 = *(const char **)(DeviceExtension + 608);
      if ( (v37 & 0x400000000000LL) != 0 )
        v39 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x34u,
        (__int64)&WPP_fcfdf8e587be3a45444c0aabc3a31ffd_Traceguids,
        (char)a2,
        DeviceResourceList,
        DeviceExtension,
        v38,
        v39);
    ExFreePoolWithTag(v17, 0);
    goto LABEL_12;
  }
  v8 = 3221225473LL;
  if ( v18 )
    DeviceResourceList = -1073741823;
  if ( DeviceResourceList < 0 )
  {
LABEL_12:
    if ( DeviceResourceList != -1073741670 )
    {
      v19 = *(_QWORD *)(DeviceExtension + 8);
      if ( (v19 & 0x2000000) != 0 )
      {
        if ( (v19 & 0x200000000000LL) != 0 )
          v7 = *(const char **)(DeviceExtension + 608);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = ACPIDebugGetIrpText(v8, MinorFunction);
          WPP_RECORDER_SF_qsLqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            5u,
            0x35u,
            (__int64)&WPP_fcfdf8e587be3a45444c0aabc3a31ffd_Traceguids,
            (char)a2,
            v20,
            DeviceResourceList,
            DeviceExtension,
            v7,
            v21);
        }
        KeBugCheckEx(0xA5u, 2uLL, DeviceExtension, 1uLL, (ULONG_PTR)a2);
      }
    }
  }
LABEL_61:
  a2->IoStatus.Status = DeviceResourceList;
  IofCompleteRequest(a2, 0);
  if ( DeviceExtension )
  {
    v2 = DeviceExtension;
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
      v7 = *(const char **)(DeviceExtension + 608);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v41 = ACPIDebugGetIrpText(v40, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x36u,
      (__int64)&WPP_fcfdf8e587be3a45444c0aabc3a31ffd_Traceguids,
      (char)a2,
      v41,
      DeviceResourceList,
      v2,
      v7,
      v42);
  }
  return (unsigned int)DeviceResourceList;
}
