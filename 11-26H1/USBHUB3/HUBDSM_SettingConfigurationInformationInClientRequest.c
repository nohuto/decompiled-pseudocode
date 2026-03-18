/*
 * XREFs of HUBDSM_SettingConfigurationInformationInClientRequest @ 0x140024410
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDSM_SettingConfigurationInformationInClientRequest(__int64 a1)
{
  __int64 *v1; // r13
  __int64 v2; // rdx
  unsigned __int16 *v3; // rbp
  _QWORD *v4; // r12
  _QWORD *i; // rax
  __int64 v6; // r15
  int v7; // edx
  int v8; // edi
  __int64 v9; // rbx
  _QWORD *v10; // rsi
  __int64 v12; // [rsp+30h] [rbp-78h]
  __int64 v13; // [rsp+38h] [rbp-70h]
  _QWORD *v14; // [rsp+40h] [rbp-68h]
  _OWORD v15[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v16; // [rsp+68h] [rbp-40h]

  v1 = *(__int64 **)(a1 + 960);
  memset(v15, 0, sizeof(v15));
  v2 = v1[58];
  v12 = *v1;
  v16 = 0LL;
  LOWORD(v15[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v15);
  v3 = (unsigned __int16 *)(*((_QWORD *)&v15[0] + 1) + 40LL);
  v4 = (_QWORD *)(v1[6] + 16);
  v14 = v4;
  for ( i = (_QWORD *)*v4; ; i = (_QWORD *)v10[1] )
  {
    v10 = i - 1;
    if ( v4 == i )
      break;
    v6 = 0LL;
    if ( *((_DWORD *)v10 + 6) )
    {
      do
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD))(v12 + 480))(v10[10 * v6 + 5]);
        if ( !v13 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 2;
          WPP_RECORDER_SF_(
            *(_QWORD *)(v1[1] + 1432),
            v7,
            5,
            44,
            (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
        }
        v8 = (*(__int64 (__fastcall **)(_QWORD))(v12 + 488))(v10[10 * v6 + 5]);
        v9 = 3 * v6;
        v10[10 * v6 + 7] = v13;
        *(_QWORD *)&v3[12 * v6 + 16] = v13;
        (*(void (__fastcall **)(_QWORD))(v12 + 472))(v10[10 * v6 + 5]);
        v6 = (unsigned int)(v6 + 1);
        *(_DWORD *)&v3[4 * v9 + 20] = v8;
      }
      while ( (unsigned int)v6 < *((_DWORD *)v10 + 6) );
      v4 = v14;
    }
    v3 = (unsigned __int16 *)((char *)v3 + *v3);
  }
  return 4077LL;
}
