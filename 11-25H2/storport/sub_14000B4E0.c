/*
 * XREFs of sub_14000B4E0 @ 0x14000B4E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000BCAC @ 0x14000BCAC (sub_14000BCAC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_14000B4E0(
        PDEVICE_OBJECT DeviceObject,
        __int64 MinorFunction,
        __int64 PowerState,
        _BYTE *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  int v8; // r8d
  int v9; // ebx
  bool v10; // zf
  NTSTATUS v11; // ebp
  char *v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  void *v15; // rdx
  unsigned __int64 v16; // rdx
  char v17; // r13
  _BYTE *v18; // r9
  unsigned __int8 v19; // r10
  char v20; // r14
  char v21; // bp
  char v22; // r11
  char *v23; // r11
  unsigned int v24; // r12d
  unsigned int *v25; // r15
  __int64 v26; // rax
  unsigned __int64 v27; // rbp
  char v28; // cl
  char v29; // r8
  char *v30; // rax
  unsigned int v31; // eax
  char v32; // al
  char v33; // [rsp+60h] [rbp-68h]
  char v34; // [rsp+61h] [rbp-67h]
  char v35; // [rsp+62h] [rbp-66h]
  NTSTATUS Status; // [rsp+64h] [rbp-64h]
  unsigned int v37; // [rsp+68h] [rbp-60h]
  __int128 v38; // [rsp+70h] [rbp-58h] BYREF

  v6 = sub_14000BCAC(DeviceObject, MinorFunction, PowerState);
  v7 = v6;
  if ( v8 == 1 )
  {
    *(_BYTE *)(v6 + 107) &= ~2u;
    return;
  }
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0(off_140168120->AttachedDevice, 41LL, &unk_14014C778, v6, Context);
  }
  *(_BYTE *)(v7 + 107) &= ~4u;
  LOBYTE(v9) = 0;
  v10 = byte_140168DAA == 0;
  Status = IoStatus->Status;
  v11 = IoStatus->Status;
  Context[141] = -84;
  *((_DWORD *)Context + 12) = v11;
  if ( v10 )
    goto LABEL_73;
  v38 = 0LL;
  IoGetActivityIdIrp(Context, &v38);
  v13 = *((_QWORD *)Context + 23);
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_73;
    v15 = &unk_140148B18;
    goto LABEL_19;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_73;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v14 = (int *)*((_QWORD *)Context + 7);
        if ( v14 )
          v9 = *v14;
        sub_140056AB0((_DWORD)v12, v13, (unsigned int)&v38, (_DWORD)Context, v9, *((_DWORD *)Context + 12));
      }
      goto LABEL_73;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_73;
    v15 = &unk_140149FE8;
LABEL_19:
    sub_140052F3C(v12, v15, &v38, Context, *((_DWORD *)Context + 12));
    goto LABEL_73;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_73;
  v16 = *(_QWORD *)(v13 + 8);
  v17 = 0;
  v18 = 0LL;
  v33 = 0;
  v19 = 0;
  v34 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(v16 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v16 + 72);
    v18 = *(_BYTE **)(v16 + 32);
    v19 = *(_BYTE *)(v16 + 11);
    v17 = *(_BYTE *)(v16 + 4);
    if ( !*(_BYTE *)(v16 + 2) )
      goto LABEL_50;
    goto LABEL_72;
  }
  v23 = 0LL;
  v35 = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_72;
  v24 = 0;
  v37 = *(_DWORD *)(v16 + 56);
  if ( !v37 )
    goto LABEL_47;
  v25 = (unsigned int *)(v16 + 120);
  while ( 1 )
  {
    v26 = *v25;
    if ( (unsigned int)v26 >= 0x80 )
    {
      v27 = *(unsigned int *)(v16 + 16);
      if ( (unsigned int)v26 < (unsigned int)v27 )
        break;
    }
LABEL_40:
    ++v24;
    ++v25;
    if ( v24 >= v37 )
      goto LABEL_46;
  }
  if ( *(_DWORD *)(v26 + v16) != 64 )
  {
    LODWORD(v12) = *(_DWORD *)(v26 + v16) - 65;
    if ( *(_DWORD *)(v26 + v16) == 65 )
    {
      LODWORD(v12) = v26 + 56;
      if ( v26 + 56 <= v27 )
      {
        v35 = 1;
        if ( *(_BYTE *)(v26 + v16 + 10) )
          v23 = (char *)(v26 + v16 + 24);
        v17 = *(_BYTE *)(v26 + v16 + 8);
        v18 = *(_BYTE **)(v26 + v16 + 16);
        v19 = *(_BYTE *)(v26 + v16 + 9);
      }
    }
    else if ( *(_DWORD *)(v26 + v16) == 66 )
    {
      LODWORD(v12) = v26 + 40;
      if ( v26 + 40 <= v27 )
      {
        if ( *(_DWORD *)(v26 + v16 + 12) )
          v23 = (char *)(v26 + v16 + 32);
        v18 = *(_BYTE **)(v26 + v16 + 24);
        goto LABEL_45;
      }
    }
    goto LABEL_39;
  }
  LODWORD(v12) = v26 + 40;
  if ( v26 + 40 > v27 )
  {
LABEL_39:
    if ( v35 )
      goto LABEL_46;
    goto LABEL_40;
  }
  if ( *(_BYTE *)(v26 + v16 + 10) )
    v23 = (char *)(v26 + v16 + 24);
  v18 = *(_BYTE **)(v26 + v16 + 16);
LABEL_45:
  v19 = *(_BYTE *)(v26 + v16 + 9);
  v17 = *(_BYTE *)(v26 + v16 + 8);
LABEL_46:
  v21 = 0;
LABEL_47:
  if ( v23 )
  {
    v28 = *v23;
    v22 = 0;
LABEL_50:
    LOBYTE(v12) = v28 - 8;
    if ( ((unsigned __int8)v12 & 0x5D) == 0 )
    {
      v29 = *(_BYTE *)(v16 + 3);
      if ( v29 == 1 || !v18 || !v19 )
        goto LABEL_70;
      LOBYTE(v16) = 0;
      v12 = &v18[v19];
      v30 = v18 + 8;
      if ( (unsigned __int8)((*v18 & 0x7F) - 114) <= 1u )
      {
        if ( v30 <= v12 )
        {
          LOBYTE(v16) = 1;
          v21 = v18[2];
          v20 = v18[1] & 0xF;
          v22 = v18[3];
        }
      }
      else
      {
        if ( v30 <= v12 )
        {
          v20 = v18[2] & 0xF;
          v31 = v19;
          if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
            v31 = (unsigned __int8)v18[7] + 8;
          v12 = v18 + 13;
          v16 = (unsigned __int64)&v18[v31];
          if ( (unsigned __int64)(v18 + 13) > v16 )
            v33 = 0;
          else
            v33 = v18[12];
          if ( (unsigned __int64)(v18 + 14) > v16 )
            v34 = 0;
          else
            v34 = *v12;
          LOBYTE(v16) = 1;
        }
        v22 = v34;
        v21 = v33;
      }
      if ( (_BYTE)v16 )
      {
        LOBYTE(v9) = v21;
        v32 = v22;
      }
      else
      {
LABEL_70:
        v20 = 0;
        v32 = 0;
      }
      sub_140052E64(
        (_DWORD)v12,
        v16,
        (unsigned int)&v38,
        (_DWORD)Context,
        *((_DWORD *)Context + 12),
        v29,
        v17,
        v20,
        v9,
        v32,
        (char)Context);
    }
  }
LABEL_72:
  v11 = Status;
LABEL_73:
  IofCompleteRequest((PIRP)Context, 0);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 336));
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8(off_140168120->AttachedDevice, 42LL, &unk_14014C778, v7, Context, v11);
  }
}
