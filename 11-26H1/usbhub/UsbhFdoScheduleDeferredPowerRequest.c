/*
 * XREFs of UsbhFdoScheduleDeferredPowerRequest @ 0x14002A840
 * Callers:
 *     UsbhSet_D0_wQueued_Action @ 0x140029E60 (UsbhSet_D0_wQueued_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x14004A3D0 (UsbhFdoD0PoComplete_Action.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x14002AE7C (UsbhPoStartNextPowerIrp_Pdo.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhFdoScheduleDeferredPowerRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 Pool2; // rdi
  __int64 v10; // rcx
  signed __int32 v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  char v15; // r12
  _DWORD *v16; // r14
  __int64 v17; // rcx
  signed __int32 v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 (__fastcall *v22)(__int64, __int64); // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  signed __int32 v26; // eax
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rdx
  char v30; // r14
  __int64 v31; // rcx
  signed __int32 v32; // eax
  unsigned int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // rdx
  _DWORD *v36; // rbp
  __int64 v37; // rcx
  signed __int32 v38; // eax
  unsigned int v39; // edx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 (__fastcall *v42)(__int64, __int64); // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  signed __int32 v46; // eax
  unsigned int v47; // edx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  signed __int32 v51; // eax
  unsigned int v52; // edx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rbp
  void (__fastcall *v56)(__int64, __int64, void *, _QWORD, __int64, int); // rax
  int v58; // [rsp+28h] [rbp-40h]

  v4 = 0;
  Pool2 = 0LL;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 880), 0xFFFFFFFF);
        v12 = *(_DWORD *)(v10 + 884);
        v13 = *(_QWORD *)(v10 + 888);
        v14 = 32LL * ((v11 - 1) & v12);
        *(_DWORD *)(v14 + v13) = 829449331;
        *(_QWORD *)(v14 + v13 + 8) = 0LL;
        *(_QWORD *)(v14 + v13 + 16) = a4;
        *(_QWORD *)(v14 + v13 + 24) = a3;
      }
    }
  }
  if ( !a4 )
  {
LABEL_22:
    v30 = *((_BYTE *)FdoExt(a1) + 5268);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        46,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
        0);
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v31 = *(_QWORD *)(a1 + 64);
        if ( v31 )
        {
          v32 = _InterlockedExchangeAdd((volatile signed __int32 *)(v31 + 880), 0xFFFFFFFF);
          v33 = *(_DWORD *)(v31 + 884);
          v34 = *(_QWORD *)(v31 + 888);
          v35 = 32LL * ((v32 - 1) & v33);
          *(_DWORD *)(v35 + v34) = 1297568097;
          *(_QWORD *)(v35 + v34 + 8) = 0LL;
          *(_QWORD *)(v35 + v34 + 16) = 1769428816LL;
          *(_QWORD *)(v35 + v34 + 24) = a3;
        }
      }
    }
    if ( Pool2 )
      goto LABEL_46;
    v36 = FdoExt(a1);
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v37 = *(_QWORD *)(a1 + 64);
        if ( v37 )
        {
          v38 = _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 880), 0xFFFFFFFF);
          v39 = *(_DWORD *)(v37 + 884);
          v40 = *(_QWORD *)(v37 + 888);
          v41 = 32LL * ((v38 - 1) & v39);
          *(_DWORD *)(v41 + v40) = 1296783201;
          *(_QWORD *)(v41 + v40 + 8) = 0LL;
          *(_QWORD *)(v41 + v40 + 16) = 0LL;
          *(_QWORD *)(v41 + v40 + 24) = a3;
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        45,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
        0);
    Pool2 = ExAllocatePool2(64LL, 72LL, 1112885333LL);
    if ( Pool2 )
    {
      v42 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)FdoExt(a1) + 596);
      if ( v42 )
      {
        LOBYTE(v43) = v30;
        v44 = v42(a1, v43);
        if ( v44 )
        {
          *(_QWORD *)(Pool2 + 40) = v44;
          *(_DWORD *)Pool2 = 1230463592;
          *(_DWORD *)(Pool2 + 4) = 1769428816;
          *(_DWORD *)(Pool2 + 12) = 0;
          *(_QWORD *)(Pool2 + 32) = a3;
          *(_QWORD *)(Pool2 + 16) = a1;
          *(_QWORD *)(Pool2 + 24) = a2;
          ExInterlockedInsertTailList((PLIST_ENTRY)v36 + 174, (PLIST_ENTRY)(Pool2 + 48), (PKSPIN_LOCK)v36 + 350);
          if ( *(_DWORD *)(Pool2 + 4) != 2001228627 && (UsbhLogMask & 8) != 0 )
          {
            if ( a1 )
            {
              v45 = *(_QWORD *)(a1 + 64);
              if ( v45 )
              {
                v46 = _InterlockedExchangeAdd((volatile signed __int32 *)(v45 + 880), 0xFFFFFFFF);
                v47 = *(_DWORD *)(v45 + 884);
                v48 = *(_QWORD *)(v45 + 888);
                v49 = 32LL * ((v46 - 1) & v47);
                *(_DWORD *)(v49 + v48) = 726485847;
                *(_QWORD *)(v49 + v48 + 8) = 0LL;
                *(_QWORD *)(v49 + v48 + 16) = 0LL;
                *(_QWORD *)(v49 + v48 + 24) = Pool2;
              }
            }
          }
LABEL_45:
          if ( !Pool2 )
            return (unsigned int)-1073741670;
LABEL_46:
          _InterlockedAdd((volatile signed __int32 *)(Pool2 + 8), 1u);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              47,
              (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
              0);
          }
          if ( (UsbhLogMask & 8) != 0 )
          {
            if ( a1 )
            {
              v50 = *(_QWORD *)(a1 + 64);
              if ( v50 )
              {
                v51 = _InterlockedExchangeAdd((volatile signed __int32 *)(v50 + 880), 0xFFFFFFFF);
                v52 = *(_DWORD *)(v50 + 884);
                v53 = *(_QWORD *)(v50 + 888);
                v54 = 32LL * ((v51 - 1) & v52);
                *(_DWORD *)(v54 + v53) = 726488145;
                *(_QWORD *)(v54 + v53 + 8) = 0LL;
                *(_QWORD *)(v54 + v53 + 16) = 1769428816LL;
                *(_QWORD *)(v54 + v53 + 24) = Pool2;
              }
            }
          }
          v55 = *(_QWORD *)(Pool2 + 40);
          v56 = (void (__fastcall *)(__int64, __int64, void *, _QWORD, __int64, int))*((_QWORD *)FdoExt(a1) + 598);
          if ( v56 )
          {
            LOBYTE(v58) = v30;
            v56(a1, v55, &UsbhHubWorker, 0LL, Pool2, v58);
          }
          else
          {
            return (unsigned int)-1073741822;
          }
          return v4;
        }
      }
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    Pool2 = 0LL;
    goto LABEL_45;
  }
  v15 = *((_BYTE *)FdoExt(a1) + 5268);
  v16 = FdoExt(a1);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      if ( v17 )
      {
        v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 880), 0xFFFFFFFF);
        v19 = *(_DWORD *)(v17 + 884);
        v20 = *(_QWORD *)(v17 + 888);
        v21 = 32LL * ((v18 - 1) & v19);
        *(_DWORD *)(v21 + v20) = 1296783201;
        *(_QWORD *)(v21 + v20 + 8) = 0LL;
        *(_QWORD *)(v21 + v20 + 16) = 0LL;
        *(_QWORD *)(v21 + v20 + 24) = a3;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      45,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      0);
  Pool2 = ExAllocatePool2(64LL, 72LL, 1112885333LL);
  if ( Pool2 )
  {
    v22 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)FdoExt(a1) + 596);
    if ( v22 )
    {
      LOBYTE(v23) = v15;
      v24 = v22(a1, v23);
      if ( v24 )
      {
        *(_QWORD *)(Pool2 + 40) = v24;
        *(_DWORD *)Pool2 = 1230463592;
        *(_DWORD *)(Pool2 + 4) = 1769428816;
        *(_DWORD *)(Pool2 + 12) = 0;
        *(_QWORD *)(Pool2 + 32) = a3;
        *(_QWORD *)(Pool2 + 16) = a1;
        *(_QWORD *)(Pool2 + 24) = a2;
        ExInterlockedInsertTailList((PLIST_ENTRY)v16 + 174, (PLIST_ENTRY)(Pool2 + 48), (PKSPIN_LOCK)v16 + 350);
        if ( *(_DWORD *)(Pool2 + 4) != 2001228627 && (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v25 = *(_QWORD *)(a1 + 64);
            if ( v25 )
            {
              v26 = _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 880), 0xFFFFFFFF);
              v27 = *(_DWORD *)(v25 + 884);
              v28 = *(_QWORD *)(v25 + 888);
              v29 = 32LL * ((v26 - 1) & v27);
              *(_DWORD *)(v29 + v28) = 726485847;
              *(_QWORD *)(v29 + v28 + 8) = 0LL;
              *(_QWORD *)(v29 + v28 + 16) = 0LL;
              *(_QWORD *)(v29 + v28 + 24) = Pool2;
            }
          }
        }
        *(_BYTE *)(*(_QWORD *)(a4 + 184) + 3LL) |= 1u;
        UsbhPoStartNextPowerIrp_Pdo(a1, *(_QWORD *)(a3 + 48), a4, 1810LL);
        goto LABEL_22;
      }
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
  return 3221225626LL;
}
