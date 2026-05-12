/*
 * XREFs of RaidAdapterIoIrp @ 0x14001FCCC
 * Callers:
 *     RaDriverIoIrp @ 0x14001F950 (RaDriverIoIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterIoIrp(__int64 a1, __int64 a2)
{
  int v3; // ebx
  bool v4; // zf
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  int *v7; // rax
  __int64 v8; // rdx
  char v9; // r13
  _BYTE *v10; // r9
  unsigned __int8 v11; // bp
  char v12; // r11
  char v13; // si
  char v14; // r10
  char v15; // r14
  char *v16; // r14
  unsigned int v17; // r12d
  unsigned __int64 v18; // r15
  __int64 v19; // r8
  int v20; // ecx
  char v21; // cl
  char v22; // r8
  char v23; // al
  char *v24; // r10
  unsigned int v25; // eax
  char v27; // [rsp+60h] [rbp-58h]
  unsigned int v28; // [rsp+64h] [rbp-54h]
  __int128 v29; // [rsp+68h] [rbp-50h] BYREF

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 31LL, &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids, a1, a2);
  }
  LOBYTE(v3) = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v4 = StorEtwLoggingEnabled == 0;
  *(_DWORD *)(a2 + 48) = -1073741823;
  if ( v4 )
    goto LABEL_70;
  v29 = 0LL;
  IoGetActivityIdIrp(a2, &v29);
  v6 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v6 == 14 )
  {
    if ( (byte_140173442 & 8) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v5, &EventNonReadWriteRequestComplete, &v29, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_70;
  }
  if ( *(_BYTE *)v6 != 15 )
  {
    if ( *(_BYTE *)v6 == 27 )
    {
      if ( *(_BYTE *)(v6 + 1) != 7 || *(_DWORD *)(v6 + 8) )
      {
        if ( (byte_140173442 & 0x20) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v5, &EventPnpRequestComplete, &v29, a2, *(_DWORD *)(a2 + 48));
      }
      else if ( (byte_140173442 & 0x40) != 0 )
      {
        v7 = *(int **)(a2 + 56);
        if ( v7 )
          v3 = *v7;
        McTemplateK0pqd_EtwWriteTransfer(v5, v6, (unsigned int)&v29, a2, v3, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_70;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_70;
  v8 = *(_QWORD *)(v6 + 8);
  v9 = 0;
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  if ( *(_BYTE *)(v8 + 2) != 40 )
  {
    v21 = *(_BYTE *)(v8 + 72);
    v10 = *(_BYTE **)(v8 + 32);
    v11 = *(_BYTE *)(v8 + 11);
    v9 = *(_BYTE *)(v8 + 4);
    if ( *(_BYTE *)(v8 + 2) )
      goto LABEL_70;
LABEL_45:
    LOBYTE(v5) = v21 - 8;
    if ( (v5 & 0x5D) != 0 )
      goto LABEL_70;
    v22 = *(_BYTE *)(v8 + 3);
    if ( v22 == 1 || !v10 || !v11 )
      goto LABEL_64;
    v23 = *v10 & 0x7F;
    if ( v23 == 114 || v23 == 115 )
    {
      v5 = (unsigned __int64)&v10[v11];
      LOBYTE(v8) = 0;
      if ( (unsigned __int64)(v10 + 8) > v5 )
        goto LABEL_62;
      v13 = v10[2];
      v12 = v10[1] & 0xF;
      v14 = v10[3];
    }
    else
    {
      v5 = (unsigned __int64)&v10[v11];
      LOBYTE(v8) = 0;
      if ( (unsigned __int64)(v10 + 8) > v5 )
        goto LABEL_62;
      v24 = v10 + 13;
      v12 = v10[2] & 0xF;
      v25 = v11;
      if ( (unsigned int)(unsigned __int8)v10[7] + 8 <= v11 )
        v25 = (unsigned __int8)v10[7] + 8;
      v5 = (unsigned __int64)&v10[v25];
      if ( (unsigned __int64)v24 <= v5 )
        v13 = v10[12];
      if ( (unsigned __int64)(v10 + 14) > v5 )
        v14 = 0;
      else
        v14 = *v24;
    }
    LOBYTE(v8) = 1;
LABEL_62:
    if ( (_BYTE)v8 )
      v15 = 1;
LABEL_64:
    if ( byte_140173441 < 0 )
    {
      if ( !v15 )
      {
        v14 = 0;
        v13 = 0;
        v12 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v5,
        v8,
        (unsigned int)&v29,
        a2,
        *(_DWORD *)(a2 + 48),
        v22,
        v9,
        v12,
        v13,
        v14,
        a2);
    }
    goto LABEL_70;
  }
  v16 = 0LL;
  v27 = 0;
  if ( *(_DWORD *)(v8 + 20) )
    goto LABEL_70;
  v17 = 0;
  v28 = *(_DWORD *)(v8 + 56);
  if ( !v28 )
    goto LABEL_70;
  while ( 1 )
  {
    v5 = *(unsigned int *)(v8 + 4LL * v17 + 120);
    if ( (unsigned int)v5 >= 0x80 )
    {
      v18 = *(unsigned int *)(v8 + 16);
      if ( (unsigned int)v5 < (unsigned int)v18 )
        break;
    }
LABEL_36:
    if ( ++v17 >= v28 )
      goto LABEL_42;
  }
  v19 = (unsigned int)v5;
  v20 = *(_DWORD *)(v5 + v8) - 64;
  if ( v20 )
  {
    LODWORD(v5) = v20 - 1;
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 == 1 )
      {
        LODWORD(v5) = v19 + 40;
        if ( v19 + 40 <= v18 )
        {
          if ( *(_DWORD *)(v19 + v8 + 12) )
            v16 = (char *)(v19 + v8 + 32);
          v10 = *(_BYTE **)(v19 + v8 + 24);
          goto LABEL_41;
        }
      }
    }
    else
    {
      LODWORD(v5) = v19 + 56;
      if ( v19 + 56 <= v18 )
      {
        v27 = 1;
        if ( *(_BYTE *)(v19 + v8 + 10) )
          v16 = (char *)(v19 + v8 + 24);
        v9 = *(_BYTE *)(v19 + v8 + 8);
        v10 = *(_BYTE **)(v19 + v8 + 16);
        v11 = *(_BYTE *)(v19 + v8 + 9);
      }
    }
    goto LABEL_35;
  }
  LODWORD(v5) = v19 + 40;
  if ( v19 + 40 > v18 )
  {
LABEL_35:
    if ( v27 )
      goto LABEL_42;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v19 + v8 + 10) )
    v16 = (char *)(v19 + v8 + 24);
  v10 = *(_BYTE **)(v19 + v8 + 16);
LABEL_41:
  v11 = *(_BYTE *)(v19 + v8 + 9);
  v9 = *(_BYTE *)(v19 + v8 + 8);
LABEL_42:
  if ( v16 )
  {
    v21 = *v16;
    v15 = 0;
    goto LABEL_45;
  }
LABEL_70:
  IofCompleteRequest((PIRP)a2, 0);
  return 3221225473LL;
}
