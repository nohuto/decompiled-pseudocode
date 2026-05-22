/*
 * XREFs of ?RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevice@@PEAX@Z @ 0x1800E0298
 * Callers:
 *     ??$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEAPEAVHIDDevice@@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIHidDevice@SpatialInteractions@Internal@Windows@@AEAPEAVHIDDevice@@AEAPEAX@Z @ 0x1800D374C (--$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEA.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180089A20 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800DFE3C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     GetRIMDeviceInstancePath @ 0x1800DFFB4 (GetRIMDeviceInstancePath.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialRimDevice::RuntimeClassInitialize(
        Windows::Internal::SpatialInteractions::SpatialRimDevice *this,
        struct HIDDevice *a2,
        void *a3)
{
  int HIDCapabilities; // ebx
  __int64 v7; // rdx
  __int64 v9; // rdx
  int v10; // ebx
  HANDLE CurrentProcess; // rbx
  HANDLE v12; // rax
  const char *v13; // r9
  __int64 v14; // rdx
  HANDLE v15; // rax
  void *v16; // rdi
  void *v17; // rbx
  HANDLE v18; // rax
  _OWORD v19[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct _HIDP_CAPS *v22; // [rsp+80h] [rbp+8h] BYREF

  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 10);
  v22 = 0LL;
  HIDCapabilities = HIDDevice::GetHIDCapabilities((PHIDP_PREPARSED_DATA *)a2, &v22);
  if ( HIDCapabilities < 0 )
  {
    v7 = 58LL;
    goto LABEL_3;
  }
  *(struct _HIDP_CAPS *)((char *)this + 72) = *v22;
  *((_QWORD *)this + 17) = *((_QWORD *)a2 + 6);
  v9 = *((_QWORD *)a2 + 2);
  memset(v19, 0, sizeof(v19));
  v20 = 0LL;
  LODWORD(v19[0]) = 3;
  v10 = RIMGetDeviceProperties(a3, v9, v19);
  if ( (v10 & 0xC0000000) == 0xC0000000 )
  {
    HIDCapabilities = v10 | 0x10000000;
    if ( HIDCapabilities >= 0 )
      return (unsigned int)HIDCapabilities;
    v7 = 65LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
      (const char *)(unsigned int)HIDCapabilities);
    return (unsigned int)HIDCapabilities;
  }
  *((_DWORD *)this + 13) = DWORD2(v19[0]);
  *((_WORD *)this + 28) = WORD6(v19[0]);
  WindowsDeleteString(*((HSTRING *)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  HIDCapabilities = GetRIMDeviceInstancePath((__int64)a3, *((_QWORD *)a2 + 2), (HSTRING *)this + 8);
  if ( HIDCapabilities < 0 )
  {
    v7 = 70LL;
    goto LABEL_3;
  }
  CurrentProcess = GetCurrentProcess();
  v12 = GetCurrentProcess();
  if ( !DuplicateHandle(v12, a3, CurrentProcess, (LPHANDLE)this + 19, 0, 0, 2u) )
  {
    v14 = 72LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v14,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
             v13);
  }
  v15 = GetCurrentProcess();
  v16 = (void *)*((_QWORD *)a2 + 2);
  v17 = v15;
  v18 = GetCurrentProcess();
  if ( !DuplicateHandle(v18, v16, v17, (LPHANDLE)this + 21, 0, 0, 2u) )
  {
    v14 = 73LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v14,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
             v13);
  }
  return 0LL;
}
