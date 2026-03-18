/*
 * XREFs of DpiFdoStopAdapter @ 0x140248A44
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x140242E80 (DpiFdoHandleStopDevice.c)
 *     DpiKsrStopAdapter @ 0x140252AB0 (DpiKsrStopAdapter.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x140254E0C (DpiLdaStopAllAdaptersInChain.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DpiFdoIsPostDevice @ 0x140056A38 (DpiFdoIsPostDevice.c)
 *     DpiFdoIsMsBddAnchoredDevice @ 0x1400624D8 (DpiFdoIsMsBddAnchoredDevice.c)
 *     DpiRemoveAdapter @ 0x1400859EC (DpiRemoveAdapter.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkStartPnPStop @ 0x1401AA86C (DxgkStartPnPStop.c)
 *     DxgkCompletePnPTransition @ 0x140204E64 (DxgkCompletePnPTransition.c)
 *     DxgkStartPnPTransition @ 0x14020531C (DxgkStartPnPTransition.c)
 *     DpiDestroyBlockList @ 0x14023BD88 (DpiDestroyBlockList.c)
 *     DpiFdoDestroyRelatedObjects @ 0x140240494 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x140240540 (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoIsDevicePresent @ 0x140244F54 (DpiFdoIsDevicePresent.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1402490FC (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiFdoDetermineAffectedSession @ 0x14024B7A0 (DpiFdoDetermineAffectedSession.c)
 *     DpiPnpNotifyGdi @ 0x14024BD94 (DpiPnpNotifyGdi.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x14024EB50 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFdoDisarmWaitWake @ 0x1402554F4 (DpiFdoDisarmWaitWake.c)
 *     DpiDxgkDdiStopDevice @ 0x140255B18 (DpiDxgkDdiStopDevice.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x14031C134 (DpiDxgkDdiDisplayDetectControl.c)
 */

__int64 __fastcall DpiFdoStopAdapter(struct _DEVICE_OBJECT *a1, struct _GUID *a2)
{
  char *DeviceExtension; // rdi
  __int64 v5; // r13
  int v6; // eax
  int v7; // eax
  __int64 v8; // r14
  char *started; // rbx
  DXGADAPTER *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // r8d
  __int64 *v15; // rdx
  __int64 v16; // rcx
  __int128 *v17; // rax
  int IsDevicePresent; // eax
  char v19; // bl
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-59h]
  int Timeouta; // [rsp+20h] [rbp-59h]
  __int64 v28; // [rsp+28h] [rbp-51h]
  char v29[16]; // [rsp+30h] [rbp-49h] BYREF
  _OWORD v30[5]; // [rsp+40h] [rbp-39h] BYREF
  __int128 v31; // [rsp+90h] [rbp+17h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+27h]

  v29[0] = 0;
  memset(v30, 0, 0x48uLL);
  DeviceExtension = (char *)a1->DeviceExtension;
  v5 = *((_QWORD *)DeviceExtension + 5);
  *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
  v6 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  *((_DWORD *)DeviceExtension + 60) = v6;
  v7 = *((_DWORD *)DeviceExtension + 688);
  *((_DWORD *)DeviceExtension + 59) = 4;
  if ( (v7 & 1) == 0 )
    DpiFdoDisarmWaitWake(a1);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    *(_QWORD *)&v30[4] = *((_QWORD *)DeviceExtension + 337);
    v30[0] = 0x480000001EuLL;
    DWORD1(v30[3]) = (unsigned int)a1 & 0xFFFF00;
    memset(&v30[1], 0, 28);
    LODWORD(v30[3]) = 36;
    *((_QWORD *)&v30[3] + 1) = 0LL;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v30, *((_QWORD *)DeviceExtension + 736));
    if ( !DeviceExtension[480] )
      KeWaitForSingleObject(DeviceExtension + 4264, Executive, 0, 0, 0LL);
    v8 = DpiFdoDetermineAffectedSession(*((_QWORD *)DeviceExtension + 3));
    started = DxgkStartPnPTransition(a2, 0LL, v8, 0LL);
    if ( !started )
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 17862;
    }
    if ( *((_DWORD *)DeviceExtension + 1030) != 3 )
    {
      v10 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 504);
      if ( v10 )
        DxgkStartPnPStop(v10);
    }
    if ( (DeviceExtension[4040] & 1) != 0 || (struct _DEVICE_OBJECT *)qword_140168DE8 == a1 )
    {
      v11 = *((_QWORD *)DeviceExtension + 6);
      v12 = *((_QWORD *)DeviceExtension + 5);
      v31 = 0LL;
      LODWORD(v31) = 83886077;
      v32 = 0LL;
      v13 = DpiDxgkDdiDisplayDetectControl(DeviceExtension, v12, v11, &v31, Timeout, v28);
      if ( v13 < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v5 + 1128), v13);
        WdLogGlobalForLineNumber = 17905;
      }
      if ( (struct _DEVICE_OBJECT *)qword_140168DF0 == a1 )
      {
        LOBYTE(word_140168DDD) = 0;
        qword_140168DF0 = 0LL;
      }
      if ( (struct _DEVICE_OBJECT *)qword_140168DE8 == a1 )
      {
        qword_140168DE8 = 0LL;
        word_140168DDD = 0;
      }
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      ReleaseMiniportListMutex();
      if ( (DeviceExtension[4040] & 1) != 0 )
      {
        LOBYTE(Timeouta) = 1;
        DpiPnpNotifyGdi(a1, 0LL, started, v8, Timeouta, a2);
      }
      else
      {
        DxgkCompletePnPTransition((struct _PNP_TRANS_TOKEN *)started);
      }
      AcquireMiniportListMutex();
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    }
    else
    {
      DxgkCompletePnPTransition((struct _PNP_TRANS_TOKEN *)started);
    }
    IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 178, 0);
    if ( *((_QWORD *)DeviceExtension + 359) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 179, 0);
    if ( DeviceExtension[5816] )
    {
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 5800), 0);
      RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 5800));
    }
    if ( *((_QWORD *)DeviceExtension + 361) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 180, 0);
    if ( *((_QWORD *)DeviceExtension + 365) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 182, 0);
    if ( *((_QWORD *)DeviceExtension + 367) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 183, 0);
    if ( *((_QWORD *)DeviceExtension + 371) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 185, 0);
    if ( *((_QWORD *)DeviceExtension + 369) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 184, 0);
    if ( *((_QWORD *)DeviceExtension + 373) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 186, 0);
    if ( *((_QWORD *)DeviceExtension + 363) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 181, 0);
    if ( DpiFdoIsMsBddAnchoredDevice((__int64)a1) && dword_1401691D4 != -1 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(DeviceExtension + 3440), 1u);
      v14 = 0;
      v15 = (__int64 *)*((_QWORD *)DeviceExtension + 473);
      if ( *((_DWORD *)DeviceExtension + 950) )
      {
        v16 = *((_QWORD *)DeviceExtension + 473);
        do
        {
          if ( *v15 == v16 )
            break;
          if ( *((_DWORD *)v15 + 126) == dword_1401691D4 )
          {
            v17 = (__int128 *)v15[116];
            if ( v17 )
            {
              xmmword_140169150 = *v17;
              xmmword_140169160 = v17[1];
              xmmword_140169170 = v17[2];
              xmmword_140169180 = v17[3];
              xmmword_140169190 = v17[4];
              xmmword_1401691A0 = v17[5];
              xmmword_1401691B0 = v17[6];
              xmmword_1401691C0 = v17[7];
              v16 = *((_QWORD *)DeviceExtension + 473);
            }
          }
          v15 = (__int64 *)*v15;
          ++v14;
        }
        while ( v14 < *((_DWORD *)DeviceExtension + 950) );
      }
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3440));
      KeLeaveCriticalRegion();
    }
    DpiFdoDestroyRelatedObjects((__int64)a1, (__int64)a2);
    DpiBrightnessStopDevice(a1);
    DpiDestroyBlockList((__int64)DeviceExtension);
    if ( *((_DWORD *)DeviceExtension + 1030) != 3 )
      DpiRemoveAdapter((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2, (__int64)DeviceExtension, 0LL, 0LL, 1);
    KeSetEvent((PRKEVENT)(DeviceExtension + 3664), 0, 0);
  }
  else
  {
    v30[0] = 0x4000000006uLL;
    DWORD1(v30[3]) = (unsigned int)a1 & 0xFFFF00;
    memset(&v30[1], 0, 28);
    LODWORD(v30[3]) = 36;
    *((_QWORD *)&v30[3] + 1) = 0LL;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v30, 0x200000000uLL);
  }
  IsDevicePresent = DpiFdoIsDevicePresent((__int64)DeviceExtension, v29);
  v19 = v29[0];
  if ( IsDevicePresent < 0 )
    v19 = 1;
  LOBYTE(v20) = DpiFdoIsMsBddAnchoredDevice((__int64)a1);
  if ( (_BYTE)v20 || DpiFdoIsPostDevice(v21) )
  {
    if ( v19 )
    {
      v22 = (unsigned int)DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1, 0LL);
    }
    else if ( (_BYTE)v20 )
    {
      dword_1401691D0 = 2;
    }
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DeviceExtension[4040] &= ~4u;
  if ( v19 && (int)v22 < 0 )
    DpiDxgkDdiStopDevice(v5, *((_QWORD *)DeviceExtension + 6));
  if ( *((_QWORD *)DeviceExtension + 174) )
    DpiFdoDisconnectInterrupt((__int64)a1);
  v23 = *((_QWORD *)DeviceExtension + 61);
  if ( v23 )
  {
    PoFxUnregisterDevice(v23, v20, v22);
    *(_QWORD *)(*((_QWORD *)DeviceExtension + 504) + 3272LL) = 0LL;
    *((_QWORD *)DeviceExtension + 61) = 0LL;
  }
  memset(v30, 0, 0x48uLL);
  v30[0] = 0x4000000006uLL;
  memset(&v30[1], 0, 28);
  LODWORD(v30[3]) = 36;
  DWORD1(v30[3]) = (unsigned int)a1 & 0xFFFF00;
  *((_QWORD *)&v30[3] + 1) = 1LL;
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    v24 = *((_QWORD *)DeviceExtension + 736);
  else
    v24 = 0x200000000LL;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v30, v24);
}
