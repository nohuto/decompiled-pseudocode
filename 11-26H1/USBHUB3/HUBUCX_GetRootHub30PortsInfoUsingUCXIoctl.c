/*
 * XREFs of HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl @ 0x140027EA4
 * Callers:
 *     HUBHSM_GettingRootHub30PortsInfo @ 0x1400093B0 (HUBHSM_GettingRootHub30PortsInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // r15
  int v7; // eax
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  unsigned __int16 v12; // r9
  _QWORD *v13; // r8
  unsigned int v14; // r10d
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // r9
  int v18; // esi
  __int64 result; // rax
  int v20; // [rsp+28h] [rbp-51h]
  __int64 v21; // [rsp+28h] [rbp-51h]
  __int128 v22; // [rsp+60h] [rbp-19h] BYREF
  __int128 v23; // [rsp+70h] [rbp-9h]
  __int128 v24; // [rsp+80h] [rbp+7h]
  __int64 v25; // [rsp+90h] [rbp+17h]
  unsigned __int64 v26; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v27; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v28; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v29; // [rsp+F8h] [rbp+7Fh] BYREF

  DWORD1(v22) = 0;
  v28 = 0LL;
  v27 = 0LL;
  v29 = 0LL;
  v26 = 0LL;
  if ( !*(_WORD *)(a1 + 114) )
  {
    *(_QWORD *)(a1 + 136) = 0LL;
    v2 = 2042;
    v3 = a1 + 1280;
    return HUBSM_AddEvent(v3, v2);
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v5 = *(_QWORD *)(a1 + 16);
  v6 = v4;
  *(_QWORD *)&v23 = 0LL;
  v25 = 0LL;
  v24 = v5;
  v22 = 0LL;
  *((_QWORD *)&v23 + 1) = 0x100000001LL;
  LODWORD(v22) = 56;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, unsigned __int64 *))(WdfFunctions_01015
                                                                                               + 1976))(
         WdfDriverGlobals,
         &v22,
         v4,
         &v26);
  if ( v7 < 0 )
  {
    v26 = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = v7;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2536),
        2u,
        3u,
        0x34u,
        (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
        v20);
    }
    v8 = (_QWORD *)(a1 + 136);
    goto LABEL_23;
  }
  v8 = (_QWORD *)(a1 + 136);
  v25 = 0LL;
  v9 = *(_QWORD *)(a1 + 16);
  v23 = 0LL;
  v24 = v9;
  v10 = 224LL * *(unsigned __int16 *)(a1 + 114);
  v22 = 0LL;
  LODWORD(v22) = 56;
  *((_QWORD *)&v23 + 1) = 0x100000001LL;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          &v22,
          (unsigned int)ExDefaultNonPagedPoolType,
          1882409045LL,
          v10,
          &v29,
          a1 + 136);
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_23:
      if ( v26 )
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
      if ( v29 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
        *v8 = 0LL;
      }
      v3 = a1 + 1280;
      v2 = 2038;
      return HUBSM_AddEvent(v3, v2);
    }
    v12 = 53;
LABEL_10:
    LODWORD(v21) = v11;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2536),
      2u,
      3u,
      v12,
      (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
      v21);
    goto LABEL_23;
  }
  v25 = 0LL;
  *(_QWORD *)&v23 = 0LL;
  *((_QWORD *)&v23 + 1) = 0x100000001LL;
  v24 = v26;
  v22 = 0LL;
  LODWORD(v22) = 56;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          &v22,
          (unsigned int)ExDefaultNonPagedPoolType,
          1882409045LL,
          16LL,
          &v28,
          &v27);
  if ( v11 < 0 )
  {
    v28 = 0LL;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v12 = 54;
    goto LABEL_10;
  }
  v13 = (_QWORD *)*v8;
  v14 = 0;
  *(_DWORD *)v27 = 16;
  *(_WORD *)(v27 + 4) = *(_WORD *)(a1 + 114);
  *(_WORD *)(v27 + 6) = 24;
  *(_QWORD *)(v27 + 8) = v13;
  v15 = *(unsigned __int16 *)(v27 + 4);
  v16 = &v13[v15];
  v17 = &v16[3 * v15];
  if ( (_WORD)v15 )
  {
    do
    {
      *v13 = v16;
      ++v14;
      v16[2] = v17;
      ++v13;
      *((_WORD *)v16 + 1) = 0;
      v17 += 24;
      *((_DWORD *)v16 + 3) = 48;
      v16 += 3;
    }
    while ( v14 < *(unsigned __int16 *)(v27 + 4) );
  }
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1528))(
          WdfDriverGlobals,
          v6,
          v26,
          4788243LL,
          v28,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL);
  v18 = v11;
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v12 = 55;
    goto LABEL_10;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64 (__fastcall *)(), __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v26,
    HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete,
    a1);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             v26,
             v6,
             0LL);
  if ( !(_BYTE)result )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(WdfFunctions_01015 + 2032))(
               WdfDriverGlobals,
               v26);
    v18 = result;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v21) = result;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(a1 + 2536),
                 2u,
                 3u,
                 0x38u,
                 (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
                 v21);
    }
  }
  if ( v18 < 0 )
    goto LABEL_23;
  return result;
}
