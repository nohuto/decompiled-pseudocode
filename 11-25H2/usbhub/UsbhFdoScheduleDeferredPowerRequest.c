/*
 * XREFs of UsbhFdoScheduleDeferredPowerRequest @ 0x140030F50
 * Callers:
 *     UsbhSet_D0_wQueued_Action @ 0x140030640 (UsbhSet_D0_wQueued_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x14004A820 (UsbhFdoD0PoComplete_Action.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x140031570 (UsbhPoStartNextPowerIrp_Pdo.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhFdoScheduleDeferredPowerRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 Pool2; // rdi
  __int64 v10; // r9
  __int64 v11; // rcx
  char v12; // r12
  _DWORD *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(__int64, __int64); // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  _DWORD *v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 (__fastcall *v27)(__int64, __int64); // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbp
  void (__fastcall *v35)(__int64, __int64, void *, _QWORD, __int64, int); // rax
  int v37; // [rsp+28h] [rbp-40h]

  v4 = 0;
  Pool2 = 0LL;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v11 = 829449331;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = a4;
        *(_QWORD *)(v11 + 24) = a3;
      }
    }
  }
  if ( !a4 )
  {
LABEL_22:
    v21 = *((_BYTE *)FdoExt(a1) + 5268);
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
        v22 = *(_QWORD *)(a1 + 64);
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
          *(_DWORD *)v23 = 1297568097;
          *(_QWORD *)(v23 + 8) = 0LL;
          *(_QWORD *)(v23 + 16) = 1769428816LL;
          *(_QWORD *)(v23 + 24) = a3;
        }
      }
    }
    if ( Pool2 )
      goto LABEL_46;
    v24 = FdoExt(a1);
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v25 = *(_QWORD *)(a1 + 64);
        if ( v25 )
        {
          v26 = *(_QWORD *)(v25 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
          *(_DWORD *)v26 = 1296783201;
          *(_QWORD *)(v26 + 8) = 0LL;
          *(_QWORD *)(v26 + 16) = 0LL;
          *(_QWORD *)(v26 + 24) = a3;
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
      v27 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)FdoExt(a1) + 596);
      if ( v27 )
      {
        LOBYTE(v28) = v21;
        v29 = v27(a1, v28);
        if ( v29 )
        {
          *(_QWORD *)(Pool2 + 40) = v29;
          *(_DWORD *)Pool2 = 1230463592;
          *(_DWORD *)(Pool2 + 4) = 1769428816;
          *(_DWORD *)(Pool2 + 12) = 0;
          *(_QWORD *)(Pool2 + 32) = a3;
          *(_QWORD *)(Pool2 + 16) = a1;
          *(_QWORD *)(Pool2 + 24) = a2;
          ExInterlockedInsertTailList((PLIST_ENTRY)v24 + 174, (PLIST_ENTRY)(Pool2 + 48), (PKSPIN_LOCK)v24 + 350);
          if ( *(_DWORD *)(Pool2 + 4) != 2001228627 && (UsbhLogMask & 8) != 0 )
          {
            if ( a1 )
            {
              v30 = *(_QWORD *)(a1 + 64);
              if ( v30 )
              {
                v31 = *(_QWORD *)(v30 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
                *(_DWORD *)v31 = 726485847;
                *(_QWORD *)(v31 + 8) = 0LL;
                *(_QWORD *)(v31 + 16) = 0LL;
                *(_QWORD *)(v31 + 24) = Pool2;
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
              v32 = *(_QWORD *)(a1 + 64);
              if ( v32 )
              {
                v33 = *(_QWORD *)(v32 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
                *(_DWORD *)v33 = 726488145;
                *(_QWORD *)(v33 + 8) = 0LL;
                *(_QWORD *)(v33 + 16) = 1769428816LL;
                *(_QWORD *)(v33 + 24) = Pool2;
              }
            }
          }
          v34 = *(_QWORD *)(Pool2 + 40);
          v35 = (void (__fastcall *)(__int64, __int64, void *, _QWORD, __int64, int))*((_QWORD *)FdoExt(a1) + 598);
          if ( v35 )
          {
            LOBYTE(v37) = v21;
            v35(a1, v34, &UsbhHubWorker, 0LL, Pool2, v37);
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
  v12 = *((_BYTE *)FdoExt(a1) + 5268);
  v13 = FdoExt(a1);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v15 = 1296783201;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = 0LL;
        *(_QWORD *)(v15 + 24) = a3;
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
    v16 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)FdoExt(a1) + 596);
    if ( v16 )
    {
      LOBYTE(v17) = v12;
      v18 = v16(a1, v17);
      if ( v18 )
      {
        *(_QWORD *)(Pool2 + 40) = v18;
        *(_DWORD *)Pool2 = 1230463592;
        *(_DWORD *)(Pool2 + 4) = 1769428816;
        *(_DWORD *)(Pool2 + 12) = 0;
        *(_QWORD *)(Pool2 + 32) = a3;
        *(_QWORD *)(Pool2 + 16) = a1;
        *(_QWORD *)(Pool2 + 24) = a2;
        ExInterlockedInsertTailList((PLIST_ENTRY)v13 + 174, (PLIST_ENTRY)(Pool2 + 48), (PKSPIN_LOCK)v13 + 350);
        if ( *(_DWORD *)(Pool2 + 4) != 2001228627 && (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v19 = *(_QWORD *)(a1 + 64);
            if ( v19 )
            {
              v20 = *(_QWORD *)(v19 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
              *(_DWORD *)v20 = 726485847;
              *(_QWORD *)(v20 + 8) = 0LL;
              *(_QWORD *)(v20 + 16) = 0LL;
              *(_QWORD *)(v20 + 24) = Pool2;
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
