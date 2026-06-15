/*
 * XREFs of ?FindApoRegistrationUnderDevice@@YAJPEAGU_GUID@@AEA_N@Z @ 0x1801618AC
 * Callers:
 *     ?LookUpApoRegistration@@YAJPEAG0U_GUID@@@Z @ 0x180161F08 (-LookUpApoRegistration@@YAJPEAG0U_GUID@@@Z.c)
 * Callees:
 *     ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z @ 0x1800480C0 (-IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800B0154 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C43D4 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 */

__int64 __fastcall FindApoRegistrationUnderDevice(DEVINSTID_W pDeviceID, struct _GUID *a2, bool *a3)
{
  CONFIGRET v5; // eax
  DWORD v6; // eax
  CONFIGRET v8; // eax
  signed int v9; // eax
  signed int v10; // ebx
  GUID rguid; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DEVINST dnDevNode; // [rsp+60h] [rbp+18h] BYREF
  HKEY hKey; // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0;
  dnDevNode = 0;
  v5 = CM_Locate_DevNodeW(&dnDevNode, pDeviceID, 0);
  v6 = CM_MapCrToWin32Err(v5, 0x507u);
  if ( v6 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x127,
             (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
             (const char *)v6);
  hKey = 0LL;
  v8 = CM_Open_DevNode_Key(dnDevNode, 0x20019u, 0, 1u, &hKey, 1u);
  v9 = CM_MapCrToWin32Err(v8, 0x507u);
  v10 = v9;
  if ( v9 > 0 )
    v10 = (unsigned __int16)v9 | 0x80070000;
  if ( v10 >= 0 )
  {
    rguid = *a2;
    *a3 = IsAPOClsidRegistered(hKey, &rguid);
    v10 = 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return (unsigned int)v10;
}
