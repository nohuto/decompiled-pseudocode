/*
 * XREFs of sub_1401A0894 @ 0x1401A0894
 * Callers:
 *     sub_1401A4D74 @ 0x1401A4D74 (sub_1401A4D74.c)
 * Callees:
 *     sub_140018E30 @ 0x140018E30 (sub_140018E30.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1401A0894(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v5; // r15
  __int64 v6; // r14
  PIRP Irp; // rax
  int v8; // ebx
  IRP *v9; // rsi
  int v10; // ebp
  IRP *v11; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v13; // r8d
  bool v14; // zf
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int *v17; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  __int64 v19; // rdx
  char v20; // r14
  _BYTE *v21; // r9
  unsigned __int8 v22; // r10
  char v23; // si
  char v24; // r11
  char v25; // r15
  char *v26; // r11
  unsigned int v27; // r13d
  unsigned int *v28; // r12
  __int64 v29; // rax
  unsigned __int64 v30; // rbp
  char v31; // cl
  char v32; // r8
  _BYTE *v33; // rax
  unsigned int v34; // eax
  unsigned __int64 v35; // r8
  char v36; // al
  char v38; // [rsp+60h] [rbp-68h]
  char v39; // [rsp+61h] [rbp-67h]
  NTSTATUS v40; // [rsp+64h] [rbp-64h]
  unsigned int v41; // [rsp+68h] [rbp-60h]
  GUID v42; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(a2 + 24);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
  if ( *(_DWORD *)(v2 + 8) < 0x1Eu )
  {
    ++*(_BYTE *)(a2 + 67);
    *(_QWORD *)(a2 + 184) = v2 + 72;
    return IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 8), (PIRP)a2);
  }
  Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v6 + 8) + 76LL) + 1, 0);
  v8 = 0;
  v9 = Irp;
  if ( Irp )
  {
    v11 = Irp;
    Irp->Tail.Overlay.Thread = *(PETHREAD *)(a2 + 152);
    Irp->IoStatus.Status = -1073741637;
    Irp->AssociatedIrp.MasterIrp = *(struct _IRP **)(a2 + 24);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)v2;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)(v2 + 16);
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(v2 + 32);
    CurrentStackLocation[-1].FileObject = *(PFILE_OBJECT *)(v2 + 48);
    v40 = sub_140018E30(*(PDEVICE_OBJECT *)(v6 + 8), v11);
    v10 = v40;
    if ( v40 >= 0 )
    {
      v13 = *(_DWORD *)(v5 + 8);
      if ( v13 >= *(_DWORD *)(*(_QWORD *)(a1 + 16) + 620LL) )
        v13 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 620LL);
      *(_DWORD *)(v5 + 8) = v13;
      *(_DWORD *)(a2 + 48) = v9->IoStatus.Status;
      *(_QWORD *)(a2 + 56) = v9->IoStatus.Information;
    }
    IoFreeIrp(v9);
  }
  else
  {
    v10 = -1073741801;
    v40 = -1073741801;
  }
  v14 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v10;
  if ( v14 )
    goto LABEL_75;
  v42 = 0LL;
  IoGetActivityIdIrp(a2, &v42);
  v16 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v16 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_75;
    v18 = &stru_140148B18;
    goto LABEL_74;
  }
  if ( *(_BYTE *)v16 != 15 )
  {
    if ( *(_BYTE *)v16 != 27 )
      goto LABEL_75;
    if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v17 = *(int **)(a2 + 56);
        if ( v17 )
          v8 = *v17;
        sub_140056AB0(v15, v16, &v42, a2, v8, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_75;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_75;
    v18 = &stru_140149FE8;
LABEL_74:
    sub_140052F3C(v15, v18, &v42, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_75;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_75;
  v19 = *(_QWORD *)(v16 + 8);
  v20 = 0;
  v21 = 0LL;
  v38 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( *(_BYTE *)(v19 + 2) != 40 )
  {
    v31 = *(_BYTE *)(v19 + 72);
    v21 = *(_BYTE **)(v19 + 32);
    v22 = *(_BYTE *)(v19 + 11);
    v20 = *(_BYTE *)(v19 + 4);
    if ( !*(_BYTE *)(v19 + 2) )
      goto LABEL_51;
    goto LABEL_75;
  }
  v26 = 0LL;
  v39 = 0;
  if ( *(_DWORD *)(v19 + 20) )
    goto LABEL_75;
  v27 = 0;
  v41 = *(_DWORD *)(v19 + 56);
  if ( !v41 )
    goto LABEL_48;
  v28 = (unsigned int *)(v19 + 120);
  while ( 1 )
  {
    v29 = *v28;
    if ( (unsigned int)v29 >= 0x80 )
    {
      v30 = *(unsigned int *)(v19 + 16);
      if ( (unsigned int)v29 < (unsigned int)v30 )
        break;
    }
LABEL_41:
    ++v27;
    ++v28;
    if ( v27 >= v41 )
      goto LABEL_47;
  }
  if ( *(_DWORD *)(v29 + v19) != 64 )
  {
    v15 = (unsigned int)(*(_DWORD *)(v29 + v19) - 65);
    if ( *(_DWORD *)(v29 + v19) == 65 )
    {
      v15 = v29 + 56;
      if ( v29 + 56 <= v30 )
      {
        v39 = 1;
        if ( *(_BYTE *)(v29 + v19 + 10) )
          v26 = (char *)(v29 + v19 + 24);
        v20 = *(_BYTE *)(v29 + v19 + 8);
        v21 = *(_BYTE **)(v29 + v19 + 16);
        v22 = *(_BYTE *)(v29 + v19 + 9);
      }
    }
    else if ( *(_DWORD *)(v29 + v19) == 66 )
    {
      v15 = v29 + 40;
      if ( v29 + 40 <= v30 )
      {
        if ( *(_DWORD *)(v29 + v19 + 12) )
          v26 = (char *)(v29 + v19 + 32);
        v21 = *(_BYTE **)(v29 + v19 + 24);
        goto LABEL_46;
      }
    }
    goto LABEL_40;
  }
  v15 = v29 + 40;
  if ( v29 + 40 > v30 )
  {
LABEL_40:
    if ( v39 )
      goto LABEL_47;
    goto LABEL_41;
  }
  if ( *(_BYTE *)(v29 + v19 + 10) )
    v26 = (char *)(v29 + v19 + 24);
  v21 = *(_BYTE **)(v29 + v19 + 16);
LABEL_46:
  v22 = *(_BYTE *)(v29 + v19 + 9);
  v20 = *(_BYTE *)(v29 + v19 + 8);
LABEL_47:
  v10 = v40;
LABEL_48:
  if ( v26 )
  {
    v31 = *v26;
    v24 = 0;
LABEL_51:
    LOBYTE(v15) = v31 - 8;
    if ( (v15 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v19 + 3) == 1 || !v21 || !v22 )
        goto LABEL_70;
      v32 = 0;
      v15 = (unsigned __int64)&v21[v22];
      v33 = v21 + 8;
      if ( (unsigned __int8)((*v21 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v33 <= v15 )
        {
          v32 = 1;
          v24 = v21[2];
          v23 = v21[1] & 0xF;
          v25 = v21[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v33 <= v15 )
        {
          v23 = v21[2] & 0xF;
          v34 = v22;
          if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
            v34 = (unsigned __int8)v21[7] + 8;
          v15 = (unsigned __int64)(v21 + 13);
          v35 = (unsigned __int64)&v21[v34];
          if ( (unsigned __int64)(v21 + 13) > v35 )
            v38 = 0;
          else
            v38 = v21[12];
          if ( (unsigned __int64)(v21 + 14) <= v35 )
            v25 = *(_BYTE *)v15;
          v32 = 1;
        }
        v24 = v38;
      }
      if ( v32 )
      {
        LOBYTE(v8) = v24;
        v36 = v25;
      }
      else
      {
LABEL_70:
        v23 = 0;
        v36 = 0;
      }
      sub_140052E64(v15, v19, &v42, a2, *(_DWORD *)(a2 + 48), *(_BYTE *)(v19 + 3), v20, v23, v8, v36, a2);
    }
  }
LABEL_75:
  IofCompleteRequest((PIRP)a2, 0);
  return v10;
}
