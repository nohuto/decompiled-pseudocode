/*
 * XREFs of ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z @ 0x1800E5D0C
 * Callers:
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180021A4C (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x180020350 (-GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID.c)
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x1800204B8 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x1800207CC (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?Release@InputContext@@UEAAKXZ @ 0x180021CF0 (-Release@InputContext@@UEAAKXZ.c)
 *     ?ParseHardwareIdStrings@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x180061BD8 (-ParseHardwareIdStrings@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800647C4 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??0PnpDevice@@AEAA@XZ @ 0x180068320 (--0PnpDevice@@AEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PnpDevice::MakeAndInitialize(HSTRING string, struct PnpDeviceWatcher *a2, struct PnpDevice **a3)
{
  PnpDevice *v6; // rax
  PnpDevice *v7; // rbx
  int v9; // eax
  int DeviceGuidProperty; // edi
  DEVNODE *v11; // r14
  WCHAR *StringRawBuffer; // rax
  CONFIGRET DevNodeW; // eax
  unsigned int v14; // esi
  int v15; // eax
  unsigned int v16; // edi
  DEVNODE v17; // edx
  int i; // r15d
  CONFIGRET Parent; // eax
  int v20; // eax
  DEVNODE v21; // r8d
  DEVNODE pdnDevInst; // [rsp+20h] [rbp-30h] BYREF
  HSTRING stringa; // [rsp+28h] [rbp-28h] BYREF
  HSTRING v24; // [rsp+30h] [rbp-20h] BYREF
  struct _DEVPROPKEY v25; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v24 = string;
  *a3 = 0LL;
  v6 = (PnpDevice *)RefCountedObject::operator new(0x98uLL);
  if ( v6 )
    v7 = PnpDevice::PnpDevice(v6);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x282,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  v9 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)v7 + 3, &v24);
  DeviceGuidProperty = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x285,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
      (const char *)(unsigned int)v9);
    InputContext::Release(v7);
    return (unsigned int)DeviceGuidProperty;
  }
  v11 = (DEVNODE *)((char *)v7 + 104);
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(string, 0LL);
  DevNodeW = CM_Locate_DevNodeW((PDEVINST)v7 + 26, StringRawBuffer, 0);
  v14 = -2147023728;
  if ( DevNodeW )
  {
    *v11 = 0;
    v15 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)DevNodeW);
    v16 = v15;
    if ( v15 == -2147023728 )
    {
LABEL_12:
      InputContext::Release(v7);
      return v14;
    }
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x335,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)(unsigned int)v15);
      v14 = v16;
      goto LABEL_12;
    }
  }
  pdnDevInst = *v11;
  DeviceGuidProperty = PnpApiWrapper::Details::GetDeviceGuidProperty(
                         (PnpApiWrapper::Details *)Adapters::GetDeviceNodeProperty,
                         (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&pdnDevInst,
                         (void *)&DEVPKEY_Device_ClassGuid,
                         (const struct _DEVPROPKEY *)((char *)v7 + 56));
  if ( DeviceGuidProperty < 0 )
  {
LABEL_34:
    InputContext::Release(v7);
  }
  else
  {
    *((_QWORD *)v7 + 18) = a2;
    v17 = *((_DWORD *)v7 + 26);
    *((_DWORD *)v7 + 28) = v17;
    *(_OWORD *)((char *)v7 + 88) = *(_OWORD *)((char *)v7 + 56);
    pdnDevInst = v17;
    for ( i = 1; ; ++i )
    {
      v25.fmtid = 0LL;
      Parent = CM_Get_Parent(&pdnDevInst, v17, 0);
      if ( Parent )
      {
        pdnDevInst = 0;
        v20 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)Parent);
        DeviceGuidProperty = v20;
        if ( v20 == -2147023728 )
        {
          DeviceGuidProperty = -2147023728;
          goto LABEL_34;
        }
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x37A,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
            (const char *)(unsigned int)v20);
          goto LABEL_34;
        }
      }
      else
      {
        v21 = pdnDevInst;
      }
      LODWORD(v24) = v21;
      DeviceGuidProperty = PnpApiWrapper::Details::GetDeviceGuidProperty(
                             (PnpApiWrapper::Details *)Adapters::GetDeviceNodeProperty,
                             (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v24,
                             (void *)&DEVPKEY_Device_ClassGuid,
                             &v25);
      if ( DeviceGuidProperty < 0 )
        goto LABEL_34;
      if ( *(_QWORD *)&v25.fmtid.Data1 == *(_QWORD *)&GUID_NULL.Data1
        && *(_QWORD *)v25.fmtid.Data4 == *(_QWORD *)GUID_NULL.Data4 )
      {
        break;
      }
      v17 = pdnDevInst;
      if ( *(_QWORD *)&v25.fmtid.Data1 == 0x4647CD8BE0CBF06CLL && *(_QWORD *)v25.fmtid.Data4 == 0x74F9F0433B268ABBLL
        || *(_QWORD *)&v25.fmtid.Data1 == 0x11D074D3745A17A0LL && *(_QWORD *)v25.fmtid.Data4 == 0xDA570FC9A000FEB6uLL )
      {
        *(DEVPROPGUID *)((char *)v7 + 88) = v25.fmtid;
        *((_DWORD *)v7 + 28) = v17;
        *((_DWORD *)v7 + 27) = i;
      }
    }
    WindowsDeleteString(0LL);
    stringa = 0LL;
    LODWORD(v24) = *((_DWORD *)v7 + 26);
    DeviceGuidProperty = PnpApiWrapper::Details::GetDeviceStringProperty(
                           (PnpApiWrapper::Details *)Adapters::GetDeviceNodeProperty,
                           (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v24,
                           (void *)&DEVPKEY_Device_HardwareIds,
                           &stringa);
    if ( DeviceGuidProperty >= 0 )
    {
      DeviceGuidProperty = PnpDevice::ParseHardwareIdStrings(v7, stringa);
      if ( DeviceGuidProperty >= 0 )
      {
        _InterlockedExchange((volatile __int32 *)v7 + 31, 1);
        *a3 = v7;
        WindowsDeleteString(stringa);
        return 0LL;
      }
    }
    WindowsDeleteString(stringa);
    stringa = 0LL;
    InputContext::Release(v7);
  }
  return (unsigned int)DeviceGuidProperty;
}
