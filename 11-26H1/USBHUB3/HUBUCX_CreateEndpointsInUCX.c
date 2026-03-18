/*
 * XREFs of HUBUCX_CreateEndpointsInUCX @ 0x140026884
 * Callers:
 *     HUBDSM_CreatingNewEndpoints @ 0x140021710 (HUBDSM_CreatingNewEndpoints.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x14000C874 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     HUBUCX_GetEndpointPriority @ 0x140027834 (HUBUCX_GetEndpointPriority.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_CreateEndpointsInUCX(__int64 *a1)
{
  __int64 v1; // r13
  int v2; // edi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 *v9; // r14
  __int64 (__fastcall *v10)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, __int64, __int64 *); // rax
  int v11; // eax
  void (__fastcall *v12)(_QWORD, __int64, __int64, __int64); // r15
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 i; // rax
  __int64 j; // rbp
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v22; // [rsp+28h] [rbp-70h]
  __int64 v23; // [rsp+40h] [rbp-58h]
  __int64 v24; // [rsp+48h] [rbp-50h]
  int v25; // [rsp+A0h] [rbp+8h] BYREF
  int v26; // [rsp+A8h] [rbp+10h]
  __int64 v27; // [rsp+B0h] [rbp+18h]
  __int64 v28; // [rsp+B8h] [rbp+20h]

  v1 = *a1;
  v2 = 0;
  v25 = 0;
  if ( !*((_DWORD *)a1 + 24) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1[1] + 1432), 4, 5, 39, (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids);
    return ((v2 >> 31) & 0xFFFFFFF4) + 4077;
  }
  v4 = a1[6];
  v28 = a1[13];
  v27 = a1[17];
  v5 = v4 + 16;
  v24 = v4;
  v6 = *(_QWORD *)(v4 + 16);
  v23 = v5;
  while ( 1 )
  {
    v16 = v6 - 8;
    if ( v5 == v6 )
      goto LABEL_38;
    v7 = 0LL;
    v26 = 0;
    if ( *(_DWORD *)(v16 + 24) )
      break;
LABEL_29:
    v6 = *(_QWORD *)(v16 + 8);
  }
  while ( 1 )
  {
    v8 = 80 * v7;
    v9 = (__int64 *)(v16 + 80 * v7 + 40);
    if ( *((_DWORD *)v9 + 2) == 1 )
      break;
LABEL_27:
    v7 = (unsigned int)(v26 + 1);
    v26 = v7;
    if ( (unsigned int)v7 >= *(_DWORD *)(v16 + 24) )
    {
      v5 = v23;
      goto LABEL_29;
    }
  }
  *((_DWORD *)v9 + 2) = 2;
  if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_11;
  v10 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, __int64, __int64 *))(v1 + 608);
  if ( v10 )
  {
    v11 = v10(
            *(_QWORD *)(v1 + 248),
            a1[3],
            *(_QWORD *)(v16 + v8 + 72),
            *(unsigned int *)(v16 + v8 + 80),
            *(_QWORD *)(v16 + v8 + 88),
            v9[8],
            v9);
    goto LABEL_12;
  }
  if ( !v9[8] )
  {
LABEL_11:
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, __int64 *))(v1 + 456))(
            *(_QWORD *)(v1 + 248),
            a1[3],
            *(_QWORD *)(v16 + v8 + 72),
            *(unsigned int *)(v16 + v8 + 80),
            *(_QWORD *)(v16 + v8 + 88),
            v9);
LABEL_12:
    v2 = v11;
    if ( v11 < 0 )
      goto LABEL_35;
    v12 = *(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v1 + 600);
    if ( !v12 )
      goto LABEL_24;
    v13 = *(unsigned int *)(v16 + v8 + 112);
    if ( (_DWORD)v13 )
      goto LABEL_22;
    if ( (int)HUBUCX_GetEndpointPriority(a1, v16, v9, &v25) >= 0 )
    {
      switch ( v25 )
      {
        case 1:
          v13 = 1LL;
          goto LABEL_22;
        case 2:
          v13 = 2LL;
          goto LABEL_22;
        case 3:
          v13 = 3LL;
LABEL_22:
          v12(*(_QWORD *)(v1 + 248), a1[3], *v9, v13);
          break;
      }
    }
    v2 = 0;
LABEL_24:
    v14 = *v9;
    if ( (*(_DWORD *)(v16 + v8 + 52) & 1) != 0 )
    {
      v15 = v27;
      *((_DWORD *)v9 + 2) = 6;
      *(_QWORD *)(v15 + 8LL * (unsigned int)(*((_DWORD *)a1 + 36))++) = v14;
    }
    else
    {
      *(_QWORD *)(v28 + 8LL * (unsigned int)(*((_DWORD *)a1 + 28))++) = v14;
    }
    goto LABEL_27;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1[1] + 1432), 2, 5, 40, (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids);
  v2 = -1073741637;
LABEL_35:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v22) = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 1432),
      2u,
      5u,
      0x29u,
      (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
      v22);
  }
  *((_DWORD *)v9 + 2) = 1;
LABEL_38:
  if ( v24 )
  {
    for ( i = *(_QWORD *)(v24 + 16); ; i = *(_QWORD *)(v20 + 8) )
    {
      v20 = i - 8;
      if ( v24 + 16 == i )
        break;
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v20 + 24); j = (unsigned int)(j + 1) )
      {
        if ( *(_DWORD *)(v20 + 80 * j + 48) == 2 )
        {
          if ( v2 >= 0 )
          {
            *(_DWORD *)(v20 + 80 * j + 48) = 3;
          }
          else
          {
            v19 = *(_QWORD *)(v20 + 80 * j + 40);
            *(_DWORD *)(v20 + 80 * j + 48) = 1;
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(v1 + 464))(*(_QWORD *)(v1 + 248), a1[3], v19);
          }
        }
      }
    }
  }
  if ( v2 < 0 )
  {
    *((_DWORD *)a1 + 28) = 0;
    *((_DWORD *)a1 + 36) = 0;
    *((_DWORD *)a1 + 393) = -1073737728;
    *((_DWORD *)a1 + 392) = -1073741670;
  }
  return ((v2 >> 31) & 0xFFFFFFF4) + 4077;
}
