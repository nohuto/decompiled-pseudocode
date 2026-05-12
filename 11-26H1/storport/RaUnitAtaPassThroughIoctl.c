/*
 * XREFs of RaUnitAtaPassThroughIoctl @ 0x140055654
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaSendIrpSynchronous @ 0x140037340 (RaSendIrpSynchronous.c)
 *     RaidAllocateSrb @ 0x1400384D0 (RaidAllocateSrb.c)
 *     PortPassThroughBuildIrpEx @ 0x14003AE60 (PortPassThroughBuildIrpEx.c)
 *     RaUnitAtaPassThroughMarshalResults @ 0x14003C600 (RaUnitAtaPassThroughMarshalResults.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x14003F79C (RaUnitAtaPassThroughValidateInput.c)
 *     RaUnitSetAtaPassThroughCdb @ 0x1400418B4 (RaUnitSetAtaPassThroughCdb.c)
 *     PortPassThroughFreeIrpEx @ 0x14004530C (PortPassThroughFreeIrpEx.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitAtaPassThroughIoctl(__int64 a1, IRP *a2, char a3)
{
  __int64 v3; // rax
  __int64 v6; // rcx
  _BYTE *v8; // r15
  _IRP *v9; // r12
  int Status; // edi
  _IRP *MasterIrp; // rdi
  _IRP *v12; // rbx
  _IRP *v13; // rcx
  __int128 v14; // xmm0
  __int64 v15; // xmm1_8
  char v16; // al
  __int64 MdlAddress_low; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  KPROCESSOR_MODE AccessMode; // al
  PIRP v21; // r13
  _BYTE *Srb; // rbx
  char v23; // cl
  int v24; // ecx
  __int64 v25; // rcx
  char *v26; // rax
  _BYTE *v27; // rdx
  int v28; // ecx
  int MdlAddress; // eax
  _IRP *v30; // rcx
  __int64 v31; // rcx
  PVOID P; // [rsp+58h] [rbp-31h]
  __int128 v35; // [rsp+60h] [rbp-29h] BYREF
  __int128 v36; // [rsp+70h] [rbp-19h] BYREF
  __int128 v37; // [rsp+80h] [rbp-9h]
  __int128 v38; // [rsp+90h] [rbp+7h]

  v3 = *(_QWORD *)(a1 + 24);
  P = 0LL;
  *(_QWORD *)&v35 = 0LL;
  v6 = *(_QWORD *)(v3 + 608);
  v8 = 0LL;
  v9 = 0LL;
  v36 = 0LL;
  LODWORD(v3) = *(_DWORD *)(v6 + 184);
  v37 = 0LL;
  v38 = 0LL;
  if ( (v3 & 2) != 0 || (*(_BYTE *)(a1 + 506) & 0x10) != 0 )
  {
    Status = RaUnitAtaPassThroughValidateInput(a1, a2, a3);
    if ( Status >= 0 )
    {
      MasterIrp = a2->AssociatedIrp.MasterIrp;
      v12 = MasterIrp;
      if ( IoIs32bitProcess(a2) )
      {
        v13 = a2->AssociatedIrp.MasterIrp;
        MasterIrp = (_IRP *)&v36;
        v14 = *(_OWORD *)&v13->Type;
        *((_QWORD *)&v38 + 1) = v13->ThreadListEntry.Flink;
        v15 = *(_QWORD *)&v13->Flags;
        *(_QWORD *)&v38 = v13->AssociatedIrp.MasterIrp;
        *((_QWORD *)&v37 + 1) = *(&v13->Flags + 1);
        v36 = v14;
        *(_QWORD *)&v37 = v15;
      }
      if ( DisableIEEE1667
        && ((v16 = BYTE6(MasterIrp->ThreadListEntry.Blink), v16 == 92) || v16 == 94)
        && LOBYTE(MasterIrp->ThreadListEntry.Blink) == 0xEE )
      {
        Status = -1073741637;
      }
      else
      {
        if ( (MasterIrp->Size & 6) == 0 )
          goto LABEL_24;
        MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
        if ( !(_DWORD)MdlAddress_low )
          goto LABEL_24;
        v9 = MasterIrp->AssociatedIrp.MasterIrp;
        if ( !a3 )
          v9 = (_IRP *)((char *)v9 + (_QWORD)v12);
        v18 = *(_QWORD *)(a1 + 24);
        if ( *(_BYTE *)(v18 + 4434) )
        {
          v19 = *(_DWORD *)(v18 + 908);
          if ( *(_DWORD *)(v18 + 412) < v19 )
            v19 = *(_DWORD *)(v18 + 412);
        }
        else
        {
          v19 = *(_DWORD *)(v18 + 412);
        }
        if ( (unsigned int)MdlAddress_low > *(_DWORD *)(v18 + 408)
          || (unsigned int)((MdlAddress_low + (unsigned __int64)((unsigned __int16)v9 & 0xFFF) + 4095) >> 12) > v19 )
        {
          Status = -1073741811;
        }
        else
        {
LABEL_24:
          if ( a3 )
            AccessMode = a2->RequestorMode;
          else
            AccessMode = 0;
          v21 = PortPassThroughBuildIrpEx(
                  *(_QWORD *)(a1 + 8),
                  v9,
                  (ULONG)MasterIrp->MdlAddress,
                  MasterIrp->Size & 2,
                  AccessMode,
                  a2,
                  0,
                  0LL,
                  0,
                  0LL);
          if ( v21 )
          {
            Srb = (_BYTE *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)(*(_QWORD *)(a1 + 24) + 482LL), 1);
            if ( Srb && (P = (PVOID)RaidAllocatePool(64LL, 79LL, 1314087250LL, *(_QWORD *)(a1 + 8))) != 0LL )
            {
              v23 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 482LL);
              Srb[3] = 0;
              if ( v23 == 1 )
              {
                *((_DWORD *)Srb + 5) = 0;
                v8 = Srb;
                if ( (MasterIrp->Size & 2) != 0 )
                  *((_DWORD *)Srb + 6) |= 0x40u;
                if ( (MasterIrp->Size & 4) != 0 )
                  *((_DWORD *)Srb + 6) |= 0x80u;
                v24 = *((_DWORD *)Srb + 6) | 0x100;
                *((_DWORD *)Srb + 6) = v24;
                if ( (*(_BYTE *)(a1 + 505) & 0x10) == 0 )
                  v24 |= 0x80000u;
                *((_DWORD *)Srb + 6) = v24 | 0x2000000;
                v25 = *((unsigned int *)Srb + 13);
                *((_DWORD *)Srb + 15) = MasterIrp->MdlAddress;
                *((_QWORD *)Srb + 8) = v9;
                *((_QWORD *)Srb + 10) = v21;
                *((_DWORD *)Srb + 10) = HIDWORD(MasterIrp->MdlAddress);
                Srb[v25 + 8] = *((_BYTE *)&MasterIrp->Size + 2);
                Srb[v25 + 9] = *((_BYTE *)&MasterIrp->Size + 3);
                Srb[v25 + 10] = *((_BYTE *)&MasterIrp->Size + 4);
                v26 = &Srb[*((unsigned int *)Srb + 30)];
                *(_QWORD *)&v35 = v26;
                *((_QWORD *)v26 + 2) = P;
                v27 = v26 + 24;
                *(_DWORD *)v26 = 64;
                *((_DWORD *)v26 + 1) = 32;
                *(_WORD *)(v26 + 9) = 4175;
              }
              else
              {
                *(_WORD *)Srb = 88;
                Srb[2] = 0;
                Srb[5] = *((_BYTE *)&MasterIrp->Size + 2);
                Srb[6] = *((_BYTE *)&MasterIrp->Size + 3);
                Srb[7] = *((_BYTE *)&MasterIrp->Size + 4);
                Srb[10] = 16;
                if ( (MasterIrp->Size & 2) != 0 )
                  *((_DWORD *)Srb + 3) |= 0x40u;
                if ( (MasterIrp->Size & 4) != 0 )
                  *((_DWORD *)Srb + 3) |= 0x80u;
                v28 = *((_DWORD *)Srb + 3) | 0x100;
                *((_DWORD *)Srb + 3) = v28;
                if ( (*(_BYTE *)(a1 + 505) & 0x10) == 0 )
                  v28 |= 0x80000u;
                *((_DWORD *)Srb + 3) = v28 | 0x2000000;
                MdlAddress = (int)MasterIrp->MdlAddress;
                *((_QWORD *)Srb + 4) = P;
                v27 = Srb + 72;
                *((_DWORD *)Srb + 4) = MdlAddress;
                *((_QWORD *)Srb + 3) = v9;
                Srb[11] = 79;
                *((_QWORD *)Srb + 6) = v21;
                *((_DWORD *)Srb + 5) = HIDWORD(MasterIrp->MdlAddress);
              }
              RaUnitSetAtaPassThroughCdb((__int64)MasterIrp, v27);
              v21->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Srb;
              RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v21);
              RaUnitAtaPassThroughMarshalResults(
                (__int64)Srb,
                (unsigned __int16 *)MasterIrp,
                a3,
                (__int64)&a2->IoStatus);
              if ( IoIs32bitProcess(a2) )
              {
                v30 = a2->AssociatedIrp.MasterIrp;
                *(_OWORD *)&v30->Type = *(_OWORD *)&MasterIrp->Type;
                *(_QWORD *)&v30->Flags = *(_QWORD *)&MasterIrp->Flags;
                v30->ThreadListEntry.Flink = MasterIrp->ThreadListEntry.Blink;
                v30->AssociatedIrp.MasterIrp = (_IRP *)MasterIrp->ThreadListEntry.Flink;
              }
              Status = a2->IoStatus.Status;
            }
            else
            {
              Status = -1073741801;
            }
            PortPassThroughFreeIrpEx(v21);
            if ( Srb )
            {
              if ( P )
                ExFreePoolWithTag(P, 0x4E536152u);
              if ( Srb[2] == 40 )
              {
                if ( !v8 )
                  v8 = Srb;
                if ( (_QWORD)v35 )
                  *(_QWORD *)(v35 + 16) = 0LL;
                *((_QWORD *)v8 + 10) = 0LL;
                *((_QWORD *)v8 + 13) = 0LL;
              }
              else
              {
                *((_QWORD *)Srb + 4) = 0LL;
                *((_QWORD *)Srb + 6) = 0LL;
                *((_QWORD *)Srb + 7) = 0LL;
              }
              ExFreePoolWithTag(Srb, 0x72536152u);
            }
          }
          else
          {
            Status = -1073741801;
          }
        }
      }
    }
  }
  else
  {
    Status = -1073741808;
  }
  if ( StorEtwLoggingEnabled )
  {
    v35 = 0LL;
    IoGetActivityIdIrp(a2, &v35);
    if ( (byte_140173442 & 8) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v31, &EventNonReadWriteRequestComplete, &v35, a2, Status);
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
