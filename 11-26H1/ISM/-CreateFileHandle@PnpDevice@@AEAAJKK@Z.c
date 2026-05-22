/*
 * XREFs of ?CreateFileHandle@PnpDevice@@AEAAJKK@Z @ 0x1800E5AB4
 * Callers:
 *     ?OpenInterface@PnpDevice@@QEAAJKK@Z @ 0x18008E00C (-OpenInterface@PnpDevice@@QEAAJKK@Z.c)
 *     ?OnPnpNotification@PnpDevice@@QEAAXW4DeviceEventId@PnpApiWrapper@@@Z @ 0x1800E606C (-OnPnpNotification@PnpDevice@@QEAAXW4DeviceEventId@PnpApiWrapper@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180089A20 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?RegisterDeviceHandleNotification@PnpApiWrapper@@YAJPEAXP6AXW4DeviceEventId@1@PEAUHSTRING__@@0@Z0AEAPEAX@Z @ 0x1800E7420 (-RegisterDeviceHandleNotification@PnpApiWrapper@@YAJPEAXP6AXW4DeviceEventId@1@PEAUHSTRING__@@0@Z.c)
 */

__int64 __fastcall PnpDevice::CreateFileHandle(PnpDevice *this, DWORD dwDesiredAccess, DWORD dwShareMode)
{
  const WCHAR *StringRawBuffer; // rax
  void *v7; // rdx
  const char *v8; // r9
  void **dwCreationDisposition; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 4), 0LL);
  _InterlockedExchange64(
    (volatile __int64 *)this + 5,
    (__int64)CreateFileW(StringRawBuffer, dwDesiredAccess, dwShareMode, 0LL, 3u, 0x60000000u, 0LL));
  if ( *((_QWORD *)this + 5) == -1LL )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1A1,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
             v8);
  PnpApiWrapper::RegisterDeviceHandleNotification(
    *((PnpApiWrapper **)this + 5),
    v7,
    (void (__high *)(enum PnpApiWrapper::DeviceEventId, HSTRING, void *))this,
    (char *)this + 48,
    dwCreationDisposition);
  return 0LL;
}
