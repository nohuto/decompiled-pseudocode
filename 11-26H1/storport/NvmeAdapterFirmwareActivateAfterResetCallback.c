/*
 * XREFs of NvmeAdapterFirmwareActivateAfterResetCallback @ 0x1400D5880
 * Callers:
 *     <none>
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall NvmeAdapterFirmwareActivateAfterResetCallback(union _SLIST_HEADER *a1, char a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rbx
  int v7; // ebp
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  __int64 v13; // rdx
  char v14; // r12
  _BYTE *v15; // r9
  unsigned __int8 v16; // di
  char v17; // r10
  char v18; // bl
  char v19; // r11
  char v20; // si
  char *v21; // rsi
  unsigned int v22; // r13d
  unsigned __int64 v23; // r15
  __int64 v24; // r8
  int v25; // ecx
  char v26; // cl
  char v27; // r8
  char v28; // al
  char *v29; // r11
  unsigned int v30; // eax
  __int64 v31; // [rsp+20h] [rbp-D8h]
  __int64 v32; // [rsp+28h] [rbp-D0h]
  __int64 v33; // [rsp+30h] [rbp-C8h]
  __int64 v34; // [rsp+38h] [rbp-C0h]
  __int64 v35; // [rsp+40h] [rbp-B8h]
  __int64 v36; // [rsp+48h] [rbp-B0h]
  char v37; // [rsp+A0h] [rbp-58h]
  unsigned int v38; // [rsp+A4h] [rbp-54h]
  GUID v39; // [rsp+A8h] [rbp-50h] BYREF

  a1[60].Region &= ~0x800uLL;
  a1[60].Region &= ~0x400uLL;
  a1[60].Region &= ~0x800000uLL;
  v5 = *(_QWORD *)(*(_QWORD *)a3 + 4184LL);
  v6 = *(_QWORD *)(*(_QWORD *)a3 + 4224LL);
  v7 = 0;
  *(_QWORD *)(v5 + 56) = 0LL;
  *(_DWORD *)(v5 + 48) = a2 == 0 ? 0xC0000185 : 0;
  StorEtwNvmeControllerEvent(
    (__int64)a1,
    1,
    a2 != 0 ? 4 : 2,
    (__int64)L"Controller reset after firmware activation.",
    L"ResetSuccessful",
    a2,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0);
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a3 + 4256LL), 3u);
  NvmeControllerReclaimExtendedCommand(a1, a3);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v6 + 152));
  v8 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v5 + 141) = -84;
  if ( v8 )
    goto LABEL_67;
  v39 = 0LL;
  IoGetActivityIdIrp(v5, &v39);
  v10 = *(_QWORD *)(v5 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_67;
    v12 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_66;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_67;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v11 = *(int **)(v5 + 56);
        if ( v11 )
          v7 = *v11;
        LODWORD(v32) = *(_DWORD *)(v5 + 48);
        LODWORD(v31) = v7;
        McTemplateK0pqd_EtwWriteTransfer(v9, v10, &v39, v5, v31, v32);
      }
      goto LABEL_67;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_67;
    v12 = &EventPnpRequestComplete;
LABEL_66:
    LODWORD(v31) = *(_DWORD *)(v5 + 48);
    McTemplateK0pd_EtwWriteTransfer(v9, v12, &v39, v5, v31);
    goto LABEL_67;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_67;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0;
  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( *(_BYTE *)(v13 + 2) != 40 )
  {
    v26 = *(_BYTE *)(v13 + 72);
    v15 = *(_BYTE **)(v13 + 32);
    v16 = *(_BYTE *)(v13 + 11);
    v14 = *(_BYTE *)(v13 + 4);
    if ( *(_BYTE *)(v13 + 2) )
      goto LABEL_67;
LABEL_41:
    LOBYTE(v9) = v26 - 8;
    if ( (v9 & 0x5D) != 0 )
      goto LABEL_67;
    v27 = *(_BYTE *)(v13 + 3);
    if ( v27 == 1 || !v15 || !v16 )
      goto LABEL_60;
    v28 = *v15 & 0x7F;
    if ( v28 == 114 || v28 == 115 )
    {
      v9 = (unsigned __int64)&v15[v16];
      LOBYTE(v13) = 0;
      if ( (unsigned __int64)(v15 + 8) > v9 )
        goto LABEL_58;
      v18 = v15[2];
      v17 = v15[1] & 0xF;
      v19 = v15[3];
    }
    else
    {
      v9 = (unsigned __int64)&v15[v16];
      LOBYTE(v13) = 0;
      if ( (unsigned __int64)(v15 + 8) > v9 )
        goto LABEL_58;
      v29 = v15 + 13;
      v17 = v15[2] & 0xF;
      v30 = v16;
      if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
        v30 = (unsigned __int8)v15[7] + 8;
      v9 = (unsigned __int64)&v15[v30];
      if ( (unsigned __int64)v29 <= v9 )
        v18 = v15[12];
      if ( (unsigned __int64)(v15 + 14) > v9 )
        v19 = 0;
      else
        v19 = *v29;
    }
    LOBYTE(v13) = 1;
LABEL_58:
    if ( (_BYTE)v13 )
      v20 = 1;
LABEL_60:
    if ( byte_140173441 < 0 )
    {
      if ( !v20 )
      {
        v19 = 0;
        v18 = 0;
        v17 = 0;
      }
      LOBYTE(v36) = v19;
      LOBYTE(v35) = v18;
      LOBYTE(v34) = v17;
      LOBYTE(v33) = v14;
      LOBYTE(v32) = v27;
      LODWORD(v31) = *(_DWORD *)(v5 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v9, v13, &v39, v5, v31, v32, v33, v34, v35, v36, v5);
    }
    goto LABEL_67;
  }
  v21 = 0LL;
  v37 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_67;
  v22 = 0;
  v38 = *(_DWORD *)(v13 + 56);
  if ( !v38 )
    goto LABEL_67;
  while ( 1 )
  {
    v9 = *(unsigned int *)(v13 + 4LL * v22 + 120);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v23 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v9 < (unsigned int)v23 )
        break;
    }
LABEL_32:
    if ( ++v22 >= v38 )
      goto LABEL_38;
  }
  v24 = (unsigned int)v9;
  v25 = *(_DWORD *)(v9 + v13) - 64;
  if ( v25 )
  {
    v9 = (unsigned int)(v25 - 1);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        v9 = v24 + 40;
        if ( v24 + 40 <= v23 )
        {
          if ( *(_DWORD *)(v24 + v13 + 12) )
            v21 = (char *)(v24 + v13 + 32);
          v15 = *(_BYTE **)(v24 + v13 + 24);
          goto LABEL_37;
        }
      }
    }
    else
    {
      v9 = v24 + 56;
      if ( v24 + 56 <= v23 )
      {
        v37 = 1;
        if ( *(_BYTE *)(v24 + v13 + 10) )
          v21 = (char *)(v24 + v13 + 24);
        v14 = *(_BYTE *)(v24 + v13 + 8);
        v15 = *(_BYTE **)(v24 + v13 + 16);
        v16 = *(_BYTE *)(v24 + v13 + 9);
      }
    }
    goto LABEL_31;
  }
  v9 = v24 + 40;
  if ( v24 + 40 > v23 )
  {
LABEL_31:
    if ( v37 )
      goto LABEL_38;
    goto LABEL_32;
  }
  if ( *(_BYTE *)(v24 + v13 + 10) )
    v21 = (char *)(v24 + v13 + 24);
  v15 = *(_BYTE **)(v24 + v13 + 16);
LABEL_37:
  v16 = *(_BYTE *)(v24 + v13 + 9);
  v14 = *(_BYTE *)(v24 + v13 + 8);
LABEL_38:
  if ( v21 )
  {
    v26 = *v21;
    v20 = 0;
    goto LABEL_41;
  }
LABEL_67:
  IofCompleteRequest((PIRP)v5, 1);
}
