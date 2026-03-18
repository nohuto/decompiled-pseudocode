/*
 * XREFs of HUBPDO_ValidateSelectInterfaceUrb @ 0x14001C4CC
 * Callers:
 *     HUBDSM_ValidatingSelectInterfaceUrbFromConfigured @ 0x140025EC0 (HUBDSM_ValidatingSelectInterfaceUrbFromConfigured.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBPDO_InitializeInterfaceInformation @ 0x1400195E4 (HUBPDO_InitializeInterfaceInformation.c)
 *     WPP_RECORDER_SF_dq @ 0x14001DCEC (WPP_RECORDER_SF_dq.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_ValidateSelectInterfaceUrb(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rdx
  int v4; // edx
  unsigned __int16 *v5; // rbx
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // r10
  unsigned __int16 *v9; // r10
  int v10; // r13d
  int v11; // edx
  int v12; // ebx
  __int64 result; // rax
  int v14; // r9d
  unsigned int v15; // r8d
  unsigned int v16; // edx
  unsigned int *v17; // rcx
  int v18; // r9d
  char v19; // [rsp+28h] [rbp-90h]
  __int64 v20; // [rsp+40h] [rbp-78h]
  unsigned __int16 *v21; // [rsp+48h] [rbp-70h]
  _OWORD v22[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v23; // [rsp+78h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 464);
  memset(v22, 0, sizeof(v22));
  v23 = 0LL;
  LOWORD(v22[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v22);
  v5 = (unsigned __int16 *)*((_QWORD *)&v22[0] + 1);
  v6 = 0;
  v7 = *(_QWORD *)(*((_QWORD *)&v22[0] + 1) + 24LL);
  v20 = v7;
  if ( v7 || *(_DWORD *)(v1 + 388) != -1 )
  {
    if ( v7 != *(_QWORD *)(a1 + 48) )
    {
      if ( *(_WORD *)(*((_QWORD *)&v22[0] + 1) + 2LL) == 1 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v14 = 37;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v14 = 38;
      }
LABEL_30:
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        v4,
        5,
        v14,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
      goto LABEL_31;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 3;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        v4,
        5,
        36,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
    }
    v20 = *(_QWORD *)(a1 + 48);
    *((_QWORD *)v5 + 3) = v20;
  }
  v8 = 16LL;
  if ( v5[1] != 1 )
    v8 = 24LL;
  v9 = &v5[v8];
  v21 = v9;
  *((_QWORD *)v9 + 1) = -1LL;
  if ( v5[1] != 1 )
  {
    v15 = *((_DWORD *)v5 + 8);
    if ( v15 )
    {
      v16 = 0;
      v17 = (unsigned int *)*((_QWORD *)v5 + 5);
      while ( (char *)v17 + *v17 <= (char *)v5 + *v5 )
      {
        if ( !*((_WORD *)v17 + 2) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_31;
          v18 = 42;
          goto LABEL_42;
        }
        ++v16;
        v17 = (unsigned int *)((char *)v17 + *v17);
        if ( v16 >= v15 )
          goto LABEL_13;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 41;
LABEL_42:
        v19 = v16;
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_dq(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          v16,
          v15,
          v18,
          (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
          v19,
          (char)v5);
        goto LABEL_31;
      }
      goto LABEL_31;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 40;
      goto LABEL_30;
    }
LABEL_31:
    v12 = -2147482880;
    goto LABEL_16;
  }
  v10 = *v9 + 32;
  if ( v10 != *v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        3u,
        5u,
        0x27u,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        *v5,
        *v9 + 32);
      v9 = v21;
    }
    *v5 = v10;
  }
LABEL_13:
  v12 = HUBPDO_InitializeInterfaceInformation(v1, v9, v20);
  if ( v12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        v11,
        5,
        43,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
    }
LABEL_16:
    *(_DWORD *)(a1 + 1572) = v12;
    result = 4065LL;
    if ( v12 > -1073737728 )
    {
      switch ( v12 )
      {
        case -1073713152:
          v6 = -1073741810;
          goto LABEL_53;
        case -1073676288:
          v6 = -1073741536;
          goto LABEL_53;
        case 1:
LABEL_53:
          *(_DWORD *)(a1 + 1568) = v6;
          return result;
      }
    }
    else
    {
      switch ( v12 )
      {
        case -1073737728:
          v6 = -1073741670;
          goto LABEL_53;
        case -2147483136:
        case -2147482880:
        case -2147482112:
        case -1073739264:
          v6 = -1073741811;
          goto LABEL_53;
        case -1073738240:
          v6 = -1073741637;
          goto LABEL_53;
      }
    }
    v6 = -1073741823;
    goto LABEL_53;
  }
  return 4077LL;
}
