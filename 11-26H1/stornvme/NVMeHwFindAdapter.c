/*
 * XREFs of NVMeHwFindAdapter @ 0x140012650
 * Callers:
 *     <none>
 * Callees:
 *     GetControllerMaxTransferSize @ 0x140001580 (GetControllerMaxTransferSize.c)
 *     NVMeControllerInitPart1 @ 0x140006C00 (NVMeControllerInitPart1.c)
 *     NVMeControllerStartFailureEventLog @ 0x140007370 (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x140007840 (ControllerReset.c)
 *     NVMeControllerDeleteTimestampSyncCommand @ 0x1400113E0 (NVMeControllerDeleteTimestampSyncCommand.c)
 *     NVMeControllerDeleteLocalCommandPool @ 0x140011950 (NVMeControllerDeleteLocalCommandPool.c)
 *     ControllerAllocateUncachedExtension @ 0x140011CE0 (ControllerAllocateUncachedExtension.c)
 *     FillControllerRuntimeLog @ 0x1400124C4 (FillControllerRuntimeLog.c)
 *     IsIntelChatham @ 0x140012628 (IsIntelChatham.c)
 *     NVMeLogEtwControllerInfo @ 0x1400131FC (NVMeLogEtwControllerInfo.c)
 *     NVMeControllerAllocateLocalCommand @ 0x14001D1A8 (NVMeControllerAllocateLocalCommand.c)
 *     NVMeControllerInitializeTimestampSyncCommand @ 0x14001D3F4 (NVMeControllerInitializeTimestampSyncCommand.c)
 *     GetRegistrySettings @ 0x14002DEA8 (GetRegistrySettings.c)
 *     NVMeIceQueryNVMeCapabilities @ 0x140031EA8 (NVMeIceQueryNVMeCapabilities.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeHwFindAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r15
  unsigned int v7; // esi
  int v8; // r12d
  __int64 DeviceBase; // r9
  char v10; // cl
  char v11; // cl
  unsigned __int64 v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned int v17; // r10d
  unsigned int i; // r8d
  __int64 v19; // r9
  char v20; // cl
  int v21; // eax
  unsigned int v22; // eax
  unsigned __int16 v23; // r8
  unsigned __int16 v24; // dx
  unsigned __int64 v25; // rcx
  int v26; // eax
  bool v27; // zf
  int v28; // ecx
  int NVMeCapabilities; // eax
  int v30; // eax
  __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // r8
  void **v34; // r12
  void *v35; // rcx
  unsigned int v36; // eax
  unsigned int v37; // eax
  __int64 LocalCommand; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  char v42; // r8
  int v43; // edx
  __int64 v44; // r9
  int v45; // eax
  int v46; // eax
  __int64 v47; // r8
  __int64 v48; // r8
  __int64 v49; // r8
  __int64 v50; // r8
  __int64 v51; // r8
  __int64 *v52; // [rsp+28h] [rbp-E0h]
  int v53; // [rsp+30h] [rbp-D8h]
  __int64 v54; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v55; // [rsp+70h] [rbp-98h] BYREF
  __int64 v56; // [rsp+78h] [rbp-90h]
  _DWORD v57[24]; // [rsp+88h] [rbp-80h] BYREF
  _OWORD v58[5]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v59; // [rsp+138h] [rbp+30h] BYREF

  v59 = 0LL;
  v6 = *(_QWORD *)(a5 + 64);
  memset(v57, 0, 0x58uLL);
  v7 = 2;
  v8 = *(_DWORD *)(a1 + 24) & 2;
  v56 = 0LL;
  LOBYTE(v54) = 0;
  *(_QWORD *)((char *)&v59 + 1) = 0x101010101010101LL;
  *(_WORD *)((char *)&v59 + 9) = 257;
  BYTE12(v59) = 1;
  if ( !*(_BYTE *)(a5 + 197) )
    BYTE14(v59) = 1;
  StorPortExtendedFunction(103LL, a1, 16LL, &v59);
  if ( !v8 )
  {
    v10 = g_ControllerExtensionIndex;
    g_ControllerExtension[(unsigned __int8)g_ControllerExtensionIndex] = a1;
    g_ControllerExtensionIndex = (v10 + 1) & 0xF;
  }
  v11 = *(_BYTE *)(a5 + 197);
  *(_BYTE *)(a1 + 20) = v11;
  if ( (*(_DWORD *)(a5 + 200) & 2) != 0 )
  {
    *(_DWORD *)(a1 + 4064) |= 0x1000u;
    return 4LL;
  }
  if ( v11 )
  {
    if ( !v6 )
    {
      *(_DWORD *)(a1 + 28) = 2;
      goto LABEL_95;
    }
    LODWORD(v52) = 0;
    StorPortExtendedFunction(45LL, a1, v6, 152LL);
    *(_WORD *)(a1 + 4) = *(_WORD *)v6;
    *(_WORD *)(a1 + 6) = *(_WORD *)(v6 + 2);
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(v6 + 4);
    v13 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)(a1 + 168) = v13;
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(v6 + 16);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(v6 + 32);
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(v6 + 48);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(v6 + 64);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(v6 + 80);
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(v6 + 96);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(v6 + 112);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(v6 + 128);
    *(_DWORD *)(a1 + 160) = *(_DWORD *)(v6 + 144);
    v14 = *(_DWORD *)(v6 + 148);
    *(_DWORD *)(a1 + 56) |= 4u;
    *(_DWORD *)(a1 + 216) = v14;
  }
  else
  {
    memset(v58, 0, 0x40uLL);
    *(_DWORD *)(a1 + 4336) = *(_DWORD *)(a5 + 4);
    *(_DWORD *)(a1 + 4340) = *(_DWORD *)(a5 + 100);
    if ( (unsigned int)StorPortGetBusData(a1, 4LL, *(unsigned int *)(a5 + 4), *(unsigned int *)(a5 + 100), v58, 64) != 64 )
    {
      *(_DWORD *)(a1 + 28) = 3;
      v7 = 3;
      goto LABEL_95;
    }
    *(_DWORD *)(a1 + 4) = v58[0];
    *(_BYTE *)(a1 + 8) = BYTE8(v58[0]);
    if ( IsIntelChatham(a1) )
    {
      v15 = DWORD2(v58[1]) & 0xFFFFF000;
      v16 = (unsigned __int64)HIDWORD(v58[1]) << 32;
    }
    else
    {
      v15 = (unsigned __int64)DWORD1(v58[1]) << 32;
      v16 = v58[1] & 0xFFFFC000;
    }
    v13 = v16 | v15;
    *(_QWORD *)(a1 + 168) = v13;
  }
  v17 = *(_DWORD *)(a5 + 52);
  DeviceBase = 0LL;
  if ( v17 )
  {
    for ( i = 0; i < v17; ++i )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a5 + 56) + 16LL * i) == v13 )
      {
        _mm_lfence();
        v19 = *(_QWORD *)(a5 + 56);
        LOBYTE(v53) = *(_BYTE *)(v19 + 16LL * i + 12) == 0;
        DeviceBase = StorPortGetDeviceBase(
                       a1,
                       *(unsigned int *)(a5 + 8),
                       *(unsigned int *)(a5 + 4),
                       *(_QWORD *)(v19 + 16LL * i),
                       *(_DWORD *)(v19 + 16LL * i + 8),
                       v53);
        break;
      }
    }
  }
  *(_QWORD *)(a1 + 176) = DeviceBase;
  if ( DeviceBase )
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)DeviceBase;
    v20 = HIDWORD(*(_QWORD *)(a1 + 192)) & 0xF;
    *(_DWORD *)(a1 + 184) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 8LL);
    *(_DWORD *)(a1 + 200) = 4 << v20;
    if ( IsIntelChatham(a1) )
      *(_BYTE *)(a1 + 195) = 1;
    *(_DWORD *)(a1 + 204) = 500 * *(unsigned __int8 *)(a1 + 195);
    if ( !*(_BYTE *)(a1 + 20) && !v8 )
      GetRegistrySettings(a1);
    v21 = 3;
    if ( *(_DWORD *)(a5 + 20) != 1 )
      v21 = 1;
    *(_DWORD *)(a1 + 16) = v21;
    if ( (unsigned int)StorPortExtendedFunction(97LL, a1, 1LL, &v54) )
      *(_DWORD *)(a1 + 4064) &= ~0x10000u;
    else
      *(_DWORD *)(a1 + 4064) = ((_BYTE)v54 != 0 ? 0x10000 : 0) | *(_DWORD *)(a1 + 4064) & 0xFFFEFFFF;
    v22 = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 320) = 1048640;
    if ( *(_BYTE *)(a1 + 20) )
    {
      *(_WORD *)(a1 + 324) = 32;
      if ( v22 )
      {
        if ( v22 > 0x20 )
          LOWORD(v22) = 32;
      }
      else
      {
        LOWORD(v22) = 32;
      }
      *(_WORD *)(a1 + 326) = v22;
    }
    else
    {
      v23 = 256;
      DeviceBase = 1024LL;
      *(_WORD *)(a1 + 324) = 256;
      v24 = -1;
      if ( v22 )
      {
        DeviceBase = v22;
        v23 = v22;
        if ( v22 >= 0xFFFF )
          v23 = -1;
      }
      v25 = (unsigned __int16)*(_DWORD *)(a1 + 192) + 1LL;
      if ( (unsigned int)DeviceBase >= v25 )
        DeviceBase = (unsigned int)v25;
      if ( (unsigned int)DeviceBase < 0xFFFF )
        v24 = DeviceBase;
      *(_WORD *)(a1 + 326) = v24;
      if ( v24 > v23 )
        v23 = v24;
      LOWORD(v22) = v23;
    }
    *(_WORD *)(a1 + 328) = v22;
    v26 = 1;
    *(_DWORD *)(a5 + 48) = 3;
    *(_BYTE *)(a5 + 81) = 1;
    *(_BYTE *)(a5 + 145) = 0;
    *(_DWORD *)(a5 + 148) = 1;
    if ( *(_DWORD *)(a5 + 20) == 1 )
    {
      *(_QWORD *)(a5 + 152) = NVMeHwMSIInterrupt;
      v26 = 2;
    }
    *(_DWORD *)(a5 + 160) = v26;
    v27 = *(_BYTE *)(a5 + 144) == 0x80;
    *(_DWORD *)(a5 + 216) = 0;
    if ( v27 )
      *(_BYTE *)(a5 + 144) = 2;
    v28 = *(_DWORD *)(a5 + 220) | 0xAB;
    *(_BYTE *)(a5 + 147) = 0;
    *(_DWORD *)(a5 + 220) = v28;
    if ( (*(_DWORD *)(a1 + 56) & 2) == 0 )
    {
      v28 |= 4u;
      *(_DWORD *)(a5 + 220) = v28;
    }
    if ( (*(_DWORD *)(a1 + 56) & 0x800000) == 0 )
      *(_DWORD *)(a5 + 220) = v28 | 0x80000000;
    *(_DWORD *)(a5 + 24) = 0x200000;
    if ( (*(_DWORD *)(a1 + 4064) & 0x10000) != 0 )
    {
      *(_QWORD *)(a1 + 4360) = a1 + 4360;
      *(_QWORD *)(a1 + 4368) = a1 + 4360;
      NVMeCapabilities = NVMeIceQueryNVMeCapabilities(a1);
      if ( NVMeCapabilities != -1056964606 )
      {
        if ( NVMeCapabilities )
          goto LABEL_95;
        v30 = *(_DWORD *)(a1 + 4344);
        if ( (v30 & 2) != 0 )
        {
          v31 = *(_QWORD *)(a1 + 4352);
          v32 = *(_DWORD *)(v31 + 8);
          if ( v32 )
          {
            if ( v32 == 1 )
              goto LABEL_95;
            *(_DWORD *)(a1 + 4344) = v30 | 4;
            *(_DWORD *)(a1 + 4448) = *(_DWORD *)(v31 + 8);
          }
        }
      }
    }
    if ( !v8 )
    {
      StorPortExtendedFunction(32LL, a1, a1 + 4272, DeviceBase);
      if ( !ControllerAllocateUncachedExtension(a1, a5) )
        goto LABEL_95;
      if ( !*(_BYTE *)(a1 + 20) )
      {
        v33 = *(unsigned int *)(a1 + 112);
        if ( (_DWORD)v33 )
        {
          v34 = (void **)(a1 + 3816);
          v52 = (__int64 *)(a1 + 3816);
          if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, v33, 1701672526LL) )
          {
            v35 = *v34;
            if ( *v34 )
            {
              v36 = *(_DWORD *)(a1 + 112);
              if ( (v36 & 3) != 0 )
              {
                if ( v36 )
                  memset(v35, 0, *(unsigned int *)(a1 + 112));
              }
              else
              {
                v37 = v36 >> 2;
                if ( v37 )
                  memset(v35, 0, 4LL * v37);
              }
            }
          }
        }
        v55 = 0LL;
        *(_OWORD *)(a1 + 4320) = 0LL;
        LocalCommand = NVMeControllerAllocateLocalCommand(a1);
        if ( LocalCommand )
        {
          v41 = LocalCommand + 112;
          if ( a1 != -4320 && LocalCommand != -112 )
          {
            v52 = &v55;
            StorPortExtendedFunction(38LL, a1, a1 + 4320, v41);
          }
        }
        NVMeControllerInitializeTimestampSyncCommand(a1, v39, v40, v41, v52);
      }
    }
    if ( !(unsigned int)ControllerReset(a1, 1) && !(unsigned int)NVMeControllerInitPart1(a1, 1) )
    {
      v42 = *(_BYTE *)(*(_QWORD *)(a1 + 1560) + 77LL);
      if ( v42 )
        v43 = (1 << v42) * (1 << ((*(_BYTE *)(a1 + 198) & 0xF) + 12));
      else
        v43 = -1;
      *(_DWORD *)(a1 + 208) = v43;
      *(_DWORD *)(a5 + 24) = GetControllerMaxTransferSize((_DWORD *)a1);
      *(_DWORD *)(a5 + 212) = 32;
      *(_DWORD *)(a5 + 204) = 32;
      *(_DWORD *)(a5 + 208) = 32;
      *(_DWORD *)(a5 + 28) = 513;
      *(_BYTE *)(a5 + 72) = 1;
      *(_BYTE *)(a5 + 97) = 1;
      *(_BYTE *)(a5 + 146) = -1;
      if ( !*(_BYTE *)(a1 + 20) )
      {
        v45 = *(_DWORD *)(v44 + 96);
        v58[0] = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1;
        v58[1] = GUID_NVME_POWER_IDLE_TIMEOUT1;
        v58[2] = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2;
        v58[3] = GUID_NVME_POWER_IDLE_TIMEOUT2;
        v46 = v45 & 2;
        if ( v46 )
          v58[4] = GUID_NVME_POWER_NOPPME;
        StorPortExtendedFunction(26LL, a1, (unsigned int)(v46 != 0) + 4, v58);
      }
      *(_DWORD *)(a1 + 24) &= ~2u;
      return 1;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 28) = 4;
    v7 = 3;
  }
LABEL_95:
  v47 = *(_QWORD *)(a1 + 4272);
  if ( v47 )
  {
    StorPortExtendedFunction(34LL, a1, v47, DeviceBase);
    *(_QWORD *)(a1 + 4272) = 0LL;
    *(_DWORD *)(a1 + 4280) = 0;
  }
  v48 = *(_QWORD *)(a1 + 3816);
  if ( v48 )
  {
    StorPortExtendedFunction(1LL, a1, v48, DeviceBase);
    *(_QWORD *)(a1 + 3816) = 0LL;
  }
  v49 = *(_QWORD *)(a1 + 360);
  if ( v49 )
  {
    StorPortExtendedFunction(1LL, a1, v49, DeviceBase);
    *(_QWORD *)(a1 + 360) = 0LL;
  }
  v50 = *(_QWORD *)(a1 + 368);
  if ( v50 )
  {
    StorPortExtendedFunction(1LL, a1, v50, DeviceBase);
    *(_QWORD *)(a1 + 368) = 0LL;
  }
  v51 = *(_QWORD *)(a1 + 376);
  if ( v51 )
  {
    StorPortExtendedFunction(1LL, a1, v51, DeviceBase);
    *(_QWORD *)(a1 + 376) = 0LL;
  }
  NVMeControllerDeleteTimestampSyncCommand(a1);
  NVMeControllerDeleteLocalCommandPool(a1);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    NVMeControllerStartFailureEventLog(a1);
    NVMeLogEtwControllerInfo(a1);
    FillControllerRuntimeLog(a1, v57);
    v56 = *(_QWORD *)(a1 + 24);
    LODWORD(v55) = -1056964606;
    StorPortNotification(4109LL, a1, 0LL);
  }
  return v7;
}
