/*
 * XREFs of sub_14000AC80 @ 0x14000AC80
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

void __fastcall sub_14000AC80(
        PDEVICE_OBJECT DeviceObject,
        __int64 MinorFunction,
        __int64 PowerState,
        _BYTE *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v6; // r9
  __int64 v7; // r14
  int v8; // ebx
  bool v9; // zf
  NTSTATUS v10; // esi
  char *v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  void *v14; // rdx
  unsigned __int64 v15; // rdx
  char v16; // r12
  _BYTE *v17; // r9
  unsigned __int8 v18; // r10
  char v19; // bp
  char v20; // si
  char v21; // r11
  char *v22; // r11
  char v23; // r13
  unsigned int v24; // r15d
  unsigned int *v25; // r14
  __int64 v26; // rax
  unsigned __int64 v27; // rsi
  char v28; // cl
  char v29; // r8
  char *v30; // rax
  unsigned int v31; // eax
  char v32; // al
  char v33; // [rsp+60h] [rbp-68h]
  char v34; // [rsp+61h] [rbp-67h]
  NTSTATUS Status; // [rsp+64h] [rbp-64h]
  __int64 v36; // [rsp+68h] [rbp-60h]
  unsigned int v37; // [rsp+70h] [rbp-58h]
  __int128 v38; // [rsp+78h] [rbp-50h] BYREF

  v7 = sub_14000BCAC(DeviceObject, MinorFunction, PowerState);
  v36 = v7;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0(off_140168120->AttachedDevice, 37LL, &unk_14014C778, v7, v6);
  }
  LOBYTE(v8) = 0;
  v9 = byte_140168DAA == 0;
  Status = IoStatus->Status;
  v10 = IoStatus->Status;
  Context[141] = -84;
  *((_DWORD *)Context + 12) = v10;
  if ( v9 )
    goto LABEL_71;
  v38 = 0LL;
  IoGetActivityIdIrp(Context, &v38);
  v12 = *((_QWORD *)Context + 23);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_71;
    v14 = &unk_140148B18;
    goto LABEL_17;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_71;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v13 = (int *)*((_QWORD *)Context + 7);
        if ( v13 )
          v8 = *v13;
        sub_140056AB0((_DWORD)v11, v12, (unsigned int)&v38, (_DWORD)Context, v8, *((_DWORD *)Context + 12));
      }
      goto LABEL_71;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_71;
    v14 = &unk_140149FE8;
LABEL_17:
    sub_140052F3C(v11, v14, &v38, Context, *((_DWORD *)Context + 12));
    goto LABEL_71;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_71;
  v15 = *(_QWORD *)(v12 + 8);
  v16 = 0;
  v17 = 0LL;
  v33 = 0;
  v18 = 0;
  v34 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v15 + 72);
    v17 = *(_BYTE **)(v15 + 32);
    v18 = *(_BYTE *)(v15 + 11);
    v16 = *(_BYTE *)(v15 + 4);
    if ( !*(_BYTE *)(v15 + 2) )
      goto LABEL_48;
    goto LABEL_70;
  }
  v22 = 0LL;
  v23 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_70;
  v24 = 0;
  v37 = *(_DWORD *)(v15 + 56);
  if ( !v37 )
    goto LABEL_45;
  v25 = (unsigned int *)(v15 + 120);
  while ( 1 )
  {
    v26 = *v25;
    if ( (unsigned int)v26 >= 0x80 )
    {
      v27 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v26 < (unsigned int)v27 )
        break;
    }
LABEL_38:
    ++v24;
    ++v25;
    if ( v24 >= v37 )
      goto LABEL_44;
  }
  if ( *(_DWORD *)(v26 + v15) != 64 )
  {
    LODWORD(v11) = *(_DWORD *)(v26 + v15) - 65;
    if ( *(_DWORD *)(v26 + v15) == 65 )
    {
      LODWORD(v11) = v26 + 56;
      if ( v26 + 56 <= v27 )
      {
        v23 = 1;
        if ( *(_BYTE *)(v26 + v15 + 10) )
          v22 = (char *)(v26 + v15 + 24);
        v16 = *(_BYTE *)(v26 + v15 + 8);
        v17 = *(_BYTE **)(v26 + v15 + 16);
        v18 = *(_BYTE *)(v26 + v15 + 9);
      }
    }
    else if ( *(_DWORD *)(v26 + v15) == 66 )
    {
      LODWORD(v11) = v26 + 40;
      if ( v26 + 40 <= v27 )
      {
        if ( *(_DWORD *)(v26 + v15 + 12) )
          v22 = (char *)(v26 + v15 + 32);
        v17 = *(_BYTE **)(v26 + v15 + 24);
        goto LABEL_43;
      }
    }
    goto LABEL_37;
  }
  LODWORD(v11) = v26 + 40;
  if ( v26 + 40 > v27 )
  {
LABEL_37:
    if ( v23 )
      goto LABEL_44;
    goto LABEL_38;
  }
  if ( *(_BYTE *)(v26 + v15 + 10) )
    v22 = (char *)(v26 + v15 + 24);
  v17 = *(_BYTE **)(v26 + v15 + 16);
LABEL_43:
  v18 = *(_BYTE *)(v26 + v15 + 9);
  v16 = *(_BYTE *)(v26 + v15 + 8);
LABEL_44:
  v7 = v36;
  v20 = 0;
LABEL_45:
  if ( v22 )
  {
    v28 = *v22;
    v21 = 0;
LABEL_48:
    LOBYTE(v11) = v28 - 8;
    if ( ((unsigned __int8)v11 & 0x5D) == 0 )
    {
      v29 = *(_BYTE *)(v15 + 3);
      if ( v29 == 1 || !v17 || !v18 )
        goto LABEL_68;
      LOBYTE(v15) = 0;
      v11 = &v17[v18];
      v30 = v17 + 8;
      if ( (unsigned __int8)((*v17 & 0x7F) - 114) <= 1u )
      {
        if ( v30 <= v11 )
        {
          LOBYTE(v15) = 1;
          v20 = v17[2];
          v19 = v17[1] & 0xF;
          v21 = v17[3];
        }
      }
      else
      {
        if ( v30 <= v11 )
        {
          v19 = v17[2] & 0xF;
          v31 = v18;
          if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
            v31 = (unsigned __int8)v17[7] + 8;
          v11 = v17 + 13;
          v15 = (unsigned __int64)&v17[v31];
          if ( (unsigned __int64)(v17 + 13) > v15 )
            v33 = 0;
          else
            v33 = v17[12];
          if ( (unsigned __int64)(v17 + 14) > v15 )
            v34 = 0;
          else
            v34 = *v11;
          LOBYTE(v15) = 1;
        }
        v21 = v34;
        v20 = v33;
      }
      if ( (_BYTE)v15 )
      {
        LOBYTE(v8) = v20;
        v32 = v21;
      }
      else
      {
LABEL_68:
        v19 = 0;
        v32 = 0;
      }
      sub_140052E64(
        (_DWORD)v11,
        v15,
        (unsigned int)&v38,
        (_DWORD)Context,
        *((_DWORD *)Context + 12),
        v29,
        v16,
        v19,
        v8,
        v32,
        (char)Context);
    }
  }
LABEL_70:
  v10 = Status;
LABEL_71:
  IofCompleteRequest((PIRP)Context, 0);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 336));
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8(off_140168120->AttachedDevice, 38LL, &unk_14014C778, v7, Context, v10);
  }
}
