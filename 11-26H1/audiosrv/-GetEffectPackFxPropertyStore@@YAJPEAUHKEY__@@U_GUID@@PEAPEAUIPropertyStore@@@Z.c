/*
 * XREFs of ?GetEffectPackFxPropertyStore@@YAJPEAUHKEY__@@U_GUID@@PEAPEAUIPropertyStore@@@Z @ 0x180131F98
 * Callers:
 *     ?CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x18014ABF4 (-CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV-$shared_ptr@$$CBUE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180048340 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800B0154 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C43D4 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 */

__int64 __fastcall GetEffectPackFxPropertyStore(HKEY hKey, struct _GUID *a2, struct IPropertyStore **a3)
{
  int v3; // r9d
  int v6; // r10d
  int v7; // r11d
  int v8; // ebx
  int Data3; // edi
  int Data2; // esi
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  HKEY v14; // rcx
  int RegistryPropertyStore2; // eax
  int phkResult; // [rsp+20h] [rbp-298h]
  int v18; // [rsp+28h] [rbp-290h]
  int v19; // [rsp+30h] [rbp-288h]
  int v20; // [rsp+38h] [rbp-280h]
  int v21; // [rsp+40h] [rbp-278h]
  int v22; // [rsp+48h] [rbp-270h]
  int v23; // [rsp+50h] [rbp-268h]
  int v24; // [rsp+58h] [rbp-260h]
  int v25; // [rsp+60h] [rbp-258h]
  int v26; // [rsp+68h] [rbp-250h]
  HKEY v27[2]; // [rsp+70h] [rbp-248h] BYREF
  WCHAR SubKey[256]; // [rsp+80h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+0h]

  v3 = a2->Data4[4];
  v26 = a2->Data4[7];
  v6 = a2->Data4[2];
  v7 = a2->Data4[1];
  v8 = a2->Data4[0];
  Data3 = a2->Data3;
  Data2 = a2->Data2;
  v25 = a2->Data4[6];
  *a3 = 0LL;
  v24 = a2->Data4[5];
  v23 = v3;
  v22 = a2->Data4[3];
  v21 = v6;
  v20 = v7;
  v19 = v8;
  v18 = Data3;
  phkResult = Data2;
  v11 = StringCchPrintfW(
          SubKey,
          256LL,
          L"EffectPackRegistration\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\FxProperties",
          a2->Data1,
          phkResult,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v27[0] = 0LL;
    v13 = RegOpenKeyExW(hKey, SubKey, 0, 0x20019u, v27);
    if ( v13 )
    {
      v12 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0x46,
              (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
              (const char *)v13);
    }
    else
    {
      v14 = v27[0];
      v27[0] = 0LL;
      RegistryPropertyStore2 = MMDeviceCreateRegistryPropertyStore2(v14, a3);
      v12 = RegistryPropertyStore2;
      if ( RegistryPropertyStore2 >= 0 )
        v12 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x48,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
          (const char *)(unsigned int)RegistryPropertyStore2);
    }
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(v27);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
      (const char *)(unsigned int)v11);
  }
  return v12;
}
