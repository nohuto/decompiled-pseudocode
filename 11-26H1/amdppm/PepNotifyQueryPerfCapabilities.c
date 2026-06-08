/*
 * XREFs of PepNotifyQueryPerfCapabilities @ 0x14003C428
 * Callers:
 *     InitPepPerfStates @ 0x14003BB34 (InitPepPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 */

__int64 __fastcall PepNotifyQueryPerfCapabilities(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v7; // rcx
  int v11; // edx
  int v12; // ebx
  int v14; // [rsp+28h] [rbp-60h]
  __int128 v15; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+40h] [rbp-48h]

  v7 = *(_QWORD *)(a1 + 1120);
  v16 = 0LL;
  v15 = 0LL;
  v12 = PoFxProcessorNotification(v7, 11LL, &v15);
  if ( v12 >= 0 )
  {
    *a2 = v15;
    *a3 = DWORD1(v15);
    *a4 = DWORD2(v15);
    *a5 = HIDWORD(v15);
    *a6 = v16;
    *a7 = HIDWORD(v16);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = v12;
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      2,
      32,
      (__int64)&WPP_1487aeacecb639397959f3b22a039f3b_Traceguids,
      v14);
  }
  return (unsigned int)v12;
}
