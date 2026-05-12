/*
 * XREFs of sub_140083424 @ 0x140083424
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
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

__int64 __fastcall sub_140083424(CMSPAddress *this, PIRP Irp)
{
  int v2; // r12d
  PIRP v3; // rbx
  struct _IRP *MasterIrp; // rdx
  struct _IRP *v6; // rdi
  char v7; // si
  unsigned int Options; // ecx
  unsigned int Information; // eax
  unsigned int v10; // eax
  int DynamicTerminalClasses; // r13d
  char v12; // r11
  __int64 v13; // rsi
  const wchar_t *v14; // r15
  bool v15; // zf
  unsigned __int64 v16; // rcx
  __int64 CurrentStackLocation; // rdx
  int *v18; // rax
  const EVENT_DESCRIPTOR *v19; // rdx
  __int64 v20; // rdx
  char v21; // r14
  char v22; // di
  _BYTE *v23; // r8
  unsigned __int8 v24; // r10
  char v25; // r11
  int v26; // eax
  char v27; // r15
  char *v28; // rsi
  unsigned int v29; // r9d
  unsigned int *v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // r15
  int v33; // esi
  char v34; // r9
  _BYTE *v35; // rax
  unsigned int v36; // eax
  unsigned __int64 v37; // r9
  char v38; // al
  __int64 v40; // [rsp+20h] [rbp-130h]
  __int64 v41; // [rsp+28h] [rbp-128h]
  __int64 v42; // [rsp+30h] [rbp-120h]
  char *v43; // [rsp+38h] [rbp-118h]
  __int64 v44; // [rsp+40h] [rbp-110h]
  char *v45; // [rsp+48h] [rbp-108h]
  _OWORD *v46; // [rsp+50h] [rbp-100h]
  char v47; // [rsp+D0h] [rbp-80h]
  char v48; // [rsp+D1h] [rbp-7Fh]
  char v49; // [rsp+D2h] [rbp-7Eh]
  int v50; // [rsp+D4h] [rbp-7Ch]
  int v51; // [rsp+D8h] [rbp-78h]
  __int64 v52; // [rsp+E0h] [rbp-70h]
  unsigned int v54; // [rsp+E8h] [rbp-68h]
  __int128 v55; // [rsp+F0h] [rbp-60h] BYREF
  GUID v56; // [rsp+100h] [rbp-50h] BYREF
  _OWORD v57[2]; // [rsp+110h] [rbp-40h] BYREF

  v2 = 0;
  v3 = Irp;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v6 = 0LL;
  v7 = 0;
  v55 = 0LL;
  memset(v57, 0, sizeof(v57));
  if ( !MasterIrp )
    goto LABEL_20;
  Options = v3->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
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
  if ( _interlockedbittestandset((volatile signed __int32 *)this + 128, 3u) == 1 )
  {
    DynamicTerminalClasses = -2147483631;
  }
  else
  {
    v7 = 1;
    DynamicTerminalClasses = sub_14008D1F0(this, v57);
    if ( DynamicTerminalClasses >= 0 )
    {
      if ( *(_BYTE *)(*((_QWORD *)this + 449) + 53LL) )
      {
        v46 = v57;
        v45 = (char *)&v6->IoStatus.Information + 4;
        LODWORD(v44) = v6->IoStatus.Information;
        v43 = (char *)&v6->Flags + 5;
        LOBYTE(v42) = ((__int64)v6->MdlAddress & 4) != 0;
        LOBYTE(v41) = *((_BYTE *)&v6->Flags + 4);
        DynamicTerminalClasses = CMSPAddress::get_DynamicTerminalClasses(
                                   this,
                                   (struct tagVARIANT *)HIDWORD(v6->MdlAddress));
      }
      else
      {
        DynamicTerminalClasses = -1073741637;
      }
    }
    _interlockedbittestandreset((volatile signed __int32 *)this + 128, 3u);
  }
LABEL_21:
  v3->IoStatus.Information = 0LL;
  if ( DynamicTerminalClasses < 0 )
  {
    if ( v7 )
    {
      v50 = *((_DWORD *)this + 26);
      sub_1400403EC(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (__int64)&v55);
      v13 = *((_QWORD *)this + 3);
      if ( (byte_1401694F7 & 2) != 0 )
      {
        v14 = (const wchar_t *)&unk_140149394;
        if ( *(_QWORD *)(v13 + 5080) )
          v14 = *(const wchar_t **)(v13 + 5080);
        sub_14007B5A0(
          LODWORD(v6->IoStatus.Information),
          *((unsigned __int8 *)&v6->Flags + 4),
          (int)v6->Flags,
          *(_DWORD *)(*((_QWORD *)this + 3) + 56LL),
          v12,
          SBYTE1(v50),
          SBYTE2(v50),
          (__int64)this + 2104,
          v13 + 5064,
          *((const wchar_t **)&v55 + 1),
          (const char *)this + 168,
          (const char *)this + 177,
          (const char *)this + 242,
          v14,
          "TcgSetLockingObject",
          (const char *)v57,
          DynamicTerminalClasses,
          (char)v6->MdlAddress,
          v6->Flags,
          *((_BYTE *)&v6->Flags + 4),
          v6->IoStatus.Information,
          HIDWORD(v6->MdlAddress));
        v3 = Irp;
      }
    }
  }
  v15 = byte_140168DAA == 0;
  *((_BYTE *)&v3->Tail.CompletionKey + 21) = -84;
  v3->IoStatus.Status = DynamicTerminalClasses;
  if ( v15 )
    goto LABEL_96;
  v56 = 0LL;
  IoGetActivityIdIrp(v3, &v56);
  CurrentStackLocation = (__int64)v3->Tail.Overlay.CurrentStackLocation;
  if ( *(_BYTE *)CurrentStackLocation == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_96;
    v19 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_95;
  }
  if ( *(_BYTE *)CurrentStackLocation != 15 )
  {
    if ( *(_BYTE *)CurrentStackLocation != 27 )
      goto LABEL_96;
    if ( *(_BYTE *)(CurrentStackLocation + 1) == 7 && !*(_DWORD *)(CurrentStackLocation + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v18 = (int *)v3->IoStatus.Information;
        if ( v18 )
          v2 = *v18;
        LODWORD(v41) = v3->IoStatus.Status;
        LODWORD(v40) = v2;
        sub_140056AB0(v16, CurrentStackLocation, &v56, v3, v40, v41, v42, v43, v44, v45, v46);
      }
      goto LABEL_96;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_96;
    v19 = &stru_140149FE8;
LABEL_95:
    LODWORD(v40) = v3->IoStatus.Status;
    sub_140052F3C(v16, v19, &v56, v3, v40, v41, v42, v43, v44, v45, v46);
    goto LABEL_96;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_96;
  v20 = *(_QWORD *)(CurrentStackLocation + 8);
  v21 = 0;
  v22 = 0;
  v48 = 0;
  v23 = 0LL;
  v47 = 0;
  v24 = 0;
  v25 = 0;
  v26 = *(unsigned __int8 *)(v20 + 2);
  v27 = 0;
  if ( (_BYTE)v26 != 40 )
  {
    v21 = *(_BYTE *)(v20 + 72);
    v23 = *(_BYTE **)(v20 + 32);
    v24 = *(_BYTE *)(v20 + 11);
    v22 = *(_BYTE *)(v20 + 4);
    goto LABEL_70;
  }
  v26 = *(_DWORD *)(v20 + 20);
  v28 = 0LL;
  v49 = 0;
  if ( v26 )
    goto LABEL_96;
  v29 = *(_DWORD *)(v20 + 56);
  v16 = 0LL;
  v51 = 0;
  v54 = v29;
  if ( !v29 )
    goto LABEL_67;
  v30 = (unsigned int *)(v20 + 120);
  v52 = v20 + 120;
  while ( 1 )
  {
    v31 = *v30;
    if ( (unsigned int)v31 >= 0x80 )
    {
      v32 = *(unsigned int *)(v20 + 16);
      if ( (unsigned int)v31 < (unsigned int)v32 )
        break;
    }
LABEL_60:
    v16 = (unsigned int)(v16 + 1);
    v30 = (unsigned int *)(v52 + 4);
    v51 = v16;
    v52 += 4LL;
    if ( (unsigned int)v16 >= v29 )
      goto LABEL_66;
  }
  if ( *(_DWORD *)(v31 + v20) != 64 )
  {
    v16 = (unsigned int)(*(_DWORD *)(v31 + v20) - 65);
    if ( *(_DWORD *)(v31 + v20) == 65 )
    {
      v16 = v31 + 56;
      if ( v31 + 56 <= v32 )
      {
        v49 = 1;
        if ( *(_BYTE *)(v31 + v20 + 10) )
          v28 = (char *)(v31 + v20 + 24);
        v22 = *(_BYTE *)(v31 + v20 + 8);
        v23 = *(_BYTE **)(v31 + v20 + 16);
        v24 = *(_BYTE *)(v31 + v20 + 9);
      }
    }
    else if ( *(_DWORD *)(v31 + v20) == 66 )
    {
      v16 = v31 + 40;
      if ( v31 + 40 <= v32 )
      {
        if ( *(_DWORD *)(v31 + v20 + 12) )
          v28 = (char *)(v31 + v20 + 32);
        v23 = *(_BYTE **)(v31 + v20 + 24);
        goto LABEL_65;
      }
    }
    goto LABEL_58;
  }
  v16 = v31 + 40;
  if ( v31 + 40 > v32 )
  {
LABEL_58:
    if ( v49 )
      goto LABEL_66;
    LODWORD(v16) = v51;
    v29 = v54;
    goto LABEL_60;
  }
  if ( *(_BYTE *)(v31 + v20 + 10) )
    v28 = (char *)(v31 + v20 + 24);
  v23 = *(_BYTE **)(v31 + v20 + 16);
LABEL_65:
  v24 = *(_BYTE *)(v31 + v20 + 9);
  v22 = *(_BYTE *)(v31 + v20 + 8);
LABEL_66:
  v26 = 0;
  v27 = 0;
LABEL_67:
  if ( !v28 )
  {
LABEL_70:
    v33 = DynamicTerminalClasses;
    if ( !v26 )
      goto LABEL_71;
    goto LABEL_96;
  }
  v21 = *v28;
  v33 = DynamicTerminalClasses;
LABEL_71:
  if ( ((v21 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v20 + 3) == 1 || !v23 || !v24 )
      goto LABEL_91;
    v34 = 0;
    v16 = (unsigned __int64)&v23[v24];
    v35 = v23 + 8;
    if ( (unsigned __int8)((*v23 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v35 <= v16 )
      {
        v34 = 1;
        v25 = v23[1] & 0xF;
        v27 = v23[3];
        v48 = v23[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v35 <= v16 )
      {
        v25 = v23[2] & 0xF;
        v36 = v24;
        if ( (unsigned int)(unsigned __int8)v23[7] + 8 <= v24 )
          v36 = (unsigned __int8)v23[7] + 8;
        v16 = (unsigned __int64)(v23 + 13);
        v37 = (unsigned __int64)&v23[v36];
        if ( (unsigned __int64)(v23 + 13) > v37 )
          v48 = 0;
        else
          v48 = v23[12];
        if ( (unsigned __int64)(v23 + 14) > v37 )
          v47 = 0;
        else
          v47 = *(_BYTE *)v16;
        v34 = 1;
      }
      v27 = v47;
    }
    if ( v34 )
    {
      LOBYTE(v2) = v48;
      DynamicTerminalClasses = v33;
      v38 = v27;
    }
    else
    {
LABEL_91:
      v25 = 0;
      v38 = 0;
    }
    LOBYTE(v45) = v38;
    LOBYTE(v44) = v2;
    LOBYTE(v43) = v25;
    LOBYTE(v42) = v22;
    LOBYTE(v41) = *(_BYTE *)(v20 + 3);
    LODWORD(v40) = v3->IoStatus.Status;
    sub_140052E64(v16, v20, &v56, v3, v40, v41, v42, v43, v44, v45, v3);
  }
LABEL_96:
  IofCompleteRequest(v3, 0);
  return (unsigned int)DynamicTerminalClasses;
}
