/*
 * XREFs of ndisEtwWriteMiniportRundown @ 0x140099298
 * Callers:
 *     ndisEtwRundownMiniports @ 0x140098F20 (ndisEtwRundownMiniports.c)
 * Callees:
 *     ?reset@?$KArray@_W$00@Rtl@@AEAAXXZ @ 0x140001C00 (-reset@-$KArray@_W$00@Rtl@@AEAAXXZ.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ndisEtwCaptureMiniportDriverData @ 0x140098584 (ndisEtwCaptureMiniportDriverData.c)
 *     ndisEtwCaptureMiniportEventLog @ 0x1400987A4 (ndisEtwCaptureMiniportEventLog.c)
 *     ndisEtwCaptureMiniportFilterList @ 0x1400988D4 (ndisEtwCaptureMiniportFilterList.c)
 *     ndisEtwCaptureMiniportMatchingHardwareId @ 0x140098A78 (ndisEtwCaptureMiniportMatchingHardwareId.c)
 *     ndisEtwCaptureMiniportProtocolList @ 0x140098BD0 (ndisEtwCaptureMiniportProtocolList.c)
 *     McTemplateK0wzqwwwwyjqxqqqqqqqqqqNR20mqNR23qNR25_EtwWriteTransfer @ 0x140099C40 (McTemplateK0wzqwwwwyjqxqqqqqqqqqqNR20mqNR23qNR25_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?LockBindings@BindEngine@Ndis@@QEAAXXZ @ 0x14016A4D0 (-LockBindings@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?UnlockBindings@BindEngine@Ndis@@QEAAXXZ @ 0x14016A510 (-UnlockBindings@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall ndisEtwWriteMiniportRundown(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v1; // rsi
  void *v3; // rbx
  int v4; // r13d
  unsigned int v5; // r12d
  int v6; // r15d
  void *v7; // rdi
  KIRQL v8; // dl
  _UNICODE_STRING *pAdapterInstanceName; // rcx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  unsigned __int16 Length; // cx
  const wchar_t *v12; // rax
  NDIS_EVENT_LOG_HANDLE__ *PnpEventLog; // rcx
  int v14; // eax
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  const wchar_t *v19; // rax
  const wchar_t *v20; // rax
  int v21; // ebx
  int v22; // eax
  unsigned int OperStatusFlags; // ebx
  _NET_IF_OPER_STATUS OperStatus; // edi
  _NET_IF_ADMIN_STATUS AdminStatus; // r12d
  unsigned int FilterPnPFlags; // r13d
  KIRQL NewIrql[2]; // [rsp+130h] [rbp-80h] BYREF
  __int16 v28; // [rsp+132h] [rbp-7Eh]
  unsigned __int16 v29; // [rsp+134h] [rbp-7Ch]
  unsigned __int16 v30; // [rsp+136h] [rbp-7Ah]
  __int16 v31; // [rsp+138h] [rbp-78h]
  int v32; // [rsp+13Ch] [rbp-74h]
  int v33; // [rsp+140h] [rbp-70h]
  void *v34; // [rsp+148h] [rbp-68h] BYREF
  void *v35; // [rsp+150h] [rbp-60h] BYREF
  __int64 v36; // [rsp+158h] [rbp-58h] BYREF
  __int64 v37; // [rsp+160h] [rbp-50h]
  _QWORD v38[2]; // [rsp+168h] [rbp-48h] BYREF
  unsigned int InterlockedFlags; // [rsp+178h] [rbp-38h]
  unsigned int WSyncFlags; // [rsp+17Ch] [rbp-34h]
  unsigned int SyncFlags; // [rsp+180h] [rbp-30h]
  unsigned int PnPFlags; // [rsp+184h] [rbp-2Ch]
  unsigned int Flags; // [rsp+188h] [rbp-28h]
  unsigned int IfIndex; // [rsp+18Ch] [rbp-24h]
  __int64 v45; // [rsp+190h] [rbp-20h]
  _QWORD *v46; // [rsp+198h] [rbp-18h] BYREF
  __int64 v47; // [rsp+1A0h] [rbp-10h] BYREF
  __int64 v48; // [rsp+1A8h] [rbp-8h]
  __int64 v49; // [rsp+1B0h] [rbp+0h] BYREF
  __int64 v50; // [rsp+1B8h] [rbp+8h]
  __int64 v51; // [rsp+1C0h] [rbp+10h]
  __int64 v52; // [rsp+1C8h] [rbp+18h] BYREF
  const wchar_t *v53; // [rsp+1D0h] [rbp+20h]
  const wchar_t *v54; // [rsp+1D8h] [rbp+28h]
  const wchar_t *v55; // [rsp+1E0h] [rbp+30h]
  const wchar_t *v56; // [rsp+1E8h] [rbp+38h]
  const wchar_t *Buffer; // [rsp+1F0h] [rbp+40h]
  __int64 v58; // [rsp+1F8h] [rbp+48h]
  _NET_LUID_LH v59; // [rsp+200h] [rbp+50h]
  __int64 v60[2]; // [rsp+208h] [rbp+58h] BYREF

  v1 = 0LL;
  v32 = 0;
  v49 = 0LL;
  v45 = 0LL;
  v50 = 0LL;
  v33 = 4;
  v31 = 4;
  v3 = 0LL;
  v30 = 4;
  v4 = 0;
  v29 = 4;
  v5 = 0;
  v28 = 4;
  v6 = 0;
  v38[0] = 0LL;
  v38[1] = 0LL;
  v7 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v46 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v52 = 0LL;
  *(_OWORD *)v60 = 0LL;
  Buffer = L"NULL";
  v56 = L"NULL";
  v55 = L"NULL";
  v54 = L"NULL";
  v53 = L"NULL";
  NewIrql[0] = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
  v8 = NewIrql[0];
  SyncFlags = a1->SyncFlags;
  WSyncFlags = a1->WSyncFlags;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v8);
  pAdapterInstanceName = a1->pAdapterInstanceName;
  InterlockedFlags = a1->InterlockedFlags;
  if ( pAdapterInstanceName )
  {
    LOWORD(v33) = pAdapterInstanceName->Length >> 1;
    Buffer = pAdapterInstanceName->Buffer;
  }
  DriverHandle = a1->DriverHandle;
  if ( DriverHandle )
  {
    Length = DriverHandle->ServiceName.Length;
    v12 = DriverHandle->ServiceName.Buffer;
    v31 = Length >> 1;
    v56 = v12;
  }
  PnpEventLog = a1->PnpEventLog;
  if ( PnpEventLog )
  {
    v14 = ndisEtwCaptureMiniportEventLog((__int64)PnpEventLog, (__int64)&v49, &v52);
    v5 = HIDWORD(v49);
    v4 = v14;
    v32 = v14;
    v45 = v50;
  }
  PhysicalDeviceObject = a1->PhysicalDeviceObject;
  if ( PhysicalDeviceObject )
  {
    v16 = ndisEtwCaptureMiniportMatchingHardwareId(PhysicalDeviceObject, (__int64)&v47);
    v17 = ndisEtwCaptureMiniportDriverData(a1->PhysicalDeviceObject, (void **)&v46, &v35, &v34, v60);
    v6 = HIDWORD(v47);
    v18 = v16 | v17;
    v3 = v35;
    v7 = v34;
    v32 = v18 | v4;
    if ( v46 )
    {
      v19 = (const wchar_t *)v46[1];
      v30 = *(_WORD *)v46 >> 1;
      v55 = v19;
    }
  }
  if ( v3 )
  {
    v29 = *(_WORD *)v3 >> 1;
    v54 = (const wchar_t *)*((_QWORD *)v3 + 1);
  }
  if ( v7 )
  {
    v20 = (const wchar_t *)*((_QWORD *)v7 + 1);
    v28 = *(_WORD *)v7 >> 1;
    v53 = v20;
  }
  Ndis::BindEngine::LockBindings(&a1->BindEngine);
  v21 = ndisEtwCaptureMiniportFilterList((__int64)a1, (__int64)v38);
  v22 = ndisEtwCaptureMiniportProtocolList((__int64)a1, (__int64)&v36);
  v32 |= v21 | v22;
  Ndis::BindEngine::UnlockBindings(&a1->BindEngine);
  v58 = v5;
  if ( (byte_14011D046 & 8) != 0 )
  {
    if ( HIDWORD(v36) )
      v51 = v37;
    else
      v51 = 0LL;
    if ( !v5 )
      v45 = 0LL;
    OperStatusFlags = a1->OperStatusFlags;
    OperStatus = a1->OperStatus;
    AdminStatus = a1->AdminStatus;
    FilterPnPFlags = a1->FilterPnPFlags;
    PnPFlags = a1->PnPFlags;
    Flags = a1->Flags;
    v59.Value = (ULONG64)a1->NetLuid;
    IfIndex = a1->IfIndex;
    if ( v6 )
      v1 = v48;
    McTemplateK0wzqwwwwyjqxqqqqqqqqqqNR20mqNR23qNR25_EtwWriteTransfer(
      v29,
      v30,
      (_DWORD)a1 + 4008,
      (unsigned __int16)v33,
      (__int64)Buffer,
      v1,
      v32,
      v31,
      (__int64)v56,
      v30,
      (__int64)v55,
      v29,
      (__int64)v54,
      v28,
      (__int64)v53,
      (__int64)v60,
      (__int64)&a1->InterfaceGuid,
      IfIndex,
      v59.Value,
      Flags,
      PnPFlags,
      FilterPnPFlags,
      AdminStatus,
      OperStatus,
      OperStatusFlags,
      SyncFlags,
      WSyncFlags,
      InterlockedFlags,
      v58);
  }
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v34, 0LL);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v35, 0LL);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&v46, 0LL);
  Rtl::KArray<wchar_t,1>::reset(&v47);
  Rtl::KArray<wchar_t,1>::reset(&v36);
  Rtl::KArray<wchar_t,1>::reset(v38);
  Rtl::KArray<wchar_t,1>::reset(&v49);
}
