/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1400323B4
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnSelectInterface @ 0x1400234A0 (HUBDSM_PreparingEndpointAndInterfaceListsOnSelectInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x14000C874 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x140018FF4 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     McTemplateK0phhhquuuuu_EtwWriteTransfer @ 0x1400344CC (McTemplateK0phhhquuuuu_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_Ddddd @ 0x1400346CC (WPP_RECORDER_SF_Ddddd.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x14003CD9C (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface(__int64 a1)
{
  unsigned int v1; // r12d
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  KIRQL v8; // al
  __int64 v9; // r13
  __int64 v10; // rax
  int v11; // r9d
  int v12; // r8d
  unsigned __int8 *v13; // rax
  int v14; // edx
  unsigned __int8 *v15; // r14
  int v16; // r9d
  int v17; // ebx
  _DWORD *v19; // rcx
  unsigned int v20; // edx
  __int64 v21; // r8
  __int16 v22; // cx
  size_t v23; // r15
  unsigned __int64 v24; // r13
  unsigned __int8 *v25; // rbx
  _DWORD *v26; // r14
  unsigned __int8 *v27; // r8
  __int64 v28; // rcx
  _BYTE *v29; // rax
  __int64 v30; // rax
  int v31; // r8d
  int v32; // eax
  __int16 v33; // r8
  char v34; // al
  __int64 v35; // rax
  __int16 v36; // cx
  unsigned int v37; // r8d
  unsigned int v38; // r8d
  unsigned int v39; // r9d
  char *v40; // rdx
  unsigned int v41; // r11d
  unsigned int v42; // r10d
  unsigned int *v43; // rdx
  unsigned int v44; // r9d
  unsigned int v45; // r8d
  __int64 v46; // r11
  char v47; // r12
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rbx
  unsigned int v51; // edx
  unsigned int v52; // r12d
  unsigned int v53; // r13d
  __int64 v54; // r14
  unsigned int v55; // r8d
  __int64 v56; // r11
  __int64 v57; // r10
  __int64 v58; // rax
  unsigned int v59; // r14d
  unsigned int v60; // eax
  void *v61; // rcx
  void *v62; // rcx
  void *v63; // rcx
  __int64 Pool2; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  void *v67; // rcx
  void *v68; // rcx
  void *v69; // rcx
  __int64 v70; // r9
  __int64 v71; // rdx
  _QWORD *v72; // rcx
  unsigned int v73; // r8d
  int v74; // ecx
  int v75; // edx
  __int64 v76; // rdx
  __int64 i; // rax
  unsigned int j; // r9d
  __int64 v79; // rax
  __int64 v80; // r8
  _QWORD *v81; // r8
  _QWORD *v82; // rax
  int v83; // [rsp+28h] [rbp-E0h]
  __int64 *v84; // [rsp+30h] [rbp-D8h]
  __int64 v85; // [rsp+78h] [rbp-90h] BYREF
  void *v86; // [rsp+80h] [rbp-88h]
  char v87; // [rsp+88h] [rbp-80h]
  __int64 v88; // [rsp+90h] [rbp-78h]
  __int64 v89; // [rsp+98h] [rbp-70h]
  __int64 v90; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD *v91; // [rsp+A8h] [rbp-60h]
  __int128 v92; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v93; // [rsp+C0h] [rbp-48h]
  __int128 v94; // [rsp+D0h] [rbp-38h]
  __int64 v95; // [rsp+E0h] [rbp-28h]
  _OWORD v96[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v97; // [rsp+108h] [rbp+0h]

  v1 = 0;
  LODWORD(v95) = 0;
  v90 = 0LL;
  LOBYTE(v85) = 0;
  v86 = 0LL;
  v89 = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  v92 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1644), 0xFFFF7FFF);
  v3 = *(_QWORD *)(a1 + 464);
  v97 = 0LL;
  memset(v96, 0, sizeof(v96));
  LOWORD(v96[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v3,
    v96);
  v4 = *((_QWORD *)&v96[0] + 1);
  v5 = (_DWORD *)(*((_QWORD *)&v96[0] + 1) + 32LL);
  if ( *(_WORD *)(*((_QWORD *)&v96[0] + 1) + 2LL) == 1 )
  {
    v6 = *((_QWORD *)&v96[0] + 1) + 32LL;
    *(_DWORD *)(a1 + 148) = 0;
    v7 = 0LL;
  }
  else
  {
    v6 = *((_QWORD *)&v96[0] + 1) + 48LL;
    *(_DWORD *)(a1 + 148) = *v5;
    v7 = 0LL;
    if ( *v5 )
      v7 = *(_QWORD *)(v4 + 40);
  }
  *(_QWORD *)(a1 + 152) = v7;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1644), 0xFFFFFFEF);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v8);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = *(unsigned __int8 *)(v6 + 3);
  v12 = *(unsigned __int8 *)(v6 + 2);
  v88 = *(_QWORD *)(a1 + 48);
  v9 = v88;
  v13 = (unsigned __int8 *)HUBDESC_ParseConfigurationDescriptor(
                             (int)v9 + 32,
                             (int)v9 + 32,
                             v12,
                             v11,
                             -1,
                             -1,
                             -1,
                             (__int64)&v85,
                             *(_QWORD *)(v10 + 1432));
  v15 = v13;
  if ( !v13 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = 34;
      goto LABEL_8;
    }
    goto LABEL_9;
  }
  v19 = *(_DWORD **)(a1 + 2456);
  if ( v19 )
  {
    v20 = 0;
    if ( *v19 )
    {
      while ( *((_BYTE *)v19 + 2 * v20 + 5) != v13[3] || *((_BYTE *)v19 + 2 * v20 + 4) != v13[2] )
      {
        if ( ++v20 >= *v19 )
          goto LABEL_22;
      }
      _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x8000u);
    }
  }
LABEL_22:
  v21 = (unsigned int)ExDefaultNonPagedPoolType;
  v22 = v13[4] + 1;
  *(_DWORD *)(v6 + 4) = 0;
  *(_QWORD *)(v6 + 8) = 0LL;
  *(_WORD *)v6 = 24 * v22;
  *(_DWORD *)(v6 + 16) = v13[4];
  *(_QWORD *)&v93 = 0LL;
  *((_QWORD *)&v93 + 1) = 0x100000001LL;
  v92 = 0LL;
  v95 = 0LL;
  v94 = 0LL;
  LODWORD(v92) = 56;
  v84 = &v90;
  v23 = 80LL * *(unsigned int *)(v6 + 16) + 40;
  v83 = 80 * *(_DWORD *)(v6 + 16) + 40;
  v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          &v92,
          v21,
          1681082453LL);
  if ( v17 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v84) = v17;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x23u,
        (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
        v84);
    }
    goto LABEL_10;
  }
  memset(v86, 0, v23);
  *(_QWORD *)v86 = v90;
  *((_QWORD *)v86 + 4) = v15;
  *((_DWORD *)v86 + 6) = v15[4];
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (_BYTE)v85 == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)v86 + 7, 1u);
    _InterlockedOr((volatile signed __int32 *)v86 + 7, 2u);
    *(_QWORD *)(a1 + 64) = v86;
  }
  *(_BYTE *)(v6 + 4) = v15[5];
  *(_BYTE *)(v6 + 5) = v15[6];
  *(_BYTE *)(v6 + 6) = v15[7];
  v24 = *(unsigned __int16 *)(v9 + 34) + v9 + 32;
  v25 = &v15[*v15];
  v26 = v86;
  if ( *(_DWORD *)(v6 + 16) )
  {
    do
    {
      v27 = v25;
      if ( (unsigned __int64)v25 >= v24 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_9;
        v16 = 22;
LABEL_8:
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          v14,
          5,
          v16,
          (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
        goto LABEL_9;
      }
      v28 = 10LL * v1;
      v14 = 3 * v1;
      v26[2 * v28 + 16] = *(_DWORD *)(v6 + 24LL * v1 + 44);
      v29 = v25 + 1;
      v26[2 * v28 + 12] = 1;
      if ( (unsigned __int64)(v25 + 1) >= v24 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = 23;
          goto LABEL_8;
        }
        goto LABEL_9;
      }
      while ( *v29 != 5 )
      {
        v30 = *v27;
        if ( !(_BYTE)v30 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_9;
          v16 = 24;
          goto LABEL_8;
        }
        v25 += v30;
        v27 = v25;
        if ( (unsigned __int64)v25 >= v24 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_9;
          v16 = 25;
          goto LABEL_8;
        }
        v29 = v25 + 1;
        if ( (unsigned __int64)(v25 + 1) >= v24 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v16 = 26;
            goto LABEL_8;
          }
LABEL_9:
          v17 = -1073741823;
          *(_DWORD *)(a1 + 1572) = -1073725440;
          goto LABEL_10;
        }
      }
      if ( (unsigned __int64)v25 >= v24 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_9;
        v16 = 27;
        goto LABEL_8;
      }
      if ( (unsigned __int64)(v25 + 7) > v24 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_9;
        v16 = 28;
        goto LABEL_8;
      }
      if ( (*(_DWORD *)(v6 + 24LL * v1 + 44) & 1) != 0 )
        *((_WORD *)v25 + 2) = *(_WORD *)(v6 + 24LL * v1 + 24);
      v31 = *(_DWORD *)(v6 + 24LL * v1 + 44) & 0xF0;
      if ( v31 == 16 )
      {
        v26[20 * v1 + 28] = 1;
      }
      else if ( v31 == 32 )
      {
        v26[20 * v1 + 28] = 2;
      }
      else
      {
        v32 = 3;
        if ( v31 != 48 )
          v32 = 0;
        v26[20 * v1 + 28] = v32;
      }
      *(_QWORD *)&v26[20 * v1 + 18] = v25;
      v26[20 * v1 + 20] = v24 - (_DWORD)v25;
      if ( *(_WORD *)(a1 + 1998) >= 0x250u )
        v33 = *((_WORD *)v25 + 2);
      else
        v33 = (*((_WORD *)v25 + 2) & 0x7FF) * (((*((_WORD *)v25 + 2) >> 11) & 3) + 1);
      *(_WORD *)(v6 + 24LL * v1 + 24) = v33;
      v34 = 6;
      if ( v25[6] < 6u )
        v34 = v25[6];
      *(_BYTE *)(v6 + 24LL * v1 + 27) = v34;
      *(_BYTE *)(v6 + 24LL * v1 + 26) = v25[2];
      if ( (v25[3] & 3) != 0 )
      {
        switch ( v25[3] & 3 )
        {
          case 1:
            *(_DWORD *)(v6 + 24LL * v1 + 28) = 1;
            break;
          case 2:
            *(_DWORD *)(v6 + 24LL * v1 + 28) = 2;
            break;
          case 3:
            *(_DWORD *)(v6 + 24LL * v1 + 28) = 3;
            break;
        }
      }
      else
      {
        *(_DWORD *)(v6 + 24LL * v1 + 28) = 0;
      }
      if ( !v33 )
        _InterlockedOr(&v26[20 * v1 + 13], 1u);
      v35 = *v25;
      if ( !(_BYTE)v35 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_9;
        v16 = 29;
        goto LABEL_8;
      }
      v25 += v35;
      if ( (unsigned __int64)v25 < v24 && (unsigned __int64)(v25 + 1) < v24 )
      {
        if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
          || (unsigned __int16)(*(_WORD *)(a1 + 1998) - 544) > 0xDFu
          || v25[1] != 18 )
        {
          v14 = 1;
LABEL_73:
          if ( v25[1] == 48 )
          {
            if ( *v25 )
            {
              if ( (unsigned __int64)(v25 + 6) <= v24 )
              {
                *(_QWORD *)&v26[20 * v1 + 22] = v25;
                if ( (*(_BYTE *)(*(_QWORD *)&v26[20 * v1 + 18] + 3LL) & 3) == 1 )
                {
                  if ( (v26[20 * v1 + 13] & 1) == 0 )
                    *(_WORD *)(v6 + 24 * (v1 + 1LL)) = *((_WORD *)v25 + 2);
                  if ( (v25[3] & 0x80u) != 0 )
                  {
                    _mm_lfence();
                    v25 += *v25;
                    if ( (unsigned __int64)v25 < v24 && (unsigned __int64)(v25 + 1) < v24 && v25[1] == 49 )
                    {
                      if ( *v25 )
                      {
                        if ( (unsigned __int64)(v25 + 8) <= v24 )
                        {
                          *(_QWORD *)&v26[20 * v1 + 24] = v25;
                          if ( (v26[20 * v1 + 13] & 1) == 0 )
                          {
                            v37 = *((_DWORD *)v25 + 1);
                            v14 = 3 * v1;
                            if ( v37 > 0xFFFF )
                            {
                              v14 = *(_DWORD *)(v6 + 24LL * v1 + 44);
                              if ( (v14 & 0x100) != 0 )
                              {
                                v14 |= 0x10000u;
                                *(_DWORD *)(v6 + 24LL * v1 + 40) = v37;
                                *(_DWORD *)(v6 + 24LL * v1 + 44) = v14;
                              }
                            }
                            else
                            {
                              *(_WORD *)(v6 + 24LL * v1 + 24) = v37;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_90;
        }
        if ( *v25 && (unsigned __int64)(v25 + 8) <= v24 )
        {
          v14 = 1;
          *(_QWORD *)&v26[20 * v1 + 26] = v25;
          *(_DWORD *)(v6 + 24LL * v1 + 40) = *((_DWORD *)v25 + 1);
          v36 = *((_WORD *)v25 + 2);
          *(_WORD *)(v6 + 24 * (v1 + 1LL)) = v36;
          if ( v36 )
            _InterlockedAnd(&v26[20 * v1 + 13], 0xFFFFFFFE);
          goto LABEL_73;
        }
      }
LABEL_90:
      ++v1;
    }
    while ( v1 < *(_DWORD *)(v6 + 16) );
  }
  v38 = 0;
  v39 = *((_DWORD *)v86 + 6);
  if ( v39 )
  {
    v40 = (char *)v86 + 72;
    do
    {
      if ( (*(_BYTE *)(*(_QWORD *)v40 + 2LL) & 0xF) == 0 )
        goto LABEL_121;
      ++v38;
      v40 += 80;
    }
    while ( v38 < v39 );
  }
  v41 = *(_DWORD *)(a1 + 148);
  v42 = 0;
  v43 = *(unsigned int **)(a1 + 152);
  if ( v41 )
  {
    v44 = *((_DWORD *)v86 + 6);
    do
    {
      v45 = 0;
      if ( v44 )
      {
        while ( *(unsigned __int8 *)(*((_QWORD *)v86 + 10 * v45 + 9) + 2LL) != *((_WORD *)v43 + 2) )
        {
          if ( ++v45 >= v44 )
            goto LABEL_100;
        }
      }
      else
      {
LABEL_100:
        if ( v45 == v44 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v84) = *((unsigned __int16 *)v43 + 2);
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
              2u,
              5u,
              0x24u,
              (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
              v84);
          }
LABEL_121:
          v17 = -1073741823;
          *(_DWORD *)(a1 + 1572) = -1072693239;
LABEL_10:
          *(_DWORD *)(a1 + 148) = 0;
          *(_QWORD *)(a1 + 152) = 0LL;
          *(_QWORD *)(v6 + 8) = -1LL;
          if ( v86 )
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(
              WdfDriverGlobals,
              *(_QWORD *)v86);
            *(_QWORD *)(a1 + 64) = 0LL;
          }
          *(_DWORD *)(a1 + 1568) = v17;
          if ( !*(_DWORD *)(a1 + 1572) )
            *(_DWORD *)(a1 + 1572) = HUBPDO_GetUSBDErrorFromNTStatus(v17);
          return ((v17 >> 31) & 0xFFFFFFF4) + 4077;
        }
      }
      ++v42;
      v43 = (unsigned int *)((char *)v43 + *v43);
    }
    while ( v42 < v41 );
  }
  v46 = v88;
  v47 = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  LOBYTE(v85) = 0;
  v48 = v46 + 16;
  v49 = *(_QWORD *)(v46 + 16);
  v50 = v49 - 8;
  if ( v46 + 16 == v49 )
    goto LABEL_134;
  do
  {
    if ( *(_BYTE *)(*(_QWORD *)(v50 + 32) + 2LL) == *(_BYTE *)(v6 + 2) )
    {
      v89 = v50;
      v47 = 1;
      LOBYTE(v85) = 1;
    }
    else
    {
      v51 = 0;
      v52 = *(_DWORD *)(v50 + 24);
      v91 = v86;
      if ( v52 )
      {
        v53 = *((_DWORD *)v86 + 6);
        while ( 1 )
        {
          v54 = 10LL * v51;
          v55 = 0;
          if ( v53 )
            break;
LABEL_130:
          if ( ++v51 >= v52 )
            goto LABEL_131;
        }
        v56 = *(_QWORD *)(v50 + 80LL * v51 + 72);
        v87 = *(_BYTE *)(v56 + 2);
        while ( 1 )
        {
          v57 = *((_QWORD *)v86 + 10 * v55 + 9);
          if ( v87 == *(_BYTE *)(v57 + 2) && *(_WORD *)(v56 + 4) && *(_WORD *)(v57 + 4) )
            break;
          if ( ++v55 >= v53 )
            goto LABEL_130;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v75 = *(unsigned __int8 *)(*(_QWORD *)(v50 + 80LL * v51 + 72) + 2LL);
          WPP_RECORDER_SF_Ddddd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
            v75,
            *(unsigned __int8 *)(*((_QWORD *)v86 + 4) + 3LL),
            *(unsigned __int8 *)(*((_QWORD *)v86 + 4) + 2LL),
            v83,
            v75,
            *(_BYTE *)(*(_QWORD *)(v50 + 32) + 2LL),
            *(_BYTE *)(*(_QWORD *)(v50 + 32) + 3LL),
            *(_BYTE *)(*((_QWORD *)v86 + 4) + 2LL),
            *(_BYTE *)(*((_QWORD *)v86 + 4) + 3LL));
        }
        if ( (byte_140070D4B & 0x10) != 0 )
        {
          v76 = *(_QWORD *)(v50 + 32);
          McTemplateK0phhhquuuuu_EtwWriteTransfer(
            v91[4],
            v76,
            a1 + 1524,
            *(_QWORD *)(a1 + 24),
            *(_WORD *)(a1 + 2004),
            *(_WORD *)(a1 + 2006),
            *(_WORD *)(a1 + 2008),
            *(_DWORD *)(a1 + 172),
            *(_BYTE *)(*(_QWORD *)(v50 + 8 * v54 + 72) + 2LL),
            *(_BYTE *)(v76 + 2),
            *(_BYTE *)(v76 + 3),
            *(_BYTE *)(v91[4] + 2LL),
            *(_BYTE *)(v91[4] + 3LL));
        }
        v17 = -1073741811;
        goto LABEL_10;
      }
LABEL_131:
      v47 = v85;
    }
    v58 = *(_QWORD *)(v50 + 8);
    v50 = v58 - 8;
  }
  while ( v48 != v58 );
  v46 = v88;
LABEL_134:
  v17 = 0;
  v59 = *(_DWORD *)(v46 + 8) + *((_DWORD *)v86 + 6);
  v60 = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  if ( !v60 )
  {
LABEL_142:
    if ( !*(_DWORD *)(a1 + 96) && v59 )
    {
      Pool2 = ExAllocatePool2(64LL, 8LL * v59, 1681082453LL);
      *(_QWORD *)(a1 + 104) = Pool2;
      if ( Pool2 )
      {
        v65 = ExAllocatePool2(64LL, 8LL * v59, 1681082453LL);
        *(_QWORD *)(a1 + 136) = v65;
        if ( v65 )
        {
          v66 = ExAllocatePool2(64LL, 8LL * v59, 1681082453LL);
          *(_QWORD *)(a1 + 120) = v66;
          if ( v66 )
          {
            *(_DWORD *)(a1 + 96) = v59;
            v17 = 0;
            goto LABEL_156;
          }
        }
      }
      v67 = *(void **)(a1 + 104);
      v17 = -1073741670;
      *(_DWORD *)(a1 + 96) = 0;
      if ( v67 )
      {
        ExFreePoolWithTag(v67, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v68 = *(void **)(a1 + 136);
      if ( v68 )
      {
        ExFreePoolWithTag(v68, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v69 = *(void **)(a1 + 120);
      if ( v69 )
      {
        ExFreePoolWithTag(v69, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v84) = -1073741670;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x1Eu,
          (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
          v84);
      }
    }
    if ( v17 < 0 )
      goto LABEL_10;
LABEL_156:
    v46 = v88;
    goto LABEL_157;
  }
  if ( v59 > v60 )
  {
    v61 = *(void **)(a1 + 104);
    *(_DWORD *)(a1 + 96) = 0;
    if ( v61 )
    {
      ExFreePoolWithTag(v61, 0x64334855u);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
    v62 = *(void **)(a1 + 136);
    if ( v62 )
    {
      ExFreePoolWithTag(v62, 0x64334855u);
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v63 = *(void **)(a1 + 120);
    if ( v63 )
    {
      ExFreePoolWithTag(v63, 0x64334855u);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
    goto LABEL_142;
  }
LABEL_157:
  v70 = v89;
  if ( v47 )
    v59 -= *(_DWORD *)(v89 + 24);
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  if ( v47 )
  {
    v71 = *(_QWORD *)(v70 + 8);
    if ( *(_QWORD *)(v71 + 8) == v70 + 8 )
    {
      v72 = *(_QWORD **)(v70 + 16);
      if ( *v72 == v70 + 8 )
      {
        *v72 = v71;
        v73 = 0;
        *(_QWORD *)(v71 + 8) = v72;
        for ( *(_QWORD *)(a1 + 72) = v70; v73 < *(_DWORD *)(v70 + 24); ++v73 )
        {
          v74 = *(_DWORD *)(v70 + 80LL * v73 + 48);
          if ( v74 == 4 )
          {
            *(_DWORD *)(v70 + 80LL * v73 + 48) = 5;
            *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = *(_QWORD *)(v70 + 80LL * v73 + 40);
          }
          else if ( v74 == 6 )
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = *(_QWORD *)(v70 + 80LL * v73 + 40);
          }
        }
        goto LABEL_174;
      }
    }
LABEL_180:
    __fastfail(3u);
  }
LABEL_174:
  for ( i = *(_QWORD *)(v46 + 16); ; i = *(_QWORD *)(v80 + 8) )
  {
    v80 = i - 8;
    if ( v46 + 16 == i )
      break;
    for ( j = 0; j < *(_DWORD *)(v80 + 24); ++*(_DWORD *)(a1 + 144) )
    {
      v79 = j++;
      *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(a1 + 144)) = *(_QWORD *)(v80 + 80 * v79 + 40);
    }
  }
  v81 = *(_QWORD **)(v46 + 24);
  v82 = (char *)v86 + 8;
  if ( *v81 != v46 + 16 )
    goto LABEL_180;
  *v82 = v46 + 16;
  v82[1] = v81;
  *v81 = v82;
  *(_QWORD *)(v46 + 24) = v82;
  *(_QWORD *)(a1 + 80) = v86;
  *(_DWORD *)(v46 + 8) = v59;
  *(_QWORD *)(v6 + 8) = v86;
  return ((v17 >> 31) & 0xFFFFFFF4) + 4077;
}
