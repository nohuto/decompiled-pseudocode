/*
 * XREFs of Isoch_Stage_MapIntoRing @ 0x14001B410
 * Callers:
 *     Isoch_MapStage @ 0x14001AF10 (Isoch_MapStage.c)
 *     Isoch_EvtDmaCallback @ 0x14001B370 (Isoch_EvtDmaCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     XilUsbDevice_WriteDoorbell @ 0x14000ED60 (XilUsbDevice_WriteDoorbell.c)
 *     McTemplateK0uqq_EtwWriteTransfer @ 0x14000EDE0 (McTemplateK0uqq_EtwWriteTransfer.c)
 *     TR_GetPacketCount @ 0x140026D10 (TR_GetPacketCount.c)
 *     Isoch_GetTDPC @ 0x140026E00 (Isoch_GetTDPC.c)
 *     TR_CalculateTDSize @ 0x140026E80 (TR_CalculateTDSize.c)
 *     Isoch_GetTBC @ 0x1400271A0 (Isoch_GetTBC.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x140027E60 (TR_AddTRBRangeToSecureTransferRing.c)
 *     Isoch_Stage_Release @ 0x140028F84 (Isoch_Stage_Release.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x140029130 (Isoch_Stage_FreeScatterGatherList.c)
 *     Isoch_InsertLinkTrb @ 0x14002A100 (Isoch_InsertLinkTrb.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140044C80 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_SF_DDqqDDD @ 0x14004D7E4 (WPP_RECORDER_SF_DDqqDDD.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

int *__fastcall Isoch_Stage_MapIntoRing(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // r11
  unsigned int v3; // r13d
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned int v8; // r9d
  __int64 v9; // r15
  __int64 v10; // r15
  __int64 v11; // rax
  unsigned int v12; // ecx
  _DWORD *v13; // rdx
  int v14; // r15d
  __int64 v15; // r10
  unsigned int v16; // r15d
  unsigned int v17; // r14d
  __int64 v18; // rdx
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rtt
  int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // r8d
  int v27; // eax
  _UNKNOWN **v28; // rdx
  KIRQL v29; // dl
  int *result; // rax
  unsigned int v31; // eax
  __int64 v32; // rsi
  unsigned int v33; // r14d
  __int64 *v34; // rbx
  __int64 v35; // rsi
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // r9d
  __int64 v40; // rdx
  int v41; // r8d
  __int64 **v42; // r8
  __int64 *v43; // rax
  __int64 v44; // rax
  char v45; // r9
  char v46; // r8
  __int64 v47; // rax
  char v48; // r12
  unsigned int v49; // ebx
  __int64 v50; // r12
  unsigned int v51; // esi
  char v52; // dl
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // esi
  __int64 v56; // rbx
  int v57; // r13d
  int v58; // eax
  unsigned __int16 v59; // ax
  unsigned int v60; // eax
  unsigned int v61; // ebx
  char TBC; // al
  int v63; // r13d
  unsigned int v64; // edx
  unsigned int v65; // r13d
  unsigned int PacketCount; // eax
  int v67; // r8d
  unsigned int v68; // eax
  __int64 v69; // r15
  _DWORD *v70; // rdx
  unsigned int v71; // ebx
  __int64 v72; // rcx
  unsigned int v73; // r8d
  __int64 v74; // r10
  __int64 v75; // r9
  __int64 v76; // rcx
  __int64 v77; // rcx
  int v78; // r10d
  unsigned int v79; // r10d
  __int64 v80; // rax
  __int64 v81; // rax
  int v82; // eax
  _DWORD *v83; // rbx
  KSPIN_LOCK *v84; // rbx
  KIRQL *v85; // rsi
  KIRQL v86; // al
  bool v87; // zf
  KIRQL v88; // al
  __int64 v89; // r10
  _DWORD *v90; // rcx
  int v91; // eax
  __int64 v92; // r9
  __int64 v93; // r9
  int v94; // r8d
  _DWORD *v95; // rdx
  int v96; // edx
  unsigned int v97; // eax
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // rsi
  __int64 v102; // r8
  __int64 v103; // rax
  __int64 v104; // rbx
  __int64 v105; // rax
  __int64 v106; // rcx
  int v107; // eax
  int v108; // edx
  int v109; // ebx
  char v110; // r9
  __int64 v111; // rdx
  unsigned int v112; // r8d
  __int64 v113; // r9
  unsigned int v114; // eax
  __int64 v115; // rsi
  __int64 v116; // r15
  _DWORD *v117; // rdx
  int v118; // r15d
  char inserted; // al
  _DWORD *v120; // r8
  int v121; // ecx
  int v122; // r9d
  __int64 v123; // rax
  __int64 v124; // r8
  __int64 v125; // rdx
  __int64 v126; // rsi
  __int64 v127; // rcx
  __int64 v128; // rdx
  int v129; // ebx
  char v130; // r9
  signed __int32 v131[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v132; // [rsp+20h] [rbp-E0h]
  __int64 v133; // [rsp+28h] [rbp-D8h]
  char v134; // [rsp+60h] [rbp-A0h]
  char v135; // [rsp+61h] [rbp-9Fh]
  char v136; // [rsp+62h] [rbp-9Eh]
  unsigned int v137; // [rsp+64h] [rbp-9Ch]
  unsigned int v138; // [rsp+68h] [rbp-98h]
  unsigned int v139; // [rsp+6Ch] [rbp-94h]
  int v140; // [rsp+70h] [rbp-90h]
  __int128 v141; // [rsp+78h] [rbp-88h]
  unsigned int v142; // [rsp+88h] [rbp-78h]
  __int64 v143; // [rsp+90h] [rbp-70h]
  unsigned int v144; // [rsp+98h] [rbp-68h]
  unsigned int v145; // [rsp+9Ch] [rbp-64h]
  __int64 v146; // [rsp+A0h] [rbp-60h]
  _DWORD *v147; // [rsp+A8h] [rbp-58h]
  unsigned int v148; // [rsp+B0h] [rbp-50h]
  unsigned int v149; // [rsp+B4h] [rbp-4Ch]
  unsigned int v150; // [rsp+B8h] [rbp-48h]
  _OWORD *v151; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v152; // [rsp+C8h] [rbp-38h]
  __int64 v153; // [rsp+D0h] [rbp-30h]
  __int64 v154; // [rsp+D8h] [rbp-28h]
  __int64 v155; // [rsp+E0h] [rbp-20h]
  GUID v156; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v157; // [rsp+F8h] [rbp-8h]
  __int64 v158; // [rsp+100h] [rbp+0h]
  __int128 v159; // [rsp+108h] [rbp+8h]

  v1 = *a1;
  v2 = *((unsigned int *)a1 + 10);
  v3 = 0;
  v134 = 0;
  v147 = a1;
  v5 = *(_QWORD *)(v1 + 56);
  v6 = *(_QWORD *)(v1 + 48);
  v152 = a1[9];
  v153 = v1;
  v7 = *(_QWORD *)(v5 + 40);
  v8 = *(_DWORD *)(v5 + 192);
  v154 = v6;
  v149 = 0;
  LOBYTE(v7) = ~(unsigned __int8)(*(_QWORD *)(v7 + 736) >> 33);
  v137 = v2;
  v138 = 0;
  v155 = v7 & 1;
  v143 = *(_QWORD *)(v152 + 16);
  LODWORD(v7) = *(_DWORD *)(v152 + 24);
  *((_DWORD *)a1 + 22) = v8;
  v9 = *(_QWORD *)(v1 + 48);
  v139 = v7;
  v10 = v9 + 140;
  v11 = *(_QWORD *)(v5 + 56);
  v140 = 0;
  v144 = 0;
  v145 = 0;
  v12 = *(_DWORD *)(v11 + 160);
  LODWORD(v11) = *(_DWORD *)(v1 + 96) - 1;
  v148 = v12;
  v150 = 0;
  v142 = v8;
  v13 = (_DWORD *)(v10 + 12 * v2);
  if ( (_DWORD)v2 == (_DWORD)v11 )
    v14 = *(_DWORD *)(v1 + 80);
  else
    v14 = *(_DWORD *)(v10 + 12LL * (unsigned int)(v2 + 1));
  v15 = *(_QWORD *)(v5 + 40);
  v16 = v14 - *v13;
  if ( _bittest64((const signed __int64 *)(v15 + 736), 0x29u) )
  {
    v17 = *(_DWORD *)(v6 + 128) + (unsigned int)v2 / *(_DWORD *)(v5 + 364);
    v144 = v17;
    v18 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v15 + 844) / 10000LL;
    v19 = (unsigned int)(**(_DWORD **)(*(_QWORD *)(v15 + 88) + 40LL) + 2) >> 3;
    v20 = v19 & 0x7FF;
    _m_prefetchw((const void *)(v15 + 832));
    v21 = *(_QWORD *)(v15 + 832);
    do
    {
      v22 = v21;
      v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 832), v21, v21);
    }
    while ( v22 != v21 );
    v23 = ((_DWORD)v21 << 11) - (v21 >> 21) + v18;
    v24 = (((_WORD)v21 << 11) - (unsigned __int16)(v21 >> 21) + (_WORD)v18) & 0x7FF;
    v25 = v23 ^ ((unsigned __int16)v19 ^ (unsigned __int16)v23) & 0x7FF;
    if ( v24 >= v20 )
    {
      if ( v24 - v20 > 0x400 )
        v25 += 2048;
    }
    else
    {
      v26 = v20 - v24;
      v27 = v25 - 2048;
      if ( v26 <= 0x400 )
        v27 = v23 ^ ((unsigned __int16)v19 ^ (unsigned __int16)v23) & 0x7FF;
      v25 = v27;
    }
    _InterlockedExchange64(
      (volatile __int64 *)(v15 + 832),
      ((unsigned __int64)v25 >> 11) | ((v18 - (v25 & 0x7FF)) << 21));
    v28 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v28) = 5;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(v15 + 72),
        (_DWORD)v28,
        4,
        185,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        v25);
      LOBYTE(v2) = v137;
    }
    if ( (int)(v25 - v17) >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDqqDDD(
          *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
          (unsigned int)&WPP_RECORDER_INITIALIZED,
          *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 143LL),
          v19,
          v132,
          *(_BYTE *)(*(_QWORD *)(v5 + 48) + 143LL),
          *(_DWORD *)(*(_QWORD *)(v5 + 56) + 152LL),
          *(_QWORD *)(v1 + 24),
          (char)a1,
          v25,
          v2,
          v17);
      Isoch_Stage_FreeScatterGatherList(v5, a1);
      *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
      Isoch_Stage_Release(v5, a1);
      v29 = *(_BYTE *)(v5 + 104);
      *(_DWORD *)(v5 + 336) |= 0x10u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), v29);
      result = XilUsbDevice_WriteDoorbell(
                 *(_QWORD *)(*(_QWORD *)(v5 + 56) + 16LL),
                 *(unsigned int *)(*(_QWORD *)(v5 + 56) + 152LL),
                 *(unsigned int *)(v5 + 64),
                 1);
      *(_DWORD *)(v5 + 360) = 1;
      return result;
    }
  }
  v31 = *(_DWORD *)(v5 + 192);
  v32 = 0LL;
  v33 = 4;
  if ( v31 >= *(_DWORD *)(v5 + 196) )
  {
    v34 = (__int64 *)a1[1];
    v35 = 16LL * v31;
    v36 = a1 + 1;
    v32 = *(_QWORD *)(v5 + 184) + v35;
    if ( v34 != a1 + 1 )
    {
      if ( (_QWORD *)v34[1] != v36 || (v37 = *v34, *(__int64 **)(*v34 + 8) != v34) )
        __fastfail(3u);
      *v36 = v37;
      *(_QWORD *)(v37 + 8) = v36;
      v34[1] = (__int64)v34;
      *v34 = (__int64)v34;
      v38 = *(_QWORD *)(v5 + 40);
      v39 = 6145 - (*(_DWORD *)(v5 + 200) != 0);
      v141 = 0LL;
      if ( (*(_QWORD *)(v38 + 736) & 0x800LL) != 0 )
        v39 |= 0x10u;
      v40 = *(_QWORD *)(v5 + 184) + 16LL * *(unsigned int *)(v5 + 192);
      v41 = DWORD2(v141) & 0x3FFFFF | (*(unsigned __int16 *)(v5 + 112) << 22);
      *(_QWORD *)v40 = v34[3];
      *(_DWORD *)(v40 + 8) = v41;
      *(_DWORD *)(v40 + 12) = v39 & 0xFFFFFFFD;
      *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
      v42 = (__int64 **)a1[4];
      v43 = *(__int64 **)(v5 + 176);
      if ( *v42 != a1 + 3 )
        __fastfail(3u);
      *v43 = (__int64)(a1 + 3);
      v43[1] = (__int64)v42;
      *v42 = v43;
      a1[4] = (__int64)v43;
      *(_QWORD *)(v5 + 176) = v34;
      *(_QWORD *)(v5 + 184) = v34[2];
      *(_DWORD *)(v5 + 192) = 0;
      a1[12] = (__int64)v34;
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
    }
    v142 = 0;
  }
  v44 = *(_QWORD *)(v5 + 40);
  v45 = *(_BYTE *)(v44 + 1005);
  v46 = *(_BYTE *)(v44 + 1006);
  v136 = v45;
  v135 = v46;
  do
  {
    while ( 1 )
    {
      v47 = 16LL * *(unsigned int *)(v5 + 192) + *(_QWORD *)(v5 + 184);
      v151 = (_OWORD *)v47;
      v141 = 0LL;
      if ( v32 )
        v47 = v32;
      v48 = 0;
      v146 = v47;
      switch ( v33 )
      {
        case 5u:
          v61 = DWORD2(v141);
          v65 = 1024;
          goto LABEL_67;
        case 7u:
          goto LABEL_58;
        case 4u:
          v53 = v137 % *(_DWORD *)(v5 + 364);
          v54 = v137 / *(_DWORD *)(v5 + 364);
          v144 = v54 + *(_DWORD *)(v154 + 128);
          v55 = ((v144 & 0x7FF) << 20) | 0x1400;
          if ( v45 )
          {
            v56 = *(_QWORD *)(v5 + 56);
            v57 = *(_DWORD *)(v56 + 156);
            if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(v54, v53)
              && !*(_WORD *)(v56 + 100)
              && *(_BYTE *)(v56 + 39)
              && ((v58 = *(_DWORD *)(v56 + 128), v58 == 5) || v58 == 1) )
            {
              v59 = *(_WORD *)(v56 + 105);
            }
            else
            {
              v59 = *(_WORD *)(v56 + 100) & 0x7FF;
            }
            v60 = (v16 + v59 - 1) / v59;
            if ( !v60 )
              v60 = 1;
            v61 = DWORD2(v141) & 0xFFC1FFFF | ((((unsigned __int8)((v57 + v60) / (v57 + 1)) - 1) & 0x1F) << 17);
          }
          else
          {
            TBC = Isoch_GetTBC(v5, v16);
            v61 = DWORD2(v141);
            v55 ^= (TBC & 3) << 7;
          }
          v48 = v136;
          v63 = *(_DWORD *)(*(_QWORD *)(v5 + 56) + 156LL);
          v64 = (unsigned int)Isoch_GetTDPC(v5, v16) % (v63 + 1);
          if ( v64 )
            LOBYTE(v63) = v64 - 1;
          v65 = v55 & 0xFFF0FFFF | ((v63 & 0xF) << 16);
          PacketCount = TR_GetPacketCount(v5, v16);
          v46 = v135;
          v149 = PacketCount;
LABEL_67:
          v71 = v61 & 0xFFFE0000;
          if ( v139 > v16 )
          {
            v49 = v16 & 0x1FFFF | v71;
            *(_QWORD *)&v141 = v143;
            v75 = v139 - v16;
            v139 -= v16;
            v143 += v16;
            v78 = v140;
            if ( v140 + (v49 & 0x1FFFF) > v148 )
              v49 ^= (v49 ^ (v148 - v140)) & 0x1FFFF;
            if ( v46 )
              v65 = v65 & 0xFFFFFE7F | 0x80;
            v33 = 6;
          }
          else
          {
            v16 -= v139;
            v72 = v138 + 1;
            *(_QWORD *)&v141 = v143;
            v138 = v72;
            v49 = v139 & 0x1FFFF | v71;
            v73 = *(_DWORD *)v152;
            if ( (unsigned int)v72 >= *(_DWORD *)v152 )
            {
              v74 = 0LL;
              v75 = 0LL;
            }
            else
            {
              v72 *= 3LL;
              v74 = *(_QWORD *)(v152 + 8 * v72 + 16);
              v75 = *(unsigned int *)(v152 + 8 * v72 + 24);
              LODWORD(v72) = v138;
            }
            v139 = v75;
            v143 = v74;
            if ( v140 + (v49 & 0x1FFFF) <= v148 )
            {
LABEL_78:
              if ( v16 )
              {
                v33 = 5;
                v78 = v140;
                goto LABEL_89;
              }
            }
            else
            {
              v49 ^= (v49 ^ (v148 - v140)) & 0x1FFFF;
              if ( v16 )
              {
                while ( (unsigned int)v75 <= v16 )
                {
                  v76 = (unsigned int)(v72 + 1);
                  v16 -= v75;
                  v138 = v76;
                  if ( (unsigned int)v76 >= v73 )
                  {
                    v143 = 0LL;
                    v139 = 0;
                    goto LABEL_78;
                  }
                  v77 = 3 * v76;
                  v74 = *(_QWORD *)(v152 + 8 * v77 + 16);
                  v75 = *(unsigned int *)(v152 + 8 * v77 + 24);
                  v143 = v74;
                  v139 = v75;
                  if ( !v16 )
                    goto LABEL_79;
                  LODWORD(v72) = v138;
                }
                v75 = (unsigned int)v75 - v16;
                v139 = v75;
                v143 = v16 + v74;
                v16 = 0;
              }
            }
LABEL_79:
            if ( v135 )
              v65 = v65 & 0xFFFFFE7F | 0x80;
            v78 = v140;
            v33 = (v137 == v147[11]) + 6;
          }
LABEL_89:
          v79 = (v49 & 0x1FFFF) + v78;
          v140 = v79;
          if ( !v48 )
          {
            LOBYTE(v75) = v33 - 6 <= 1;
            v49 ^= (v49 ^ ((unsigned int)TR_CalculateTDSize(v5, v149, v79, v75) << 17)) & 0x3E0000;
          }
          v80 = *(_QWORD *)(v5 + 40);
          v51 = v65 | 0x10;
          HIDWORD(v141) = v65 | 0x10;
          if ( _bittest64((const signed __int64 *)(v80 + 736), 0x2Fu)
            && (v81 = *(_QWORD *)(v5 + 48), *(_DWORD *)(v81 + 20) == 1)
            && *(_DWORD *)(v81 + 40) )
          {
            if ( v33 != 6 )
            {
              if ( v33 == 7 )
                v33 = 11;
              goto LABEL_102;
            }
            if ( (unsigned int)(*(_DWORD *)(v5 + 196) - *(_DWORD *)(v5 + 192) - 1) < *(_DWORD *)(v5 + 440) )
            {
              v33 = 10;
LABEL_102:
              LODWORD(v50) = v137;
              v3 = v138;
              goto LABEL_103;
            }
          }
          else if ( v33 != 6 && v33 != 7 )
          {
            goto LABEL_102;
          }
          v51 = v65 | 0x12;
          HIDWORD(v141) = v65 | 0x12;
          goto LABEL_102;
        case 6u:
LABEL_58:
          v51 = HIDWORD(v141) & 0xFFFF03DF | 0x1C20;
          *(_QWORD *)&v141 = 1LL;
          WORD1(v141) = v137;
          v50 = v137 + 1;
          HIDWORD(v141) = v51;
          DWORD1(v141) = *(_DWORD *)(v154 + 128);
          ++v137;
          if ( v33 == 7 || (v67 = *(_DWORD *)(v153 + 96), (_DWORD)v50 == v67) )
          {
            v49 = DWORD2(v141);
            v33 = 9;
          }
          else
          {
            if ( (v50 & 0x7F) != 0 )
            {
              v68 = v51 & 0xFFFFFDFF;
              v51 = v51 & 0xFFFFFDFF | ((_DWORD)v155 << 9);
              HIDWORD(v141) = v68 | ((_DWORD)v155 << 9);
            }
            v69 = *(_QWORD *)(v153 + 48) + 140LL;
            v140 = 0;
            v70 = (_DWORD *)(v69 + 12 * v50);
            if ( (_DWORD)v50 == v67 - 1 )
            {
              v33 = 4;
              v16 = *(_DWORD *)(v153 + 80) - *v70;
              v49 = DWORD2(v141);
            }
            else
            {
              v49 = DWORD2(v141);
              v33 = 4;
              v16 = *(_DWORD *)(v69 + 12LL * (unsigned int)(v50 + 1)) - *v70;
            }
          }
          goto LABEL_103;
      }
      v49 = DWORD2(v141);
      LODWORD(v50) = v137;
      if ( v33 == 10 )
      {
        v51 = 1042;
        v52 = 1;
        HIDWORD(v141) = 1042;
        v49 = DWORD2(v141) & 0xFFC00000;
        v134 = 1;
        v33 = 6;
        goto LABEL_104;
      }
      if ( v33 == 11 )
      {
        v51 = 1042;
        v134 = 1;
        HIDWORD(v141) = 1042;
        v49 = DWORD2(v141) & 0xFFC00000;
        v52 = 1;
        v33 = 7;
        goto LABEL_104;
      }
      v51 = HIDWORD(v141);
LABEL_103:
      v52 = v134;
LABEL_104:
      if ( v151 != (_OWORD *)v146 )
        HIDWORD(v141) = v51 & 0xFFFFFFFE | *(_DWORD *)(v5 + 200) & 1;
      v82 = v49 & 0x3FFFFF | (*(unsigned __int16 *)(v5 + 112) << 22);
      v83 = v147;
      DWORD2(v141) = v82;
      *v151 = v141;
      ++*(_DWORD *)(v5 + 192);
      if ( v52 )
      {
        Isoch_InsertLinkTrb(v5, v83, 5LL, 0LL);
        v134 = 0;
      }
      if ( v33 != 9 && v33 != 4 )
      {
        v111 = v152;
LABEL_137:
        v112 = v145;
        v113 = v142;
        goto LABEL_138;
      }
      v83[26] = *(_DWORD *)(v5 + 192);
      *(_OWORD *)(*(_QWORD *)(v5 + 184) + 16LL * *(unsigned int *)(v5 + 192)) = 0LL;
      if ( v33 == 9 )
      {
        v84 = (KSPIN_LOCK *)(v5 + 96);
        v85 = (KIRQL *)(v5 + 104);
        v88 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
        v89 = v153;
        v90 = v147;
        *(_BYTE *)(v5 + 104) = v88;
        v91 = v50 - *(_DWORD *)(v89 + 108);
        ++*(_DWORD *)(v89 + 116);
        v92 = *(_QWORD *)(v89 + 48);
        *(_DWORD *)(v89 + 104) = v91;
        v93 = v92 + 140;
        v94 = v90[11];
        v95 = (_DWORD *)(v93 + 12LL * (unsigned int)v90[10]);
        if ( v94 == *(_DWORD *)(v89 + 96) - 1 )
          v96 = *(_DWORD *)(v89 + 80) - *v95;
        else
          v96 = *(_DWORD *)(v93 + 12LL * (unsigned int)(v94 + 1)) - *v95;
        *(_DWORD *)(v89 + 88) += v96;
        ++*(_DWORD *)(v5 + 384);
        v97 = v144;
        *(_DWORD *)(v5 + 336) |= 0x20u;
        *(_DWORD *)(v5 + 372) = v97;
LABEL_118:
        *(_DWORD *)(v5 + 336) |= 0x11u;
        goto LABEL_119;
      }
      if ( !*(_BYTE *)(v5 + 341) )
        goto LABEL_120;
      v84 = (KSPIN_LOCK *)(v5 + 96);
      v85 = (KIRQL *)(v5 + 104);
      v86 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
      v87 = *(_BYTE *)(v5 + 341) == 0;
      *(_BYTE *)(v5 + 104) = v86;
      if ( !v87 )
        goto LABEL_118;
LABEL_119:
      KeReleaseSpinLock(v84, *v85);
LABEL_120:
      *(_BYTE *)(v146 + 12) ^= 1u;
      _InterlockedOr(v131, 0);
      v146 = 0LL;
      if ( *(_BYTE *)(v5 + 341) )
      {
        v98 = *(_QWORD *)(v5 + 56);
        v99 = *(unsigned __int8 *)(v5 + 288);
        v100 = *(unsigned int *)(v5 + 64);
        *(_BYTE *)(v5 + 341) = 0;
        v101 = *(_QWORD *)(v98 + 16);
        v102 = *(unsigned int *)(v98 + 152);
        if ( *(_QWORD *)(v101 + 168) )
        {
          v109 = ((_DWORD)v100 << 16) | (unsigned __int8)v102;
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
          {
            v110 = *(_BYTE *)(v101 + 143);
            LODWORD(v133) = v100;
            LODWORD(v132) = v102;
            McTemplateK0uqq_EtwWriteTransfer(v99, v100, v102, v110, v132, v133);
          }
          **(_DWORD **)(v101 + 168) = v109;
          _InterlockedOr(v131, 0);
        }
        else if ( !(_BYTE)v99 )
        {
          v103 = *(_QWORD *)(v101 + 672);
          LODWORD(v151) = 0;
          LODWORD(v132) = 4;
          v104 = *(_QWORD *)(v103 + 8);
          v105 = *(_QWORD *)(v101 + 616);
          v106 = *(_QWORD *)(v104 + 112);
          v159 = 0LL;
          BYTE8(v159) = v102;
          WORD5(v159) = v100;
          v157 = 0LL;
          v158 = v105;
          v156 = 0LL;
          LODWORD(v159) = 32;
          v107 = SecureChannel_SendRequestSynchronously(v106, &v156, 48, (__int64)&v151, 4);
          if ( v107 >= 0 )
          {
            if ( (int)v151 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v108) = 2;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(v104 + 72),
                v108,
                12,
                13,
                (__int64)&WPP_d9bb91b14c983b49a4cd15189f1ffdfb_Traceguids,
                (char)v151);
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v108) = 2;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(v104 + 72),
              v108,
              12,
              12,
              (__int64)&WPP_d9bb91b14c983b49a4cd15189f1ffdfb_Traceguids,
              v107);
          }
        }
      }
      v111 = v152;
      if ( v33 == 9 )
        goto LABEL_137;
      v112 = v3;
      v145 = v3;
      if ( v3 < *(_DWORD *)v152 )
        v150 = v143 - *(_DWORD *)(v152 + 24LL * v3 + 16);
      v113 = *(unsigned int *)(v5 + 192);
      v142 = *(_DWORD *)(v5 + 192);
LABEL_138:
      v114 = *(_DWORD *)(v5 + 192);
      if ( v114 != *(_DWORD *)(v5 + 196) )
        break;
      if ( v33 == 9 )
        goto LABEL_149;
      if ( v33 != 4 )
      {
        v3 = v112;
        *(_DWORD *)(v5 + 192) = v113;
        v138 = v112;
        v140 = 0;
        v115 = *(_QWORD *)(v111 + 24LL * v112 + 16) + v150;
        v139 = *(_DWORD *)(v111 + 24LL * v112 + 24) - v150;
        v143 = v115;
        v116 = *(_QWORD *)(v153 + 48) + 140LL;
        v117 = (_DWORD *)(v116 + 12LL * (unsigned int)v50);
        if ( (_DWORD)v50 == *(_DWORD *)(v153 + 96) - 1 )
          v118 = *(_DWORD *)(v153 + 80);
        else
          v118 = *(_DWORD *)(v116 + 12LL * (unsigned int)(v50 + 1));
        v16 = v118 - *v117;
        v33 = 4;
        v114 = v113;
      }
      LOBYTE(v113) = 1;
      v32 = *(_QWORD *)(v5 + 184) + 16LL * v114;
      inserted = Isoch_InsertLinkTrb(v5, v147, v33, v113);
      v46 = v135;
      v45 = v136;
      if ( inserted )
      {
        v142 = 0;
        goto LABEL_148;
      }
    }
    v32 = v146;
LABEL_148:
    v46 = v135;
    v45 = v136;
  }
  while ( v33 != 9 );
LABEL_149:
  v120 = v147;
  v121 = *(_DWORD *)(v5 + 192);
  v122 = v147[22];
  v123 = (__int64)(v147 + 32);
  v147[26] = v121;
  result = (int *)TR_AddTRBRangeToSecureTransferRing(v5, (int)v120 + 24, *((_QWORD *)v120 + 12), v122, v121, v123);
  v125 = *(_QWORD *)(v5 + 56);
  v126 = *(_QWORD *)(v125 + 16);
  if ( *(_QWORD *)(v126 + 168) )
  {
    v127 = *(unsigned int *)(v5 + 64);
    v128 = *(unsigned int *)(v125 + 152);
    v129 = (*(_DWORD *)(v5 + 64) << 16) | (unsigned __int8)v128;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    {
      v130 = *(_BYTE *)(v126 + 143);
      LODWORD(v133) = *(_DWORD *)(v5 + 64);
      LODWORD(v132) = v128;
      McTemplateK0uqq_EtwWriteTransfer(v127, v128, v124, v130, v132, v133);
    }
    result = *(int **)(v126 + 168);
    *result = v129;
    _InterlockedOr(v131, 0);
  }
  return result;
}
