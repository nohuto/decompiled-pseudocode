/*
 * XREFs of ?Open@PenInterface@@QEAAJXZ @ 0x1801942C4
 * Callers:
 *     wil::ResultFromException__lambda_cedfd987e83550419e6052857f0ac72c___ @ 0x1801939A0 (wil--ResultFromException__lambda_cedfd987e83550419e6052857f0ac72c___.c)
 *     ?Initialize@PenInterface@@QEAAJXZ @ 0x1801940EC (-Initialize@PenInterface@@QEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800812E8 (-reset@-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@detai.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180081CC0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180089A20 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1?CM_Unregister_Notification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHCMNOTIFICATION__@@@Z @ 0x1801949CC (-reset@-$unique_storage@U-$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1-CM_Unregister_N.c)
 */

__int64 __fastcall PenInterface::Open(void **this)
{
  char *v2; // rcx
  HANDLE FileW; // rax
  const char *v4; // r9
  void *v5; // rbx
  CONFIGRET v7; // eax
  DWORD v8; // eax
  _DWORD v9[4]; // [rsp+40h] [rbp-1B8h] BYREF
  void *v10; // [rsp+50h] [rbp-1A8h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]

  v2 = (char *)(this + 2);
  if ( *((_QWORD *)v2 + 3) > 7uLL )
    v2 = *(char **)v2;
  FileW = CreateFileW((LPCWSTR)v2, 0xC0000000, 3u, 0LL, 3u, 0, 0LL);
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    this + 7,
    FileW);
  v5 = this[7];
  if ( v5 == (void *)-1LL )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x62,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\peninterface.cpp",
             v4);
  memset_0(v9, 0, 0x1A0uLL);
  v9[0] = 416;
  v9[2] = 1;
  v10 = v5;
  wil::details::unique_storage<wil::details::resource_policy<HCMNOTIFICATION__ *,unsigned long (*)(HCMNOTIFICATION__ *),&unsigned long CM_Unregister_Notification(HCMNOTIFICATION__ *),wistd::integral_constant<unsigned __int64,0>,HCMNOTIFICATION__ *,HCMNOTIFICATION__ *,0,std::nullptr_t>>::reset(
    this + 8,
    0LL);
  v7 = CM_Register_Notification(v9, this, &PenInterface::s_NotifyDeviceChanged, this + 8);
  v8 = CM_MapCrToWin32Err(v7, 0x507u);
  if ( v8 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x6D,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\peninterface.cpp",
             (const char *)v8);
  else
    return 0LL;
}
