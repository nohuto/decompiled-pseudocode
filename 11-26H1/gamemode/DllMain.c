/*
 * XREFs of DllMain @ 0x18000654C
 * Callers:
 *     __DllMainCRTStartup @ 0x1800020E4 (__DllMainCRTStartup.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180001008 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001150 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18000FE80 (__security_check_cookie.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  REGHANDLE v4; // rcx
  int v6; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7[2]; // [rsp+38h] [rbp-38h] BYREF
  int *v8; // [rsp+58h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp-10h]

  if ( fdwReason == 1 )
  {
    TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_180017038);
    if ( (unsigned int)dword_180017038 > 4 )
    {
      v6 = 1;
      v8 = &v6;
      v9 = 4LL;
      tlgWriteTransfer_EventWriteTransfer((__int64)&dword_180017038, byte_180013828, 0LL, 0LL, 3u, v7);
    }
    DisableThreadLibraryCalls(hinstDLL);
  }
  else if ( !fdwReason )
  {
    if ( (unsigned int)dword_180017038 > 4 )
    {
      v6 = 0;
      v8 = &v6;
      v9 = 4LL;
      tlgWriteTransfer_EventWriteTransfer((__int64)&dword_180017038, byte_180013809, 0LL, 0LL, 3u, v7);
    }
    v4 = RegHandle;
    RegHandle = 0LL;
    dword_180017038 = 0;
    EventUnregister(v4);
  }
  return 1;
}
