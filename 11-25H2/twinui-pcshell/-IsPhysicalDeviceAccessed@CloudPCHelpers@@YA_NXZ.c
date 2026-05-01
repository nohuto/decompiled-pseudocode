/*
 * XREFs of ?IsPhysicalDeviceAccessed@CloudPCHelpers@@YA_NXZ @ 0x18061B7A0
 * Callers:
 *     ?DeletePDAKeyIfPhysicalDeviceAccessed@CloudPCHelpers@@YAXXZ @ 0x180619FFC (-DeletePDAKeyIfPhysicalDeviceAccessed@CloudPCHelpers@@YAXXZ.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18035260C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

bool __fastcall CloudPCHelpers::IsPhysicalDeviceAccessed(CloudPCHelpers *this)
{
  unsigned int ValueW; // eax
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v5; // [rsp+50h] [rbp+8h] BYREF
  DWORD v6; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0;
  v6 = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
             L"PhysicalDeviceAccessed",
             0x10u,
             0LL,
             &v5,
             &v6);
  if ( ValueW )
  {
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      153LL,
      (__int64)"onecoreuap\\internal\\shell\\inc\\private\\CloudPCCommon.h",
      (const char *)ValueW);
    LOBYTE(v2) = 0;
  }
  else
  {
    return v5 == 1;
  }
  return v2;
}
