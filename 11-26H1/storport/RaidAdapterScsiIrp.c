/*
 * XREFs of RaidAdapterScsiIrp @ 0x140185F18
 * Callers:
 *     RaDriverScsiIrp @ 0x140003DF0 (RaDriverScsiIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterScsiIrp(__int64 a1, __int64 a2)
{
  int v3; // ebx
  bool v4; // zf
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  int *v7; // rax
  const EVENT_DESCRIPTOR *v8; // rdx
  __int64 v9; // rdx
  char v10; // r13
  _BYTE *v11; // r9
  unsigned __int8 v12; // bp
  char v13; // r11
  char v14; // si
  char v15; // r10
  char v16; // r14
  char *v17; // r14
  unsigned int v18; // r12d
  unsigned __int64 v19; // r15
  __int64 v20; // r8
  int v21; // ecx
  char v22; // cl
  char v23; // r8
  char v24; // al
  char *v25; // r10
  unsigned int v26; // eax
  __int64 v28; // [rsp+20h] [rbp-98h]
  char v29; // [rsp+60h] [rbp-58h]
  unsigned int v30; // [rsp+64h] [rbp-54h]
  GUID v31; // [rsp+68h] [rbp-50h] BYREF

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Eu,
      (__int64)&WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
      a1,
      a2);
  }
  v3 = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v4 = StorEtwLoggingEnabled == 0;
  *(_DWORD *)(a2 + 48) = -1073741823;
  if ( v4 )
    goto LABEL_71;
  v31 = 0LL;
  IoGetActivityIdIrp(a2, &v31);
  v6 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v6 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_71;
    LODWORD(v28) = *(_DWORD *)(a2 + 48);
    v8 = &EventNonReadWriteRequestComplete;
    goto LABEL_70;
  }
  if ( *(_BYTE *)v6 != 15 )
  {
    if ( *(_BYTE *)v6 != 27 )
      goto LABEL_71;
    if ( *(_BYTE *)(v6 + 1) == 7 && !*(_DWORD *)(v6 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v7 = *(int **)(a2 + 56);
        if ( v7 )
          v3 = *v7;
        LODWORD(v28) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v5, v6, &v31, a2, v28, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_71;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_71;
    v8 = &EventPnpRequestComplete;
    LODWORD(v28) = *(_DWORD *)(a2 + 48);
LABEL_70:
    McTemplateK0pd_EtwWriteTransfer(v5, v8, &v31, a2, v28);
    goto LABEL_71;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_71;
  v9 = *(_QWORD *)(v6 + 8);
  v10 = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( *(_BYTE *)(v9 + 2) != 40 )
  {
    v22 = *(_BYTE *)(v9 + 72);
    v11 = *(_BYTE **)(v9 + 32);
    v12 = *(_BYTE *)(v9 + 11);
    v10 = *(_BYTE *)(v9 + 4);
    if ( *(_BYTE *)(v9 + 2) )
      goto LABEL_71;
LABEL_45:
    LOBYTE(v5) = v22 - 8;
    if ( (v5 & 0x5D) != 0 )
      goto LABEL_71;
    v23 = *(_BYTE *)(v9 + 3);
    if ( v23 == 1 || !v11 || !v12 )
      goto LABEL_64;
    v24 = *v11 & 0x7F;
    if ( v24 == 114 || v24 == 115 )
    {
      v5 = (unsigned __int64)&v11[v12];
      LOBYTE(v9) = 0;
      if ( (unsigned __int64)(v11 + 8) > v5 )
        goto LABEL_62;
      v14 = v11[2];
      v13 = v11[1] & 0xF;
      v15 = v11[3];
    }
    else
    {
      v5 = (unsigned __int64)&v11[v12];
      LOBYTE(v9) = 0;
      if ( (unsigned __int64)(v11 + 8) > v5 )
        goto LABEL_62;
      v25 = v11 + 13;
      v13 = v11[2] & 0xF;
      v26 = v12;
      if ( (unsigned int)(unsigned __int8)v11[7] + 8 <= v12 )
        v26 = (unsigned __int8)v11[7] + 8;
      v5 = (unsigned __int64)&v11[v26];
      if ( (unsigned __int64)v25 <= v5 )
        v14 = v11[12];
      if ( (unsigned __int64)(v11 + 14) > v5 )
        v15 = 0;
      else
        v15 = *v25;
    }
    LOBYTE(v9) = 1;
LABEL_62:
    if ( (_BYTE)v9 )
      v16 = 1;
LABEL_64:
    if ( byte_140173441 < 0 )
    {
      if ( !v16 )
      {
        v15 = 0;
        v14 = 0;
        v13 = 0;
      }
      LODWORD(v28) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v5, v9, &v31, a2, v28, v23, v10, v13, v14, v15, a2);
    }
    goto LABEL_71;
  }
  v17 = 0LL;
  v29 = 0;
  if ( *(_DWORD *)(v9 + 20) )
    goto LABEL_71;
  v18 = 0;
  v30 = *(_DWORD *)(v9 + 56);
  if ( !v30 )
    goto LABEL_71;
  while ( 1 )
  {
    v5 = *(unsigned int *)(v9 + 4LL * v18 + 120);
    if ( (unsigned int)v5 >= 0x80 )
    {
      v19 = *(unsigned int *)(v9 + 16);
      if ( (unsigned int)v5 < (unsigned int)v19 )
        break;
    }
LABEL_36:
    if ( ++v18 >= v30 )
      goto LABEL_42;
  }
  v20 = (unsigned int)v5;
  v21 = *(_DWORD *)(v5 + v9) - 64;
  if ( v21 )
  {
    v5 = (unsigned int)(v21 - 1);
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 == 1 )
      {
        v5 = v20 + 40;
        if ( v20 + 40 <= v19 )
        {
          if ( *(_DWORD *)(v20 + v9 + 12) )
            v17 = (char *)(v20 + v9 + 32);
          v11 = *(_BYTE **)(v20 + v9 + 24);
          goto LABEL_41;
        }
      }
    }
    else
    {
      v5 = v20 + 56;
      if ( v20 + 56 <= v19 )
      {
        v29 = 1;
        if ( *(_BYTE *)(v20 + v9 + 10) )
          v17 = (char *)(v20 + v9 + 24);
        v10 = *(_BYTE *)(v20 + v9 + 8);
        v11 = *(_BYTE **)(v20 + v9 + 16);
        v12 = *(_BYTE *)(v20 + v9 + 9);
      }
    }
    goto LABEL_35;
  }
  v5 = v20 + 40;
  if ( v20 + 40 > v19 )
  {
LABEL_35:
    if ( v29 )
      goto LABEL_42;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v20 + v9 + 10) )
    v17 = (char *)(v20 + v9 + 24);
  v11 = *(_BYTE **)(v20 + v9 + 16);
LABEL_41:
  v12 = *(_BYTE *)(v20 + v9 + 9);
  v10 = *(_BYTE *)(v20 + v9 + 8);
LABEL_42:
  if ( v17 )
  {
    v22 = *v17;
    v16 = 0;
    goto LABEL_45;
  }
LABEL_71:
  IofCompleteRequest((PIRP)a2, 0);
  return 3221225473LL;
}
