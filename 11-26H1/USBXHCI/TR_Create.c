/*
 * XREFs of TR_Create @ 0x140081594
 * Callers:
 *     Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x140048B90 (Endpoint_UcxEvtEndpointStaticStreamsAdd.c)
 *     Endpoint_Create @ 0x1400806CC (Endpoint_Create.c)
 * Callees:
 *     TR_EnsureSegments @ 0x140018C60 (TR_EnsureSegments.c)
 *     TR_AcquireSegment @ 0x14003350C (TR_AcquireSegment.c)
 *     Controller_IsSecureDevice @ 0x1400357A8 (Controller_IsSecureDevice.c)
 *     Endpoint_IsProxyEndpoint @ 0x140035FD8 (Endpoint_IsProxyEndpoint.c)
 *     TR_CreateSecureObject @ 0x140038D24 (TR_CreateSecureObject.c)
 *     XilUsbDevice_IsSecureUsbDevice @ 0x14003DB78 (XilUsbDevice_IsSecureUsbDevice.c)
 *     WPP_RECORDER_SF_DDDd @ 0x14004BFD0 (WPP_RECORDER_SF_DDDd.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 *     Isoch_GetConfiguration @ 0x14007E558 (Isoch_GetConfiguration.c)
 *     Counter_CreateTransferRingInstance @ 0x140081C54 (Counter_CreateTransferRingInstance.c)
 *     Bulk_GetConfiguration @ 0x140081D80 (Bulk_GetConfiguration.c)
 */

__int64 __fastcall TR_Create(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rax
  bool v12; // zf
  int v13; // eax
  int v14; // eax
  int SecureObject; // ebx
  int v16; // r10d
  int v17; // edx
  int v18; // r9d
  __int64 (__fastcall **v19)(); // r15
  char IsProxyEndpoint; // al
  __int64 v21; // rcx
  char IsSecureDevice; // al
  bool v23; // cf
  int v24; // eax
  char v25; // al
  __int64 v26; // rdx
  int v27; // r9d
  int v28; // ecx
  unsigned __int16 v29; // r9
  __int64 v30; // r8
  __int64 v31; // rax
  __int128 v32; // xmm0
  __int64 v33; // rdi
  __int128 v34; // xmm1
  char IsSecureUsbDevice; // al
  __int64 (__fastcall *v36)(); // r8
  __int64 v37; // rax
  __int64 (__fastcall *v38)(); // r8
  __int64 (__fastcall *v39)(); // r8
  int v41; // [rsp+28h] [rbp-D8h]
  int v42; // [rsp+30h] [rbp-D0h]
  int v43; // [rsp+38h] [rbp-C8h]
  int v44; // [rsp+40h] [rbp-C0h]
  __int128 v45; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v46; // [rsp+60h] [rbp-A0h]
  __int128 v47; // [rsp+70h] [rbp-90h]
  void *v48; // [rsp+80h] [rbp-80h]
  __int128 v49; // [rsp+88h] [rbp-78h] BYREF
  __int128 v50; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall **v51)(); // [rsp+A8h] [rbp-58h]
  __int128 v52; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-40h]
  __int128 v54; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v55; // [rsp+D8h] [rbp-28h]
  _QWORD v56[12]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v57; // [rsp+178h] [rbp+78h] BYREF

  LODWORD(v55) = 0;
  LODWORD(v53) = 0;
  LODWORD(v48) = 0;
  v54 = 0LL;
  v52 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  memset(v56, 0, sizeof(v56));
  v57 = 0LL;
  v49 = 0LL;
  v51 = 0LL;
  v50 = 0LL;
  if ( Endpoint_IsProxyEndpoint(a2) )
  {
    v9 = 16776704;
    v10 = 0xFFFFFFFFLL;
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 96);
    v9 = *(_DWORD *)(v11 + 16);
    v10 = *(unsigned int *)(v11 + 20);
  }
  DWORD2(v49) = v10;
  DWORD1(v49) = v9 - 4096;
  v12 = (*(_BYTE *)(a2 + 99) & 3) == 0;
  v13 = *(_BYTE *)(a2 + 99) & 3;
  LODWORD(v49) = v13;
  if ( v12 )
  {
    LODWORD(v50) = 400;
    v19 = ControlFunctionTable;
    HIDWORD(v49) = 1;
    v51 = ControlFunctionTable;
    IsSecureDevice = Controller_IsSecureDevice(a1);
    v23 = (*(_QWORD *)(a1 + 736) & 8) != 0;
    DWORD2(v50) = IsSecureDevice != 0 ? 0 : 0x200;
    DWORD1(v50) = v23 ? 4096 : 512;
  }
  else
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( (unsigned int)(v14 - 1) >= 2 )
        return (unsigned int)-1073741823;
      Bulk_GetConfiguration(a1, v10, &v49, 1LL);
      v17 = HIDWORD(v49);
      v18 = 1;
      v19 = v51;
    }
    else
    {
      IsProxyEndpoint = Endpoint_IsProxyEndpoint(a2);
      Isoch_GetConfiguration(v21, IsProxyEndpoint, (__int64)&v49);
      v17 = HIDWORD(v49);
      v19 = v51;
    }
  }
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x21 )
      LODWORD(v56[0]) = v16;
    else
      LODWORD(v56[0]) = *(_DWORD *)(WdfStructures + 264);
  }
  else
  {
    LODWORD(v56[0]) = 96;
  }
  v24 = v56[10];
  LODWORD(v56[1]) = 2;
  HIDWORD(v56[0]) = v17;
  if ( v17 == 2 )
    v24 = v16;
  LODWORD(v56[10]) = v24;
  v56[2] = v19[20];
  v56[9] = v19[21];
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v45) = v16;
    else
      LODWORD(v45) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v45) = 56;
  }
  v48 = off_14006B1F0;
  *((_QWORD *)&v47 + 1) = (unsigned int)v50;
  *((_QWORD *)&v45 + 1) = TR_WdfEvtCleanupCallback;
  DWORD2(v46) = v18;
  HIDWORD(v46) = v18;
  *(_QWORD *)&v47 = a3;
  v25 = Endpoint_IsProxyEndpoint(a2);
  v26 = *(_QWORD *)a1;
  v28 = v27;
  if ( v25 )
    v28 = 2;
  DWORD2(v46) = v28;
  SecureObject = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int128 *, __int64 *))(WdfFunctions_01033 + 1216))(
                   WdfDriverGlobals,
                   v26,
                   v56,
                   &v45,
                   &v57);
  if ( SecureObject < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)SecureObject;
    v29 = 10;
    v44 = SecureObject;
    v43 = a4;
    v30 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 143LL);
    v42 = *(_DWORD *)(a2 + 152);
    v41 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 143LL);
LABEL_28:
    WPP_RECORDER_SF_DDDd(
      *(_QWORD *)(a1 + 72),
      2u,
      v30,
      v29,
      (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
      v41,
      v42,
      v43,
      v44);
    return (unsigned int)SecureObject;
  }
  v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          v57,
          off_14006B1F0);
  v32 = v49;
  v33 = v31;
  v34 = v50;
  *(_QWORD *)(v31 + 40) = a1;
  *(_OWORD *)v31 = v32;
  *(_QWORD *)&v32 = v51;
  *(_OWORD *)(v31 + 16) = v34;
  *(_QWORD *)(v31 + 32) = v32;
  *(_QWORD *)(v31 + 48) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v31 + 56) = a2;
  *(_DWORD *)(v31 + 64) = a4;
  *(_QWORD *)(v31 + 72) = v57;
  *(_QWORD *)(v31 + 312) = 0LL;
  *(_DWORD *)(v31 + 320) = 0;
  if ( Controller_IsSecureDevice(a1) )
  {
    if ( *(_DWORD *)(a1 + 1008) == 2 )
      IsSecureUsbDevice = XilUsbDevice_IsSecureUsbDevice(*(_QWORD *)(a2 + 16));
    else
      IsSecureUsbDevice = 1;
    *(_BYTE *)(v33 + 288) = IsSecureUsbDevice;
    v36 = v19[24];
    v53 = 0LL;
    v52 = 0LL;
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x43 )
        LODWORD(v52) = -1;
      else
        LODWORD(v52) = *(_DWORD *)(WdfStructures + 536);
    }
    else
    {
      LODWORD(v52) = 24;
    }
    *((_QWORD *)&v52 + 1) = v36;
    LOBYTE(v53) = 1;
    v48 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    v47 = 0LL;
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x26 )
        LODWORD(v45) = -1;
      else
        LODWORD(v45) = *(_DWORD *)(WdfStructures + 304);
    }
    else
    {
      LODWORD(v45) = 56;
    }
    *(_QWORD *)&v47 = v57;
    *((_QWORD *)&v46 + 1) = 0x100000001LL;
    SecureObject = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 3032))(
                     WdfDriverGlobals,
                     &v52,
                     &v45,
                     v33 + 88);
    if ( SecureObject < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)SecureObject;
      v29 = 11;
      goto LABEL_46;
    }
  }
  else
  {
    *(_BYTE *)(v33 + 288) = 0;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)(v33 + 96));
  *(_QWORD *)(v33 + 216) = v33 + 208;
  *(_QWORD *)(v33 + 208) = v33 + 208;
  *(_QWORD *)(v33 + 232) = v33 + 224;
  *(_QWORD *)(v33 + 224) = v33 + 224;
  if ( *(_BYTE *)(v33 + 288) )
  {
    SecureObject = TR_CreateSecureObject(v33);
    if ( SecureObject < 0 )
      return (unsigned int)SecureObject;
  }
  else
  {
    SecureObject = TR_EnsureSegments(v33, 1u, 0);
    if ( SecureObject < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)SecureObject;
      v37 = *(_QWORD *)(v33 + 48);
      v29 = 12;
      goto LABEL_47;
    }
  }
  v38 = v19[22];
  if ( v38 )
  {
    SecureObject = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64))(WdfFunctions_01033 + 1328))(
                     WdfDriverGlobals,
                     v57,
                     v38,
                     v33);
    if ( SecureObject < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)SecureObject;
      v29 = 13;
      goto LABEL_46;
    }
  }
  v39 = v19[23];
  v55 = 0LL;
  v54 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x17 )
      LODWORD(v54) = -1;
    else
      LODWORD(v54) = *(_DWORD *)(WdfStructures + 184);
  }
  else
  {
    LODWORD(v54) = 24;
  }
  *((_QWORD *)&v54 + 1) = v39;
  v48 = 0LL;
  LOBYTE(v55) = 1;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v45) = -1;
    else
      LODWORD(v45) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v45) = 56;
  }
  *(_QWORD *)&v47 = v57;
  *((_QWORD *)&v46 + 1) = 0x100000001LL;
  SecureObject = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033
                                                                                                 + 888))(
                   WdfDriverGlobals,
                   &v54,
                   &v45,
                   v33 + 80);
  if ( SecureObject < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)SecureObject;
    v29 = 14;
    goto LABEL_46;
  }
  *(_QWORD *)(v33 + 176) = TR_AcquireSegment(v33);
  SecureObject = ((__int64 (__fastcall *)(__int64))*v19)(v33);
  if ( SecureObject >= 0 )
  {
    Counter_CreateTransferRingInstance(*(_QWORD *)(v33 + 56), *(unsigned int *)(v33 + 64), v33 + 248);
    *a5 = v33;
    return (unsigned int)SecureObject;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = 15;
LABEL_46:
    v37 = *(_QWORD *)(a2 + 16);
LABEL_47:
    v44 = SecureObject;
    v43 = a4;
    v42 = *(_DWORD *)(a2 + 152);
    v41 = *(unsigned __int8 *)(v37 + 143);
    goto LABEL_28;
  }
  return (unsigned int)SecureObject;
}
