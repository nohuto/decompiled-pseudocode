/*
 * XREFs of sub_140107670 @ 0x140107670
 * Callers:
 *     sub_140198640 @ 0x140198640 (sub_140198640.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400F98F8 @ 0x1400F98F8 (sub_1400F98F8.c)
 *     sub_140101170 @ 0x140101170 (sub_140101170.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140107670(__int64 Context, PIRP Irp)
{
  int v2; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  NTSTATUS v6; // ebp
  struct _IRP *MasterIrp; // r14
  BOOL v8; // r8d
  _WORD *v9; // r11
  __int16 MdlAddress; // cx
  int v11; // r9d
  __int64 v12; // r10
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // ecx
  int v17; // r10d
  __int64 v18; // r9
  int v19; // ecx
  unsigned __int8 v20; // r8
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  bool v24; // zf
  unsigned __int64 v25; // rcx
  struct _IO_STACK_LOCATION *v26; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v28; // rdx
  __int64 SecurityContext; // rdx
  char v30; // r14
  _BYTE *v31; // r9
  unsigned __int8 v32; // r10
  char v33; // r11
  char v34; // si
  char v35; // r13
  char *v36; // rsi
  unsigned int v37; // r12d
  unsigned __int64 v38; // r15
  __int64 v39; // r8
  int v40; // ecx
  char v41; // cl
  char v42; // r8
  _BYTE *v43; // rax
  char *v44; // r13
  unsigned int v45; // eax
  char v46; // al
  char v48; // [rsp+60h] [rbp-58h]
  char v49; // [rsp+61h] [rbp-57h]
  unsigned int v50; // [rsp+64h] [rbp-54h]
  GUID v51; // [rsp+68h] [rbp-50h] BYREF

  v2 = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (*(_BYTE *)(*(_QWORD *)(Context + 16) + 136LL) & 2) == 0 )
  {
    MasterIrp = Irp->AssociatedIrp.MasterIrp;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(Context + 644), 1, 0) == 1 )
    {
      v6 = -1073740682;
      goto LABEL_45;
    }
    v6 = sub_140101170(Context, (__int64)Irp);
    if ( v6 < 0 )
      goto LABEL_42;
    v8 = 1;
    v9 = *(_WORD **)(Context + 616);
    if ( CurrentStackLocation->Parameters.Create.Options >= 0x10
      && MasterIrp
      && *(_DWORD *)&MasterIrp->Type == 16
      && *(_DWORD *)(&MasterIrp->Size + 1) == 16 )
    {
      MdlAddress = -1;
      if ( LODWORD(MasterIrp->MdlAddress) < 0xFFFF )
        MdlAddress = (__int16)MasterIrp->MdlAddress;
      *(_WORD *)(Context + 640) = MdlAddress;
      v8 = ((HIDWORD(MasterIrp->MdlAddress) >> 4) & 1) == 0;
      if ( (HIDWORD(MasterIrp->MdlAddress) & 0xF) != 0 )
      {
        if ( (HIDWORD(MasterIrp->MdlAddress) & 0xF) == 1 )
        {
          if ( !*(_WORD *)(Context + 640) )
            *(_WORD *)(Context + 640) = 1800;
          v11 = 2;
          goto LABEL_22;
        }
        if ( (HIDWORD(MasterIrp->MdlAddress) & 0xF) != 2 )
        {
          v6 = -1073741637;
          goto LABEL_42;
        }
      }
    }
    if ( !*(_WORD *)(Context + 640) )
      *(_WORD *)(Context + 640) = 60;
    v11 = 4;
LABEL_22:
    *(_DWORD *)(*(_QWORD *)v9 + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)v9 + 4256LL) &= ~2u;
    *(_DWORD *)(*(_QWORD *)v9 + 4256LL) |= 0x20u;
    *(_QWORD *)(*(_QWORD *)v9 + 4184LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)v9 + 4216LL) = Context;
    *(_QWORD *)(*(_QWORD *)v9 + 4160LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)v9 + 4248LL) = 0;
    v9[26] = *(_WORD *)(Context + 640);
    *(_QWORD *)(*(_QWORD *)v9 + 4200LL) = v9;
    *(_QWORD *)(*(_QWORD *)v9 + 4192LL) = sub_140107470;
    v12 = *(_QWORD *)(Context + 16);
    v13 = *(_QWORD *)(v12 + 592);
    v14 = *(_DWORD *)(v13 + 328);
    if ( (v14 & 2) != 0 && v11 == 2
      || (v14 & 1) != 0 && v11 == 4 && (*(_DWORD *)(*(_QWORD *)(v12 + 1048) + 24LL) & 0x80000) == 0 )
    {
      v15 = *(_QWORD *)v9;
      v16 = *(_DWORD *)(*(_QWORD *)v9 + 4136LL) & 0xFFFFFFF8;
      *(_BYTE *)(v15 + 4096) = -124;
      *(_DWORD *)(v15 + 4140) = 0;
      *(_DWORD *)(v15 + 4136) = (8 * v8) & 0xFFFFFC0F | (v11 | v16) & 0xFFFFFC07;
LABEL_40:
      v6 = sub_1400BD378(*(PVOID *)(Context + 16), (__int64)v9);
      goto LABEL_42;
    }
    if ( (*(_BYTE *)(v13 + 256) & 2) != 0 && (*(_DWORD *)(v12 + 656) <= 1u || (*(_BYTE *)(v13 + 524) & 2) == 0) )
    {
      if ( v11 != 4 )
      {
        v17 = 1;
        goto LABEL_35;
      }
      if ( (*(_BYTE *)(v13 + 524) & 4) != 0 )
      {
        v17 = 2;
LABEL_35:
        v18 = *(_QWORD *)v9;
        v19 = *(_DWORD *)(Context + 56);
        v20 = *(_BYTE *)(*(_QWORD *)(Context + 176) + 26LL);
        *(_BYTE *)(*(_QWORD *)v9 + 4096LL) = 0x80;
        if ( (*(_BYTE *)(v13 + 524) & 2) != 0 )
          v19 = -1;
        *(_DWORD *)(v18 + 4100) = v19;
        v21 = *(_DWORD *)(v18 + 4136) ^ ((unsigned __int8)*(_DWORD *)(v18 + 4136) ^ v20) & 0xF;
        v22 = v21 | 0x10;
        v23 = v21 & 0xFFFFFFEF;
        if ( (v20 & 0x60) != 0 )
          v22 = v23;
        *(_DWORD *)(v18 + 4136) = v22 & 0xFFFFF01F | (v17 << 9);
        goto LABEL_40;
      }
    }
    v6 = -1056964602;
LABEL_42:
    if ( *(_BYTE *)(Context + 642) )
      IoQueueWorkItemEx(*(PIO_WORKITEM *)(Context + 632), sub_140107CC0, DelayedWorkQueue, (PVOID)Context);
    else
      sub_1400F98F8(Context);
    goto LABEL_45;
  }
  v6 = -1073741637;
LABEL_45:
  v24 = byte_140168DAA == 0;
  Irp->IoStatus.Information = 0LL;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = v6;
  if ( v24 )
    goto LABEL_110;
  v51 = 0LL;
  IoGetActivityIdIrp(Irp, &v51);
  v26 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v26->MajorFunction == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_110;
    v28 = &stru_140148B18;
    goto LABEL_109;
  }
  if ( v26->MajorFunction != 15 )
  {
    if ( v26->MajorFunction != 27 )
      goto LABEL_110;
    if ( v26->MinorFunction == 7 && !v26->Parameters.Read.Length )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v2 = *Information;
        sub_140056AB0(v25, (__int64)v26, &v51, Irp, v2, Irp->IoStatus.Status);
      }
      goto LABEL_110;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_110;
    v28 = &stru_140149FE8;
LABEL_109:
    sub_140052F3C(v25, v28, &v51, Irp, Irp->IoStatus.Status);
    goto LABEL_110;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_110;
  SecurityContext = (__int64)v26->Parameters.Create.SecurityContext;
  v30 = 0;
  v31 = 0LL;
  v48 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  if ( *(_BYTE *)(SecurityContext + 2) != 40 )
  {
    v41 = *(_BYTE *)(SecurityContext + 72);
    v31 = *(_BYTE **)(SecurityContext + 32);
    v32 = *(_BYTE *)(SecurityContext + 11);
    v30 = *(_BYTE *)(SecurityContext + 4);
    if ( !*(_BYTE *)(SecurityContext + 2) )
      goto LABEL_85;
    goto LABEL_110;
  }
  v36 = 0LL;
  v49 = 0;
  if ( *(_DWORD *)(SecurityContext + 20) )
    goto LABEL_110;
  v37 = 0;
  v50 = *(_DWORD *)(SecurityContext + 56);
  if ( !v50 )
    goto LABEL_82;
  while ( 1 )
  {
    v25 = *(unsigned int *)(SecurityContext + 4LL * v37 + 120);
    if ( (unsigned int)v25 >= 0x80 )
    {
      v38 = *(unsigned int *)(SecurityContext + 16);
      if ( (unsigned int)v25 < (unsigned int)v38 )
        break;
    }
LABEL_76:
    if ( ++v37 >= v50 )
      goto LABEL_82;
  }
  v39 = (unsigned int)v25;
  v40 = *(_DWORD *)(v25 + SecurityContext) - 64;
  if ( v40 )
  {
    v25 = (unsigned int)(v40 - 1);
    if ( (_DWORD)v25 )
    {
      if ( (_DWORD)v25 == 1 )
      {
        v25 = v39 + 40;
        if ( v39 + 40 <= v38 )
        {
          if ( *(_DWORD *)(v39 + SecurityContext + 12) )
            v36 = (char *)(v39 + SecurityContext + 32);
          v31 = *(_BYTE **)(v39 + SecurityContext + 24);
          goto LABEL_81;
        }
      }
    }
    else
    {
      v25 = v39 + 56;
      if ( v39 + 56 <= v38 )
      {
        v49 = 1;
        if ( *(_BYTE *)(v39 + SecurityContext + 10) )
          v36 = (char *)(v39 + SecurityContext + 24);
        v30 = *(_BYTE *)(v39 + SecurityContext + 8);
        v31 = *(_BYTE **)(v39 + SecurityContext + 16);
        v32 = *(_BYTE *)(v39 + SecurityContext + 9);
      }
    }
    goto LABEL_75;
  }
  v25 = v39 + 40;
  if ( v39 + 40 > v38 )
  {
LABEL_75:
    if ( v49 )
      goto LABEL_82;
    goto LABEL_76;
  }
  if ( *(_BYTE *)(v39 + SecurityContext + 10) )
    v36 = (char *)(v39 + SecurityContext + 24);
  v31 = *(_BYTE **)(v39 + SecurityContext + 16);
LABEL_81:
  v32 = *(_BYTE *)(v39 + SecurityContext + 9);
  v30 = *(_BYTE *)(v39 + SecurityContext + 8);
LABEL_82:
  if ( v36 )
  {
    v41 = *v36;
    v34 = 0;
LABEL_85:
    LOBYTE(v25) = v41 - 8;
    if ( (v25 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(SecurityContext + 3) == 1 || !v31 || !v32 )
        goto LABEL_105;
      v42 = 0;
      v25 = (unsigned __int64)&v31[v32];
      v43 = v31 + 8;
      if ( (unsigned __int8)((*v31 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v43 <= v25 )
        {
          v42 = 1;
          v34 = v31[2];
          v33 = v31[1] & 0xF;
          v35 = v31[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v43 <= v25 )
        {
          v44 = v31 + 13;
          v33 = v31[2] & 0xF;
          v45 = v32;
          if ( (unsigned int)(unsigned __int8)v31[7] + 8 <= v32 )
            v45 = (unsigned __int8)v31[7] + 8;
          v25 = (unsigned __int64)&v31[v45];
          if ( (unsigned __int64)v44 > v25 )
            v48 = 0;
          else
            v48 = v31[12];
          if ( (unsigned __int64)(v31 + 14) > v25 )
            v35 = 0;
          else
            v35 = *v44;
          v42 = 1;
        }
        v34 = v48;
      }
      if ( v42 )
      {
        LOBYTE(v2) = v34;
        v46 = v35;
      }
      else
      {
LABEL_105:
        v33 = 0;
        v46 = 0;
      }
      sub_140052E64(
        v25,
        SecurityContext,
        &v51,
        Irp,
        Irp->IoStatus.Status,
        *(_BYTE *)(SecurityContext + 3),
        v30,
        v33,
        v2,
        v46,
        Irp);
    }
  }
LABEL_110:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v6;
}
