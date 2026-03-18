/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1400315C8
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration @ 0x140023480 (HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x14000C874 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x140018FF4 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     WPP_RECORDER_SF_Dq @ 0x140034804 (WPP_RECORDER_SF_Dq.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x14003CD9C (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400468C0 (memmove.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  unsigned __int16 *v4; // r13
  KIRQL v5; // al
  __int64 v6; // r14
  size_t v7; // r15
  int v8; // ebx
  unsigned __int16 v9; // r9
  unsigned int v10; // r8d
  _QWORD *v11; // r12
  _QWORD *v12; // r10
  unsigned __int16 *v13; // rbx
  unsigned __int64 v14; // rcx
  unsigned int v15; // r12d
  __int64 v16; // rax
  unsigned __int16 *v17; // r13
  int v18; // r9d
  int v19; // r8d
  unsigned __int8 *v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int8 *v22; // r14
  _DWORD *v23; // rcx
  unsigned int v24; // edx
  __int64 v25; // r8
  unsigned int v26; // r12d
  char *v27; // rbx
  size_t v28; // r12
  unsigned __int64 *v29; // rax
  unsigned __int64 **v30; // rcx
  unsigned int *v31; // rcx
  unsigned __int8 *v32; // rbx
  _DWORD *v33; // r12
  unsigned int v34; // eax
  unsigned __int64 v35; // r14
  unsigned __int8 *v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r9
  _BYTE *v39; // rax
  int v40; // r9d
  __int64 v41; // rax
  int v42; // r8d
  int v43; // eax
  char v44; // al
  __int64 v45; // rax
  __int64 v46; // r8
  unsigned __int16 v47; // cx
  unsigned int v48; // r9d
  __int64 v49; // r10
  _QWORD **v50; // r10
  _QWORD *i; // rax
  unsigned int v52; // r11d
  unsigned int v53; // r9d
  _QWORD *v54; // r8
  _QWORD *v55; // rdx
  __int64 v56; // r14
  int v57; // edx
  unsigned __int16 v58; // cx
  int v59; // r8d
  _QWORD *k; // rax
  unsigned int v61; // r12d
  char *v62; // r9
  __int64 v63; // r11
  unsigned int *v64; // rbx
  char v65; // r11
  _QWORD *v66; // r10
  __int64 v67; // r14
  unsigned int v68; // eax
  void *v69; // rcx
  void *v70; // rcx
  void *v71; // rcx
  __int64 Pool2; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  void *v75; // rcx
  void *v76; // rcx
  void *v77; // rcx
  __int64 v78; // rcx
  _QWORD *v79; // rcx
  __int64 v80; // r8
  unsigned int j; // r9d
  int v82; // ecx
  __int64 v83; // rcx
  _QWORD *v84; // r14
  _QWORD **v85; // rdi
  _QWORD *v86; // rdx
  _QWORD *v87; // rax
  int v89; // [rsp+28h] [rbp-E0h]
  __int64 *v90; // [rsp+30h] [rbp-D8h]
  __int64 v91; // [rsp+48h] [rbp-C0h]
  _WORD v92[2]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v93; // [rsp+5Ch] [rbp-ACh] BYREF
  void *v94; // [rsp+60h] [rbp-A8h]
  unsigned __int16 v95; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v96; // [rsp+6Ch] [rbp-9Ch]
  __int64 v97; // [rsp+70h] [rbp-98h] BYREF
  __int64 v98; // [rsp+78h] [rbp-90h] BYREF
  unsigned int *v99; // [rsp+88h] [rbp-80h]
  _QWORD *v100; // [rsp+90h] [rbp-78h]
  _QWORD *v101; // [rsp+98h] [rbp-70h]
  __int64 v102; // [rsp+A0h] [rbp-68h]
  __int128 v103; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v104; // [rsp+B8h] [rbp-50h]
  __int64 v105; // [rsp+C0h] [rbp-48h]
  __int128 v106; // [rsp+C8h] [rbp-40h]
  __int64 v107; // [rsp+D8h] [rbp-30h]
  unsigned __int16 *v108; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v109; // [rsp+E8h] [rbp-20h]
  _OWORD v110[2]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v111; // [rsp+110h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 464);
  v2 = 0LL;
  DWORD1(v103) = 0;
  v111 = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  memset(v110, 0, sizeof(v110));
  LOWORD(v110[0]) = 40;
  v97 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v1,
    v110);
  v4 = (unsigned __int16 *)*((_QWORD *)&v110[0] + 1);
  v102 = *((_QWORD *)&v110[0] + 1);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1644), 0xFFFFFFEF);
  v6 = a1 + 48;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1644), 0xFFFF7FFF);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v5);
  v107 = 0LL;
  v104 = 0LL;
  v90 = &v97;
  v103 = 0LL;
  v105 = 0x100000001LL;
  v106 = 0LL;
  LODWORD(v103) = 56;
  v7 = *(unsigned __int16 *)(*((_QWORD *)v4 + 3) + 2LL);
  v89 = v7 + 39;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v103,
         (unsigned int)ExDefaultNonPagedPoolType,
         1681082453LL);
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_165;
    v9 = 31;
    v10 = 5;
LABEL_4:
    LODWORD(v90) = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      v10,
      v9,
      (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
      v90);
    goto LABEL_165;
  }
  v11 = *(_QWORD **)v6;
  v101 = v11;
  *v11 = v97;
  memmove((void *)(*(_QWORD *)v6 + 32LL), *((const void **)v4 + 3), v7);
  v96 = 0;
  v11[3] = v11 + 2;
  LODWORD(v12) = (_DWORD)v11 + 32;
  v11[2] = v11 + 2;
  v13 = v4 + 20;
  v14 = (unsigned __int64)v4 + *v4;
  v100 = v11 + 4;
  v109 = v14;
  v15 = 0;
  if ( (unsigned __int64)(v4 + 21) < v14 )
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)(a1 + 8);
      v98 = 0LL;
      v94 = 0LL;
      v17 = v13;
      v18 = *((unsigned __int8 *)v13 + 3);
      v19 = *((unsigned __int8 *)v13 + 2);
      v91 = *(_QWORD *)(v16 + 1432);
      LOBYTE(v92[0]) = 0;
      v20 = (unsigned __int8 *)HUBDESC_ParseConfigurationDescriptor(
                                 (_DWORD)v12,
                                 (_DWORD)v12,
                                 v19,
                                 v18,
                                 -1,
                                 -1,
                                 -1,
                                 (__int64)v92,
                                 v91);
      v22 = v20;
      if ( !v20 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_100;
        v40 = 32;
LABEL_99:
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          v21,
          5,
          v40,
          (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
        goto LABEL_100;
      }
      v23 = *(_DWORD **)(a1 + 2456);
      if ( v23 )
      {
        v24 = 0;
        if ( *v23 )
        {
          while ( *((_BYTE *)v23 + 2 * v24 + 5) != v20[3] || *((_BYTE *)v23 + 2 * v24 + 4) != v20[2] )
          {
            if ( ++v24 >= *v23 )
              goto LABEL_14;
          }
          _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x8000u);
        }
      }
LABEL_14:
      v25 = (unsigned int)ExDefaultNonPagedPoolType;
      *((_DWORD *)v13 + 4) = v20[4];
      v26 = v20[4] + v15;
      v99 = (unsigned int *)(v13 + 8);
      v27 = (char *)v13 + *v13;
      v96 = v26;
      v108 = (unsigned __int16 *)v27;
      v107 = 0LL;
      v104 = 0LL;
      v105 = 0x100000001LL;
      v103 = 0LL;
      v106 = 0LL;
      LODWORD(v103) = 56;
      v90 = &v98;
      v28 = 80LL * *v99 + 40;
      v89 = 80 * *v99 + 40;
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64))(WdfFunctions_01015 + 1536))(
             WdfDriverGlobals,
             &v103,
             v25,
             1681082453LL);
      if ( v8 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_165;
        v9 = 33;
        v10 = 2;
        goto LABEL_4;
      }
      *((_QWORD *)v17 + 1) = v94;
      memset(v94, 0, v28);
      *(_QWORD *)v94 = v98;
      *((_QWORD *)v94 + 4) = v22;
      *((_DWORD *)v94 + 6) = v22[4];
      if ( LOBYTE(v92[0]) == 1 )
      {
        _InterlockedOr((volatile signed __int32 *)v94 + 7, 1u);
        _InterlockedOr((volatile signed __int32 *)v94 + 7, 2u);
      }
      v21 = (unsigned __int64)(v101 + 2);
      v29 = (unsigned __int64 *)((char *)v94 + 8);
      v30 = (unsigned __int64 **)v101[3];
      if ( *v30 != v101 + 2 )
LABEL_173:
        __fastfail(3u);
      v12 = v100;
      *((_QWORD *)v94 + 2) = v30;
      *v29 = v21;
      *v30 = v29;
      v31 = v99;
      *(_QWORD *)(v21 + 8) = v29;
      *((_BYTE *)v17 + 4) = v22[5];
      *((_BYTE *)v17 + 5) = v22[6];
      *((_BYTE *)v17 + 6) = v22[7];
      v32 = &v22[*v22];
      v33 = v94;
      v34 = 0;
      v35 = (unsigned __int64)v12 + *(unsigned __int16 *)(*(_QWORD *)(v102 + 24) + 2LL);
      v93 = 0;
      if ( *v31 )
        break;
LABEL_83:
      v13 = v108;
      if ( (unsigned __int64)(v108 + 1) >= v109 )
        goto LABEL_105;
      v15 = v96;
    }
    while ( 1 )
    {
      v36 = v32;
      if ( (unsigned __int64)v32 >= v35 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_100;
        v40 = 22;
        goto LABEL_99;
      }
      v21 = v34;
      v37 = 10LL * v34;
      v38 = 3LL * v34;
      v33[2 * v37 + 16] = *(_DWORD *)&v17[12 * v34 + 22];
      v39 = v32 + 1;
      v33[2 * v37 + 12] = 1;
      if ( (unsigned __int64)(v32 + 1) >= v35 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_100;
        v40 = 23;
        goto LABEL_99;
      }
      while ( *v39 != 5 )
      {
        v41 = *v36;
        if ( !(_BYTE)v41 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_100;
          v40 = 24;
          goto LABEL_99;
        }
        v32 += v41;
        v36 = v32;
        if ( (unsigned __int64)v32 >= v35 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_100;
          v40 = 25;
          goto LABEL_99;
        }
        v39 = v32 + 1;
        if ( (unsigned __int64)(v32 + 1) >= v35 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_100;
          v40 = 26;
          goto LABEL_99;
        }
      }
      if ( (unsigned __int64)v32 >= v35 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_100;
        v40 = 27;
        goto LABEL_99;
      }
      if ( (unsigned __int64)(v32 + 7) > v35 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_100;
        v40 = 28;
        goto LABEL_99;
      }
      if ( (*(_DWORD *)&v17[12 * v21 + 22] & 1) != 0 )
        *((_WORD *)v32 + 2) = v17[12 * v21 + 12];
      v42 = *(_DWORD *)&v17[12 * v21 + 22] & 0xF0;
      if ( v42 == 16 )
      {
        v33[20 * v21 + 28] = 1;
      }
      else if ( v42 == 32 )
      {
        v33[20 * v21 + 28] = 2;
      }
      else
      {
        v43 = 3;
        if ( v42 != 48 )
          v43 = 0;
        v33[20 * v21 + 28] = v43;
      }
      *(_QWORD *)&v33[20 * v21 + 18] = v32;
      v33[20 * v21 + 20] = v35 - (_DWORD)v32;
      if ( *(_WORD *)(a1 + 1998) >= 0x250u )
        LODWORD(v21) = *((unsigned __int16 *)v32 + 2);
      else
        LODWORD(v21) = (*((_WORD *)v32 + 2) & 0x7FF) * (unsigned __int16)(((*((_WORD *)v32 + 2) >> 11) & 3) + 1);
      v17[4 * v38 + 12] = v21;
      v44 = 6;
      if ( v32[6] < 6u )
        v44 = v32[6];
      HIBYTE(v17[4 * v38 + 13]) = v44;
      LOBYTE(v17[4 * v38 + 13]) = v32[2];
      if ( (v32[3] & 3) != 0 )
      {
        switch ( v32[3] & 3 )
        {
          case 1:
            *(_DWORD *)&v17[4 * v38 + 14] = 1;
            break;
          case 2:
            *(_DWORD *)&v17[4 * v38 + 14] = 2;
            break;
          case 3:
            *(_DWORD *)&v17[4 * v38 + 14] = 3;
            break;
        }
      }
      else
      {
        *(_DWORD *)&v17[4 * v38 + 14] = 0;
      }
      if ( !(_WORD)v21 )
        _InterlockedOr(&v33[20 * v93 + 13], 1u);
      v45 = *v32;
      if ( !(_BYTE)v45 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_100;
        v40 = 29;
        goto LABEL_99;
      }
      v32 += v45;
      if ( (unsigned __int64)v32 < v35 && (unsigned __int64)(v32 + 1) < v35 )
      {
        if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
          || (unsigned __int16)(*(_WORD *)(a1 + 1998) - 544) > 0xDFu
          || v32[1] != 18 )
        {
          LODWORD(v46) = v93;
          LODWORD(v21) = 1;
LABEL_64:
          if ( v32[1] == 48 )
          {
            if ( *v32 )
            {
              if ( (unsigned __int64)(v32 + 6) <= v35 )
              {
                *(_QWORD *)&v33[20 * (unsigned int)v46 + 22] = v32;
                if ( (*(_BYTE *)(*(_QWORD *)&v33[20 * (unsigned int)v46 + 18] + 3LL) & 3) == 1 )
                {
                  if ( (v33[20 * (unsigned int)v46 + 13] & 1) == 0 )
                    v17[12 * (unsigned int)v46 + 12] = *((_WORD *)v32 + 2);
                  if ( (v32[3] & 0x80u) != 0 )
                  {
                    _mm_lfence();
                    v32 += *v32;
                    if ( (unsigned __int64)v32 < v35 && (unsigned __int64)(v32 + 1) < v35 && v32[1] == 49 )
                    {
                      if ( *v32 )
                      {
                        if ( (unsigned __int64)(v32 + 8) <= v35 )
                        {
                          *(_QWORD *)&v33[20 * (unsigned int)v46 + 24] = v32;
                          if ( (v33[20 * (unsigned int)v46 + 13] & 1) == 0 )
                          {
                            v48 = *((_DWORD *)v32 + 1);
                            LODWORD(v21) = 3 * v46;
                            if ( v48 > 0xFFFF )
                            {
                              LODWORD(v21) = *(_DWORD *)&v17[12 * (unsigned int)v46 + 22];
                              if ( (v21 & 0x100) != 0 )
                              {
                                LODWORD(v21) = v21 | 0x10000;
                                *(_DWORD *)&v17[12 * (unsigned int)v46 + 20] = v48;
                                *(_DWORD *)&v17[12 * (unsigned int)v46 + 22] = v21;
                              }
                            }
                            else
                            {
                              v17[12 * (unsigned int)v46 + 12] = v48;
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
          goto LABEL_81;
        }
        if ( *v32 && (unsigned __int64)(v32 + 8) <= v35 )
        {
          v46 = v93;
          LODWORD(v21) = 1;
          *(_QWORD *)&v33[20 * v93 + 26] = v32;
          *(_DWORD *)&v17[12 * v46 + 20] = *((_DWORD *)v32 + 1);
          v47 = *((_WORD *)v32 + 2);
          v17[12 * v46 + 12] = v47;
          if ( v47 )
            _InterlockedAnd(&v33[20 * v46 + 13], 0xFFFFFFFE);
          goto LABEL_64;
        }
      }
LABEL_81:
      v34 = v93 + 1;
      v93 = v34;
      if ( v34 >= *v99 )
      {
        LODWORD(v12) = (_DWORD)v100;
        goto LABEL_83;
      }
    }
  }
LABEL_105:
  v49 = *(_QWORD *)(a1 + 48);
  if ( v49 )
  {
    v50 = (_QWORD **)(v49 + 16);
    for ( i = *v50; ; i = (_QWORD *)*i )
    {
      v55 = i - 1;
      if ( v50 == i )
        break;
      v52 = *((_DWORD *)v55 + 6);
      v53 = 0;
      if ( v52 )
      {
        v54 = v55 + 9;
        do
        {
          if ( (*(_BYTE *)(*v54 + 2LL) & 0xF) == 0 )
          {
            v8 = -1073741823;
            *(_DWORD *)(a1 + 1572) = -1072693239;
            goto LABEL_165;
          }
          ++v53;
          v54 += 10;
        }
        while ( v53 < v52 );
      }
    }
  }
  v56 = *(_QWORD *)(a1 + 48);
  v57 = 0;
  v92[0] = 0;
  v58 = 0;
  v95 = 0;
  v59 = 0;
  LOWORD(v93) = 0;
  if ( !v56 )
  {
LABEL_130:
    v8 = 0;
    v67 = v96;
    *((_DWORD *)v101 + 2) = v96;
    v68 = *(_DWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 144) = 0;
    *(_DWORD *)(a1 + 112) = 0;
    if ( v68 )
    {
      if ( (unsigned int)v67 <= v68 )
        goto LABEL_152;
      v69 = *(void **)(a1 + 104);
      *(_DWORD *)(a1 + 96) = 0;
      if ( v69 )
      {
        ExFreePoolWithTag(v69, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v70 = *(void **)(a1 + 136);
      if ( v70 )
      {
        ExFreePoolWithTag(v70, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v71 = *(void **)(a1 + 120);
      if ( v71 )
      {
        ExFreePoolWithTag(v71, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
    }
    if ( *(_DWORD *)(a1 + 96) || !(_DWORD)v67 )
      goto LABEL_151;
    Pool2 = ExAllocatePool2(64LL, 8 * v67, 1681082453LL);
    *(_QWORD *)(a1 + 104) = Pool2;
    if ( !Pool2
      || (v73 = ExAllocatePool2(64LL, 8 * v67, 1681082453LL), (*(_QWORD *)(a1 + 136) = v73) == 0LL)
      || (v74 = ExAllocatePool2(64LL, 8 * v67, 1681082453LL), (*(_QWORD *)(a1 + 120) = v74) == 0LL) )
    {
      v75 = *(void **)(a1 + 104);
      v8 = -1073741670;
      *(_DWORD *)(a1 + 96) = 0;
      if ( v75 )
      {
        ExFreePoolWithTag(v75, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v76 = *(void **)(a1 + 136);
      if ( v76 )
      {
        ExFreePoolWithTag(v76, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v77 = *(void **)(a1 + 120);
      if ( v77 )
      {
        ExFreePoolWithTag(v77, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v90) = -1073741670;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x1Eu,
          (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
          v90);
      }
LABEL_151:
      if ( v8 < 0 )
        goto LABEL_165;
      goto LABEL_152;
    }
    *(_DWORD *)(a1 + 96) = v67;
    v8 = 0;
LABEL_152:
    v78 = *(_QWORD *)(a1 + 56);
    if ( v78 )
    {
      v79 = (_QWORD *)(v78 + 16);
      *(_DWORD *)(a1 + 144) = 0;
      *(_DWORD *)(a1 + 128) = 0;
      v80 = *v79 - 8LL;
      if ( v79 != (_QWORD *)*v79 )
      {
        do
        {
          for ( j = 0; j < *(_DWORD *)(v80 + 24); ++j )
          {
            v82 = *(_DWORD *)(v80 + 80LL * j + 48);
            if ( v82 == 4 )
            {
              *(_DWORD *)(v80 + 80LL * j + 48) = 5;
              *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = *(_QWORD *)(v80 + 80LL * j + 40);
            }
            else if ( v82 == 6 )
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = *(_QWORD *)(v80 + 80LL * j + 40);
            }
          }
          v83 = *(_QWORD *)(v80 + 8);
          v80 = v83 - 8;
        }
        while ( *(_QWORD *)(a1 + 56) + 16LL != v83 );
      }
    }
    v2 = *(_QWORD *)(a1 + 48);
    goto LABEL_175;
  }
  for ( k = *(_QWORD **)(v56 + 16); ; k = (_QWORD *)*k )
  {
    v66 = k - 1;
    if ( (_QWORD *)(v56 + 16) == k )
      goto LABEL_130;
    v61 = 0;
    LODWORD(v94) = *((_DWORD *)v66 + 6);
    if ( (_DWORD)v94 )
      break;
LABEL_128:
    ;
  }
  v62 = (char *)v66 + 52;
  while ( 1 )
  {
    v63 = *(_QWORD *)(v62 + 20);
    if ( (*(_DWORD *)v62 & 1) == 0 )
      break;
LABEL_127:
    ++v61;
    v62 += 80;
    if ( v61 >= (unsigned int)v94 )
      goto LABEL_128;
  }
  if ( (*(_BYTE *)(v63 + 3) & 3) != 0 )
  {
    if ( *(char *)(v63 + 2) >= 0 )
    {
      v64 = (unsigned int *)&v95;
      v57 = v58;
    }
    else
    {
      v64 = (unsigned int *)v92;
    }
  }
  else
  {
    v64 = &v93;
    v57 = (unsigned __int16)v59;
  }
  v65 = *(_BYTE *)(v63 + 2);
  LOWORD(v59) = (unsigned __int16)v59 >> (v65 & 0xF);
  if ( (v59 & 1) == 0 && (((unsigned __int16)v57 >> (v65 & 0xF)) & 1) == 0 )
  {
    *(_WORD *)v64 = v57 | (1 << (v65 & 0xF));
    v57 = v92[0];
    v58 = v95;
    v59 = (unsigned __int16)v93;
    goto LABEL_127;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dq(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL), v57, v59, (_DWORD)v62, v89, v65, v56);
LABEL_100:
  v8 = -1073741823;
  *(_DWORD *)(a1 + 1572) = -1073737984;
LABEL_165:
  *(_DWORD *)(a1 + 1568) = v8;
  if ( !*(_DWORD *)(a1 + 1572) )
    *(_DWORD *)(a1 + 1572) = HUBPDO_GetUSBDErrorFromNTStatus(v8);
  v84 = *(_QWORD **)(a1 + 48);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x10u);
  if ( v84 )
  {
    v85 = (_QWORD **)(v84 + 2);
    while ( 1 )
    {
      v86 = *v85;
      if ( *v85 == v85 )
        break;
      if ( (_QWORD **)v86[1] != v85 )
        goto LABEL_173;
      v87 = (_QWORD *)*v86;
      if ( *(_QWORD **)(*v86 + 8LL) != v86 )
        goto LABEL_173;
      *v85 = v87;
      v87[1] = v85;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *(v86 - 1));
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *v84);
  }
LABEL_175:
  *(_QWORD *)(v102 + 32) = v2;
  return ((v8 >> 31) & 0xFFFFFFF4) + 4077;
}
