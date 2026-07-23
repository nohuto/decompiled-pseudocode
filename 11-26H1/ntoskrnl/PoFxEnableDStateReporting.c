/*
 * XREFs of PoFxEnableDStateReporting @ 0x1407CFEE0
 * Callers:
 *     <none>
 * Callees:
 *     PoFxStartDevicePowerManagement @ 0x1404E3FF0 (PoFxStartDevicePowerManagement.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopFxRegisterDevice @ 0x140B52230 (PopFxRegisterDevice.c)
 */

__int64 __fastcall PoFxEnableDStateReporting(PVOID Object, ULONG_PTR *a2)
{
  int v4; // ebx
  _BYTE v6[80]; // [rsp+40h] [rbp-59h] BYREF
  __int128 v7; // [rsp+90h] [rbp-9h]
  __int128 v8; // [rsp+A0h] [rbp+7h]
  __int128 v9; // [rsp+B0h] [rbp+17h]
  __int64 v10; // [rsp+C0h] [rbp+27h]
  __int128 v11; // [rsp+C8h] [rbp+2Fh] BYREF
  __int64 v12; // [rsp+D8h] [rbp+3Fh]

  if ( Object && a2 )
  {
    memset_0(v6, 0, sizeof(v6));
    v10 = 0LL;
    v12 = 0LL;
    v8 = 0LL;
    HIDWORD(v8) = 1;
    v9 = (unsigned __int64)&v11;
    v7 = 0LL;
    v11 = 0LL;
    v4 = PopFxRegisterDevice(Object, 0LL, 64LL, (__int64)a2);
    if ( v4 >= 0 )
      PoFxStartDevicePowerManagement(*a2);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
