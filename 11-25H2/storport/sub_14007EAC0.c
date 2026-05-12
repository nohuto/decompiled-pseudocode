/*
 * XREFs of sub_14007EAC0 @ 0x14007EAC0
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14007B5A0 @ 0x14007B5A0 (sub_14007B5A0.c)
 *     sub_14008D1F0 @ 0x14008D1F0 (sub_14008D1F0.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1 @ 0x14008E3B0 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14007EAC0(CMSPAddress *this, PIRP Irp)
{
  int v2; // edi
  struct _IRP *MasterIrp; // rdx
  struct _IRP *v6; // r15
  char v7; // r12
  ULONG Options; // ecx
  unsigned int Information; // eax
  unsigned int v10; // eax
  int DynamicTerminalClasses; // esi
  const wchar_t *v12; // r10
  bool v13; // zf
  unsigned __int64 v14; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *v16; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  __int64 SecurityContext; // rdx
  char v19; // r12
  char v20; // bl
  _BYTE *v21; // r8
  unsigned __int8 v22; // r10
  char v23; // r11
  int v24; // eax
  char v25; // r13
  char *v26; // r15
  unsigned int v27; // r9d
  unsigned int *v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // r13
  int v31; // r15d
  char v32; // r9
  _BYTE *v33; // rax
  unsigned int v34; // eax
  unsigned __int64 v35; // r9
  char v36; // al
  __int64 v38; // [rsp+20h] [rbp-130h]
  __int64 v39; // [rsp+28h] [rbp-128h]
  __int64 v40; // [rsp+30h] [rbp-120h]
  char *v41; // [rsp+38h] [rbp-118h]
  __int64 v42; // [rsp+40h] [rbp-110h]
  char *v43; // [rsp+48h] [rbp-108h]
  _OWORD *v44; // [rsp+50h] [rbp-100h]
  char v45; // [rsp+D0h] [rbp-80h]
  char v46; // [rsp+D1h] [rbp-7Fh]
  char v47; // [rsp+D2h] [rbp-7Eh]
  int v48; // [rsp+D8h] [rbp-78h]
  unsigned int v49; // [rsp+DCh] [rbp-74h]
  __int128 v50; // [rsp+E0h] [rbp-70h] BYREF
  GUID v51; // [rsp+F0h] [rbp-60h] BYREF
  __int128 v52; // [rsp+100h] [rbp-50h] BYREF
  _OWORD v53[2]; // [rsp+110h] [rbp-40h] BYREF

  v2 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v6 = 0LL;
  v7 = 0;
  v52 = 0LL;
  v50 = 0LL;
  memset(v53, 0, sizeof(v53));
  if ( !MasterIrp )
    goto LABEL_20;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x40 )
    goto LABEL_20;
  v6 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_20;
  Information = MasterIrp->IoStatus.Information;
  if ( Information > 0x20 )
    goto LABEL_20;
  v10 = Information + 60;
  if ( v10 < 0x40 )
    v10 = 64;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) != v10 || Options < v10 )
    goto LABEL_20;
  if ( !HIDWORD(MasterIrp->MdlAddress) )
  {
    DynamicTerminalClasses = -1073741637;
    goto LABEL_21;
  }
  if ( ((__int64)MasterIrp->MdlAddress & 1) != 0 && MasterIrp->Flags - 1 > 2 )
  {
LABEL_20:
    DynamicTerminalClasses = -1073741811;
    goto LABEL_21;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)this + 32, 0) == 1 )
  {
    DynamicTerminalClasses = -2147483631;
  }
  else
  {
    v7 = 1;
    DynamicTerminalClasses = sub_14008D1F0(this, v53);
    if ( DynamicTerminalClasses >= 0 )
    {
      if ( *(_BYTE *)(*((_QWORD *)this + 758) + 53LL) )
      {
        v44 = v53;
        v43 = (char *)&v6->IoStatus.Information + 4;
        LODWORD(v42) = v6->IoStatus.Information;
        v41 = (char *)&v6->Flags + 5;
        LOBYTE(v40) = ((__int64)v6->MdlAddress & 4) != 0;
        LOBYTE(v39) = *((_BYTE *)&v6->Flags + 4);
        DynamicTerminalClasses = CMSPAddress::get_DynamicTerminalClasses(
                                   this,
                                   (struct tagVARIANT *)HIDWORD(v6->MdlAddress));
      }
      else
      {
        DynamicTerminalClasses = -1073741637;
      }
    }
    _interlockedbittestandreset((volatile signed __int32 *)this + 32, 0);
  }
LABEL_21:
  Irp->IoStatus.Information = 0LL;
  if ( DynamicTerminalClasses < 0 )
  {
    if ( v7 )
    {
      sub_1400403EC(*((_QWORD *)this + 2), (__int64)&v50);
      if ( (byte_1401694F7 & 2) != 0 )
      {
        v12 = (const wchar_t *)&unk_140149394;
        if ( *((_QWORD *)this + 635) )
          v12 = (const wchar_t *)*((_QWORD *)this + 635);
        sub_14007B5A0(
          LODWORD(v6->IoStatus.Information),
          *((unsigned __int8 *)&v6->Flags + 4),
          (int)v6->Flags,
          *((_DWORD *)this + 14),
          -1,
          255,
          255,
          (__int64)&v52,
          (__int64)this + 5064,
          *((const wchar_t **)&v50 + 1),
          byte_1401489C4,
          byte_1401489C4,
          byte_1401489C4,
          v12,
          "TcgSetLockingObject",
          (const char *)v53,
          DynamicTerminalClasses,
          (char)v6->MdlAddress,
          v6->Flags,
          *((_BYTE *)&v6->Flags + 4),
          v6->IoStatus.Information,
          HIDWORD(v6->MdlAddress));
      }
    }
  }
  v13 = byte_140168DAA == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = DynamicTerminalClasses;
  if ( v13 )
    goto LABEL_96;
  v51 = 0LL;
  IoGetActivityIdIrp(Irp, &v51);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_96;
    v17 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_95;
  }
  if ( CurrentStackLocation->MajorFunction != 15 )
  {
    if ( CurrentStackLocation->MajorFunction != 27 )
      goto LABEL_96;
    if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v16 = (int *)Irp->IoStatus.Information;
        if ( v16 )
          v2 = *v16;
        LODWORD(v39) = Irp->IoStatus.Status;
        LODWORD(v38) = v2;
        sub_140056AB0(v14, (__int64)CurrentStackLocation, &v51, Irp, v38, v39, v40, v41, v42, v43, v44);
      }
      goto LABEL_96;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_96;
    v17 = &stru_140149FE8;
LABEL_95:
    LODWORD(v38) = Irp->IoStatus.Status;
    sub_140052F3C(v14, v17, &v51, Irp, v38, v39, v40, v41, v42, v43, v44);
    goto LABEL_96;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_96;
  SecurityContext = (__int64)CurrentStackLocation->Parameters.Create.SecurityContext;
  v19 = 0;
  v20 = 0;
  v46 = 0;
  v21 = 0LL;
  v45 = 0;
  v22 = 0;
  v23 = 0;
  v24 = *(unsigned __int8 *)(SecurityContext + 2);
  v25 = 0;
  if ( (_BYTE)v24 != 40 )
  {
    v19 = *(_BYTE *)(SecurityContext + 72);
    v21 = *(_BYTE **)(SecurityContext + 32);
    v22 = *(_BYTE *)(SecurityContext + 11);
    v20 = *(_BYTE *)(SecurityContext + 4);
    goto LABEL_70;
  }
  v24 = *(_DWORD *)(SecurityContext + 20);
  v26 = 0LL;
  v47 = 0;
  if ( v24 )
    goto LABEL_96;
  v27 = *(_DWORD *)(SecurityContext + 56);
  v14 = 0LL;
  v48 = 0;
  v49 = v27;
  if ( !v27 )
    goto LABEL_67;
  v28 = (unsigned int *)(SecurityContext + 120);
  *(_QWORD *)&v50 = SecurityContext + 120;
  while ( 1 )
  {
    v29 = *v28;
    if ( (unsigned int)v29 >= 0x80 )
    {
      v30 = *(unsigned int *)(SecurityContext + 16);
      if ( (unsigned int)v29 < (unsigned int)v30 )
        break;
    }
LABEL_60:
    v14 = (unsigned int)(v14 + 1);
    v28 = (unsigned int *)(v50 + 4);
    v48 = v14;
    *(_QWORD *)&v50 = v50 + 4;
    if ( (unsigned int)v14 >= v27 )
      goto LABEL_66;
  }
  if ( *(_DWORD *)(v29 + SecurityContext) != 64 )
  {
    v14 = (unsigned int)(*(_DWORD *)(v29 + SecurityContext) - 65);
    if ( *(_DWORD *)(v29 + SecurityContext) == 65 )
    {
      v14 = v29 + 56;
      if ( v29 + 56 <= v30 )
      {
        v47 = 1;
        if ( *(_BYTE *)(v29 + SecurityContext + 10) )
          v26 = (char *)(v29 + SecurityContext + 24);
        v20 = *(_BYTE *)(v29 + SecurityContext + 8);
        v21 = *(_BYTE **)(v29 + SecurityContext + 16);
        v22 = *(_BYTE *)(v29 + SecurityContext + 9);
      }
    }
    else if ( *(_DWORD *)(v29 + SecurityContext) == 66 )
    {
      v14 = v29 + 40;
      if ( v29 + 40 <= v30 )
      {
        if ( *(_DWORD *)(v29 + SecurityContext + 12) )
          v26 = (char *)(v29 + SecurityContext + 32);
        v21 = *(_BYTE **)(v29 + SecurityContext + 24);
        goto LABEL_65;
      }
    }
    goto LABEL_58;
  }
  v14 = v29 + 40;
  if ( v29 + 40 > v30 )
  {
LABEL_58:
    if ( v47 )
      goto LABEL_66;
    LODWORD(v14) = v48;
    v27 = v49;
    goto LABEL_60;
  }
  if ( *(_BYTE *)(v29 + SecurityContext + 10) )
    v26 = (char *)(v29 + SecurityContext + 24);
  v21 = *(_BYTE **)(v29 + SecurityContext + 16);
LABEL_65:
  v22 = *(_BYTE *)(v29 + SecurityContext + 9);
  v20 = *(_BYTE *)(v29 + SecurityContext + 8);
LABEL_66:
  v24 = 0;
  v25 = 0;
LABEL_67:
  if ( !v26 )
  {
LABEL_70:
    v31 = DynamicTerminalClasses;
    if ( !v24 )
      goto LABEL_71;
    goto LABEL_96;
  }
  v19 = *v26;
  v31 = DynamicTerminalClasses;
LABEL_71:
  if ( ((v19 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(SecurityContext + 3) == 1 || !v21 || !v22 )
      goto LABEL_91;
    v32 = 0;
    v14 = (unsigned __int64)&v21[v22];
    v33 = v21 + 8;
    if ( (unsigned __int8)((*v21 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v33 <= v14 )
      {
        v32 = 1;
        v23 = v21[1] & 0xF;
        v25 = v21[3];
        v46 = v21[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v33 <= v14 )
      {
        v23 = v21[2] & 0xF;
        v34 = v22;
        if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
          v34 = (unsigned __int8)v21[7] + 8;
        v14 = (unsigned __int64)(v21 + 13);
        v35 = (unsigned __int64)&v21[v34];
        if ( (unsigned __int64)(v21 + 13) > v35 )
          v46 = 0;
        else
          v46 = v21[12];
        if ( (unsigned __int64)(v21 + 14) > v35 )
          v45 = 0;
        else
          v45 = *(_BYTE *)v14;
        v32 = 1;
      }
      v25 = v45;
    }
    if ( v32 )
    {
      LOBYTE(v2) = v46;
      DynamicTerminalClasses = v31;
      v36 = v25;
    }
    else
    {
LABEL_91:
      v23 = 0;
      v36 = 0;
    }
    LOBYTE(v43) = v36;
    LOBYTE(v42) = v2;
    LOBYTE(v41) = v23;
    LOBYTE(v40) = v20;
    LOBYTE(v39) = *(_BYTE *)(SecurityContext + 3);
    LODWORD(v38) = Irp->IoStatus.Status;
    sub_140052E64(v14, SecurityContext, &v51, Irp, v38, v39, v40, v41, v42, v43, Irp);
  }
LABEL_96:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)DynamicTerminalClasses;
}
