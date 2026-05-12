/*
 * XREFs of sub_1400D67D4 @ 0x1400D67D4
 * Callers:
 *     sub_1400D2464 @ 0x1400D2464 (sub_1400D2464.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140018DDC @ 0x140018DDC (sub_140018DDC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400C93A0 @ 0x1400C93A0 (sub_1400C93A0.c)
 *     sub_1400C9524 @ 0x1400C9524 (sub_1400C9524.c)
 *     sub_1400D5D7C @ 0x1400D5D7C (sub_1400D5D7C.c)
 *     sub_1400D629C @ 0x1400D629C (sub_1400D629C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400D67D4(__int64 Context, PIRP Irp)
{
  int v2; // edi
  ULONG v5; // eax
  __int64 v6; // rax
  _QWORD *v7; // r14
  __int64 v8; // rbx
  int v9; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  struct _IO_STACK_LOCATION *v11; // rax
  __int64 v12; // r8
  int v13; // eax
  bool v14; // zf
  unsigned __int64 v15; // rcx
  struct _IO_STACK_LOCATION *v16; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  unsigned __int64 ProviderId; // rdx
  char v20; // r12
  char v21; // r11
  _BYTE *v22; // r8
  unsigned __int8 v23; // r10
  char v24; // bp
  int v25; // eax
  char v26; // r15
  char *v27; // r14
  unsigned int v28; // r13d
  unsigned __int64 v29; // r15
  __int64 v30; // r9
  int v31; // ecx
  int v32; // r14d
  char v33; // r9
  _BYTE *v34; // rax
  unsigned int v35; // eax
  char v36; // al
  __int64 v38; // [rsp+20h] [rbp-A8h]
  __int64 v39; // [rsp+28h] [rbp-A0h]
  __int64 v40; // [rsp+30h] [rbp-98h]
  __int64 v41; // [rsp+38h] [rbp-90h]
  char v42; // [rsp+60h] [rbp-68h]
  char v43; // [rsp+61h] [rbp-67h]
  char v44; // [rsp+62h] [rbp-66h]
  unsigned int v45; // [rsp+68h] [rbp-60h]
  GUID v46; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  if ( byte_1401688A8 )
  {
    v5 = IoSizeofWorkItem();
    v6 = sub_1400143E0(64LL, v5 + 24LL, 1230463314LL, *(_QWORD *)(Context + 8));
    v7 = (_QWORD *)v6;
    if ( v6 )
    {
      v8 = v6 + 24;
      IoInitializeWorkItem(*(PVOID *)(Context + 8), (PIO_WORKITEM)(v6 + 24));
      *v7 = v8;
      v7[1] = Irp;
      v7[2] = Context;
      v9 = 259;
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                                 + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      v11 = Irp->Tail.Overlay.CurrentStackLocation;
      v11[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&sub_1400DA470;
      v11[-1].Context = v7;
      v11[-1].Control = -32;
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IofCallDriver(*(PDEVICE_OBJECT *)(Context + 24), Irp);
      return (unsigned int)v9;
    }
  }
  v9 = sub_140018DDC(*(struct _DEVICE_OBJECT **)(Context + 24), Irp);
  if ( v9 >= 0 )
  {
    if ( (unsigned int)sub_1400C93A0() )
      v13 = sub_1400D629C(Context, (__int64)Irp);
    else
      v13 = sub_1400D5D7C(Context, (__int64)Irp);
    v9 = v13;
    if ( v13 >= 0 )
      goto LABEL_12;
  }
  else
  {
    *(_DWORD *)(Context + 1012) = 1;
  }
  if ( (byte_1401694FA & 1) != 0 )
    sub_1400C9524(
      Context + 1032,
      &stru_14014A490,
      v12,
      *(_DWORD *)(Context + 56),
      Context + 1032,
      *(const wchar_t **)(Context + 1016),
      v9,
      *(_DWORD *)(Context + 1012));
LABEL_12:
  v14 = byte_140168DAA == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = v9;
  if ( v14 )
    goto LABEL_79;
  v46 = 0LL;
  IoGetActivityIdIrp(Irp, &v46);
  v16 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v16->MajorFunction == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_79;
    v18 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_78;
  }
  if ( v16->MajorFunction != 15 )
  {
    if ( v16->MajorFunction != 27 )
      goto LABEL_79;
    if ( v16->MinorFunction == 7 && !v16->Parameters.Read.Length )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v2 = *Information;
        LODWORD(v39) = Irp->IoStatus.Status;
        LODWORD(v38) = v2;
        sub_140056AB0(v15, (__int64)v16, &v46, Irp, v38, v39);
      }
      goto LABEL_79;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_79;
    v18 = &stru_140149FE8;
LABEL_78:
    LODWORD(v38) = Irp->IoStatus.Status;
    sub_140052F3C(v15, v18, &v46, Irp, v38);
    goto LABEL_79;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_79;
  ProviderId = v16->Parameters.WMI.ProviderId;
  v20 = 0;
  v21 = 0;
  v43 = 0;
  v22 = 0LL;
  v42 = 0;
  v23 = 0;
  v24 = 0;
  v25 = *(unsigned __int8 *)(ProviderId + 2);
  v26 = 0;
  if ( (_BYTE)v25 != 40 )
  {
    v20 = *(_BYTE *)(ProviderId + 72);
    v22 = *(_BYTE **)(ProviderId + 32);
    v23 = *(_BYTE *)(ProviderId + 11);
    v21 = *(_BYTE *)(ProviderId + 4);
    goto LABEL_53;
  }
  v25 = *(_DWORD *)(ProviderId + 20);
  v27 = 0LL;
  v44 = 0;
  if ( v25 )
    goto LABEL_79;
  v15 = *(unsigned int *)(ProviderId + 56);
  v28 = 0;
  v45 = v15;
  if ( !(_DWORD)v15 )
    goto LABEL_50;
  while ( 1 )
  {
    v15 = *(unsigned int *)(ProviderId + 4LL * v28 + 120);
    if ( (unsigned int)v15 >= 0x80 )
    {
      v29 = *(unsigned int *)(ProviderId + 16);
      if ( (unsigned int)v15 < (unsigned int)v29 )
        break;
    }
LABEL_43:
    if ( ++v28 >= v45 )
      goto LABEL_49;
  }
  v30 = (unsigned int)v15;
  v31 = *(_DWORD *)(v15 + ProviderId) - 64;
  if ( v31 )
  {
    v15 = (unsigned int)(v31 - 1);
    if ( (_DWORD)v15 )
    {
      if ( (_DWORD)v15 == 1 )
      {
        v15 = v30 + 40;
        if ( v30 + 40 <= v29 )
        {
          if ( *(_DWORD *)(v30 + ProviderId + 12) )
            v27 = (char *)(v30 + ProviderId + 32);
          v22 = *(_BYTE **)(v30 + ProviderId + 24);
          goto LABEL_48;
        }
      }
    }
    else
    {
      v15 = v30 + 56;
      if ( v30 + 56 <= v29 )
      {
        v44 = 1;
        if ( *(_BYTE *)(v30 + ProviderId + 10) )
          v27 = (char *)(v30 + ProviderId + 24);
        v21 = *(_BYTE *)(v30 + ProviderId + 8);
        v22 = *(_BYTE **)(v30 + ProviderId + 16);
        v23 = *(_BYTE *)(v30 + ProviderId + 9);
      }
    }
    goto LABEL_42;
  }
  v15 = v30 + 40;
  if ( v30 + 40 > v29 )
  {
LABEL_42:
    if ( v44 )
      goto LABEL_49;
    goto LABEL_43;
  }
  if ( *(_BYTE *)(v30 + ProviderId + 10) )
    v27 = (char *)(v30 + ProviderId + 24);
  v22 = *(_BYTE **)(v30 + ProviderId + 16);
LABEL_48:
  v23 = *(_BYTE *)(v30 + ProviderId + 9);
  v21 = *(_BYTE *)(v30 + ProviderId + 8);
LABEL_49:
  v25 = 0;
  v26 = 0;
LABEL_50:
  if ( !v27 )
  {
LABEL_53:
    v32 = v9;
    if ( !v25 )
      goto LABEL_54;
    goto LABEL_79;
  }
  v20 = *v27;
  v32 = v9;
LABEL_54:
  if ( ((v20 - 8) & 0x5D) == 0 )
  {
    v33 = *(_BYTE *)(ProviderId + 3);
    if ( v33 == 1 || !v22 || !v23 )
      goto LABEL_74;
    LOBYTE(ProviderId) = 0;
    v15 = (unsigned __int64)&v22[v23];
    v34 = v22 + 8;
    if ( (unsigned __int8)((*v22 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v34 <= v15 )
      {
        LOBYTE(ProviderId) = 1;
        v24 = v22[1] & 0xF;
        v26 = v22[3];
        v43 = v22[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v34 <= v15 )
      {
        v24 = v22[2] & 0xF;
        v35 = v23;
        if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
          v35 = (unsigned __int8)v22[7] + 8;
        v15 = (unsigned __int64)(v22 + 13);
        ProviderId = (unsigned __int64)&v22[v35];
        if ( (unsigned __int64)(v22 + 13) > ProviderId )
          v43 = 0;
        else
          v43 = v22[12];
        if ( (unsigned __int64)(v22 + 14) > ProviderId )
          v42 = 0;
        else
          v42 = *(_BYTE *)v15;
        LOBYTE(ProviderId) = 1;
      }
      v26 = v42;
    }
    if ( (_BYTE)ProviderId )
    {
      LOBYTE(v2) = v43;
      v9 = v32;
      v36 = v26;
    }
    else
    {
LABEL_74:
      v24 = 0;
      v36 = 0;
    }
    LOBYTE(v41) = v24;
    LOBYTE(v40) = v21;
    LOBYTE(v39) = v33;
    LODWORD(v38) = Irp->IoStatus.Status;
    sub_140052E64(v15, ProviderId, &v46, Irp, v38, v39, v40, v41, v2, v36, Irp);
  }
LABEL_79:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v9;
}
