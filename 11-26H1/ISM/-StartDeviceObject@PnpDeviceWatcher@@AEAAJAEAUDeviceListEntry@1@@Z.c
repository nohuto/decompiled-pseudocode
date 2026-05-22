/*
 * XREFs of ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800E4B60
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18005DB24 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x180021620 (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     ?Release@InputContext@@UEAAKXZ @ 0x180021CF0 (-Release@InputContext@@UEAAKXZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180061DD4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x18008DE74 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x18008DFC8 (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?load@?$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA?AW4GestureOperationState@@W4memory_order@2@@Z @ 0x180094358 (-load@-$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA-AW4GestureOperationState@@W4memor.c)
 *     ?GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ @ 0x1800980D8 (-GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800E3D7C (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ??1?$unique_ptr@UDeviceListEntry@PnpDeviceWatcher@@U?$default_delete@UDeviceListEntry@PnpDeviceWatcher@@@std@@@std@@QEAA@XZ @ 0x1800E4868 (--1-$unique_ptr@UDeviceListEntry@PnpDeviceWatcher@@U-$default_delete@UDeviceListEntry@PnpDeviceW.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800E4E78 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PnpDeviceWatcher::StartDeviceObject(
        PnpDeviceWatcher *this,
        struct PnpDeviceWatcher::DeviceListEntry *a2)
{
  __int64 v4; // rdx
  struct PnpDeviceWatcher::DeviceListEntry *i; // rbx
  __int64 v6; // rdx
  InputContext *v7; // r8
  InputContext **v8; // rcx
  const char *v9; // r8
  __int64 v10; // rdx
  unsigned int v11; // ebx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // r8d
  HSTRING *v18; // rbx
  int InterfacePath; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  __int64 v24; // rax
  InputContext *v25; // rcx
  PnpDeviceWatcher **v26; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  PnpDeviceWatcher::RetryDeviceListEntry *StringRawBuffer; // [rsp+78h] [rbp+48h] BYREF
  HSTRING string; // [rsp+80h] [rbp+50h] BYREF
  const char *v30; // [rsp+88h] [rbp+58h] BYREF

  if ( (unsigned int)std::_Atomic_storage<enum GestureOperationState,4>::load((unsigned int *)(*((_QWORD *)a2 + 2)
                                                                                             + 124LL)) == 2 )
    return 0LL;
  if ( !*(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL) )
  {
    for ( i = (struct PnpDeviceWatcher::DeviceListEntry *)*((_QWORD *)this + 8);
          i != (PnpDeviceWatcher *)((char *)this + 64);
          i = *(struct PnpDeviceWatcher::DeviceListEntry **)i )
    {
      if ( i != a2 )
      {
        if ( (unsigned int)std::_Atomic_storage<enum GestureOperationState,4>::load((unsigned int *)(*((_QWORD *)a2 + 2) + 124LL)) != 1 )
        {
          v9 = "onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp";
          v10 = 918LL;
          goto LABEL_14;
        }
        if ( *(_DWORD *)(v6 + 112) == *((_DWORD *)v7 + 28) )
        {
          v8 = (InputContext **)((char *)v7 + 16);
          if ( *((_QWORD *)v7 + 2) )
            v7 = *v8;
          if ( *(_DWORD *)(v6 + 108) < *((_DWORD *)v7 + 27) )
            Microsoft::WRL::ComPtr<HidLampArrayDevice>::operator=(v8, (volatile signed __int32 *)v6);
        }
      }
    }
  }
  v13 = std::_Atomic_storage<enum GestureOperationState,4>::load((unsigned int *)(*((_QWORD *)a2 + 2) + 124LL));
  if ( !v13 )
    goto LABEL_20;
  v15 = v13 - 1;
  if ( v15 )
  {
    if ( v15 != 1 )
    {
LABEL_20:
      v9 = "onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp";
      v10 = 569LL;
LABEL_14:
      v11 = -2147418113;
      goto LABEL_15;
    }
  }
  else
  {
    _InterlockedExchange((volatile __int32 *)(v14 + 124), 2);
  }
  if ( *((_BYTE *)a2 + 24) || !*(_QWORD *)(*((_QWORD *)a2 + 2) + 32LL) )
    return 0LL;
  *((_BYTE *)a2 + 24) = 1;
  if ( (!IsEdition(6176LL) || *(_DWORD *)(*((_QWORD *)a2 + 2) + 120LL) != 65548)
    && (unsigned int)PnpDevice::OpenInterface(*((PnpDevice **)a2 + 2), v16, v17) == -2147024864 )
  {
    v18 = (HSTRING *)*((_QWORD *)a2 + 2);
    WindowsDeleteString(0LL);
    string = 0LL;
    InterfacePath = PnpDevice::GetInterfacePath(v18, &string);
    v11 = InterfacePath;
    if ( InterfacePath >= 0 )
    {
      if ( (unsigned int)dword_180251248 > 5 )
      {
        StringRawBuffer = (PnpDeviceWatcher::RetryDeviceListEntry *)WindowsGetStringRawBuffer(string, 0LL);
        v30 = "Failed to exclusively open LampArray device, adding to retry list";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          (__int64)&dword_180251248,
          byte_1802163B0,
          v20,
          v21,
          (const unsigned __int16 **)&v30,
          (const WCHAR **)&StringRawBuffer);
      }
      v22 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v23 = v22;
      if ( v22 )
      {
        *v22 = 0LL;
        v22[1] = 0LL;
        v22[3] = 0LL;
        v22[2] = 0LL;
        v24 = *((_QWORD *)a2 + 2);
        if ( v23[2] != v24 )
        {
          if ( v24 )
            _InterlockedAdd((volatile signed __int32 *)(v24 + 8), 1u);
          v25 = (InputContext *)v23[2];
          v23[2] = v24;
          if ( v25 )
            InputContext::Release(v25);
        }
        *((_WORD *)v23 + 14) = 3000;
        *((_DWORD *)v23 + 6) = QpcTimeConverter::GetCurrentMilliSecTime((PnpDeviceWatcher *)((char *)this + 112)) + 100;
        StringRawBuffer = 0LL;
        v26 = (PnpDeviceWatcher **)*((_QWORD *)this + 12);
        if ( *v26 != (PnpDeviceWatcher *)((char *)this + 88) )
          __fastfail(3u);
        *v23 = (char *)this + 88;
        v23[1] = v26;
        *v26 = (PnpDeviceWatcher *)v23;
        *((_QWORD *)this + 12) = v23;
        ++*((_DWORD *)this + 26);
        std::unique_ptr<PnpDeviceWatcher::DeviceListEntry>::~unique_ptr<PnpDeviceWatcher::DeviceListEntry>(&StringRawBuffer);
        v11 = 0;
      }
      else
      {
        StringRawBuffer = 0LL;
        v11 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x24E,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
          (const char *)0x8007000ELL);
        std::unique_ptr<PnpDeviceWatcher::DeviceListEntry>::~unique_ptr<PnpDeviceWatcher::DeviceListEntry>(&StringRawBuffer);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x249,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
        (const char *)(unsigned int)InterfacePath);
    }
    WindowsDeleteString(string);
    return v11;
  }
  v11 = LampArrayRawInputProvider::OnLampArrayAdded(*(LampArrayRawInputProvider **)this, *((HSTRING **)a2 + 2));
  if ( (v11 & 0x80000000) != 0 )
  {
    v9 = "onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp";
    v10 = 604LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v10, (int)v9, (const char *)v11);
    return v11;
  }
  if ( v11 != 1 )
    return 0LL;
  PnpDeviceWatcher::StopDeviceObject(this, a2);
  return 1LL;
}
