/*
 * XREFs of RaUnitSmartDataIoctl @ 0x1400A1658
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     StorBuildSynchronousScsiRequest @ 0x140007A30 (StorBuildSynchronousScsiRequest.c)
 *     StorFreeSynchronousScsiRequest @ 0x140008740 (StorFreeSynchronousScsiRequest.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x14000878C (PortSrbTranslateSrbToNtStatus.c)
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaSendIrpSynchronous @ 0x140037340 (RaSendIrpSynchronous.c)
 *     RaidAllocateSrb @ 0x1400384D0 (RaidAllocateSrb.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaUnitBuildSrbForSmartReadData @ 0x1400997D8 (RaUnitBuildSrbForSmartReadData.c)
 *     RaUnitBuildSrbForSmartReturnStatus @ 0x140099A4C (RaUnitBuildSrbForSmartReturnStatus.c)
 *     RaUnitSmartReturnStatus @ 0x1400A1EE4 (RaUnitSmartReturnStatus.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaUnitSmartDataIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _DWORD *v4; // rcx
  int v5; // edi
  int v7; // edx
  int Status; // esi
  unsigned int v9; // r9d
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // r8
  _OWORD *v14; // rax
  _OWORD *v15; // rcx
  __int128 v16; // xmm1
  __int64 Pool; // rax
  _DWORD *v18; // rsi
  _DWORD *v19; // rsi
  char v20; // r8
  __int64 v21; // rcx
  __int64 Srb; // rbp
  _DWORD *v23; // rbx
  __int64 v24; // rbx
  _DWORD *v25; // rax
  PVOID v26; // rsi
  __int64 v27; // r8
  IRP *v28; // rax
  NTSTATUS v29; // eax
  IRP *v30; // r10
  _OWORD *v31; // rdx
  _DWORD *v32; // rax
  _DWORD *v33; // rax
  __int64 v34; // r8
  _OWORD *v35; // rcx
  __int64 v36; // r9
  _OWORD *v37; // rax
  __int128 v38; // xmm1
  bool v39; // cf
  _OWORD *v40; // r12
  __int128 v41; // xmm1
  bool v42; // zf
  unsigned __int64 v43; // rcx
  __int64 v44; // rdx
  int *v45; // rax
  const EVENT_DESCRIPTOR *v46; // rdx
  __int64 v47; // rdx
  char v48; // r13
  _BYTE *v49; // r9
  unsigned __int8 v50; // bp
  char v51; // r10
  char v52; // bl
  char v53; // r11
  char v54; // r14
  char *v55; // r14
  int v56; // ecx
  __int64 v57; // rax
  unsigned __int64 v58; // r12
  __int64 v59; // r8
  int v60; // ecx
  char v61; // cl
  char v62; // al
  char v63; // r8
  char *v64; // r11
  unsigned int v65; // eax
  __int64 v67; // [rsp+20h] [rbp-C8h]
  __int64 v68; // [rsp+28h] [rbp-C0h]
  __int64 v69; // [rsp+30h] [rbp-B8h]
  __int64 v70; // [rsp+38h] [rbp-B0h]
  char v71[8]; // [rsp+60h] [rbp-88h] BYREF
  _DWORD *v72; // [rsp+68h] [rbp-80h]
  PIRP Irp; // [rsp+70h] [rbp-78h]
  _DWORD *v74; // [rsp+78h] [rbp-70h]
  PVOID P; // [rsp+80h] [rbp-68h]
  _IO_STATUS_BLOCK v76; // [rsp+88h] [rbp-60h] BYREF
  PVOID v77[2]; // [rsp+98h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(_DWORD **)(a2 + 24);
  v5 = 0;
  v74 = v4;
  v71[0] = 0;
  v7 = *(_DWORD *)(a1 + 3432);
  Status = 0;
  v9 = *(_DWORD *)(v2 + 8);
  v10 = *(_QWORD *)(a1 + 3424);
  v76 = 0LL;
  if ( (v7 != 10 && v7 != 8 || (*(_BYTE *)(a1 + 506) & 0x10) == 0) && v7 != 11 )
  {
    Status = -1073741637;
LABEL_61:
    v11 = 0LL;
    goto LABEL_62;
  }
  if ( *(_DWORD *)(v2 + 16) < 0xCu )
    goto LABEL_60;
  v11 = 524LL;
  if ( v9 < 0x20C )
  {
    Status = -1073741789;
    goto LABEL_61;
  }
  if ( !v4 || *v4 != 12 || v4[1] != 12 || v4[2] > 1u )
  {
LABEL_60:
    Status = -1073741811;
    goto LABEL_61;
  }
  v12 = MEMORY[0xFFFFF78000000014];
  if ( (v4[2] & 1) != 0 )
  {
    if ( v10 )
      goto LABEL_23;
    goto LABEL_21;
  }
  if ( !v10 )
  {
LABEL_21:
    Pool = RaidAllocatePool(64LL, 528LL, 1414750546LL, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 3424) = Pool;
    v10 = Pool;
    if ( !Pool )
    {
      Status = -1073741670;
      goto LABEL_61;
    }
    goto LABEL_23;
  }
  if ( (*(_DWORD *)(v10 + 520) & 1) != 0 && MEMORY[0xFFFFF78000000014] - *(_QWORD *)v10 < 0x430E23400uLL )
  {
    *v4 = 524;
    v13 = 4LL;
    v4[1] = 524;
    *((_BYTE *)v4 + 8) = (*(_DWORD *)(v10 + 520) & 2) != 0;
    v14 = (_OWORD *)((char *)v4 + 9);
    v15 = (_OWORD *)(v10 + 8);
    do
    {
      *v14 = *v15;
      v14[1] = v15[1];
      v14[2] = v15[2];
      v14[3] = v15[3];
      v14[4] = v15[4];
      v14[5] = v15[5];
      v14[6] = v15[6];
      v14 += 8;
      v16 = v15[7];
      v15 += 8;
      *(v14 - 1) = v16;
      --v13;
    }
    while ( v13 );
    *(_DWORD *)(v10 + 520) |= 1u;
    *(_QWORD *)v10 = v12;
    goto LABEL_62;
  }
LABEL_23:
  v18 = *(_DWORD **)(a1 + 24);
  if ( *v18 == 1314275652 )
  {
    v19 = v18 + 44;
  }
  else if ( *v18 == 1094997074 )
  {
    v19 = v18 + 96;
  }
  else
  {
    v19 = 0LL;
  }
  v20 = *((_BYTE *)v19 + 98);
  v21 = *(_QWORD *)(a1 + 8);
  v72 = v19;
  Srb = RaidAllocateSrb(v21, 0, v20, 1);
  if ( !Srb )
  {
    Status = -1073741801;
    goto LABEL_61;
  }
  P = (PVOID)RaidAllocatePool(64LL, 512LL, 1918067026LL, *(_QWORD *)(a1 + 8));
  if ( P )
  {
    v77[0] = (PVOID)RaidAllocatePool(64LL, 255LL, 1314087250LL, *(_QWORD *)(a1 + 8));
    if ( !v77[0] )
    {
      Status = -1073741801;
LABEL_34:
      v24 = 0LL;
      goto LABEL_35;
    }
    RaUnitBuildSrbForSmartReturnStatus(a1, a2, Srb, (__int64)v77[0], v67, *((_BYTE *)v19 + 98));
    Status = RaUnitSmartReturnStatus(a1, Srb, v71);
    if ( Status < 0 )
      goto LABEL_34;
    v25 = v74;
    v26 = v77[0];
    *((_BYTE *)v74 + 8) = v71[0];
    *v25 = 524;
    v25[1] = 9;
    memset_0(v26, 0, 0xFFuLL);
    RaUnitBuildSrbForSmartReadData(a1, a2, Srb, (__int64)P, v67, (__int64)v26, v69, *((_BYTE *)v72 + 98));
    v28 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), Srb, v27, &v76);
    Irp = v28;
    if ( !v28 )
    {
      Status = -1073741801;
      v24 = 9LL;
      goto LABEL_35;
    }
    v29 = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v28);
    v30 = Irp;
    Status = v29;
    if ( v29 >= 0 )
    {
      Status = Irp->IoStatus.Status;
      if ( Status < 0 )
        goto LABEL_51;
      Status = PortSrbTranslateSrbToNtStatus(*(_BYTE *)(Srb + 3));
    }
    if ( Status >= 0 )
    {
      if ( *(_BYTE *)(Srb + 2) == 40 )
      {
        v31 = *(_OWORD **)(Srb + 64);
        v32 = (_DWORD *)(Srb + 60);
      }
      else
      {
        v31 = *(_OWORD **)(Srb + 24);
        v32 = (_DWORD *)(Srb + 16);
      }
      if ( *v32 >= 0x200u )
      {
        v33 = v74;
        v34 = 4LL;
        v35 = v31;
        v36 = 4LL;
        v74[1] = 524;
        v37 = (_OWORD *)((char *)v33 + 9);
        do
        {
          *v37 = *v35;
          v37[1] = v35[1];
          v37[2] = v35[2];
          v37[3] = v35[3];
          v37[4] = v35[4];
          v37[5] = v35[5];
          v37[6] = v35[6];
          v37 += 8;
          v38 = v35[7];
          v35 += 8;
          *(v37 - 1) = v38;
          --v36;
        }
        while ( v36 );
        v39 = v71[0] != 0;
        *(_QWORD *)v10 = v12;
        *(_DWORD *)(v10 + 520) = (v39 ? 2 : 0) | *(_DWORD *)(v10 + 520) & 0xFFFFFFFD | 1;
        v40 = (_OWORD *)(v10 + 8);
        do
        {
          *v40 = *v31;
          v40[1] = v31[1];
          v40[2] = v31[2];
          v40[3] = v31[3];
          v40[4] = v31[4];
          v40[5] = v31[5];
          v40[6] = v31[6];
          v40 += 8;
          v41 = v31[7];
          v31 += 8;
          *(v40 - 1) = v41;
          --v34;
        }
        while ( v34 );
        v24 = 524LL;
        goto LABEL_52;
      }
      Status = -1073741823;
    }
LABEL_51:
    v24 = 9LL;
LABEL_52:
    StorFreeSynchronousScsiRequest(v30);
LABEL_35:
    v11 = v24;
    v23 = v72;
    ExFreePoolWithTag(P, 0x72536152u);
    if ( v77[0] )
      ExFreePoolWithTag(v77[0], 0x4E536152u);
    goto LABEL_37;
  }
  v23 = v72;
  Status = -1073741801;
  v11 = 0LL;
LABEL_37:
  if ( *((_BYTE *)v23 + 98) == 1 )
  {
    *(_QWORD *)(Srb + 80) = 0LL;
    *(_QWORD *)(Srb + 104) = 0LL;
  }
  else
  {
    *(_QWORD *)(Srb + 48) = 0LL;
    *(_QWORD *)(Srb + 56) = 0LL;
    *(_QWORD *)(Srb + 32) = 0LL;
  }
  ExFreePoolWithTag((PVOID)Srb, 0x72536152u);
LABEL_62:
  v42 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = v11;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = Status;
  if ( v42 )
    goto LABEL_128;
  *(_OWORD *)v77 = 0LL;
  IoGetActivityIdIrp(a2, v77);
  v44 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v44 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_128;
    LODWORD(v67) = *(_DWORD *)(a2 + 48);
    v46 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_127;
  }
  if ( *(_BYTE *)v44 != 15 )
  {
    if ( *(_BYTE *)v44 != 27 )
      goto LABEL_128;
    if ( *(_BYTE *)(v44 + 1) == 7 && !*(_DWORD *)(v44 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v45 = *(int **)(a2 + 56);
        if ( v45 )
          v5 = *v45;
        LODWORD(v68) = *(_DWORD *)(a2 + 48);
        LODWORD(v67) = v5;
        McTemplateK0pqd_EtwWriteTransfer(v43, v44, (const GUID *)v77, a2, v67, v68);
      }
      goto LABEL_128;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_128;
    v46 = &EventPnpRequestComplete;
    LODWORD(v67) = *(_DWORD *)(a2 + 48);
LABEL_127:
    McTemplateK0pd_EtwWriteTransfer(v43, v46, (const GUID *)v77, a2, v67);
    goto LABEL_128;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_128;
  v47 = *(_QWORD *)(v44 + 8);
  v48 = 0;
  v49 = 0LL;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  if ( *(_BYTE *)(v47 + 2) != 40 )
  {
    v61 = *(_BYTE *)(v47 + 72);
    v49 = *(_BYTE **)(v47 + 32);
    v50 = *(_BYTE *)(v47 + 11);
    v48 = *(_BYTE *)(v47 + 4);
    if ( *(_BYTE *)(v47 + 2) )
      goto LABEL_128;
LABEL_102:
    LOBYTE(v43) = v61 - 8;
    if ( (v43 & 0x5D) != 0 )
      goto LABEL_128;
    if ( *(_BYTE *)(v47 + 3) == 1 || !v49 || !v50 )
      goto LABEL_121;
    v62 = *v49 & 0x7F;
    if ( v62 == 114 || v62 == 115 )
    {
      v43 = (unsigned __int64)&v49[v50];
      v63 = 0;
      if ( (unsigned __int64)(v49 + 8) > v43 )
        goto LABEL_119;
      v52 = v49[2];
      v51 = v49[1] & 0xF;
      v53 = v49[3];
    }
    else
    {
      v43 = (unsigned __int64)&v49[v50];
      v63 = 0;
      if ( (unsigned __int64)(v49 + 8) > v43 )
        goto LABEL_119;
      v64 = v49 + 13;
      v51 = v49[2] & 0xF;
      v65 = v50;
      if ( (unsigned int)(unsigned __int8)v49[7] + 8 <= v50 )
        v65 = (unsigned __int8)v49[7] + 8;
      v43 = (unsigned __int64)&v49[v65];
      if ( (unsigned __int64)v64 <= v43 )
        v52 = v49[12];
      if ( (unsigned __int64)(v49 + 14) > v43 )
        v53 = 0;
      else
        v53 = *v64;
    }
    v63 = 1;
LABEL_119:
    if ( v63 )
      v54 = 1;
LABEL_121:
    if ( byte_140173441 < 0 )
    {
      if ( !v54 )
      {
        v53 = 0;
        v52 = 0;
        v51 = 0;
      }
      LOBYTE(v70) = v51;
      LOBYTE(v69) = v48;
      LOBYTE(v68) = *(_BYTE *)(v47 + 3);
      LODWORD(v67) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v43, v47, (const GUID *)v77, a2, v67, v68, v69, v70, v52, v53, a2);
    }
    goto LABEL_128;
  }
  v55 = 0LL;
  v71[0] = 0;
  if ( *(_DWORD *)(v47 + 20) )
    goto LABEL_128;
  v56 = *(_DWORD *)(v47 + 56);
  v57 = 0LL;
  LODWORD(Irp) = 0;
  LODWORD(v72) = v56;
  if ( !v56 )
    goto LABEL_128;
  while ( 1 )
  {
    v43 = *(unsigned int *)(v47 + 4 * v57 + 120);
    if ( (unsigned int)v43 >= 0x80 )
    {
      v58 = *(unsigned int *)(v47 + 16);
      if ( (unsigned int)v43 < (unsigned int)v58 )
        break;
    }
LABEL_93:
    v57 = (unsigned int)((_DWORD)Irp + 1);
    LODWORD(Irp) = v57;
    if ( (unsigned int)v57 >= (unsigned int)v72 )
      goto LABEL_99;
  }
  v59 = (unsigned int)v43;
  v60 = *(_DWORD *)(v43 + v47) - 64;
  if ( v60 )
  {
    v43 = (unsigned int)(v60 - 1);
    if ( (_DWORD)v43 )
    {
      if ( (_DWORD)v43 == 1 )
      {
        v43 = v59 + 40;
        if ( v59 + 40 <= v58 )
        {
          if ( *(_DWORD *)(v59 + v47 + 12) )
            v55 = (char *)(v59 + v47 + 32);
          v49 = *(_BYTE **)(v59 + v47 + 24);
          goto LABEL_98;
        }
      }
    }
    else
    {
      v43 = v59 + 56;
      if ( v59 + 56 <= v58 )
      {
        v71[0] = 1;
        if ( *(_BYTE *)(v59 + v47 + 10) )
          v55 = (char *)(v59 + v47 + 24);
        v48 = *(_BYTE *)(v59 + v47 + 8);
        v49 = *(_BYTE **)(v59 + v47 + 16);
        v50 = *(_BYTE *)(v59 + v47 + 9);
      }
    }
    goto LABEL_92;
  }
  v43 = v59 + 40;
  if ( v59 + 40 > v58 )
  {
LABEL_92:
    if ( v71[0] )
      goto LABEL_99;
    goto LABEL_93;
  }
  if ( *(_BYTE *)(v59 + v47 + 10) )
    v55 = (char *)(v59 + v47 + 24);
  v49 = *(_BYTE **)(v59 + v47 + 16);
LABEL_98:
  v50 = *(_BYTE *)(v59 + v47 + 9);
  v48 = *(_BYTE *)(v59 + v47 + 8);
LABEL_99:
  if ( v55 )
  {
    v61 = *v55;
    v54 = 0;
    goto LABEL_102;
  }
LABEL_128:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)Status;
}
