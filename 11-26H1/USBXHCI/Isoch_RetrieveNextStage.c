/*
 * XREFs of Isoch_RetrieveNextStage @ 0x140010510
 * Callers:
 *     Isoch_MapTransfers @ 0x1400101E0 (Isoch_MapTransfers.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     Isoch_Stage_Acquire @ 0x140012580 (Isoch_Stage_Acquire.c)
 *     Isoch_TransferData_Initialize @ 0x1400126B0 (Isoch_TransferData_Initialize.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x140014110 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_Transfer_PrepareForCompletion @ 0x140014BC0 (Isoch_Transfer_PrepareForCompletion.c)
 *     Isoch_Transfer_Complete @ 0x140016AB4 (Isoch_Transfer_Complete.c)
 *     WPP_RECORDER_SF_DDqd @ 0x14001DDB8 (WPP_RECORDER_SF_DDqd.c)
 *     WPP_RECORDER_SF_DDqq @ 0x140021AF0 (WPP_RECORDER_SF_DDqq.c)
 *     WPP_RECORDER_SF_ddL @ 0x1400274BC (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_DDqDDDD @ 0x140027B70 (WPP_RECORDER_SF_DDqDDDD.c)
 *     Isoch_GetPacketLength @ 0x140028AC0 (Isoch_GetPacketLength.c)
 *     WPP_RECORDER_SF_DDi @ 0x140029D24 (WPP_RECORDER_SF_DDi.c)
 *     Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage @ 0x14003DAC4 (Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

_BOOL8 __fastcall Isoch_RetrieveNextStage(__int64 a1)
{
  __int16 v1; // si
  KSPIN_LOCK *v2; // r15
  int v4; // ebp
  KIRQL v5; // al
  bool v6; // zf
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // r14
  int v10; // r13d
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // r10
  __int64 v14; // rdx
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rtt
  int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // r13d
  __int64 v22; // rdx
  unsigned int v23; // ecx
  int v24; // edx
  unsigned int v25; // edx
  unsigned int v26; // edx
  __int64 v27; // rax
  __int64 v28; // r10
  __int64 v29; // rdx
  unsigned int v30; // r9d
  unsigned int v31; // r8d
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rtt
  int v34; // ecx
  unsigned int v35; // eax
  unsigned int v36; // edi
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // r13
  int v41; // ebp
  __int64 v42; // r10
  unsigned int v43; // r11d
  __int64 v44; // rdx
  unsigned int v45; // r9d
  unsigned int v46; // r8d
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rtt
  int v49; // ecx
  unsigned int v50; // eax
  unsigned int v51; // edi
  __int64 v52; // rdx
  unsigned int v53; // ecx
  unsigned int v54; // eax
  unsigned int v55; // r12d
  unsigned int v56; // ebp
  unsigned int v57; // r11d
  unsigned int v58; // r15d
  int v59; // r8d
  __int64 v60; // rax
  int v61; // r8d
  _QWORD *v62; // rdx
  __int64 v63; // rcx
  unsigned int v64; // ecx
  int v65; // r13d
  __int64 v66; // r10
  __int64 v67; // rdx
  unsigned int v68; // r9d
  unsigned int v69; // r8d
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rtt
  int v72; // ecx
  unsigned int v73; // eax
  unsigned int v74; // r14d
  __int64 v75; // rdx
  unsigned int v76; // r8d
  unsigned int v77; // r11d
  unsigned int v78; // eax
  unsigned int v79; // r15d
  unsigned int v80; // r13d
  int v81; // r8d
  int v83; // edx
  __int64 v84; // rax
  int v85; // r8d
  __int64 v86; // rax
  int v87; // edx
  int v88; // eax
  int v89; // eax
  KIRQL v90; // di
  unsigned int v91; // r8d
  int v92; // eax
  unsigned int v93; // r8d
  int v94; // eax
  int v95; // edx
  __int64 v96; // rcx
  __int64 v97; // rdx
  int v98; // r8d
  int v99; // edx
  int v100; // r8d
  int v101; // edx
  int v102; // r8d
  unsigned int v103; // r13d
  unsigned int v104; // r15d
  __int64 v105; // r11
  __int64 v106; // rdx
  int v107; // r8d
  int v108; // edx
  int v109; // edx
  unsigned int v110; // r12d
  unsigned int i; // r15d
  __int64 v112; // rcx
  int v113; // edx
  int v114; // edx
  int v115; // edx
  int v116; // [rsp+20h] [rbp-A8h]
  __int64 v117; // [rsp+28h] [rbp-A0h]
  __int64 v118; // [rsp+30h] [rbp-98h]
  unsigned int v119; // [rsp+60h] [rbp-68h]
  __int64 v120; // [rsp+68h] [rbp-60h] BYREF
  __int64 v121; // [rsp+70h] [rbp-58h] BYREF
  __int64 v122; // [rsp+78h] [rbp-50h]
  unsigned int v123; // [rsp+D0h] [rbp+8h]
  unsigned int v124; // [rsp+D0h] [rbp+8h]
  int v125; // [rsp+D8h] [rbp+10h]
  int v126; // [rsp+D8h] [rbp+10h]
  unsigned int v127; // [rsp+E0h] [rbp+18h]
  int v128; // [rsp+E0h] [rbp+18h]

  v1 = 0;
  v2 = (KSPIN_LOCK *)(a1 + 96);
  *(_QWORD *)(a1 + 376) = 0LL;
  v121 = 0LL;
  v120 = 0LL;
  v4 = -1073741823;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v6 = *(_DWORD *)(a1 + 384) == 5;
  *(_BYTE *)(a1 + 104) = v5;
  if ( v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v83 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
      LOBYTE(v83) = 5;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v83,
        14,
        53,
        (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
        5);
    }
    goto LABEL_85;
  }
  if ( *(_QWORD *)(a1 + 392) == a1 + 392 )
    goto LABEL_5;
  v6 = *(_DWORD *)(a1 + 344) == 3;
  v7 = *(_QWORD *)(a1 + 400);
  v121 = v7;
  if ( v6 )
  {
    if ( *(_DWORD *)(v7 + 112) == *(_DWORD *)(v7 + 116) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          2u,
          0xEu,
          0x36u,
          (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL));
      Isoch_Transfer_CompleteCancelable(a1, v7, -1, -1073737728, 0, 0);
      goto LABEL_5;
    }
    *(_DWORD *)(v7 + 108) = *(_DWORD *)(v7 + 96) - *(_DWORD *)(v7 + 104);
    goto LABEL_85;
  }
  if ( (unsigned int)(*(_DWORD *)(v7 + 104) + *(_DWORD *)(v7 + 108)) < *(_DWORD *)(v7 + 96) )
  {
    v64 = *(_DWORD *)(a1 + 364);
    v65 = *(_DWORD *)(v7 + 108) + *(_DWORD *)(v7 + 104);
    v66 = *(_QWORD *)(a1 + 40);
    v122 = *(_QWORD *)(v7 + 48);
    v126 = v65;
    v124 = *(_DWORD *)(v122 + 128) + (v65 + v64 - 1) / v64;
    v67 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v66 + 844) / 10000LL;
    v68 = (unsigned int)(**(_DWORD **)(*(_QWORD *)(v66 + 88) + 40LL) + 2) >> 3;
    v69 = v68 & 0x7FF;
    _m_prefetchw((const void *)(v66 + 832));
    v70 = *(_QWORD *)(v66 + 832);
    do
    {
      v71 = v70;
      v70 = _InterlockedCompareExchange64((volatile signed __int64 *)(v66 + 832), v70, v70);
    }
    while ( v71 != v70 );
    v72 = ((_DWORD)v70 << 11) - (v70 >> 21) + v67;
    v73 = (((_WORD)v70 << 11) - (unsigned __int16)(v70 >> 21) + (_WORD)v67) & 0x7FF;
    v74 = v72 ^ ((unsigned __int16)v68 ^ (unsigned __int16)v72) & 0x7FF;
    if ( v73 < v69 )
    {
      v91 = v69 - v73;
      v92 = v74 - 2048;
      if ( v91 <= 0x400 )
        v92 = v72 ^ ((unsigned __int16)v68 ^ (unsigned __int16)v72) & 0x7FF;
      v74 = v92;
    }
    else if ( v73 - v69 > 0x400 )
    {
      v74 += 2048;
    }
    v75 = _InterlockedExchange64(
            (volatile __int64 *)(v66 + 832),
            ((unsigned __int64)v74 >> 11) | ((v67 - (v74 & 0x7FF)) << 21));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v75) = 5;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(v66 + 72),
        v75,
        4,
        185,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        v74);
    }
    v76 = *(_DWORD *)(a1 + 364);
    v119 = (v76 + *(_DWORD *)(v7 + 96) - v65 - 1) / v76;
    v77 = v119;
    if ( v119 )
    {
      v78 = v124;
      v79 = 0;
      v128 = 0;
      v80 = v124 - v74;
      do
      {
        if ( v79 + v78 > v74 )
        {
          if ( v79 + v80 < 0x7FFFFFFF )
            break;
          v78 = v124;
        }
        if ( v76 )
        {
          v103 = v126;
          v104 = 0;
          v105 = v122;
          do
          {
            *(_DWORD *)(v105 + 12LL * v103 + 148) = -1073414144;
            *(_DWORD *)(v7 + 92) += Isoch_GetPacketLength(v7, v103++);
            ++*(_DWORD *)(v7 + 108);
            ++v104;
            v76 = *(_DWORD *)(a1 + 364);
          }
          while ( v104 < v76 );
          v77 = v119;
          v79 = v128;
          v78 = v124;
          v126 = v103;
          v80 = v124 - v74;
        }
        v128 = ++v79;
      }
      while ( v79 < v77 );
      v2 = (KSPIN_LOCK *)(a1 + 96);
    }
    v81 = *(_DWORD *)(v7 + 96);
    if ( *(_DWORD *)(*(_QWORD *)(v7 + 48) + 12LL * (unsigned int)(v81 - 1) + 148) != -1073414144 )
    {
      v84 = Isoch_Stage_Acquire(v7);
      *(_QWORD *)(a1 + 376) = v84;
      if ( v84 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v97 = *(_QWORD *)(a1 + 48);
          v98 = *(unsigned __int8 *)(v97 + 143);
          LOBYTE(v97) = 4;
          WPP_RECORDER_SF_DDqq(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v97,
            v98,
            56,
            (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
            v98,
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
            *(_QWORD *)(v7 + 24),
            v84);
        }
        v4 = 0;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
             && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v95 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
        LOBYTE(v95) = 5;
        WPP_RECORDER_SF_DDi(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v95,
          v85,
          57,
          (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
          *(_QWORD *)(v7 + 24));
      }
      goto LABEL_85;
    }
    if ( *(_DWORD *)(v7 + 112) == *(_DWORD *)(v7 + 116) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v117) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          5u,
          0xEu,
          0x37u,
          (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
          v117,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL));
      }
      Isoch_Transfer_CompleteCancelable(a1, v7, 0, 0, 1, 1);
      goto LABEL_5;
    }
    *(_DWORD *)(v7 + 108) = v81 - *(_DWORD *)(v7 + 104);
LABEL_85:
    KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
    return v4 >= 0;
  }
LABEL_5:
  KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
  while ( 1 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01033 + 1264))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 72),
           &v120);
    if ( v4 < 0 )
      break;
    v8 = Isoch_TransferData_Initialize(a1, v120, &v121);
    if ( v8 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v106 = *(_QWORD *)(a1 + 48);
        v107 = *(unsigned __int8 *)(v106 + 143);
        LOBYTE(v106) = 2;
        WPP_RECORDER_SF_DDqd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v106,
          v107,
          60,
          (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
          v107,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
          v120,
          v8);
      }
      Isoch_Transfer_Complete(a1, v121, -1, -1073737728, 0);
    }
    else
    {
      v9 = v121;
      v10 = 0;
      v11 = *(_QWORD *)(v121 + 48);
      if ( *(_WORD *)(v11 + 2) == 56 )
      {
LABEL_9:
        v12 = 36LL;
      }
      else
      {
        switch ( *(_WORD *)(v11 + 2) )
        {
          case '9':
          case ':':
            v12 = 52LL;
            break;
          default:
            goto LABEL_9;
        }
      }
      if ( (*(_DWORD *)(v11 + 32) & 4) != 0 )
      {
        v13 = *(_QWORD *)(a1 + 40);
        v14 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v13 + 844) / 10000LL;
        v15 = (unsigned int)(**(_DWORD **)(*(_QWORD *)(v13 + 88) + 40LL) + 1) >> 3;
        v16 = v15 & 0x7FF;
        _m_prefetchw((const void *)(v13 + 832));
        v17 = *(_QWORD *)(v13 + 832);
        do
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 832), v17, v17);
        }
        while ( v18 != v17 );
        v19 = ((_DWORD)v17 << 11) - (v17 >> 21) + v14;
        v20 = (((_WORD)v17 << 11) - (unsigned __int16)(v17 >> 21) + (_WORD)v14) & 0x7FF;
        v21 = v19 ^ ((unsigned __int16)v15 ^ (unsigned __int16)v19) & 0x7FF;
        if ( v20 < v16 )
        {
          v93 = v16 - v20;
          v94 = v21 - 2048;
          if ( v93 <= 0x400 )
            v94 = v19 ^ ((unsigned __int16)v15 ^ (unsigned __int16)v19) & 0x7FF;
          v21 = v94;
        }
        else if ( v20 - v16 > 0x400 )
        {
          v21 += 2048;
        }
        v22 = _InterlockedExchange64(
                (volatile __int64 *)(v13 + 832),
                ((unsigned __int64)v21 >> 11) | ((v14 - (v21 & 0x7FF)) << 21));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v22) = 5;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(v13 + 72),
            v22,
            4,
            185,
            (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
            v21);
        }
        if ( *(_BYTE *)(a1 + 342) )
          goto LABEL_154;
        v23 = *(_DWORD *)(a1 + 368);
        *(_DWORD *)(v11 + 128) = v23;
        v24 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 20LL);
        if ( v24 == 2 || (v6 = v24 == 3, v25 = 255, v6) )
          v25 = 1024;
        if ( v21 > v23 && v21 - v23 > v25 )
        {
LABEL_154:
          *(_BYTE *)(a1 + 341) = 1;
          *(_DWORD *)(v11 + 128) = v21 + 5;
          *(_DWORD *)(a1 + 368) = v21 + 5;
        }
        v10 = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 368) = *(_DWORD *)(v11 + 128);
      }
      v26 = 0;
      *(_DWORD *)(a1 + 368) += (unsigned int)(*(_DWORD *)(a1 + 364) + *(_DWORD *)(v11 + 132) - 1)
                             / *(_DWORD *)(a1 + 364);
      *(_DWORD *)(v12 + v11) = 0;
      *(_DWORD *)(v11 + 136) = 0;
      if ( *(_DWORD *)(v11 + 132) )
      {
        do
        {
          v27 = v26++;
          *(_DWORD *)(v11 + 12 * v27 + 148) = -1;
        }
        while ( v26 < *(_DWORD *)(v11 + 132) );
      }
      v28 = *(_QWORD *)(a1 + 40);
      v29 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v28 + 844) / 10000LL;
      v30 = (unsigned int)(**(_DWORD **)(*(_QWORD *)(v28 + 88) + 40LL) + 2) >> 3;
      v31 = v30 & 0x7FF;
      _m_prefetchw((const void *)(v28 + 832));
      v32 = *(_QWORD *)(v28 + 832);
      do
      {
        v33 = v32;
        v32 = _InterlockedCompareExchange64((volatile signed __int64 *)(v28 + 832), v32, v32);
      }
      while ( v33 != v32 );
      v34 = ((_DWORD)v32 << 11) - (v32 >> 21) + v29;
      v35 = (((_WORD)v32 << 11) - (unsigned __int16)(v32 >> 21) + (_WORD)v29) & 0x7FF;
      v36 = v34 ^ ((unsigned __int16)v30 ^ (unsigned __int16)v34) & 0x7FF;
      if ( v35 < v31 )
      {
        v31 -= v35;
        v88 = v36 - 2048;
        if ( v31 <= 0x400 )
          v88 = v34 ^ ((unsigned __int16)v30 ^ (unsigned __int16)v34) & 0x7FF;
        v36 = v88;
      }
      else if ( v35 - v31 > 0x400 )
      {
        v36 += 2048;
      }
      v37 = _InterlockedExchange64(
              (volatile __int64 *)(v28 + 832),
              ((unsigned __int64)v36 >> 11) | ((v29 - (v36 & 0x7FF)) << 21));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v37) = 5;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(v28 + 72),
          v37,
          4,
          185,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          v36);
      }
      v38 = *(unsigned int *)(v11 + 128);
      v39 = *(_DWORD *)(v11 + 128) - v36;
      if ( v39 <= 0 )
        v39 = v36 - v38;
      if ( v39 > 1024 )
        v10 = -1073741823;
      else
        *(_BYTE *)(a1 + 342) = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDqDDDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
          v31,
          v30,
          v116,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
          *(_QWORD *)(v9 + 24),
          *(_DWORD *)(v11 + 132),
          v36,
          *(_DWORD *)(v11 + 128),
          *(_DWORD *)(a1 + 368));
      if ( v10 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v99 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
          LOBYTE(v99) = 2;
          WPP_RECORDER_SF_DDqd(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v99,
            v31,
            61,
            (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
            *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
            v120,
            v10);
        }
        Isoch_Transfer_PrepareForCompletion(a1, v9, 3221553152LL, 3221228032LL);
        v90 = KfRaiseIrql(2u);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2104))(
          WdfDriverGlobals,
          *(_QWORD *)(v9 + 24),
          *(unsigned int *)(v9 + 68));
        KeLowerIrql(v90);
      }
      else
      {
        v40 = *(_QWORD *)(v9 + 48);
        if ( *(_WORD *)(v40 + 2) == 56 )
        {
LABEL_42:
          v41 = *(_DWORD *)(v9 + 104) + *(_DWORD *)(v9 + 108);
          v42 = *(_QWORD *)(a1 + 40);
          v125 = v41;
          v43 = *(_DWORD *)(v40 + 128) + (unsigned int)(v41 + *(_DWORD *)(a1 + 364) - 1) / *(_DWORD *)(a1 + 364);
          v123 = v43;
          v44 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v42 + 844) / 10000LL;
          v45 = (unsigned int)(**(_DWORD **)(*(_QWORD *)(v42 + 88) + 40LL) + 2) >> 3;
          v46 = v45 & 0x7FF;
          _m_prefetchw((const void *)(v42 + 832));
          v47 = *(_QWORD *)(v42 + 832);
          do
          {
            v48 = v47;
            v47 = _InterlockedCompareExchange64((volatile signed __int64 *)(v42 + 832), v47, v47);
          }
          while ( v48 != v47 );
          v49 = ((_DWORD)v47 << 11) - (v47 >> 21) + v44;
          v50 = (((_WORD)v47 << 11) - (unsigned __int16)(v47 >> 21) + (_WORD)v44) & 0x7FF;
          v51 = v49 ^ ((unsigned __int16)v45 ^ (unsigned __int16)v49) & 0x7FF;
          if ( v50 < v46 )
          {
            v46 -= v50;
            v89 = v51 - 2048;
            if ( v46 <= 0x400 )
              v89 = v49 ^ ((unsigned __int16)v45 ^ (unsigned __int16)v49) & 0x7FF;
            v51 = v89;
          }
          else if ( v50 - v46 > 0x400 )
          {
            v51 += 2048;
          }
          v52 = _InterlockedExchange64(
                  (volatile __int64 *)(v42 + 832),
                  ((unsigned __int64)v51 >> 11) | ((v44 - (v51 & 0x7FF)) << 21));
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v52) = 5;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(v42 + 72),
              v52,
              4,
              185,
              (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
              v51);
            v43 = v123;
          }
          v53 = *(_DWORD *)(a1 + 364);
          v54 = (v53 + *(_DWORD *)(v9 + 96) - v41 - 1) / v53;
          v127 = v54;
          if ( v54 )
          {
            v55 = v123;
            v56 = 0;
            v57 = v43 - v51;
            v58 = v54;
            do
            {
              if ( v55 + v56 > v51 && v57 + v56 < 0x7FFFFFFF )
                break;
              if ( v53 )
              {
                v110 = v125;
                for ( i = 0; i < v53; ++i )
                {
                  *(_DWORD *)(v40 + 12LL * v110 + 148) = -1073414144;
                  *(_DWORD *)(v9 + 92) += Isoch_GetPacketLength(v9, v110++);
                  ++*(_DWORD *)(v9 + 108);
                  v53 = *(_DWORD *)(a1 + 364);
                }
                v58 = v127;
                v125 = v110;
                v55 = v123;
              }
              ++v56;
            }
            while ( v56 < v58 );
            v2 = (KSPIN_LOCK *)(a1 + 96);
          }
          if ( *(_DWORD *)(*(_QWORD *)(v9 + 48) + 12LL * (unsigned int)(*(_DWORD *)(v9 + 96) - 1) + 148) == -1073414144 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v112 = *(_QWORD *)(a1 + 56);
              LODWORD(v118) = *(_DWORD *)(v112 + 152);
              LODWORD(v117) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
              WPP_RECORDER_SF_DD(
                *(_QWORD *)(v112 + 80),
                4u,
                0xEu,
                0x3Fu,
                (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
                v117,
                v118);
            }
            Isoch_Transfer_Complete(a1, v9, 0, 0, 1);
          }
          else if ( *(_DWORD *)(v9 + 80) )
          {
            *(_DWORD *)(v9 + 64) = 1;
            v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)()))(WdfFunctions_01033
                                                                                                  + 3144))(
                   WdfDriverGlobals,
                   *(_QWORD *)(v9 + 24),
                   Isoch_WdfEvtRequestCancel);
            if ( v4 >= 0 )
            {
              v60 = Isoch_Stage_Acquire(v9);
              v61 = v60;
              *(_QWORD *)(a1 + 376) = v60;
              if ( !*(_DWORD *)(a1 + 384) )
              {
                v86 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
                if ( *(_DWORD *)(v86 + 24) > 1u )
                {
                  v96 = *(unsigned int *)(*(_QWORD *)(v9 + 48) + 64LL);
                  if ( (unsigned int)v96 < *(_DWORD *)(v86 + 48) )
                    v1 = *(_WORD *)(*(_QWORD *)(v86 + 56) + 2 * v96);
                }
                *(_WORD *)(a1 + 112) = v1;
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v87 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
                LOBYTE(v87) = 4;
                WPP_RECORDER_SF_DDqq(
                  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                  v87,
                  v61,
                  66,
                  (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
                  *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
                  *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
                  *(_QWORD *)(v9 + 24),
                  v61);
              }
              *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v2);
              v62 = *(_QWORD **)(a1 + 400);
              if ( *v62 != a1 + 392 )
                __fastfail(3u);
              *(_QWORD *)v9 = a1 + 392;
              *(_QWORD *)(v9 + 8) = v62;
              *v62 = v9;
              *(_QWORD *)(a1 + 400) = v9;
              goto LABEL_85;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v114 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
              LOBYTE(v114) = 4;
              WPP_RECORDER_SF_DDqd(
                *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                v114,
                v59,
                65,
                (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
                *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
                *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
                *(_QWORD *)(v9 + 24),
                v4);
            }
            *(_DWORD *)(v9 + 64) = 3;
            Isoch_Transfer_Complete(a1, v9, -1, -1073676288, 0);
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v113 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
              LOBYTE(v113) = 4;
              WPP_RECORDER_SF_DDi(
                *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                v113,
                v46,
                64,
                (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
                *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
                *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
                v120);
            }
            Isoch_Transfer_Complete(a1, v9, -1, -1, 1);
          }
        }
        else
        {
          switch ( *(_WORD *)(v40 + 2) )
          {
            case '9':
            case ':':
              if ( *(_BYTE *)(a1 + 288) )
              {
                if ( *(_BYTE *)(*(_QWORD *)(a1 + 48) + 680LL) )
                  goto LABEL_42;
                Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage(v38, v37);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v109 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
                  LOBYTE(v109) = 2;
                  WPP_RECORDER_SF_DDi(
                    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                    v109,
                    v102,
                    31,
                    (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
                    *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
                    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
                    v40);
                }
                v100 = -1073741790;
              }
              else
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v108 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
                  LOBYTE(v108) = 2;
                  WPP_RECORDER_SF_DDi(
                    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                    v108,
                    v31,
                    30,
                    (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
                    *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
                    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
                    *(_QWORD *)(v9 + 48));
                }
                v100 = -1073741811;
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v101 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
                LOBYTE(v101) = 2;
                WPP_RECORDER_SF_DDqd(
                  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                  v101,
                  v100,
                  62,
                  (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
                  *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
                  *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
                  v120,
                  v100);
              }
              Isoch_Transfer_Complete(a1, v9, -1, -2147482880, 0);
              break;
            default:
              goto LABEL_42;
          }
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v115 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
    LOBYTE(v115) = 5;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v115,
      14,
      58,
      (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
      v4);
  }
  if ( !*(_DWORD *)(a1 + 384) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v63 = *(_QWORD *)(a1 + 56);
    LODWORD(v118) = *(_DWORD *)(v63 + 152);
    LODWORD(v117) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(v63 + 80),
      3u,
      0xEu,
      0x3Bu,
      (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
      v117,
      v118);
  }
  return v4 >= 0;
}
