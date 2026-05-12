/*
 * XREFs of NvmeControllerFabricFirmwareGetInfoIoctl @ 0x1400F30B8
 * Callers:
 *     NvmeNamespaceFirmwareGetInfoIoctl @ 0x14010613C (NvmeNamespaceFirmwareGetInfoIoctl.c)
 * Callees:
 *     StorCopyNVMeFirmwareRevision @ 0x14004FCB8 (StorCopyNVMeFirmwareRevision.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeControllerFabricFirmwareGetInfoIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rax
  int v5; // r15d
  size_t v6; // r14
  __int64 v7; // rbp
  _DWORD *v8; // rsi
  GUID v9; // xmm0
  bool v10; // zf
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx
  __int64 v15; // rdx
  char v16; // r13
  _BYTE *v17; // r9
  unsigned __int8 v18; // bp
  char v19; // si
  char v20; // r11
  char v21; // r10
  char v22; // r14
  char *v23; // r14
  unsigned int v24; // r12d
  unsigned __int64 v25; // r15
  __int64 v26; // r8
  int v27; // ecx
  char v28; // cl
  char v29; // r8
  char v30; // al
  char *v31; // r10
  unsigned int v32; // eax
  int v34; // [rsp+20h] [rbp-A8h]
  char v35; // [rsp+60h] [rbp-68h]
  unsigned int v36; // [rsp+64h] [rbp-64h]
  unsigned int v37; // [rsp+68h] [rbp-60h]
  GUID v38; // [rsp+70h] [rbp-58h] BYREF
  char v39; // [rsp+80h] [rbp-48h]

  v2 = 0;
  v36 = 0;
  v38 = 0LL;
  v39 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0;
  if ( *(_DWORD *)(v4 + 16) >= 0x10u )
  {
    v6 = *(unsigned int *)(v4 + 8);
    v7 = 56LL;
    if ( (unsigned int)v6 >= 0x38 )
    {
      v8 = *(_DWORD **)(a2 + 24);
      if ( *v8 == 16 && v8[1] >= 0x10u )
      {
        StorCopyNVMeFirmwareRevision(*(_QWORD *)(a1 + 592), (__int64)&v38, 0x11u);
        memset_0(v8, 0, v6);
        *((_BYTE *)v8 + 8) &= ~1u;
        v9 = v38;
        v8[1] = 56;
        *((_BYTE *)v8 + 33) |= 1u;
        *v8 = 56;
        *(_DWORD *)((char *)v8 + 9) = 16711937;
        v8[4] = 4096;
        v8[5] = 0x10000;
        *(GUID *)(v8 + 10) = v9;
        v8[6] = 32;
        v8[7] = 32;
        *((_BYTE *)v8 + 32) = 1;
        goto LABEL_10;
      }
      v5 = -1073741811;
    }
    else
    {
      v5 = -1073741789;
    }
  }
  else
  {
    v5 = -1073741820;
  }
  v36 = v5;
  v7 = 0LL;
LABEL_10:
  *(_QWORD *)(a2 + 56) = v7;
  v10 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v10 )
    goto LABEL_76;
  v38 = 0LL;
  IoGetActivityIdIrp(a2, &v38);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_76;
    v34 = *(_DWORD *)(a2 + 48);
    v14 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_75;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_76;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v2 = *v13;
        McTemplateK0pqd_EtwWriteTransfer(v11, v12, &v38, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_76;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_76;
    v14 = &EventPnpRequestComplete;
    v34 = *(_DWORD *)(a2 + 48);
LABEL_75:
    McTemplateK0pd_EtwWriteTransfer(v11, v14, &v38, a2, v34);
    goto LABEL_76;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_76;
  v15 = *(_QWORD *)(v12 + 8);
  v16 = 0;
  v17 = 0LL;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v15 + 72);
    v17 = *(_BYTE **)(v15 + 32);
    v18 = *(_BYTE *)(v15 + 11);
    v16 = *(_BYTE *)(v15 + 4);
    if ( *(_BYTE *)(v15 + 2) )
      goto LABEL_76;
LABEL_50:
    LOBYTE(v11) = v28 - 8;
    if ( (v11 & 0x5D) != 0 )
      goto LABEL_76;
    v29 = *(_BYTE *)(v15 + 3);
    if ( v29 == 1 || !v17 || !v18 )
      goto LABEL_69;
    v30 = *v17 & 0x7F;
    if ( v30 == 114 || v30 == 115 )
    {
      v11 = (unsigned __int64)&v17[v18];
      LOBYTE(v15) = 0;
      if ( (unsigned __int64)(v17 + 8) > v11 )
        goto LABEL_67;
      v20 = v17[2];
      v19 = v17[1] & 0xF;
      v21 = v17[3];
    }
    else
    {
      v11 = (unsigned __int64)&v17[v18];
      LOBYTE(v15) = 0;
      if ( (unsigned __int64)(v17 + 8) > v11 )
        goto LABEL_67;
      v31 = v17 + 13;
      v19 = v17[2] & 0xF;
      v32 = v18;
      if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
        v32 = (unsigned __int8)v17[7] + 8;
      v11 = (unsigned __int64)&v17[v32];
      if ( (unsigned __int64)v31 <= v11 )
        v20 = v17[12];
      if ( (unsigned __int64)(v17 + 14) > v11 )
        v21 = 0;
      else
        v21 = *v31;
    }
    LOBYTE(v15) = 1;
LABEL_67:
    if ( (_BYTE)v15 )
      v22 = 1;
LABEL_69:
    if ( byte_140173441 < 0 )
    {
      if ( !v22 )
      {
        v21 = 0;
        v20 = 0;
        v19 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v11, v15, &v38, a2, *(_DWORD *)(a2 + 48), v29, v16, v19, v20, v21, a2);
    }
    goto LABEL_76;
  }
  v23 = 0LL;
  v35 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_76;
  v24 = 0;
  v37 = *(_DWORD *)(v15 + 56);
  if ( !v37 )
    goto LABEL_76;
  while ( 1 )
  {
    v11 = *(unsigned int *)(v15 + 4LL * v24 + 120);
    if ( (unsigned int)v11 >= 0x80 )
    {
      v25 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v11 < (unsigned int)v25 )
        break;
    }
LABEL_41:
    if ( ++v24 >= v37 )
      goto LABEL_47;
  }
  v26 = (unsigned int)v11;
  v27 = *(_DWORD *)(v11 + v15) - 64;
  if ( v27 )
  {
    v11 = (unsigned int)(v27 - 1);
    if ( (_DWORD)v11 )
    {
      if ( (_DWORD)v11 == 1 )
      {
        v11 = v26 + 40;
        if ( v26 + 40 <= v25 )
        {
          if ( *(_DWORD *)(v26 + v15 + 12) )
            v23 = (char *)(v26 + v15 + 32);
          v17 = *(_BYTE **)(v26 + v15 + 24);
          goto LABEL_46;
        }
      }
    }
    else
    {
      v11 = v26 + 56;
      if ( v26 + 56 <= v25 )
      {
        v35 = 1;
        if ( *(_BYTE *)(v26 + v15 + 10) )
          v23 = (char *)(v26 + v15 + 24);
        v16 = *(_BYTE *)(v26 + v15 + 8);
        v17 = *(_BYTE **)(v26 + v15 + 16);
        v18 = *(_BYTE *)(v26 + v15 + 9);
      }
    }
    goto LABEL_40;
  }
  v11 = v26 + 40;
  if ( v26 + 40 > v25 )
  {
LABEL_40:
    if ( v35 )
      goto LABEL_47;
    goto LABEL_41;
  }
  if ( *(_BYTE *)(v26 + v15 + 10) )
    v23 = (char *)(v26 + v15 + 24);
  v17 = *(_BYTE **)(v26 + v15 + 16);
LABEL_46:
  v18 = *(_BYTE *)(v26 + v15 + 9);
  v16 = *(_BYTE *)(v26 + v15 + 8);
LABEL_47:
  if ( v23 )
  {
    v28 = *v23;
    v22 = 0;
    goto LABEL_50;
  }
LABEL_76:
  IofCompleteRequest((PIRP)a2, 0);
  return v36;
}
