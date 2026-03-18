/*
 * XREFs of Isoch_PrepareStage @ 0x140011770
 * Callers:
 *     Isoch_MapTransfers @ 0x1400101E0 (Isoch_MapTransfers.c)
 * Callees:
 *     Isoch_Stage_AcquireMdl @ 0x140012A00 (Isoch_Stage_AcquireMdl.c)
 *     Isoch_TransferData_Free @ 0x140013E54 (Isoch_TransferData_Free.c)
 *     TR_GetNtStatusFromUsbdStatus @ 0x140013EC4 (TR_GetNtStatusFromUsbdStatus.c)
 *     WPP_RECORDER_SF_DDqqD @ 0x140013F44 (WPP_RECORDER_SF_DDqqD.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x140014110 (Isoch_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDqdDDDD @ 0x140014E80 (WPP_RECORDER_SF_DDqdDDDD.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x140015804 (WPP_RECORDER_SF_DDDDD.c)
 *     TR_EnsureInputBufferForTrbs @ 0x140018A08 (TR_EnsureInputBufferForTrbs.c)
 *     CommonBuffer_AcquireBuffers @ 0x140018EF0 (CommonBuffer_AcquireBuffers.c)
 *     TR_AcquireSecureSegments @ 0x140019420 (TR_AcquireSecureSegments.c)
 *     WPP_RECORDER_SF_DDqd @ 0x14001DDB8 (WPP_RECORDER_SF_DDqd.c)
 *     WPP_RECORDER_SF_DDDD @ 0x140024070 (WPP_RECORDER_SF_DDDD.c)
 *     Isoch_GetPacketLength @ 0x140028AC0 (Isoch_GetPacketLength.c)
 *     Isoch_Stage_Release @ 0x140028F84 (Isoch_Stage_Release.c)
 *     WPP_RECORDER_SF_DDqqDD @ 0x14002FCE4 (WPP_RECORDER_SF_DDqqDD.c)
 *     WPP_RECORDER_SF_DDqDDD @ 0x14004D688 (WPP_RECORDER_SF_DDqDDD.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall Isoch_PrepareStage(__int64 a1)
{
  PMDL *v1; // r15
  PMDL v3; // r14
  unsigned int v4; // edx
  unsigned int v5; // ecx
  _MDL *Next; // r8
  int v7; // r9d
  unsigned int v8; // eax
  __int64 v9; // rdx
  int v10; // r10d
  __int64 v11; // rax
  int v12; // ebp
  unsigned __int8 *v13; // r13
  PMDL v14; // rdi
  _DWORD *v15; // rsi
  __int64 v16; // rdx
  PMDL v17; // rdi
  _DWORD *v18; // rsi
  int v19; // ecx
  int v20; // edx
  unsigned int v21; // r8d
  _MDL *v22; // rax
  PMDL *v23; // rcx
  int v24; // eax
  _MDL *v25; // r8
  _DWORD *v26; // rcx
  unsigned int v27; // edx
  int v28; // eax
  int v29; // r8d
  int v30; // r9d
  KIRQL v31; // di
  __int64 v32; // rbp
  int v33; // ecx
  int v34; // r8d
  unsigned int v35; // edi
  unsigned int v36; // esi
  _MDL *v37; // rax
  __int64 v38; // rcx
  unsigned int v39; // eax
  int v40; // r11d
  __int64 v41; // rsi
  __int64 v42; // r11
  int v43; // edx
  unsigned int v44; // r10d
  unsigned int v45; // ecx
  unsigned int v46; // r9d
  unsigned int v47; // r8d
  unsigned int v48; // r13d
  KSPIN_LOCK *v49; // r12
  unsigned int v50; // esi
  KIRQL v51; // al
  _QWORD *v52; // rdi
  _QWORD *v53; // rdx
  int v54; // esi
  unsigned int v55; // edx
  _DWORD *v56; // r8
  _QWORD *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rcx
  int v60; // r8d
  PMDL *v62; // rcx
  char v63; // r12
  int v64; // eax
  KIRQL v65; // al
  _QWORD *v66; // rcx
  int v67; // r8d
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  int v71; // r8d
  unsigned int v72; // eax
  unsigned int v73; // r11d
  unsigned int v74; // r13d
  int i; // eax
  int v76; // ecx
  int PacketLength; // eax
  int v78; // r11d
  int v79; // r11d
  __int64 v80; // rdx
  int v81; // eax
  __int64 v82; // rdx
  int v83; // eax
  int v84; // edx
  int v85; // edx
  int v86; // [rsp+20h] [rbp-C8h]
  _QWORD *v87; // [rsp+70h] [rbp-78h] BYREF
  _QWORD *v88; // [rsp+78h] [rbp-70h]
  __int128 v89; // [rsp+80h] [rbp-68h]
  int v90; // [rsp+90h] [rbp-58h]
  PVOID Context; // [rsp+F0h] [rbp+8h]
  int v92; // [rsp+F8h] [rbp+10h]
  unsigned int v93; // [rsp+100h] [rbp+18h]

  v1 = *(PMDL **)(a1 + 376);
  v3 = *v1;
  v4 = *(_DWORD *)&(*v1)[2].Size + *(_DWORD *)&(*v1)[2].AllocationProcessorNumber;
  *((_DWORD *)v1 + 10) = v4;
  v5 = *(_DWORD *)(a1 + 364);
  Next = v3[1].Next;
  v7 = WORD1(Next->Next);
  v8 = v4 + v5 - 1;
  v9 = v4;
  LODWORD(v9) = v8 % v5;
  v10 = LODWORD(Next[2].StartVa) + v8 / v5;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 88LL);
  if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v11 + 8) + 736LL), 0x3Bu)
    || (*(_DWORD *)(v11 + 104) & 0x800) == 0 )
  {
    v33 = *(_DWORD *)(a1 + 336);
    if ( (v33 & 0x20) != 0 )
    {
      v34 = *(_DWORD *)(a1 + 372);
      if ( v10 != v34 + 1 && ((v33 & 0x10) != 0 || *(_DWORD *)(a1 + 384)) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDqqDD(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
            v34,
            v7);
        *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
        Isoch_Stage_Release(a1, v1);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
        LODWORD(v32) = 2;
        return (unsigned int)v32;
      }
    }
  }
  if ( v7 != 56 )
  {
    switch ( v7 )
    {
      case '9':
      case ':':
        goto LABEL_44;
      default:
        break;
    }
  }
  if ( (int)Isoch_Stage_AcquireMdl(v1, v9) < 0 )
  {
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v12 = 0;
    v13 = (unsigned __int8 *)*v1;
    if ( *((_BYTE *)v1 + 56) )
    {
      IoFreeMdl(v1[8]);
      v1[8] = 0LL;
      *((_BYTE *)v1 + 56) = 0;
    }
    v14 = v1[1];
    v15 = v1 + 1;
    if ( v14 != (PMDL)(v1 + 1) )
    {
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 736LL) & 0x4000000000000LL) != 0 )
      {
        do
        {
          memset(v14->Process, 0, v14->ByteOffset);
          v14 = v14->Next;
        }
        while ( v15 != (_DWORD *)v14 );
      }
      v16 = a1 + 208;
      if ( *(_DWORD **)v15 != v15 )
      {
        v1[2]->Next = *(_MDL **)v16;
        *(_QWORD *)(*(_QWORD *)v16 + 8LL) = v1[2];
        *(_QWORD *)v16 = *(_QWORD *)v15;
        *(_QWORD *)(*(_QWORD *)v15 + 8LL) = v16;
        v1[2] = (PMDL)(v1 + 1);
        *(_QWORD *)v15 = v15;
      }
    }
    v17 = v1[3];
    v18 = v1 + 3;
    if ( v17 != (PMDL)(v1 + 3) )
    {
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 736LL) & 0x4000000000000LL) != 0 )
      {
        do
        {
          memset(v17->Process, 0, v17->ByteOffset);
          v17 = v17->Next;
        }
        while ( v18 != (_DWORD *)v17 );
      }
      if ( *(_DWORD **)v18 != v18 )
      {
        **(_QWORD **)(a1 + 216) = *(_QWORD *)v18;
        *(_QWORD *)(*(_QWORD *)v18 + 8LL) = *(_QWORD *)(a1 + 216);
        v1[4]->Next = (_MDL *)(a1 + 208);
        *(_QWORD *)(a1 + 216) = v1[4];
        v1[4] = (PMDL)(v1 + 3);
        *(_QWORD *)v18 = v18;
      }
    }
    v19 = v13[128];
    v20 = v13[132];
    --v13[130];
    v21 = v13[129];
    if ( v1 == (PMDL *)&v13[v20 * v19 + 144] )
      v13[132] = (v20 + 1) % v21;
    else
      v13[131] = (int)(v21 + v13[131] - 1) % (int)v21;
    if ( LODWORD(v3[2].Process) == HIDWORD(v3[2].Process) )
    {
      if ( LODWORD(v3[1].Process) == 1 )
      {
        v22 = v3->Next;
        if ( *(PMDL *)&v3->Next->Size == v3 )
        {
          v23 = *(PMDL **)&v3->Size;
          if ( *v23 == v3 )
          {
            *v23 = v22;
            *(_QWORD *)&v22->Size = v23;
            v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, void *))(WdfFunctions_01033 + 2048))(
                    WdfDriverGlobals,
                    v3->MappedSystemVa);
            if ( v24 >= 0 )
            {
              LODWORD(v3[1].Process) = 0;
LABEL_23:
              KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
              v25 = v3[1].Next;
              if ( WORD1(v25->Next) == 56 )
              {
LABEL_24:
                v26 = (_DWORD *)&v25->StartVa + 1;
              }
              else
              {
                switch ( WORD1(v25->Next) )
                {
                  case '9':
                  case ':':
                    v26 = (_DWORD *)&v25[1].Next + 1;
                    break;
                  default:
                    goto LABEL_24;
                }
              }
              v27 = 0;
              *v26 = HIDWORD(v3[1].StartVa);
              if ( LODWORD(v3[2].Next) )
              {
                while ( 1 )
                {
                  v28 = *((_DWORD *)&v25[3].Next + 3 * v27 + 1);
                  if ( v28 == -1 )
                    break;
                  if ( v28 )
                    goto LABEL_79;
                  ++v12;
LABEL_29:
                  ++*(_DWORD *)(a1 + 264);
                  if ( ++v27 >= LODWORD(v3[2].Next) )
                    goto LABEL_30;
                }
                *((_DWORD *)&v25[3].Next + 3 * v27 + 1) = -1073610752;
LABEL_79:
                ++v25[2].ByteCount;
                ++*(_DWORD *)(a1 + 268);
                goto LABEL_29;
              }
LABEL_30:
              HIDWORD(v25->Next) = -1073737728;
              HIDWORD(v3[1].Process) = TR_GetNtStatusFromUsbdStatus(3221229568LL);
              ++*(_DWORD *)(a1 + 248);
              *(_QWORD *)(a1 + 256) += HIDWORD(v3[1].StartVa);
              if ( SHIDWORD(v3[1].Process) < 0 )
                ++*(_DWORD *)(a1 + 252);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_DDqdDDDD(
                  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                  *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
                  v29,
                  v30);
              Isoch_TransferData_Free(v3);
              v31 = KfRaiseIrql(2u);
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, void *, _QWORD))(WdfFunctions_01033 + 2104))(
                WdfDriverGlobals,
                v3->MappedSystemVa,
                HIDWORD(v3[1].Process));
              KeLowerIrql(v31);
              *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
              LODWORD(v32) = 1;
LABEL_42:
              KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
              return (unsigned int)v32;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v70 = *(_QWORD *)(a1 + 48);
              v71 = *(unsigned __int8 *)(v70 + 143);
              LOBYTE(v70) = 4;
              WPP_RECORDER_SF_DDqd(
                *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                v70,
                v71,
                17,
                (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
                v71,
                *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
                (char)v3->MappedSystemVa,
                v24);
            }
            LODWORD(v3[1].Process) = 2;
            v62 = *(PMDL **)(a1 + 416);
            if ( *v62 == (PMDL)(a1 + 408) )
            {
              v3->Next = (_MDL *)(a1 + 408);
              LODWORD(v32) = 1;
              *(_QWORD *)&v3->Size = v62;
              *v62 = v3;
              *(_QWORD *)(a1 + 416) = v3;
              goto LABEL_42;
            }
          }
        }
LABEL_83:
        __fastfail(3u);
      }
      if ( LODWORD(v3[1].Process) == 3 )
      {
        LODWORD(v32) = 1;
        goto LABEL_42;
      }
      goto LABEL_23;
    }
LABEL_41:
    LODWORD(v32) = 4;
    *(_DWORD *)&v3[2].AllocationProcessorNumber = LODWORD(v3[2].Next) - *(_DWORD *)&v3[2].Size;
    goto LABEL_42;
  }
LABEL_44:
  v35 = LODWORD(v3[1].StartVa) - v3[1].ByteOffset - v3[1].ByteCount;
  v36 = *(_DWORD *)(a1 + 4);
  v89 = 0LL;
  v90 = 0;
  if ( !*(_BYTE *)(a1 + 288) )
  {
    v37 = v3[1].Next;
    v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
    LODWORD(v89) = 1;
    LOBYTE(v86) = ((__int64)v37->StartVa & 1) == 0;
    (*(void (__fastcall **)(__int64, PMDL, _QWORD, _QWORD))(*(_QWORD *)(v38 + 8) + 136LL))(v38, v1[8], 0LL, v35);
    v39 = *(_DWORD *)(a1 + 8);
    if ( DWORD1(v89) > v39 )
    {
      v72 = (v39 << 12) - 4096;
      if ( v72 < v36 )
        v36 = v72;
    }
  }
  LODWORD(v32) = 0;
  if ( v35 > v36 )
  {
    v73 = *(_DWORD *)(a1 + 364);
    v74 = *((_DWORD *)v1 + 10);
    v35 = 0;
    v93 = v73;
    for ( i = v74 / v73; ; ++i )
    {
      v92 = i;
      v76 = v32;
      if ( v73 )
      {
        v32 = v73;
        do
        {
          PacketLength = Isoch_GetPacketLength(v3, v74);
          v79 = PacketLength + v78;
          ++v74;
          --v32;
        }
        while ( v32 );
        i = v92;
        v76 = v79;
        v73 = v93;
      }
      if ( v35 + v76 > v36 )
        break;
      v35 += v76;
    }
    v40 = i * v73;
  }
  else
  {
    v40 = (int)v3[2].Next;
  }
  *((_DWORD *)v1 + 11) = v40 - 1;
  *((_DWORD *)v1 + 13) = v35;
  v41 = *(_QWORD *)(a1 + 56);
  v42 = *(_QWORD *)(a1 + 40);
  v43 = (((unsigned __int64)*(unsigned int *)(v41 + 160) + 8190) >> 12) + 1;
  if ( !_bittest64((const signed __int64 *)(v42 + 736), 0x2Fu)
    || (v68 = *(_QWORD *)(a1 + 48), *(_DWORD *)(v68 + 20) != 1)
    || !*(_DWORD *)(v68 + 40) )
  {
    v43 = ((unsigned __int64)*(unsigned int *)(v41 + 160) + 8190) >> 12;
  }
  v44 = v43 + 1;
  if ( WORD1((*v1)[1].Next->Next) == 56 )
  {
LABEL_51:
    if ( v1[8]->ByteCount < v35 )
      v44 = v43 + 3;
  }
  else
  {
    switch ( WORD1((*v1)[1].Next->Next) )
    {
      case '9':
      case ':':
        break;
      default:
        goto LABEL_51;
    }
  }
  v45 = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a1 + 440) = v44;
  v46 = (*((_DWORD *)v1 + 11) - *((_DWORD *)v1 + 10) + 1) * v44;
  v47 = v45 - *(_DWORD *)(a1 + 192) - (v45 - *(_DWORD *)(a1 + 192)) % v44;
  if ( v46 <= v47 )
  {
    v48 = v32;
  }
  else
  {
    v46 -= v47;
    v48 = (v46 + v45 - v45 % v44 - 1) / (v45 - v45 % v44);
  }
  if ( _bittest64((const signed __int64 *)(v42 + 736), 0x2Fu) )
  {
    v69 = *(_QWORD *)(a1 + 48);
    if ( *(_DWORD *)(v69 + 20) == 1 )
    {
      if ( *(_DWORD *)(v69 + 40) )
        ++v48;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DDqDDD(
      *(_QWORD *)(v41 + 80),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
      v47,
      v46,
      v86,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
      *(_DWORD *)(v41 + 152),
      (char)v1,
      v48,
      v44,
      *((_BYTE *)v1 + 44) - *((_BYTE *)v1 + 40) + 1);
  if ( *(_BYTE *)(a1 + 288)
    && (int)TR_EnsureInputBufferForTrbs(
              a1,
              (unsigned int)(*(_DWORD *)(a1 + 440) * (*((_DWORD *)v1 + 11) - *((_DWORD *)v1 + 10) + 3))) < 0 )
  {
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    Isoch_Stage_Release(a1, v1);
    if ( LODWORD(v3[2].Process) == HIDWORD(v3[2].Process) )
    {
      Isoch_Transfer_CompleteCancelable(a1, (_DWORD)v3, -1, -1073737728, 0, 0);
      LODWORD(v32) = 1;
      goto LABEL_42;
    }
    goto LABEL_41;
  }
  if ( !v48 )
    return (unsigned int)v32;
  v49 = (KSPIN_LOCK *)(a1 + 96);
  v50 = v32;
  Context = *(PVOID *)(*(_QWORD *)(a1 + 40) + 120LL);
  v51 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v52 = (_QWORD *)(a1 + 208);
  *(_BYTE *)(a1 + 104) = v51;
  v53 = *(_QWORD **)(a1 + 208);
  if ( (_QWORD *)(a1 + 208) != v53 )
  {
    do
    {
      v53 = (_QWORD *)*v53;
      ++v50;
    }
    while ( v52 != v53 );
    v49 = (KSPIN_LOCK *)(a1 + 96);
    v52 = (_QWORD *)(a1 + 208);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v51);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v80 = *(_QWORD *)(a1 + 56);
    v81 = *(_DWORD *)(v80 + 152);
    LOBYTE(v80) = 5;
    WPP_RECORDER_SF_DDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      v80,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
      16,
      (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
      v81,
      *(_DWORD *)(a1 + 64),
      v50,
      v48);
  }
  if ( v48 <= v50 )
  {
    v54 = v32;
LABEL_69:
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v49);
    v55 = v32;
    v56 = v1 + 1;
    do
    {
      v57 = (_QWORD *)*v52;
      if ( *(_QWORD **)(*v52 + 8LL) != v52 )
        goto LABEL_83;
      v58 = *v57;
      if ( *(_QWORD **)(*v57 + 8LL) != v57 )
        goto LABEL_83;
      *v52 = v58;
      *(_QWORD *)(v58 + 8) = v52;
      v59 = *(_QWORD *)v56;
      if ( *(_DWORD **)(*(_QWORD *)v56 + 8LL) != v56 )
        goto LABEL_83;
      *v57 = v59;
      ++v55;
      v57[1] = v56;
      *(_QWORD *)(v59 + 8) = v57;
      *(_QWORD *)v56 = v57;
    }
    while ( v55 < v48 );
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    if ( v54 >= 0 )
    {
      *(_DWORD *)(a1 + 344) = v32;
      return (unsigned int)v32;
    }
    goto LABEL_130;
  }
  v63 = v48 - v50;
  *(_QWORD *)(a1 + 144) = a1;
  *(_DWORD *)(a1 + 152) = v48 - v50;
  v88 = &v87;
  v87 = &v87;
  *(_QWORD *)(a1 + 168) = TR_CommonBufferCallback;
  *(_DWORD *)(a1 + 156) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 160) = 828862034;
  if ( *(_BYTE *)(a1 + 288) )
    v64 = TR_AcquireSecureSegments(a1, v48 - v50, &v87);
  else
    v64 = CommonBuffer_AcquireBuffers(Context, a1, 828862034, a1 + 128);
  v54 = v64;
  if ( v64 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_132:
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      Isoch_Stage_Release(a1, v1);
      if ( LODWORD(v3[2].Process) == HIDWORD(v3[2].Process) )
      {
        Isoch_Transfer_CompleteCancelable(a1, (_DWORD)v3, -1, -1073737728, 0, 0);
        LODWORD(v32) = 1;
      }
      else
      {
        LODWORD(v32) = 4;
        *(_DWORD *)&v3[2].AllocationProcessorNumber = LODWORD(v3[2].Next) - *(_DWORD *)&v3[2].Size;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
      return (unsigned int)v32;
    }
    v82 = *(_QWORD *)(a1 + 56);
    v83 = *(_DWORD *)(v82 + 152);
    LOBYTE(v82) = 2;
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      v82,
      14,
      17,
      (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
      v83,
      *(_DWORD *)(a1 + 64),
      v63);
LABEL_130:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v85 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
      LOBYTE(v85) = 2;
      WPP_RECORDER_SF_DDqqD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v85,
        v60,
        49,
        v86,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
        (char)v3->MappedSystemVa,
        (char)v1,
        v48);
    }
    goto LABEL_132;
  }
  v65 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v66 = v87;
  *(_BYTE *)(a1 + 104) = v65;
  if ( v66 != &v87 )
  {
    **(_QWORD **)(a1 + 216) = v66;
    v87[1] = *(_QWORD *)(a1 + 216);
    *v88 = a1 + 208;
    *(_QWORD *)(a1 + 216) = v88;
    v88 = &v87;
    v87 = &v87;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  if ( v54 != 259 )
  {
    v49 = (KSPIN_LOCK *)(a1 + 96);
    v52 = (_QWORD *)(a1 + 208);
    goto LABEL_69;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v84 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
    LOBYTE(v84) = 4;
    WPP_RECORDER_SF_DDqqD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v84,
      v67,
      48,
      v86,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
      (char)v3->MappedSystemVa,
      (char)v1,
      v48);
  }
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  Isoch_Stage_Release(a1, v1);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  LODWORD(v32) = 3;
  return (unsigned int)v32;
}
