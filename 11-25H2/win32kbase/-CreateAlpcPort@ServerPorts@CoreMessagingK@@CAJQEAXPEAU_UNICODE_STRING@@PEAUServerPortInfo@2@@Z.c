/*
 * XREFs of ?CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z @ 0x1400FCFCC
 * Callers:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1400FC164 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1400FD770 (-DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z.c)
 *     ?EnsureAlpcCallbackRegistered@ServerPorts@CoreMessagingK@@CAJXZ @ 0x1400FE684 (-EnsureAlpcCallbackRegistered@ServerPorts@CoreMessagingK@@CAJXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall CoreMessagingK::ServerPorts::CreateAlpcPort(
        void *const a1,
        struct _UNICODE_STRING *a2,
        struct CoreMessagingK::ServerPortInfo *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  HANDLE Handle; // [rsp+20h] [rbp-79h] BYREF
  _QWORD v12[2]; // [rsp+28h] [rbp-71h] BYREF
  _DWORD v13[2]; // [rsp+38h] [rbp-61h] BYREF
  __int64 v14; // [rsp+40h] [rbp-59h]
  struct _UNICODE_STRING *v15; // [rsp+48h] [rbp-51h]
  int v16; // [rsp+50h] [rbp-49h]
  int v17; // [rsp+54h] [rbp-45h]
  void *v18; // [rsp+58h] [rbp-41h]
  __int64 v19; // [rsp+60h] [rbp-39h]
  _QWORD v20[10]; // [rsp+70h] [rbp-29h] BYREF

  v13[1] = 0;
  v17 = 0;
  Handle = 0LL;
  v6 = CoreMessagingK::ServerPorts::EnsureAlpcCallbackRegistered();
  if ( v6 >= 0 )
  {
    v14 = 0LL;
    v19 = 0LL;
    v13[0] = 48;
    v16 = 512;
    v15 = a2;
    v18 = a1;
    memset(v20, 0, 0x48uLL);
    LODWORD(v20[0]) = 1179648;
    v20[2] = 0xFFFFLL;
    v6 = ZwAlpcCreatePort(&Handle, v13, v20);
    if ( v6 >= 0 )
    {
      v12[0] = *(_QWORD *)(W32GetUserCoreMessagingSessionState(v8, v7, v9) + 64);
      v12[1] = Handle;
      v6 = ZwAlpcSetInformation(Handle, 9LL, v12);
      if ( v6 < 0 )
      {
        ZwClose(Handle);
      }
      else
      {
        v6 = 0;
        *((_QWORD *)a3 + 1) = Handle;
        CoreMessagingK::ServerPorts::DrainPort(a3);
      }
    }
  }
  return (unsigned int)v6;
}
