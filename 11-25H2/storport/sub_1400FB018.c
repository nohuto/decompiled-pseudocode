/*
 * XREFs of sub_1400FB018 @ 0x1400FB018
 * Callers:
 *     sub_14010216C @ 0x14010216C (sub_14010216C.c)
 * Callees:
 *     sub_140018E30 @ 0x140018E30 (sub_140018E30.c)
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_140037B0C @ 0x140037B0C (sub_140037B0C.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400BC3FC @ 0x1400BC3FC (sub_1400BC3FC.c)
 *     sub_1400F8C38 @ 0x1400F8C38 (sub_1400F8C38.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400FB018(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // ebx
  volatile signed __int32 *v6; // r14
  __int64 v7; // r9
  __int64 v8; // r13
  _BYTE **v9; // r15
  char v10; // dl
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  const int *v14; // rdx
  __int64 v15; // r9
  const int *v16; // rdx
  bool v17; // cf
  __int64 v18; // r8
  __int64 v19; // r9
  PIRP Irp; // rax
  IRP *v21; // r13
  int Status; // r12d
  __int64 v23; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  void *v25; // xmm0_8
  __int64 v26; // rcx
  bool v27; // zf
  unsigned __int64 v28; // rcx
  _BYTE *v29; // rdx
  int *v30; // rax
  const EVENT_DESCRIPTOR *v31; // rdx
  unsigned __int64 v32; // rdx
  char v33; // r15
  _BYTE *v34; // r9
  unsigned __int8 v35; // r10
  char v36; // r11
  char v37; // si
  char v38; // r13
  char *v39; // rsi
  unsigned int v40; // eax
  unsigned int v41; // r8d
  unsigned int *v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // r14
  char v45; // cl
  char v46; // r8
  _BYTE *v47; // rax
  unsigned int v48; // eax
  char v49; // al
  __int64 v51; // [rsp+20h] [rbp-E0h]
  __int64 v52; // [rsp+28h] [rbp-D8h]
  char v53; // [rsp+60h] [rbp-A0h]
  char v54; // [rsp+60h] [rbp-A0h]
  char v55; // [rsp+61h] [rbp-9Fh] BYREF
  unsigned int v56; // [rsp+64h] [rbp-9Ch]
  int v57; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v58; // [rsp+70h] [rbp-90h] BYREF
  int v59; // [rsp+78h] [rbp-88h] BYREF
  __int64 v60; // [rsp+80h] [rbp-80h] BYREF
  __int64 v61; // [rsp+88h] [rbp-78h]
  GUID v62; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v64; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C8h] [rbp-38h]
  __int64 v66; // [rsp+D0h] [rbp-30h]
  __int64 v67; // [rsp+D8h] [rbp-28h]
  __int64 v68; // [rsp+E0h] [rbp-20h]
  __int64 v69; // [rsp+E8h] [rbp-18h]
  int *v70; // [rsp+F0h] [rbp-10h]
  __int64 v71; // [rsp+F8h] [rbp-8h]
  int *v72; // [rsp+100h] [rbp+0h]
  __int64 v73; // [rsp+108h] [rbp+8h]
  unsigned __int64 *v74; // [rsp+110h] [rbp+10h]
  __int64 v75; // [rsp+118h] [rbp+18h]
  char v76[16]; // [rsp+120h] [rbp+20h] BYREF
  char *v77; // [rsp+130h] [rbp+30h]
  __int64 v78; // [rsp+138h] [rbp+38h]
  char v79[16]; // [rsp+140h] [rbp+40h] BYREF

  v2 = *(_DWORD *)(a1 + 96);
  v3 = 0;
  v6 = 0LL;
  if ( !v2 || (unsigned int)(v2 - 5) <= 1 || (v7 = *(_QWORD *)(a1 + 16)) == 0 )
  {
    Status = -1073741810;
    v9 = (_BYTE **)(a2 + 184);
    goto LABEL_37;
  }
  v8 = *(_QWORD *)(v7 + 128);
  v9 = (_BYTE **)(a2 + 184);
  v61 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)&v62.Data1 = v8;
  v10 = *(_BYTE *)(v61 + 8);
  v56 = *(_DWORD *)(v61 + 16);
  v53 = v10;
  if ( v56 == 1 )
  {
    v6 = (volatile signed __int32 *)(a1 + 264);
  }
  else if ( v56 == 2 )
  {
    v6 = (volatile signed __int32 *)(a1 + 272);
  }
  else
  {
    v11 = v56 - 3;
    if ( v56 != 3 )
    {
      if ( v56 == 4 )
      {
        v12 = *(_QWORD *)(a1 + 112);
        if ( v10 )
        {
          *(_QWORD *)(a1 + 112) = v12 | 0x40;
          *(_QWORD *)(v8 + 144) |= 0x2000uLL;
          if ( (unsigned int)dword_140168178 > 5 && sub_14003F840(v11, 0x400000000000LL) )
          {
            v14 = *(const int **)(v8 + 1016);
            v64 = &v60;
            v60 = 0x1000000LL;
            v66 = v8 + 1032;
            v68 = a1 + 160;
            v57 = *(_DWORD *)(a1 + 56);
            v70 = &v57;
            v59 = *(_DWORD *)(v8 + 56);
            v72 = &v59;
            LODWORD(v58) = *(unsigned __int16 *)(v13 + 4);
            v74 = &v58;
            v65 = 8LL;
            v67 = 16LL;
            v69 = 16LL;
            v71 = 4LL;
            v73 = 4LL;
            v75 = 4LL;
            sub_140037B0C((__int64)v76, v14);
            v16 = *(const int **)(v8 + 1024);
            v17 = (*(_BYTE *)(v15 + 136) & 2) != 0;
            v78 = 1LL;
            v55 = v17 ? 20 : 17;
            v77 = &v55;
            sub_140037B0C((__int64)v79, v16);
            sub_140037A5C((__int64)v63, (unsigned __int8 *)dword_14015AEB0, v18, v19, 0xBu, v63);
          }
        }
        else
        {
          *(_QWORD *)(a1 + 112) = v12 & 0xFFFFFFFFFFFFFFBFuLL;
          *(_QWORD *)(v8 + 144) &= ~0x2000uLL;
        }
      }
      goto LABEL_12;
    }
    v6 = (volatile signed __int32 *)(a1 + 268);
  }
  if ( v6 && !*v6 && !v10 )
  {
    Status = -1073741823;
    goto LABEL_37;
  }
LABEL_12:
  Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v8 + 8) + 76LL) + 3, 0);
  v21 = Irp;
  if ( Irp )
  {
    Status = sub_1400F8C38(a1, (__int64)Irp);
    if ( Status < 0 )
    {
LABEL_35:
      IoFreeIrp(v21);
      goto LABEL_37;
    }
    v23 = v61;
    v21->Tail.Overlay.Thread = *(PETHREAD *)(a2 + 152);
    CurrentStackLocation = v21->Tail.Overlay.CurrentStackLocation;
    v21->IoStatus.Status = -1073741637;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)v23;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)(v23 + 16);
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(v23 + 32);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = *(_OWORD *)(v23 + 48);
    v25 = *(void **)(v23 + 64);
    v26 = *(_QWORD *)&v62.Data1;
    CurrentStackLocation[-1].Context = v25;
    Status = sub_140018E30(*(PDEVICE_OBJECT *)(v26 + 8), v21);
    if ( Status < 0 || (Status = v21->IoStatus.Status, Status < 0) )
    {
      if ( Status != -1073741637 || v56 != 4 )
      {
LABEL_34:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
        goto LABEL_35;
      }
      Status = 0;
    }
    if ( v6 )
    {
      if ( v53 )
        _InterlockedIncrement(v6);
      else
        _InterlockedDecrement(v6);
      IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 8));
      if ( v56 == 1 )
        sub_1400BC3FC(*(_QWORD *)(a1 + 8), *v6);
    }
    goto LABEL_34;
  }
  Status = -1073741801;
LABEL_37:
  v27 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = Status;
  if ( v27 )
    goto LABEL_103;
  v62 = 0LL;
  IoGetActivityIdIrp(a2, &v62);
  v29 = *v9;
  if ( **v9 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_103;
    v31 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_102;
  }
  if ( **v9 != 15 )
  {
    if ( **v9 != 27 )
      goto LABEL_103;
    if ( v29[1] == 7 && !*((_DWORD *)v29 + 2) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v30 = *(int **)(a2 + 56);
        if ( v30 )
          v3 = *v30;
        LODWORD(v52) = *(_DWORD *)(a2 + 48);
        LODWORD(v51) = v3;
        sub_140056AB0(v28, (__int64)v29, &v62, a2, v51, v52);
      }
      goto LABEL_103;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_103;
    v31 = &stru_140149FE8;
LABEL_102:
    LODWORD(v51) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v28, v31, &v62, a2, v51);
    goto LABEL_103;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_103;
  v32 = *((_QWORD *)v29 + 1);
  v33 = 0;
  v34 = 0LL;
  v54 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  if ( *(_BYTE *)(v32 + 2) != 40 )
  {
    v45 = *(_BYTE *)(v32 + 72);
    v34 = *(_BYTE **)(v32 + 32);
    v35 = *(_BYTE *)(v32 + 11);
    v33 = *(_BYTE *)(v32 + 4);
    if ( !*(_BYTE *)(v32 + 2) )
      goto LABEL_79;
    goto LABEL_103;
  }
  v39 = 0LL;
  v55 = 0;
  if ( *(_DWORD *)(v32 + 20) )
    goto LABEL_103;
  v40 = *(_DWORD *)(v32 + 56);
  v28 = 0LL;
  v57 = 0;
  v56 = v40;
  if ( !v40 )
    goto LABEL_76;
  v41 = v56;
  v42 = (unsigned int *)(v32 + 120);
  v58 = v32 + 120;
  while ( 1 )
  {
    v43 = *v42;
    if ( (unsigned int)v43 >= 0x80 )
    {
      v44 = *(unsigned int *)(v32 + 16);
      if ( (unsigned int)v43 < (unsigned int)v44 )
        break;
    }
LABEL_70:
    v28 = (unsigned int)(v28 + 1);
    v42 = (unsigned int *)(v58 + 4);
    v57 = v28;
    v58 += 4LL;
    if ( (unsigned int)v28 >= v41 )
      goto LABEL_76;
  }
  if ( *(_DWORD *)(v43 + v32) != 64 )
  {
    v28 = (unsigned int)(*(_DWORD *)(v43 + v32) - 65);
    if ( *(_DWORD *)(v43 + v32) == 65 )
    {
      v28 = v43 + 56;
      if ( v43 + 56 <= v44 )
      {
        v55 = 1;
        if ( *(_BYTE *)(v43 + v32 + 10) )
          v39 = (char *)(v43 + v32 + 24);
        v33 = *(_BYTE *)(v43 + v32 + 8);
        v34 = *(_BYTE **)(v43 + v32 + 16);
        v35 = *(_BYTE *)(v43 + v32 + 9);
      }
    }
    else if ( *(_DWORD *)(v43 + v32) == 66 )
    {
      v28 = v43 + 40;
      if ( v43 + 40 <= v44 )
      {
        if ( *(_DWORD *)(v43 + v32 + 12) )
          v39 = (char *)(v43 + v32 + 32);
        v34 = *(_BYTE **)(v43 + v32 + 24);
        goto LABEL_75;
      }
    }
    goto LABEL_68;
  }
  v28 = v43 + 40;
  if ( v43 + 40 > v44 )
  {
LABEL_68:
    if ( v55 )
      goto LABEL_76;
    LODWORD(v28) = v57;
    v41 = v56;
    goto LABEL_70;
  }
  if ( *(_BYTE *)(v43 + v32 + 10) )
    v39 = (char *)(v43 + v32 + 24);
  v34 = *(_BYTE **)(v43 + v32 + 16);
LABEL_75:
  v35 = *(_BYTE *)(v43 + v32 + 9);
  v33 = *(_BYTE *)(v43 + v32 + 8);
LABEL_76:
  if ( v39 )
  {
    v45 = *v39;
    v37 = 0;
LABEL_79:
    LOBYTE(v28) = v45 - 8;
    if ( (v28 & 0x5D) == 0 )
    {
      v46 = *(_BYTE *)(v32 + 3);
      if ( v46 == 1 || !v34 || !v35 )
        goto LABEL_98;
      LOBYTE(v32) = 0;
      v28 = (unsigned __int64)&v34[v35];
      v47 = v34 + 8;
      if ( (unsigned __int8)((*v34 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v47 <= v28 )
        {
          LOBYTE(v32) = 1;
          v37 = v34[2];
          v36 = v34[1] & 0xF;
          v38 = v34[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v47 <= v28 )
        {
          v36 = v34[2] & 0xF;
          v48 = v35;
          if ( (unsigned int)(unsigned __int8)v34[7] + 8 <= v35 )
            v48 = (unsigned __int8)v34[7] + 8;
          v28 = (unsigned __int64)(v34 + 13);
          v32 = (unsigned __int64)&v34[v48];
          if ( (unsigned __int64)(v34 + 13) > v32 )
            v54 = 0;
          else
            v54 = v34[12];
          if ( (unsigned __int64)(v34 + 14) <= v32 )
            v38 = *(_BYTE *)v28;
          LOBYTE(v32) = 1;
        }
        v37 = v54;
      }
      if ( (_BYTE)v32 )
      {
        LOBYTE(v3) = v37;
        v49 = v38;
      }
      else
      {
LABEL_98:
        v36 = 0;
        v49 = 0;
      }
      LOBYTE(v52) = v46;
      LODWORD(v51) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v28, v32, &v62, a2, v51, v52, v33, v36, v3, v49, a2);
    }
  }
LABEL_103:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)Status;
}
