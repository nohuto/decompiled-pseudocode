/*
 * XREFs of sub_140117A50 @ 0x140117A50
 * Callers:
 *     sub_140118950 @ 0x140118950 (sub_140118950.c)
 * Callees:
 *     sub_1401147F0 @ 0x1401147F0 (sub_1401147F0.c)
 *     sub_1401152F0 @ 0x1401152F0 (sub_1401152F0.c)
 *     sub_140115430 @ 0x140115430 (sub_140115430.c)
 *     sub_1401155A0 @ 0x1401155A0 (sub_1401155A0.c)
 *     sub_140118560 @ 0x140118560 (sub_140118560.c)
 *     sub_14011DA00 @ 0x14011DA00 (sub_14011DA00.c)
 *     sub_14011EBD0 @ 0x14011EBD0 (sub_14011EBD0.c)
 *     sub_14011F570 @ 0x14011F570 (sub_14011F570.c)
 *     sub_140120950 @ 0x140120950 (sub_140120950.c)
 *     sub_140120B60 @ 0x140120B60 (sub_140120B60.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_140117A50(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v6; // r13
  unsigned __int8 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  IRP *v10; // rax
  PIRP v11; // r10
  __int64 v12; // rdi
  union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *p_CurrentStackLocation; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v15; // rcx
  __int64 QuadPart; // rdx
  __int64 v17; // r11
  char v18; // r9
  __int64 v19; // r15
  int v20; // r14d
  __int16 v21; // di
  __int64 v22; // r8
  PIO_SECURITY_CONTEXT SecurityContext; // r12
  unsigned int v24; // ebx
  __int64 v25; // rax
  __int64 v26; // rbx
  signed __int32 v27; // eax
  int v28; // eax
  __int64 v29; // rcx
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // rdx
  unsigned int v35; // edi
  unsigned int v36; // eax
  __int64 v37; // rdx
  char v38; // di
  unsigned __int64 v39; // r9
  unsigned int v40; // r9d
  __int64 v41; // rax
  PIRP v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v46; // rcx
  __int64 v47; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v48; // rcx
  __int64 v49; // rcx
  PIRP v50; // rdx
  char v51; // al
  PMDL v52; // rcx
  __int64 v53; // rax
  int v54; // ebx
  __int64 v55; // rdi
  char *v56; // r14
  KIRQL v57; // al
  PMDL v58; // rbx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  unsigned int v62; // r9d
  unsigned __int64 v63; // r8
  unsigned __int64 v64; // r14
  unsigned __int64 v65; // rdx
  __int64 v66; // r12
  unsigned int v67; // eax
  unsigned __int64 v68; // r9
  unsigned int v69; // r8d
  int v70; // r9d
  PSLIST_ENTRY v71; // rax
  __int64 v72; // rax
  __int64 v73; // r11
  __int64 v74; // r8
  bool v75; // zf
  __int64 v76; // r12
  char v77; // di
  __int64 v78; // rbx
  KIRQL v79; // al
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  signed __int32 v86[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int64 v87; // [rsp+20h] [rbp-E0h]
  __int64 v88; // [rsp+28h] [rbp-D8h]
  __int64 v89; // [rsp+30h] [rbp-D0h]
  __int64 v90; // [rsp+38h] [rbp-C8h]
  __int64 v91; // [rsp+40h] [rbp-C0h]
  __int64 v92; // [rsp+48h] [rbp-B8h]
  KIRQL v93; // [rsp+60h] [rbp-A0h]
  char v94; // [rsp+61h] [rbp-9Fh] BYREF
  unsigned __int8 v95; // [rsp+62h] [rbp-9Eh]
  UCHAR MajorFunction; // [rsp+63h] [rbp-9Dh]
  unsigned int v97; // [rsp+64h] [rbp-9Ch]
  unsigned int v98; // [rsp+68h] [rbp-98h]
  __int64 v99; // [rsp+70h] [rbp-90h]
  PIRP Irp; // [rsp+78h] [rbp-88h]
  __int16 v101; // [rsp+80h] [rbp-80h] BYREF
  __int64 v102; // [rsp+88h] [rbp-78h]
  int v103; // [rsp+90h] [rbp-70h] BYREF
  __int64 v104; // [rsp+98h] [rbp-68h] BYREF
  __int64 v105; // [rsp+A0h] [rbp-60h]
  PMDL MdlAddress; // [rsp+A8h] [rbp-58h]
  __int64 v107; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v108; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 QpcTimeStamp[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v110; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v111[2]; // [rsp+E8h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v6 = a3;
  v104 = 0LL;
  *(_BYTE *)(v3 + 3) |= 1u;
  if ( (int)IoGetIoAttributionHandle(a2, &v104) >= 0 )
  {
    v7 = *(unsigned __int8 **)(a2 + 184);
    v8 = v104;
    v108 = 0LL;
    LODWORD(v108) = 1;
    *(_OWORD *)QpcTimeStamp = 0LL;
    DWORD1(v108) = *v7 | 0x300;
    QpcTimeStamp[1] = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp[1]);
    IoRecordIoAttribution(v8, &v108);
  }
  sub_140120B60(*(_QWORD *)(a1 + 256), (unsigned int)v6);
  _InterlockedOr(v86, 0);
  v9 = *(_QWORD *)(a1 + 128);
  if ( *(_BYTE *)(v9 + 1) == 1 && !*(_BYTE *)(*(_QWORD *)(v9 + 8) + 64LL) )
    return;
  v10 = (IRP *)sub_140120950(*(_QWORD *)(a1 + 256), (unsigned int)v6);
  Irp = v10;
  v11 = v10;
  if ( !v10 )
    return;
  v12 = v104;
  p_CurrentStackLocation = (union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *)&v10->Tail.Overlay.CurrentStackLocation;
  if ( v104 )
  {
    CurrentStackLocation = p_CurrentStackLocation->CurrentStackLocation;
    v110 = 0LL;
    LODWORD(v110) = 1;
    *(_OWORD *)v111 = 0LL;
    DWORD1(v110) = CurrentStackLocation->MajorFunction | 0x200;
    v111[1] = KeQueryUnbiasedInterruptTimePrecise(&v111[1]);
    IoRecordIoAttribution(v12, &v110);
    v11 = Irp;
  }
  v15 = p_CurrentStackLocation->CurrentStackLocation;
  QuadPart = 0LL;
  v17 = *(_QWORD *)(a1 + 16);
  v18 = 0;
  v94 = 0;
  v19 = 0LL;
  v101 = 0;
  v20 = 0;
  v107 = 0LL;
  v21 = 0;
  v103 = 0;
  v22 = HIDWORD(*(_QWORD *)(v17 + 136));
  LOBYTE(v22) = v22 & 1;
  LOWORD(v97) = 0;
  SecurityContext = v15->Parameters.Create.SecurityContext;
  MdlAddress = (PMDL)v15;
  v24 = (unsigned int)SecurityContext;
  v99 = 0LL;
  v93 = 0;
  v105 = v17;
  v102 = v22;
  if ( SecurityContext == (PIO_SECURITY_CONTEXT)0x8765432100000003LL )
  {
    QuadPart = v15->Parameters.Read.ByteOffset.QuadPart;
    v99 = QuadPart;
  }
  else if ( SecurityContext == (PIO_SECURITY_CONTEXT)0xFEDCBA9000000000LL )
  {
    v19 = v15->Parameters.Read.ByteOffset.QuadPart;
  }
  if ( (unsigned int)(*(_DWORD *)(a1 + 96) - 5) <= 1 )
  {
    v94 = 1;
    v20 = -1073741810;
    if ( !QuadPart )
      goto LABEL_108;
LABEL_102:
    _interlockedbittestandreset((volatile signed __int32 *)(v99 + 108), 0);
LABEL_103:
    v75 = v20 == 0;
    if ( v20 >= 0 )
      goto LABEL_106;
LABEL_104:
    if ( v20 == -2147483631 )
    {
      v75 = 0;
LABEL_106:
      if ( !v75 )
        return;
    }
LABEL_107:
    QuadPart = v99;
LABEL_108:
    if ( v19 )
    {
      v76 = *(_QWORD *)(v19 + 24);
      if ( v76 )
      {
        v77 = *(_BYTE *)(v19 + 126);
        v78 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
        v79 = KfRaiseIrql(2u);
        v80 = *(_QWORD *)(v78 + 1144);
        v93 = v79;
        (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)(v80 + 8) + 96LL))(v80, v76, (v77 & 1) == 0);
        if ( v93 < 2u )
          KeLowerIrql(v93);
      }
      v81 = *(_QWORD *)(v19 + 88);
      if ( v81 )
      {
        v82 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(v81 + 88) = 0LL;
        *(_DWORD *)(v81 + 108) = 0;
        *(_DWORD *)(v81 + 104) = 0;
        ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v82 + 888) + 8 * v6), (PSLIST_ENTRY)v81);
      }
      v83 = *(_QWORD *)(a1 + 16);
      v84 = *(_QWORD *)(*(_QWORD *)(v19 + 40) + 184LL);
      *(_QWORD *)(v84 + 8) = *(_QWORD *)(v19 + 48);
      *(_QWORD *)(v84 + 24) = *(_QWORD *)(v19 + 56);
      v85 = *(unsigned int *)(v19 + 120);
      *(_QWORD *)(v19 + 24) = 0LL;
      *(_QWORD *)(v19 + 88) = 0LL;
      *(_BYTE *)(v19 + 126) = 0;
      ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v83 + 896) + 8 * v85), (PSLIST_ENTRY)v19);
    }
    else if ( QuadPart )
    {
      if ( !v94 )
        return;
      sub_1401152F0(*(_QWORD **)(a1 + 16), QuadPart);
      v42 = Irp;
      sub_140115430(*(_QWORD *)(a1 + 16), v6, v99, (__int64)Irp);
      goto LABEL_54;
    }
LABEL_53:
    v42 = Irp;
LABEL_54:
    v42->IoStatus.Status = v20;
    IofCompleteRequest(v42, 0);
    v43 = *(_QWORD *)(a1 + 128);
    if ( !*(_BYTE *)v43
      && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v43 + 24) + 8 * v6), 0xFFFFFFFF) == 1 )
    {
      v44 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
      v45 = *(_QWORD *)(a1 + 128);
      if ( v45 )
      {
        if ( *(_QWORD *)(v45 + 8) )
        {
          v46 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v45 + 40);
          if ( v46 )
          {
            if ( ExAcquireRundownProtectionCacheAware(v46) )
            {
              PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(a1 + 128) + 8LL), 0LL, 2LL);
              v47 = *(_QWORD *)(a1 + 128);
              if ( v47 )
              {
                if ( *(_QWORD *)(v47 + 8) )
                {
                  v48 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v47 + 40);
                  if ( v48 )
                    ExReleaseRundownProtectionCacheAware(v48);
                }
              }
            }
          }
        }
      }
      v49 = *(_QWORD *)(v44 + 160);
      if ( *(_BYTE *)v49 == 1 )
        PoFxIdleComponent(**(_QWORD **)(v49 + 8), 0LL, 2LL);
    }
    return;
  }
  v75 = v15->MajorFunction == 3;
  MajorFunction = v15->MajorFunction;
  v25 = *(_QWORD *)(v17 + 128);
  v95 = v75;
  v98 = *(_DWORD *)(v25 + 200);
  if ( QuadPart )
  {
LABEL_14:
    v26 = QuadPart;
    while ( 1 )
    {
      v27 = _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 104), 4, 3);
      if ( (_BYTE)v22 )
      {
        if ( v27 != 3 && _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 104), 4, 1) != 1 )
          goto LABEL_28;
      }
      else if ( v27 != 3 )
      {
        if ( *(_DWORD *)(v26 + 104) == 1 )
          ++v21;
        goto LABEL_28;
      }
      v28 = sub_14011DA00(v26, v6, 0, 0, (__int64)&v94, (__int64)&v107, (__int64)&v103, (__int64)&v101, v18);
      v20 = v28;
      if ( v28 == 259 )
      {
        v29 = *(_QWORD *)(a1 + 16);
        LOWORD(v97) = v97 + 1;
        v18 = (unsigned __int16)v97 % (unsigned int)*(unsigned __int8 *)(v29 + 1730) == 0;
        v93 = v18;
      }
      else
      {
        if ( v28 == -2147483631 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 104), 3, 4);
          sub_140118560(a1, *(_QWORD *)(v26 + 24), (unsigned int)v6);
          return;
        }
        if ( !*(_WORD *)(v26 + 34) )
        {
          v94 = 1;
          goto LABEL_102;
        }
        if ( v94 )
          goto LABEL_102;
        v18 = v93;
      }
      LOBYTE(v22) = v102;
      QuadPart = v99;
LABEL_28:
      v26 = *(_QWORD *)(v26 + 96);
      if ( v21 )
      {
        if ( !v26 )
        {
          v21 = 0;
          goto LABEL_14;
        }
      }
      else if ( !v26 )
      {
        goto LABEL_102;
      }
    }
  }
  if ( (_BYTE)v22 )
  {
    v30 = v15->Parameters.Read.ByteOffset.QuadPart;
    goto LABEL_78;
  }
  if ( v19 )
  {
    v30 = *(_QWORD *)(v19 + 96);
    v24 = *(_DWORD *)(v19 + 116);
    *(_QWORD *)(v19 + 64) = 0LL;
    *(_QWORD *)(v19 + 72) = 0LL;
LABEL_78:
    if ( !v24 )
      goto LABEL_108;
    v63 = *(unsigned int *)(a1 + 64);
    if ( v24 % (unsigned int)v63
      || (v64 = v30 / v63, v30 % v63)
      || (v65 = *(_QWORD *)(a1 + 424), v97 = v24 / (unsigned int)v63, v64 >= v65)
      || v65 - v64 < v24 / (unsigned int)v63 )
    {
      v20 = -1073741811;
      goto LABEL_107;
    }
    v66 = *(_QWORD *)(a1 + 16);
    if ( v24 <= *(_DWORD *)(*(_QWORD *)(v66 + 128) + 200LL) )
    {
      v67 = *(_DWORD *)(a1 + 420);
      if ( !v67
        || v24 <= v67
        && ((v93 = *(_BYTE *)(a1 + 419), v68 = (v24 & (v67 - 1)) + v67 + ((unsigned int)v30 & (v67 - 1)) - 1LL, !v93)
          ? (v69 = v68 / v67 + v24 / v67)
          : (v69 = (v68 >> v93) + ((unsigned __int64)v24 >> v93)),
            v69 <= 1) )
      {
        v70 = 0;
        if ( ((v24 + ((LODWORD(v11->MdlAddress->StartVa) + v11->MdlAddress->ByteOffset) & 0xFFF) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x2000 )
        {
          v71 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v66 + 880) + 8 * v6));
          v70 = (int)v71;
          if ( !v71 )
          {
            v72 = sub_1401147F0(*(_QWORD *)(a1 + 16), v6);
            v70 = v72;
            if ( !v72 )
            {
              sub_140118560(a1, Irp, (unsigned int)v6);
              return;
            }
          }
          LODWORD(v11) = (_DWORD)Irp;
        }
        v73 = *(_QWORD *)(a1 + 16);
        if ( (*(_BYTE *)(v73 + 136) & 2) != 0 )
          v74 = *(_QWORD *)(v73 + 728) + 192 * v6;
        else
          LODWORD(v74) = 192 * *(unsigned __int16 *)(*(_QWORD *)(v73 + 872) + 2 * v6) + *(_DWORD *)(v73 + 728) - 192;
        LOBYTE(v88) = 0;
        v20 = sub_14011F570(a1, (_DWORD)v11, v74, v70, v6, v88, v24, v30, v64, v97, v95, 0LL);
        goto LABEL_103;
      }
    }
    v62 = v24;
    v92 = 0LL;
    v91 = 0LL;
    v90 = 0LL;
    LODWORD(v89) = v6;
    LODWORD(v88) = v98;
    v87 = v30;
LABEL_75:
    v20 = sub_14011EBD0(a1, (_DWORD)v11, v95, v62, v87, v88, v89, v90, v91, v92);
    goto LABEL_103;
  }
  v31 = v15->Parameters.Read.ByteOffset.QuadPart;
  if ( !(_DWORD)SecurityContext )
    goto LABEL_53;
  v32 = *(unsigned int *)(a1 + 64);
  if ( (unsigned int)SecurityContext % (unsigned int)v32
    || (v33 = v31 / v32, v31 % v32)
    || (v34 = *(_QWORD *)(a1 + 424),
        v35 = (unsigned int)SecurityContext / (unsigned int)v32,
        v97 = (unsigned int)SecurityContext / (unsigned int)v32,
        v33 >= v34)
    || v34 - v33 < (unsigned int)SecurityContext / (unsigned int)v32 )
  {
    v20 = -1073741811;
    goto LABEL_53;
  }
  v36 = v98;
  if ( (unsigned int)SecurityContext > v98 )
    goto LABEL_74;
  v37 = *(unsigned int *)(a1 + 420);
  if ( !(_DWORD)v37 )
    goto LABEL_51;
  if ( (unsigned int)SecurityContext > (unsigned int)v37 )
  {
LABEL_74:
    v62 = (unsigned int)SecurityContext;
    v92 = 0LL;
    v91 = 0LL;
    v90 = 0LL;
    LODWORD(v89) = v6;
    LODWORD(v88) = v36;
    v87 = v31;
    goto LABEL_75;
  }
  v38 = *(_BYTE *)(a1 + 419);
  v39 = ((unsigned int)v31 & ((_DWORD)v37 - 1)) + v37 + ((unsigned int)SecurityContext & ((_DWORD)v37 - 1)) - 1LL;
  if ( v38 )
    v40 = ((unsigned __int64)(unsigned int)SecurityContext >> v38) + (v39 >> v38);
  else
    v40 = v39 / (unsigned int)v37 + (unsigned int)SecurityContext / (unsigned int)v37;
  if ( v40 > 1 )
  {
    v36 = v98;
    goto LABEL_74;
  }
  v17 = v105;
  v35 = v97;
LABEL_51:
  v41 = sub_1401155A0(v17, v6);
  v19 = v41;
  if ( !v41 )
  {
    v20 = -1073741670;
    goto LABEL_53;
  }
  v50 = Irp;
  v75 = MajorFunction == 3;
  *(_QWORD *)(v41 + 40) = Irp;
  v51 = *(_BYTE *)(v41 + 126);
  *(_QWORD *)(v19 + 96) = v31;
  *(_DWORD *)(v19 + 112) = v35;
  *(_BYTE *)(v19 + 126) = v51 & 0xFE | v75;
  v52 = MdlAddress;
  *(_QWORD *)(v19 + 64) = 0LL;
  *(_QWORD *)(v19 + 72) = 0LL;
  *(_QWORD *)(v19 + 32) = a1;
  *(_QWORD *)(v19 + 104) = v33;
  *(_DWORD *)(v19 + 116) = (_DWORD)SecurityContext;
  *(_QWORD *)(v19 + 56) = v52->MappedSystemVa;
  v53 = *(_QWORD *)&v52->Size;
  v52->MappedSystemVa = (PVOID)v19;
  *(_QWORD *)(v19 + 48) = v53;
  *(_QWORD *)&v52->Size = 0xFEDCBA9000000000uLL;
  v54 = *(unsigned __int16 *)(v19 + 124);
  v55 = *(_QWORD *)(v19 + 16);
  v56 = (char *)v50->MdlAddress->StartVa + v50->MdlAddress->ByteOffset;
  *(_QWORD *)(v19 + 80) = v56;
  MdlAddress = v50->MdlAddress;
  v102 = *(_QWORD *)(a1 + 16);
  v105 = (__int64)v56;
  v57 = KfRaiseIrql(2u);
  LODWORD(v92) = v54;
  v58 = MdlAddress;
  v59 = *(_QWORD *)(v102 + 128);
  v91 = v55;
  LOBYTE(v90) = MajorFunction != 3;
  v95 = v57;
  v60 = *(_QWORD *)(v59 + 8);
  v61 = *(_QWORD *)(v59 + 1144);
  v93 = MajorFunction != 3;
  v20 = (*(__int64 (__fastcall **)(__int64, __int64, PMDL, char *, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, _DWORD, __int64, _DWORD))(*(_QWORD *)(v61 + 8) + 112LL))(
          v61,
          v60,
          MdlAddress,
          v56,
          (_DWORD)SecurityContext,
          sub_1401172A0,
          v19,
          v90,
          v55,
          v92);
  if ( v20 == -1073741789 )
  {
    LOBYTE(v90) = v93;
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, PMDL, __int64, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v102 + 128) + 1144LL) + 8LL) + 88LL))(
            *(_QWORD *)(*(_QWORD *)(v102 + 128) + 1144LL),
            *(_QWORD *)(*(_QWORD *)(v102 + 128) + 8LL),
            v58,
            v105,
            (_DWORD)SecurityContext,
            sub_1401172A0,
            v19,
            v90);
  }
  if ( v95 < 2u )
    KeLowerIrql(v95);
  if ( v20 < 0 )
    goto LABEL_104;
}
