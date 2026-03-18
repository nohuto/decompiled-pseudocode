/*
 * XREFs of Bulk_Stage_MapIntoRing @ 0x14001A0D0
 * Callers:
 *     Bulk_EvtDmaCallback @ 0x140019D60 (Bulk_EvtDmaCallback.c)
 *     Bulk_MapStage @ 0x140019DB0 (Bulk_MapStage.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     McTemplateK0uqq_EtwWriteTransfer @ 0x14000EDE0 (McTemplateK0uqq_EtwWriteTransfer.c)
 *     TR_GetPacketCount @ 0x140026D10 (TR_GetPacketCount.c)
 *     TR_CalculateTDSize @ 0x140026E80 (TR_CalculateTDSize.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x140027E60 (TR_AddTRBRangeToSecureTransferRing.c)
 *     Bulk_InsertLinkTrb @ 0x14002A29C (Bulk_InsertLinkTrb.c)
 *     WPP_RECORDER_SF_DDDDqDD @ 0x140038984 (WPP_RECORDER_SF_DDDDqDD.c)
 *     WPP_RECORDER_SF_DDDDq @ 0x14003928C (WPP_RECORDER_SF_DDDDq.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140044C80 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     memmove @ 0x140059540 (memmove.c)
 */

__int64 __fastcall Bulk_Stage_MapIntoRing(__int64 a1)
{
  unsigned int v2; // r12d
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // eax
  unsigned __int16 v9; // ax
  __int64 v10; // rdi
  int v11; // eax
  unsigned __int16 v12; // r14
  __int64 v13; // rdi
  int v14; // eax
  unsigned __int16 v15; // ax
  unsigned int v16; // edi
  __int64 v17; // rdx
  unsigned int PacketCount; // eax
  __int64 v19; // r9
  int v20; // r11d
  __int64 v21; // r13
  unsigned int v22; // r12d
  unsigned int v23; // r14d
  __int64 v24; // rax
  __int64 v25; // r8
  unsigned int v26; // r10d
  unsigned int v27; // r8d
  _OWORD *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // edx
  unsigned int v32; // esi
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned int v35; // esi
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  __int64 v39; // rax
  unsigned int v40; // edx
  _DWORD *v41; // rax
  unsigned int v42; // edi
  unsigned int v43; // edi
  char v44; // al
  __int64 v45; // rdi
  unsigned int v46; // r8d
  int v47; // eax
  int v48; // r10d
  unsigned int v49; // r9d
  unsigned int v50; // ecx
  unsigned int v51; // r13d
  unsigned int v52; // eax
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rcx
  int v60; // eax
  __int64 v61; // rcx
  int v62; // eax
  __int64 v63; // rcx
  int v64; // eax
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rcx
  int v68; // eax
  KIRQL v69; // al
  __int64 v70; // rcx
  KIRQL v71; // dl
  __int64 result; // rax
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rdi
  __int64 v76; // r8
  __int64 v77; // rax
  __int64 v78; // rbx
  __int64 v79; // rax
  __int64 v80; // rcx
  int v81; // edx
  int v82; // ebx
  char v83; // r9
  signed __int32 v84[8]; // [rsp+0h] [rbp-C9h] BYREF
  __int64 v85; // [rsp+20h] [rbp-A9h]
  __int64 v86; // [rsp+28h] [rbp-A1h]
  int v87; // [rsp+60h] [rbp-69h]
  unsigned int v88; // [rsp+64h] [rbp-65h]
  int v89; // [rsp+68h] [rbp-61h] BYREF
  __int128 v90; // [rsp+70h] [rbp-59h] BYREF
  unsigned int v91; // [rsp+80h] [rbp-49h]
  __int64 v92; // [rsp+90h] [rbp-39h]
  int v93; // [rsp+98h] [rbp-31h]
  unsigned int v94; // [rsp+9Ch] [rbp-2Dh]
  int v95; // [rsp+ACh] [rbp-1Dh]
  __int64 v96; // [rsp+B0h] [rbp-19h]
  __int64 v97; // [rsp+B8h] [rbp-11h]
  _OWORD *v98; // [rsp+C0h] [rbp-9h]
  GUID v99; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v100; // [rsp+D8h] [rbp+Fh]
  __int64 v101; // [rsp+E0h] [rbp+17h]
  __int128 v102; // [rsp+E8h] [rbp+1Fh]

  v97 = *(_QWORD *)a1;
  v91 = 0;
  v2 = *(_DWORD *)(a1 + 40);
  v3 = *(_QWORD *)(v97 + 56);
  v4 = *(_QWORD *)(v97 + 48);
  v5 = *(_QWORD *)(v3 + 40);
  v96 = *(_QWORD *)(v5 + 856);
  if ( _bittest64((const signed __int64 *)(v5 + 736), 0x22u)
    && (v6 = *(_QWORD *)(v3 + 48), *(_DWORD *)(v6 + 40))
    && (v7 = *(_QWORD *)(v3 + 56), *(char *)(v7 + 98) < 0)
    && *(_DWORD *)(v6 + 20) <= 1u
    && (!(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
     || *(_WORD *)(v7 + 100)
     || !*(_BYTE *)(v7 + 39)
     || (v8 = *(_DWORD *)(v7 + 128), v8 != 5) && v8 != 1
      ? (v9 = *(_WORD *)(v7 + 100) & 0x7FF)
      : (v9 = *(_WORD *)(v7 + 105)),
        v2 % v9) )
  {
    v10 = *(_QWORD *)(v3 + 56);
    if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
      && !*(_WORD *)(v10 + 100)
      && *(_BYTE *)(v10 + 39)
      && ((v11 = *(_DWORD *)(v10 + 128), v11 == 5) || v11 == 1) )
    {
      v12 = *(_WORD *)(v10 + 105);
    }
    else
    {
      v12 = *(_WORD *)(v10 + 100) & 0x7FF;
    }
    v13 = *(_QWORD *)(v3 + 56);
    if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
      && !*(_WORD *)(v13 + 100)
      && *(_BYTE *)(v13 + 39)
      && ((v14 = *(_DWORD *)(v13 + 128), v14 == 5) || v14 == 1) )
    {
      v15 = *(_WORD *)(v13 + 105);
    }
    else
    {
      v15 = *(_WORD *)(v13 + 100) & 0x7FF;
    }
    v16 = v12 - v2 % v15;
  }
  else
  {
    v16 = 0;
  }
  v17 = *(unsigned int *)(a1 + 40);
  v93 = *(_DWORD *)(v4 + 32) & 1;
  v88 = v16;
  PacketCount = TR_GetPacketCount(v3, v17);
  v20 = *(_DWORD *)(a1 + 80);
  v94 = PacketCount;
  v21 = 0LL;
  *(_DWORD *)(a1 + 88) = 0;
  v22 = 0;
  v23 = 5;
  v92 = *(_QWORD *)(v3 + 184) + 16LL * *(unsigned int *)(v3 + 192);
  v24 = *(_QWORD *)(v3 + 40);
  v89 = 0;
  v87 = v20;
  if ( (*(_QWORD *)(v24 + 736) & 8) != 0 )
  {
    LOBYTE(v19) = 1;
    v25 = 5LL;
LABEL_31:
    Bulk_InsertLinkTrb(v3, a1, v25, v19);
LABEL_32:
    v20 = v87;
    goto LABEL_33;
  }
  do
  {
LABEL_33:
    v26 = *(_DWORD *)(v3 + 192);
    v19 = *(_QWORD *)(v3 + 184);
    v27 = *(_DWORD *)(v3 + 196);
    v28 = (_OWORD *)(v19 + 16LL * v26);
    v98 = v28;
    v90 = 0LL;
    if ( v26 + v20 > v27 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_DDDDq(
            *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
            *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 143LL),
            v27,
            17,
            v85,
            *(_BYTE *)(*(_QWORD *)(v3 + 48) + 143LL),
            *(_DWORD *)(*(_QWORD *)(v3 + 56) + 152LL),
            *(_DWORD *)(v3 + 64),
            v26,
            (char)v28);
      }
      LOBYTE(v19) = v28 == (_OWORD *)v92;
      Bulk_InsertLinkTrb(v3, a1, v23, v19);
      goto LABEL_32;
    }
    if ( (*(_QWORD *)(*(_QWORD *)(v3 + 40) + 736LL) & 0x2000000000000LL) != 0 )
    {
      v29 = *(_QWORD *)(v3 + 48);
      if ( *(_DWORD *)(v29 + 20) == 3 )
      {
        v30 = *(_QWORD *)(v3 + 56);
        if ( *(_DWORD *)(v30 + 128) == 6 && v23 == 7 && v26 + 9 > v27 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_DDDDq(
              *(_QWORD *)(v30 + 80),
              *(unsigned __int8 *)(v29 + 143),
              (unsigned int)&WPP_RECORDER_INITIALIZED,
              18,
              v85,
              *(_BYTE *)(v29 + 143),
              *(_DWORD *)(v30 + 152),
              *(_DWORD *)(v3 + 64),
              v26,
              v19 + 16 * v26);
          }
          v25 = 7LL;
          LOBYTE(v19) = v28 == (_OWORD *)v92;
          goto LABEL_31;
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_DDDDqDD(
        *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
        v19 + 16 * v26,
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 143LL),
        v19,
        v85,
        *(_BYTE *)(*(_QWORD *)(v3 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(v3 + 56) + 152LL),
        *(_DWORD *)(v3 + 64),
        v26,
        v19 + 16 * v26,
        *(_DWORD *)(a1 + 88),
        v20);
      v20 = v87;
    }
    if ( v23 != 5 )
    {
      v31 = DWORD2(v90);
      if ( v23 == 7 )
      {
        v33 = *(_QWORD *)(v3 + 56);
        v32 = HIDWORD(v90) & 0xFFFF03DF | 0x1C20;
        v23 = 9;
        HIDWORD(v90) = v32;
        v34 = *(unsigned __int8 *)(v33 + 99) ^ (a1 ^ *(unsigned __int8 *)(v33 + 99)) & 0xFFFFFFFFFFFFFFFCuLL;
        ++*(_DWORD *)(a1 + 88);
        *(_QWORD *)&v90 = v34;
        goto LABEL_86;
      }
      v31 = v16 & 0x1FFFF | DWORD2(v90) & 0xFFC00000;
      v32 = HIDWORD(v90) & 0xFFFF03EF | 0x410;
      v23 = 7;
      *(_QWORD *)&v90 = *(_QWORD *)(v96 + 24);
      ++*(_DWORD *)(a1 + 88);
      v88 = 0;
      goto LABEL_79;
    }
    v35 = HIDWORD(v90) & 0xFFFF03FF | 0x400;
    HIDWORD(v90) = v35;
    v36 = *(_DWORD *)(v97 + 76);
    if ( !v36 )
    {
      v42 = DWORD2(v90) & 0xFFFE0000;
      goto LABEL_73;
    }
    v37 = v36 - 1;
    if ( !v37 )
    {
      v43 = *(_DWORD *)(a1 + 40);
      memmove(&v90, *(const void **)(a1 + 64), v43);
      v35 = HIDWORD(v90) | 0x40;
LABEL_70:
      v42 = DWORD2(v90) & 0xFFFE0000 | v43 & 0x1FFFF;
LABEL_73:
      v23 = 7;
      goto LABEL_74;
    }
    v38 = v37 - 1;
    if ( !v38 )
    {
      if ( !v93 )
        memmove(*(void **)(*(_QWORD *)(a1 + 72) + 16LL), *(const void **)(a1 + 64), *(unsigned int *)(a1 + 40));
      v43 = *(_DWORD *)(a1 + 40);
      *(_QWORD *)&v90 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL);
      goto LABEL_70;
    }
    if ( v38 == 1 )
    {
      if ( v22 )
      {
        v40 = v91;
      }
      else
      {
        v39 = *(_QWORD *)(a1 + 56);
        v40 = v91;
        v21 = *(_QWORD *)(v39 + 24LL * v91 + 16);
        v22 = *(_DWORD *)(v39 + 24LL * v91 + 24);
      }
      *(_QWORD *)&v90 = v21;
      if ( v22 > 0x10000 )
      {
        v21 += 0x10000LL;
        v42 = DWORD2(v90) & 0xFFFE0000 | 0x10000;
        v23 = 5;
        v22 -= 0x10000;
      }
      else
      {
        v41 = *(_DWORD **)(a1 + 56);
        v42 = v22 & 0x1FFFF | DWORD2(v90) & 0xFFFE0000;
        v91 = v40 + 1;
        v22 = 0;
        v23 = 7;
        if ( *v41 != v40 + 1 )
          v23 = 5;
      }
    }
    else
    {
      v42 = DWORD2(v90);
    }
LABEL_74:
    v89 += v42 & 0x1FFFF;
    LOBYTE(v19) = v23 == 7;
    v44 = TR_CalculateTDSize(v3, v94, (unsigned int)v89, v19);
    v32 = v35 | 0x10;
    HIDWORD(v90) = v32;
    v31 = v42 & 0xFFC1FFFF | ((v44 & 0x1F) << 17);
    v20 = v87 - 1;
    v45 = v21;
    v46 = v88;
    v47 = *(_DWORD *)(a1 + 88) + 1;
    v48 = v89;
    v49 = v87 - 1;
    v50 = v91;
    v51 = v91;
    --v87;
    v95 = v47;
    *(_DWORD *)(a1 + 88) = v47;
    v89 = v48;
    v88 = v46;
    if ( v23 == 7 )
    {
      v91 = v50;
      if ( !v46 || (v91 = v50, v89 = v48, v88 = v46, !v96) )
      {
        v21 = v45;
LABEL_79:
        v16 = v88;
        v32 |= 2u;
        v20 = 1;
        HIDWORD(v90) = v32;
        v87 = 1;
        goto LABEL_86;
      }
      v91 = v51;
      v89 = v48;
      v88 = v46;
      v23 = 8;
      v31 = v31 & 0xFFC1FFFF | ((v31 & 0xFFFE0000) + 0x20000) & 0x3E0000;
    }
    else
    {
      v91 = v50;
      v89 = v48;
      v87 = v20;
      v88 = v46;
      if ( !v20 )
      {
        v49 = *(_DWORD *)(a1 + 80);
        v52 = *(_DWORD *)(a1 + 84) - v95;
        v91 = v50;
        v89 = v48;
        if ( v49 >= v52 )
          v49 = v52;
        v88 = v46;
        v87 = v49;
      }
      v20 = v49;
    }
    v21 = v45;
    v16 = v46;
LABEL_86:
    if ( v98 != (_OWORD *)v92 )
      HIDWORD(v90) = v32 & 0xFFFFFFFE | *(_DWORD *)(v3 + 200) & 1;
    DWORD2(v90) = v31 & 0x3FFFFF | (*(unsigned __int16 *)(v3 + 112) << 22);
    *v98 = v90;
    v53 = (unsigned int)(*(_DWORD *)(v3 + 192) + 1);
    *(_DWORD *)(v3 + 192) = v53;
  }
  while ( v23 != 9 );
  if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v3 + 40) + 736LL), 0x31u)
    && *(_DWORD *)(*(_QWORD *)(v3 + 48) + 20LL) == 3
    && *(_DWORD *)(*(_QWORD *)(v3 + 56) + 128LL) == 6 )
  {
    v54 = *(_DWORD *)(v3 + 200) & 1 | 0x2000;
    v90 = 0LL;
    HIDWORD(v90) = v54;
    *(_OWORD *)(*(_QWORD *)(v3 + 184) + 16 * v53) = v90;
    v55 = (unsigned int)(*(_DWORD *)(v3 + 192) + 1);
    *(_DWORD *)(v3 + 192) = v55;
    v56 = *(_DWORD *)(v3 + 200) & 1 | 0x2000;
    v90 = 0LL;
    HIDWORD(v90) = v56;
    *(_OWORD *)(*(_QWORD *)(v3 + 184) + 16 * v55) = v90;
    v57 = (unsigned int)(*(_DWORD *)(v3 + 192) + 1);
    *(_DWORD *)(v3 + 192) = v57;
    v58 = *(_DWORD *)(v3 + 200) & 1 | 0x2000;
    v90 = 0LL;
    HIDWORD(v90) = v58;
    *(_OWORD *)(*(_QWORD *)(v3 + 184) + 16 * v57) = v90;
    v59 = (unsigned int)(*(_DWORD *)(v3 + 192) + 1);
    *(_DWORD *)(v3 + 192) = v59;
    v60 = *(_DWORD *)(v3 + 200) & 1 | 0x2000;
    v90 = 0LL;
    HIDWORD(v90) = v60;
    *(_OWORD *)(*(_QWORD *)(v3 + 184) + 16 * v59) = v90;
    v61 = (unsigned int)(*(_DWORD *)(v3 + 192) + 1);
    *(_DWORD *)(v3 + 192) = v61;
    v62 = *(_DWORD *)(v3 + 200) & 1 | 0x2000;
    v90 = 0LL;
    HIDWORD(v90) = v62;
    *(_OWORD *)(*(_QWORD *)(v3 + 184) + 16 * v61) = v90;
    v63 = (unsigned int)(*(_DWORD *)(v3 + 192) + 1);
    *(_DWORD *)(v3 + 192) = v63;
    v64 = *(_DWORD *)(v3 + 200) & 1 | 0x2000;
    v90 = 0LL;
    HIDWORD(v90) = v64;
    *(_OWORD *)(*(_QWORD *)(v3 + 184) + 16 * v63) = v90;
    v65 = (unsigned int)(*(_DWORD *)(v3 + 192) + 1);
    *(_DWORD *)(v3 + 192) = v65;
    v66 = *(_DWORD *)(v3 + 200);
    v90 = 0LL;
    HIDWORD(v90) = v66 & 1 | 0x2000;
    *(_OWORD *)(*(_QWORD *)(v3 + 184) + 16 * v65) = v90;
    v67 = (unsigned int)(*(_DWORD *)(v3 + 192) + 1);
    *(_DWORD *)(v3 + 192) = v67;
    v68 = *(_DWORD *)(v3 + 200) & 1;
    v90 = 0LL;
    HIDWORD(v90) = v68 | 0x2000;
    *(_OWORD *)(*(_QWORD *)(v3 + 184) + 16 * v67) = v90;
    ++*(_DWORD *)(v3 + 192);
  }
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(v3 + 192);
  *(_OWORD *)(*(_QWORD *)(v3 + 184) + 16LL * *(unsigned int *)(v3 + 192)) = 0LL;
  v69 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  v70 = v97;
  *(_BYTE *)(v3 + 104) = v69;
  ++*(_DWORD *)(v70 + 120);
  *(_DWORD *)(v70 + 112) += *(_DWORD *)(a1 + 40);
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 40) + 1004LL) == 1 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 356));
  else
    ++*(_DWORD *)(v3 + 356);
  v71 = *(_BYTE *)(v3 + 104);
  *(_DWORD *)(v3 + 332) |= 1u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v71);
  *(_BYTE *)(v92 + 12) ^= 1u;
  _InterlockedOr(v84, 0);
  TR_AddTRBRangeToSecureTransferRing(
    v3,
    a1 + 24,
    *(_QWORD *)(a1 + 112),
    *(_DWORD *)(a1 + 104),
    *(_DWORD *)(a1 + 120),
    a1 + 128);
  result = *(_QWORD *)(v3 + 56);
  v73 = *(unsigned __int8 *)(v3 + 288);
  v74 = *(unsigned int *)(v3 + 64);
  v75 = *(_QWORD *)(result + 16);
  v76 = *(unsigned int *)(result + 152);
  if ( *(_QWORD *)(v75 + 168) )
  {
    v82 = ((_DWORD)v74 << 16) | (unsigned __int8)v76;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    {
      v83 = *(_BYTE *)(v75 + 143);
      LODWORD(v86) = v74;
      LODWORD(v85) = v76;
      McTemplateK0uqq_EtwWriteTransfer(v73, v74, v76, v83, v85, v86);
    }
    result = *(_QWORD *)(v75 + 168);
    *(_DWORD *)result = v82;
    _InterlockedOr(v84, 0);
  }
  else if ( !(_BYTE)v73 )
  {
    v77 = *(_QWORD *)(v75 + 672);
    v89 = 0;
    LODWORD(v85) = 4;
    v78 = *(_QWORD *)(v77 + 8);
    v79 = *(_QWORD *)(v75 + 616);
    v80 = *(_QWORD *)(v78 + 112);
    v102 = 0LL;
    BYTE8(v102) = v76;
    WORD5(v102) = v74;
    v100 = 0LL;
    v101 = v79;
    v99 = 0LL;
    LODWORD(v102) = 32;
    result = SecureChannel_SendRequestSynchronously(v80, &v99, 48, (__int64)&v89, 4);
    if ( (int)result >= 0 )
    {
      result = (unsigned int)v89;
      if ( v89 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v81) = 2;
        return WPP_RECORDER_SF_d(
                 *(_QWORD *)(v78 + 72),
                 v81,
                 12,
                 13,
                 (__int64)&WPP_d9bb91b14c983b49a4cd15189f1ffdfb_Traceguids,
                 v89);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v81) = 2;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(v78 + 72),
               v81,
               12,
               12,
               (__int64)&WPP_d9bb91b14c983b49a4cd15189f1ffdfb_Traceguids,
               result);
    }
  }
  return result;
}
