/*
 * XREFs of ?OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z @ 0x1800E60C4
 * Callers:
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E7A9C (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180089A20 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetAsyncIoResult@PnpDevice@@QEAAJKPEAU_OVERLAPPED@@PEA_K@Z @ 0x1800E5B60 (-GetAsyncIoResult@PnpDevice@@QEAAJKPEAU_OVERLAPPED@@PEA_K@Z.c)
 *     ?OutputIoctlAsync@PnpDevice@@QEAAJK_KPEAXPEAU_OVERLAPPED@@@Z @ 0x1800E6180 (-OutputIoctlAsync@PnpDevice@@QEAAJK_KPEAXPEAU_OVERLAPPED@@@Z.c)
 */

__int64 __fastcall PnpDevice::OutputIoctl(PnpDevice *this, __int64 a2, __int64 a3, void *a4, unsigned __int64 *a5)
{
  unsigned int v7; // edx
  unsigned __int64 v8; // r8
  const char *v9; // r9
  int AsyncIoResult; // eax
  DWORD v11; // edx
  unsigned int v12; // ebx
  struct _OVERLAPPED v14; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a5 = 0LL;
  v14.hEvent = CreateEventW(0LL, 1, 0, 0LL);
  if ( v14.hEvent )
  {
    AsyncIoResult = PnpDevice::OutputIoctlAsync(this, v7, v8, a4, &v14);
    if ( AsyncIoResult >= 0 )
    {
      AsyncIoResult = PnpDevice::GetAsyncIoResult(this, v11, &v14, a5);
      if ( AsyncIoResult >= 0 )
      {
        v12 = 0;
        goto LABEL_7;
      }
    }
  }
  else
  {
    AsyncIoResult = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x1BC,
                      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
                      v9);
  }
  v12 = AsyncIoResult;
LABEL_7:
  CloseHandle(v14.hEvent);
  return v12;
}
