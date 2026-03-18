/*
 * XREFs of Interrupter_CreateInterrupter @ 0x14007ADE8
 * Callers:
 *     Interrupter_Create @ 0x14007AD30 (Interrupter_Create.c)
 *     Interrupter_PrepareHardware @ 0x14007B9B8 (Interrupter_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1400071EC (WPP_RECORDER_SF_qd.c)
 *     Controller_IsSecureDevice @ 0x1400357A8 (Controller_IsSecureDevice.c)
 *     DynamicLock_Create @ 0x1400564F4 (DynamicLock_Create.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 *     Counter_CreateInterrupterInstance @ 0x14007EB00 (Counter_CreateInterrupterInstance.c)
 */

__int64 __fastcall Interrupter_CreateInterrupter(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        _QWORD *a7)
{
  int v9; // eax
  int v10; // edx
  unsigned int v11; // edi
  int v12; // r9d
  int v13; // edi
  unsigned __int16 v14; // r9
  char v15; // dl
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // r8d
  char v19; // al
  bool v20; // zf
  _QWORD *v21; // rcx
  _QWORD *v23; // [rsp+48h] [rbp-A1h] BYREF
  _QWORD v24[4]; // [rsp+50h] [rbp-99h] BYREF
  __int128 v25; // [rsp+70h] [rbp-79h]
  void *v26; // [rsp+80h] [rbp-69h]
  __int64 v27; // [rsp+88h] [rbp-61h]
  _QWORD v28[18]; // [rsp+98h] [rbp-51h] BYREF
  __int64 v31; // [rsp+150h] [rbp+67h] BYREF

  memset(v28, 0, 0x64uLL);
  memset((char *)v24 + 4, 0, 20);
  v31 = 0LL;
  v23 = 0LL;
  if ( a4 || a5 || a7 )
  {
    memset(v28, 0, 0x68uLL);
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x1D )
        LODWORD(v28[0]) = -1;
      else
        LODWORD(v28[0]) = *(_DWORD *)(WdfStructures + 232);
    }
    else
    {
      LODWORD(v28[0]) = 104;
    }
    LODWORD(v28[2]) = 2;
    v28[3] = Interrupter_WdfEvtInterruptIsr;
    v28[4] = 0LL;
    v28[5] = Interrupter_WdfEvtInterruptEnable;
    v28[6] = Interrupter_WdfEvtInterruptDisable;
    HIDWORD(v28[11]) = 2;
    v28[8] = a4;
    v28[9] = a5;
    if ( Controller_IsSecureDevice(a2) )
    {
      v28[7] = Interrupter_WdfEvtInterruptWorkItem;
      if ( !*(_BYTE *)(*(_QWORD *)(a2 + 88) + 137LL) )
        LOBYTE(v28[11]) = 1;
    }
    else
    {
      v28[4] = Interrupter_WdfEvtInterruptDpc;
    }
    HIDWORD(v24[0]) = 0;
    v24[2] = 0LL;
    v25 = 0LL;
    if ( v15 )
    {
      if ( (unsigned int)WdfStructureCount <= 0x26 )
        LODWORD(v24[0]) = -1;
      else
        LODWORD(v24[0]) = *(_DWORD *)(WdfStructures + 304);
    }
    else
    {
      LODWORD(v24[0]) = 56;
    }
    v26 = off_14006B178;
    v24[3] = 0x100000001LL;
    v24[1] = Interrupter_WdfEvtCleanupCallback;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01033
                                                                                                + 1128))(
           WdfDriverGlobals,
           a1,
           v28,
           v24,
           &v31);
    v11 = v9;
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v11;
      v12 = 13;
      goto LABEL_12;
    }
    v13 = a3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 14;
      goto LABEL_34;
    }
  }
  else
  {
    *(_QWORD *)((char *)v24 + 4) = 0LL;
    *((_QWORD *)&v25 + 1) = 0LL;
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x26 )
        LODWORD(v24[0]) = -1;
      else
        LODWORD(v24[0]) = *(_DWORD *)(WdfStructures + 304);
    }
    else
    {
      LODWORD(v24[0]) = 56;
    }
    v26 = off_14006B178;
    *(_QWORD *)&v25 = a1;
    v24[3] = 0x100000001LL;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01033 + 1656))(
           WdfDriverGlobals,
           v24,
           &v31);
    v11 = v9;
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 11;
LABEL_12:
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a2 + 72),
          v10,
          9,
          v12,
          (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
          v9);
        return v11;
      }
      return v11;
    }
    v13 = a3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 12;
LABEL_34:
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(a2 + 72),
        4u,
        9u,
        v14,
        (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
        v31,
        v13);
    }
  }
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          v31,
          off_14006B178);
  v27 = v16;
  *(_QWORD *)v16 = v31;
  *(_QWORD *)(v16 + 8) = a2;
  *(_DWORD *)(v16 + 32) = v13;
  if ( !Controller_IsSecureDevice(a2) || *(_BYTE *)(*(_QWORD *)(a2 + 88) + 137LL) )
  {
    v18 = 0;
    v19 = 0;
  }
  else
  {
    v18 = 1;
    v19 = 1;
  }
  *(_BYTE *)(v17 + 232) = v19;
  v9 = DynamicLock_Create(v31, *(_QWORD *)(a2 + 72), v18, (__int64 *)(v17 + 224));
  v11 = v9;
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v11;
    v12 = 15;
    goto LABEL_12;
  }
  Counter_CreateInterrupterInstance(v27);
  v20 = a7 == 0LL;
  *a6 = v27;
  if ( !v20 )
  {
    memset(v24, 0, sizeof(v24));
    v26 = 0LL;
    v25 = 0LL;
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x26 )
        LODWORD(v24[0]) = -1;
      else
        LODWORD(v24[0]) = *(_DWORD *)(WdfStructures + 304);
    }
    else
    {
      LODWORD(v24[0]) = 56;
    }
    v26 = off_14006AFC0;
    v24[3] = 0x100000001LL;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD **))(WdfFunctions_01033 + 1624))(
           WdfDriverGlobals,
           v31,
           v24,
           &v23);
    v11 = v9;
    if ( v9 >= 0 )
    {
      *v23 = a1;
      v21 = a7;
      v23[1] = a2;
      *v21 = v23;
      return v11;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 16;
      goto LABEL_12;
    }
  }
  return v11;
}
