/*
 * XREFs of sub_14004E0E8 @ 0x14004E0E8
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140015A14 @ 0x140015A14 (sub_140015A14.c)
 *     sub_140018E30 @ 0x140018E30 (sub_140018E30.c)
 *     sub_140036248 @ 0x140036248 (sub_140036248.c)
 *     sub_140036DB4 @ 0x140036DB4 (sub_140036DB4.c)
 *     sub_1400386D0 @ 0x1400386D0 (sub_1400386D0.c)
 *     sub_140038F6C @ 0x140038F6C (sub_140038F6C.c)
 *     sub_140039E24 @ 0x140039E24 (sub_140039E24.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14004E0E8(__int64 a1, IRP *a2, char a3)
{
  __int64 v3; // rax
  struct _IRP *v4; // r13
  _BYTE *v6; // r15
  char *v7; // r12
  __int64 v8; // rcx
  int Status; // edi
  struct _IRP *MasterIrp; // rdi
  struct _IRP *v12; // rbx
  struct _IRP *v13; // rcx
  __int128 v14; // xmm0
  __int64 v15; // xmm1_8
  __int64 MdlAddress_low; // r8
  __int64 v17; // rcx
  unsigned int v18; // eax
  KPROCESSOR_MODE AccessMode; // al
  _BYTE *v20; // rbx
  IRP *v21; // r13
  PVOID v22; // rdx
  char v23; // cl
  int v24; // ecx
  int MdlAddress; // eax
  __int64 v26; // rcx
  _BYTE *v27; // rdx
  int v28; // ecx
  int v29; // eax
  struct _IRP *v30; // rcx
  __int64 v31; // rcx
  PIRP Irp; // [rsp+58h] [rbp-31h]
  PVOID P[2]; // [rsp+60h] [rbp-29h] BYREF
  __int128 v36; // [rsp+70h] [rbp-19h] BYREF
  __int128 v37; // [rsp+80h] [rbp-9h]
  __int128 v38; // [rsp+90h] [rbp+7h]

  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0LL;
  P[0] = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = *(_QWORD *)(v3 + 608);
  v36 = 0LL;
  v37 = 0LL;
  LODWORD(v3) = *(_DWORD *)(v8 + 184);
  v38 = 0LL;
  if ( (v3 & 2) != 0 || (*(_BYTE *)(a1 + 506) & 0x10) != 0 )
  {
    Status = sub_1400386D0(a1, a2, a3);
    if ( Status >= 0 )
    {
      MasterIrp = a2->AssociatedIrp.MasterIrp;
      v12 = MasterIrp;
      if ( IoIs32bitProcess(a2) )
      {
        v13 = a2->AssociatedIrp.MasterIrp;
        MasterIrp = (struct _IRP *)&v36;
        v14 = *(_OWORD *)&v13->Type;
        *((_QWORD *)&v38 + 1) = v13->ThreadListEntry.Flink;
        v15 = *(_QWORD *)&v13->Flags;
        *(_QWORD *)&v38 = v13->AssociatedIrp.MasterIrp;
        *((_QWORD *)&v37 + 1) = *(&v13->Flags + 1);
        v36 = v14;
        *(_QWORD *)&v37 = v15;
      }
      if ( byte_1401688B4
        && ((BYTE6(MasterIrp->ThreadListEntry.Blink) - 92) & 0xFD) == 0
        && LOBYTE(MasterIrp->ThreadListEntry.Blink) == 0xEE )
      {
        Status = -1073741637;
      }
      else
      {
        MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
        if ( !(_DWORD)MdlAddress_low )
          goto LABEL_22;
        v4 = MasterIrp->AssociatedIrp.MasterIrp;
        if ( !a3 )
          v4 = (struct _IRP *)((char *)v4 + (_QWORD)v12);
        v17 = *(_QWORD *)(a1 + 24);
        if ( *(_BYTE *)(v17 + 4370) )
        {
          v18 = *(_DWORD *)(v17 + 892);
          if ( *(_DWORD *)(v17 + 412) < v18 )
            v18 = *(_DWORD *)(v17 + 412);
        }
        else
        {
          v18 = *(_DWORD *)(v17 + 412);
        }
        if ( (unsigned int)MdlAddress_low > *(_DWORD *)(v17 + 408)
          || (unsigned int)((MdlAddress_low + (unsigned __int64)((unsigned __int16)v4 & 0xFFF) + 4095) >> 12) > v18 )
        {
          Status = -1073741811;
        }
        else
        {
LABEL_22:
          if ( a3 )
            AccessMode = a2->RequestorMode;
          else
            AccessMode = 0;
          Irp = sub_140036248(
                  *(_QWORD *)(a1 + 8),
                  v4,
                  MdlAddress_low,
                  MasterIrp->Size & 2,
                  AccessMode,
                  a2,
                  0,
                  0LL,
                  0,
                  0LL);
          if ( Irp )
          {
            v20 = (_BYTE *)sub_140015A14(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)(*(_QWORD *)(a1 + 24) + 482LL), 1);
            if ( v20
              && (P[0] = (PVOID)sub_1400143E0(64LL, 79LL, 1314087250LL, *(_QWORD *)(a1 + 8)), (v22 = P[0]) != 0LL) )
            {
              v23 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 482LL);
              v20[3] = 0;
              if ( v23 == 1 )
              {
                *((_DWORD *)v20 + 5) = 0;
                v6 = v20;
                if ( (MasterIrp->Size & 2) != 0 )
                  *((_DWORD *)v20 + 6) |= 0x40u;
                if ( (MasterIrp->Size & 4) != 0 )
                  *((_DWORD *)v20 + 6) |= 0x80u;
                v24 = *((_DWORD *)v20 + 6) | 0x100;
                *((_DWORD *)v20 + 6) = v24;
                if ( (*(_BYTE *)(a1 + 505) & 0x10) == 0 )
                {
                  v24 |= 0x80000u;
                  *((_DWORD *)v20 + 6) = v24;
                }
                if ( byte_1401688AC )
                  *((_DWORD *)v20 + 6) = v24 | 0x2000000;
                MdlAddress = (int)MasterIrp->MdlAddress;
                v26 = *((unsigned int *)v20 + 13);
                *((_QWORD *)v20 + 8) = v4;
                v21 = Irp;
                *((_QWORD *)v20 + 10) = Irp;
                *((_DWORD *)v20 + 15) = MdlAddress;
                *((_DWORD *)v20 + 10) = HIDWORD(MasterIrp->MdlAddress);
                v20[v26 + 8] = *((_BYTE *)&MasterIrp->Size + 2);
                v20[v26 + 9] = *((_BYTE *)&MasterIrp->Size + 3);
                v20[v26 + 10] = *((_BYTE *)&MasterIrp->Size + 4);
                v7 = &v20[*((unsigned int *)v20 + 30)];
                *((_QWORD *)v7 + 2) = v22;
                v27 = v7 + 24;
                *(_DWORD *)v7 = 64;
                *((_DWORD *)v7 + 1) = 32;
                *(_WORD *)(v7 + 9) = 4175;
              }
              else
              {
                *(_WORD *)v20 = 88;
                v20[2] = 0;
                v20[5] = *((_BYTE *)&MasterIrp->Size + 2);
                v20[6] = *((_BYTE *)&MasterIrp->Size + 3);
                v20[7] = *((_BYTE *)&MasterIrp->Size + 4);
                v20[10] = 16;
                if ( (MasterIrp->Size & 2) != 0 )
                  *((_DWORD *)v20 + 3) |= 0x40u;
                if ( (MasterIrp->Size & 4) != 0 )
                  *((_DWORD *)v20 + 3) |= 0x80u;
                v28 = *((_DWORD *)v20 + 3) | 0x100;
                *((_DWORD *)v20 + 3) = v28;
                if ( (*(_BYTE *)(a1 + 505) & 0x10) == 0 )
                {
                  v28 |= 0x80000u;
                  *((_DWORD *)v20 + 3) = v28;
                }
                if ( byte_1401688AC )
                  *((_DWORD *)v20 + 3) = v28 | 0x2000000;
                v29 = (int)MasterIrp->MdlAddress;
                *((_QWORD *)v20 + 3) = v4;
                v21 = Irp;
                *((_QWORD *)v20 + 4) = v22;
                v27 = v20 + 72;
                *((_QWORD *)v20 + 6) = Irp;
                *((_DWORD *)v20 + 4) = v29;
                v20[11] = 79;
                *((_DWORD *)v20 + 5) = HIDWORD(MasterIrp->MdlAddress);
              }
              sub_140038F6C((__int64)MasterIrp, v27);
              v21->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v20;
              sub_140018E30(*(PDEVICE_OBJECT *)(a1 + 8), v21);
              sub_140036DB4((__int64)v20, (unsigned __int16 *)MasterIrp, a3, (__int64)&a2->IoStatus);
              if ( IoIs32bitProcess(a2) )
              {
                v30 = a2->AssociatedIrp.MasterIrp;
                *(_OWORD *)&v30->Type = *(_OWORD *)&MasterIrp->Type;
                *(_QWORD *)&v30->Flags = *(_QWORD *)&MasterIrp->Flags;
                v30->ThreadListEntry.Flink = MasterIrp->ThreadListEntry.Blink;
                v30->AssociatedIrp.MasterIrp = (struct _IRP *)MasterIrp->ThreadListEntry.Flink;
              }
              Status = a2->IoStatus.Status;
            }
            else
            {
              v21 = Irp;
              Status = -1073741801;
            }
            sub_140039E24(v21);
            if ( v20 )
            {
              if ( P[0] )
                ExFreePoolWithTag(P[0], 0x4E536152u);
              if ( v20[2] == 40 )
              {
                if ( !v6 )
                  v6 = v20;
                if ( v7 )
                  *((_QWORD *)v7 + 2) = 0LL;
                *((_QWORD *)v6 + 10) = 0LL;
                *((_QWORD *)v6 + 13) = 0LL;
              }
              else
              {
                *((_QWORD *)v20 + 4) = 0LL;
                *((_QWORD *)v20 + 6) = 0LL;
                *((_QWORD *)v20 + 7) = 0LL;
              }
              ExFreePoolWithTag(v20, 0x72536152u);
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
  if ( byte_140168DAA )
  {
    *(_OWORD *)P = 0LL;
    IoGetActivityIdIrp(a2, P);
    if ( (byte_1401694F2 & 8) != 0 )
      sub_140052F3C(v31, &unk_140148B18, P, a2, Status);
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
