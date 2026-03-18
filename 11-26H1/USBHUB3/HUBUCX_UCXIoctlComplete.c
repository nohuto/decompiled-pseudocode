/*
 * XREFs of HUBUCX_UCXIoctlComplete @ 0x140028F10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FC4 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F6F4 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x140018FF4 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     WPP_RECORDER_SF_q @ 0x14001DED0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Ld @ 0x140029F54 (WPP_RECORDER_SF_Ld.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1400341F4 (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400468C0 (memmove.c)
 */

int __fastcall HUBUCX_UCXIoctlComplete(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 i; // rax
  int v5; // esi
  int v7; // r15d
  int *v8; // rbx
  __int64 **v9; // r14
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rbx
  _QWORD *v15; // r9
  __int64 v16; // rdx
  unsigned int k; // ecx
  _QWORD *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // r9
  _QWORD *m; // rax
  unsigned int n; // edx
  _QWORD *v23; // rcx
  __int64 v24; // rdx
  unsigned int ii; // r8d
  __int64 v26; // rax
  unsigned int v27; // edx
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned __int16 v30; // r9
  unsigned __int8 v31; // dl
  int v32; // ebx
  unsigned int v33; // r8d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r9
  unsigned int jj; // edx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rbp
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // edx
  int v45; // edx
  __int64 v46; // rcx
  __int64 v47; // rbx
  int v48; // edx
  unsigned __int8 v49; // cf
  __int64 v50; // r8
  __int64 *v51; // r8
  unsigned int j; // edx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v56; // [rsp+20h] [rbp-48h]
  __int64 v57; // [rsp+28h] [rbp-40h]
  __int64 v58; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  i = (__int64)&retaddr;
  v5 = *(_DWORD *)(a3 + 8);
  v7 = 0;
  if ( v5 < 0 )
  {
    v8 = (int *)(a4 + 448);
    v9 = (__int64 **)(a4 + 8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      LODWORD(i) = WPP_RECORDER_SF_Ld(
                     (*v9)[179],
                     a2,
                     5,
                     11,
                     (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
                     *v8,
                     *(_DWORD *)(a3 + 8));
    v10 = *v8;
    if ( *v8 != 4788231 )
    {
      LODWORD(i) = v10 - 4788255;
      if ( ((v10 - 4788255) & 0xFFFFFFDF) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_Ld((*v9)[179], v10, 5, 12, (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids, v10, v5);
          v8 = (int *)(a4 + 448);
        }
        i = **v9;
        v11 = *(unsigned int *)(i + 2608);
        if ( (v11 & 0x80u) != 0LL )
          LODWORD(i) = HUBMISC_VerifierDbgBreak("HubHwVerifierControllerOperationFailure", *v9 + 34);
        if ( (byte_140070D4A & 0x10) != 0 )
        {
          LODWORD(v57) = v5;
          LODWORD(v56) = *v8;
          LODWORD(i) = McTemplateK0pqq_EtwWriteTransfer(
                         v11,
                         &USBHUB3_ETW_EVENT_UCX_IOCTL_FAILURE,
                         (const GUID *)(a4 + 1524),
                         *(_QWORD *)(a4 + 24),
                         v56,
                         v57);
        }
      }
    }
  }
  if ( *(_DWORD *)(a4 + 448) != 4788247 )
  {
    switch ( *(_DWORD *)(a4 + 448) )
    {
      case 0x49101B:
        v50 = *(_QWORD *)(a4 + 48);
        if ( v50 )
        {
          v51 = (__int64 *)(v50 + 16);
          for ( i = *v51; ; i = *(_QWORD *)i )
          {
            v53 = i - 8;
            if ( v51 == (__int64 *)i )
              break;
            for ( j = 0; j < *(_DWORD *)(v53 + 24); ++j )
            {
              if ( *(_DWORD *)(v53 + 80LL * j + 48) == 5 )
                *(_DWORD *)(v53 + 80LL * j + 48) = 6;
            }
          }
        }
        goto LABEL_106;
      case 0x49101F:
        i = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_14006D2C0);
        v47 = i;
        if ( v5 < 0 )
        {
          *(_DWORD *)(a4 + 2440) = 1073807361;
          if ( Microsoft_Windows_USB_USBHUB3EnableBits < 0 )
          {
            LODWORD(v56) = v5;
            LODWORD(i) = McTemplateK0pq_EtwWriteTransfer(
                           v46,
                           &USBHUB3_ETW_EVENT_SET_ADDRESS_FAILURE,
                           (const GUID *)(a4 + 1524),
                           *(_QWORD *)(a4 + 24),
                           v56);
          }
          if ( (*(_DWORD *)(a4 + 1464) & 0x20000) != 0 && (*(_DWORD *)(a4 + 1644) & 0x10000) == 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v45) = 2;
              LODWORD(i) = WPP_RECORDER_SF_(
                             *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                             v45,
                             5,
                             19,
                             (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids);
            }
            _InterlockedOr((volatile signed __int32 *)(a4 + 1644), 0x10000u);
            _InterlockedIncrement((volatile signed __int32 *)(v47 + 88));
          }
          goto LABEL_115;
        }
        i = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
              WdfDriverGlobals,
              *(_QWORD *)(a4 + 440),
              0LL);
        v49 = _bittest((const signed __int32 *)(a4 + 1644), 0x10u);
        *(_DWORD *)(a4 + 1656) = *(_DWORD *)(i + 28);
        if ( v49 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v48) = 2;
            LODWORD(i) = WPP_RECORDER_SF_(
                           *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                           v48,
                           5,
                           18,
                           (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids);
          }
          _InterlockedAnd((volatile signed __int32 *)(a4 + 1644), 0xFFFEFFFF);
          _InterlockedDecrement((volatile signed __int32 *)(v47 + 88));
        }
        goto LABEL_111;
      case 0x491023:
        i = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
              WdfDriverGlobals,
              *(_QWORD *)(a4 + 440),
              0LL);
        if ( v5 < 0 )
        {
          LODWORD(i) = *(_DWORD *)(i + 56);
          if ( (i & 1) != 0 )
          {
            v32 = 4024;
            goto LABEL_119;
          }
          goto LABEL_115;
        }
        *(_WORD *)(a4 + 2216) = *(_WORD *)(a4 + 2218);
        if ( (*(_DWORD *)(i + 24) & 0x80u) != 0 )
        {
          if ( *(_BYTE *)(i + 67) )
          {
            *(_DWORD *)(a4 + 2732) = *(unsigned __int8 *)(i + 67);
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v44) = 2;
            LODWORD(i) = WPP_RECORDER_SF_(
                           *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                           v44,
                           5,
                           20,
                           (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids);
          }
        }
        goto LABEL_111;
      case 0x49102B:
        if ( (*(_DWORD *)(a4 + 1652) & 0x4000000) != 0 )
        {
          v39 = *(_QWORD *)(a4 + 16);
          if ( v39 )
          {
            if ( *(_DWORD *)(v39 + 4) == 1 )
            {
              v40 = v39 + 456;
              if ( *(_QWORD *)(v39 + 488) && (LODWORD(i) = *(_DWORD *)(v39 + 496), (i & 2) != 0) )
              {
                *(_BYTE *)(v39 + 536) = 1;
                v41 = *(_QWORD *)(v39 + 544);
                v42 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        v41,
                        off_14006D1F8);
                *(_QWORD *)v42 = v40;
                *(_QWORD *)(v42 + 16) = a4;
                *(_DWORD *)(v42 + 8) = 1;
                LODWORD(i) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(
                               WdfDriverGlobals,
                               v41);
                v7 = 1;
              }
              else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v43 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
                LODWORD(i) = WPP_RECORDER_SF_q(
                               *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                               4u,
                               2u,
                               0xDu,
                               (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
                               v43);
              }
            }
          }
        }
        goto LABEL_106;
    }
    if ( *(_DWORD *)(a4 + 448) != 4788279 )
      goto LABEL_106;
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
            WdfDriverGlobals,
            *(_QWORD *)(a4 + 440),
            0LL);
    v13 = *(_QWORD *)(a4 + 48);
    v14 = v12;
    if ( v13 )
    {
      v15 = (_QWORD *)(v13 + 16);
      v16 = *v15 - 8LL;
      if ( v15 != (_QWORD *)*v15 )
      {
        do
        {
          for ( k = 0; k < *(_DWORD *)(v16 + 24); ++k )
          {
            if ( *(_DWORD *)(v16 + 80LL * k + 48) == 5 )
              *(_DWORD *)(v16 + 80LL * k + 48) = 6;
          }
          v18 = *(_QWORD **)(v16 + 8);
          v16 = (__int64)(v18 - 1);
        }
        while ( v15 != v18 );
      }
    }
    v19 = *(_QWORD *)(a4 + 56);
    if ( v19 )
    {
      v20 = (_QWORD *)(v19 + 16);
      for ( m = *(_QWORD **)(v19 + 16); ; m = (_QWORD *)*m )
      {
        v23 = m - 1;
        if ( v20 == m )
          break;
        for ( n = 0; n < *((_DWORD *)v23 + 6); ++n )
        {
          if ( LODWORD(v23[10 * n + 6]) == 5 )
            LODWORD(v23[10 * n + 6]) = 6;
        }
      }
    }
    v24 = *(_QWORD *)(a4 + 72);
    if ( v24 )
    {
      for ( ii = 0; ii < *(_DWORD *)(v24 + 24); *(_DWORD *)(v24 + 80 * v26 + 48) = 6 )
        v26 = ii++;
    }
    v27 = *(_DWORD *)(v14 + 76);
    if ( !v27 )
    {
LABEL_45:
      if ( (*(_DWORD *)(v14 + 72) & 7) != 0 )
      {
        v5 = -1073741823;
        *(_DWORD *)(a4 + 1572) = -2147481856;
        if ( *(_WORD *)(a4 + 2216) )
        {
          memmove(
            (void *)(*(_QWORD *)(a4 + 136) + 8LL * *(unsigned int *)(a4 + 144)),
            *(const void **)(a4 + 120),
            8LL * *(unsigned int *)(a4 + 128));
          *(_DWORD *)(a4 + 144) += *(_DWORD *)(a4 + 128);
          v32 = 4024;
          *(_DWORD *)(a4 + 128) = 0;
          *(_DWORD *)(a4 + 1568) = HUBPDO_GetUSBDErrorFromNTStatus(-1073741823);
LABEL_119:
          LODWORD(i) = HUBSM_AddEvent(a4 + 512, v32);
          return i;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2552))(
          WdfDriverGlobals,
          *(_QWORD *)(a4 + 2424),
          -10000000LL);
      }
      if ( (*(_DWORD *)(a4 + 1644) & 0x8000) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(a4 + 1644), 0xFFFF7FFF);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v27) = 4;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
            v27,
            5,
            17,
            (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids);
        }
        v34 = *(_QWORD *)(a4 + 2424);
        *(_DWORD *)(a4 + 1572) = -2147481856;
        v5 = -1073741823;
        LODWORD(i) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2552))(
                       WdfDriverGlobals,
                       v34,
                       -10000000LL);
      }
      else if ( *(_DWORD *)(a4 + 112) && v5 >= 0 )
      {
        LODWORD(i) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
                       WdfDriverGlobals,
                       *(_QWORD *)(a4 + 2424),
                       0LL);
      }
      else
      {
        LODWORD(i) = -1073741670;
        if ( v5 == -1073741823 )
          v5 = -1073741670;
      }
      v35 = *(_QWORD *)(a4 + 48);
      if ( v35 )
      {
        v36 = v35 + 16;
        for ( i = *(_QWORD *)(v35 + 16); ; i = *(_QWORD *)i )
        {
          v38 = i - 8;
          if ( v36 == i )
            break;
          for ( jj = 0; jj < *(_DWORD *)(v38 + 24); ++jj )
          {
            if ( *(_DWORD *)(v38 + 80LL * jj + 48) == 3 )
              *(_DWORD *)(v38 + 80LL * jj + 48) = ((v5 >> 31) & 2) + 4;
          }
        }
      }
      *(_DWORD *)(a4 + 128) = 0;
      *(_DWORD *)(a4 + 112) = 0;
      *(_DWORD *)(a4 + 144) = 0;
LABEL_106:
      if ( v5 < 0 )
        goto LABEL_115;
LABEL_111:
      v32 = 4028;
      goto LABEL_118;
    }
    if ( (*(_DWORD *)(v14 + 72) & 4) == 0 )
    {
      if ( v5 >= 0 )
      {
        v33 = v27 + *(unsigned __int16 *)(a4 + 2216);
        *(_DWORD *)(a4 + 2592) = v33;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v58) = v33;
          LODWORD(v57) = *(_DWORD *)(v14 + 76);
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
            4u,
            5u,
            0x10u,
            (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
            v57,
            v58);
        }
        goto LABEL_45;
      }
      goto LABEL_44;
    }
    v28 = *(unsigned __int16 *)(a4 + 2216);
    if ( v28 <= v27 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v58) = *(unsigned __int16 *)(a4 + 2216);
        v30 = 15;
        LODWORD(v57) = *(_DWORD *)(v14 + 76);
        v31 = 2;
        goto LABEL_43;
      }
    }
    else
    {
      v29 = v28 - v27;
      *(_DWORD *)(a4 + 2592) = v29;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v58) = v29;
        v30 = 14;
        v31 = 4;
        LODWORD(v57) = *(_DWORD *)(v14 + 76);
LABEL_43:
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
          v31,
          5u,
          v30,
          (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
          v57,
          v58);
      }
    }
LABEL_44:
    *(_DWORD *)(a4 + 2592) = 0;
    goto LABEL_45;
  }
  i = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
        WdfDriverGlobals,
        *(_QWORD *)(a4 + 440),
        0LL);
  if ( (*(_DWORD *)(i + 32) & 3) == 0 )
  {
    if ( v5 < 0 )
    {
      if ( v5 == -1073741823 )
        v5 = -1073741670;
      goto LABEL_115;
    }
    LODWORD(i) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
                   WdfDriverGlobals,
                   *(_QWORD *)(a4 + 2424),
                   0LL);
    goto LABEL_111;
  }
  v54 = *(_QWORD *)(a4 + 2424);
  *(_DWORD *)(a4 + 1572) = -2147481856;
  v5 = -1073741823;
  LODWORD(i) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2552))(
                 WdfDriverGlobals,
                 v54,
                 -10000000LL);
LABEL_115:
  *(_DWORD *)(a4 + 1568) = v5;
  if ( !*(_DWORD *)(a4 + 1572) )
  {
    LODWORD(i) = HUBPDO_GetUSBDErrorFromNTStatus(v5);
    *(_DWORD *)(a4 + 1572) = i;
  }
  v32 = 4020;
LABEL_118:
  if ( !v7 )
    goto LABEL_119;
  return i;
}
