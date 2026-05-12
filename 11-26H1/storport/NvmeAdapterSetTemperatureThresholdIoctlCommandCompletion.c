/*
 * XREFs of NvmeAdapterSetTemperatureThresholdIoctlCommandCompletion @ 0x1400DD5E0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall NvmeAdapterSetTemperatureThresholdIoctlCommandCompletion(
        union _SLIST_HEADER *a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v7; // r15
  __int64 v8; // rdi
  __int16 v9; // ax
  unsigned int v10; // edx
  unsigned int v11; // edx
  int v12; // ecx
  unsigned int v13; // edx
  bool v14; // zf
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  int *v21; // rax
  bool v22; // zf
  int v23; // ecx
  unsigned int v24; // edx
  bool v25; // zf
  const EVENT_DESCRIPTOR *v26; // rdx
  __int64 v27; // rdx
  char v28; // r13
  _BYTE *v29; // r9
  unsigned __int8 v30; // si
  char v31; // r11
  char v32; // di
  char v33; // r10
  char v34; // bp
  char *v35; // r14
  unsigned int v36; // r12d
  unsigned __int64 v37; // rbp
  __int64 v38; // r8
  int v39; // ecx
  char v40; // cl
  char v41; // r8
  char v42; // al
  char *v43; // r10
  unsigned int v44; // eax
  char v45; // [rsp+60h] [rbp-58h]
  unsigned int v46; // [rsp+64h] [rbp-54h]
  GUID v47; // [rsp+68h] [rbp-50h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)a2;
  v7 = *(_QWORD *)(*(_QWORD *)a2 + 4184LL);
  v8 = *(_QWORD *)(*(_QWORD *)a2 + 4224LL);
  if ( a3 )
  {
    v9 = *(_WORD *)(a3 + 14);
  }
  else
  {
    *(_WORD *)(v5 + 4260) = 0;
    *(_WORD *)(*(_QWORD *)a2 + 4260LL) &= 0xF1FFu;
    v5 = *(_QWORD *)a2;
    v9 = *(_WORD *)(*(_QWORD *)a2 + 4260LL) & 0xFE01 | 0xC;
  }
  *(_WORD *)(v5 + 4260) = v9;
  v10 = *(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL);
  if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) != 0 )
  {
    if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) != 1 )
    {
      if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) == 2 )
      {
        v11 = v10 >> 1;
        if ( (unsigned __int8)v11 != 128
          && (unsigned __int8)v11 != 129
          && (unsigned __int8)v11 != 130
          && (unsigned __int8)v11 != 131
          && (unsigned __int8)v11 != 132 )
        {
          v12 = (unsigned __int8)v11 - 133;
          if ( (unsigned __int8)v11 != 133 )
          {
LABEL_96:
            if ( v12 == 1 )
              goto LABEL_97;
          }
        }
      }
LABEL_105:
      v18 = -1073741435;
      goto LABEL_29;
    }
    v13 = v10 >> 1;
    if ( (unsigned __int8)v13 > 0x80u )
    {
      if ( (unsigned __int8)v13 == 129 )
        goto LABEL_28;
      v17 = (unsigned __int8)v13 - 130;
      if ( (unsigned __int8)v13 != 130 )
        goto LABEL_85;
    }
    else
    {
      if ( (unsigned __int8)v13 == 128 )
        goto LABEL_28;
      if ( (unsigned __int8)v13 <= 0x11u )
      {
        if ( (unsigned __int8)v13 != 17 )
        {
          if ( (unsigned __int8)v13 <= 9u )
          {
            if ( (unsigned __int8)v13 == 9
              || !(_BYTE)v13
              || (unsigned __int8)v13 == 1
              || (unsigned __int8)v13 == 2
              || (unsigned __int8)v13 == 3 )
            {
              goto LABEL_28;
            }
            v15 = (unsigned __int8)v13 - 5;
            v14 = (unsigned __int8)v13 == 5;
LABEL_25:
            if ( v14 )
              goto LABEL_28;
            v16 = v15 - 1;
            if ( !v16 )
              goto LABEL_28;
            v17 = v16 - 1;
            if ( !v17 )
              goto LABEL_28;
LABEL_85:
            v25 = v17 == 1;
LABEL_104:
            if ( !v25 )
              goto LABEL_105;
LABEL_28:
            v18 = -1073741808;
            goto LABEL_29;
          }
          if ( (unsigned __int8)v13 == 10 )
            goto LABEL_28;
          if ( (unsigned __int8)v13 != 11 )
          {
            if ( (unsigned __int8)v13 == 12
              || (unsigned __int8)v13 == 13
              || (unsigned __int8)v13 == 14
              || (unsigned __int8)v13 == 15 )
            {
              goto LABEL_28;
            }
            if ( (unsigned __int8)v13 != 16 )
              goto LABEL_105;
          }
        }
        v18 = -2147483210;
        goto LABEL_29;
      }
      if ( (unsigned __int8)v13 <= 0x1Au )
      {
        switch ( (unsigned __int8)v13 )
        {
          case 0x1Au:
          case 0x12u:
          case 0x13u:
            goto LABEL_57;
          case 0x14u:
            v18 = -1073741800;
            goto LABEL_29;
          case 0x15u:
            goto LABEL_105;
          case 0x16u:
            goto LABEL_57;
        }
        v23 = (unsigned __int8)v13 - 24;
        v22 = (unsigned __int8)v13 == 24;
        goto LABEL_55;
      }
      if ( (unsigned __int8)v13 == 27 )
      {
        v18 = -1073741637;
        goto LABEL_29;
      }
      if ( (unsigned __int8)v13 == 28 )
        goto LABEL_28;
      if ( (unsigned __int8)v13 != 30 )
      {
        v15 = (unsigned __int8)v13 - 31;
        v14 = (unsigned __int8)v13 == 31;
        goto LABEL_25;
      }
    }
LABEL_97:
    v18 = -1073741790;
    goto LABEL_29;
  }
  v24 = v10 >> 1;
  if ( (unsigned __int8)v24 > 0x80u )
  {
    if ( (unsigned __int8)v24 == 129 )
      goto LABEL_28;
    v17 = (unsigned __int8)v24 - 130;
    if ( (unsigned __int8)v24 != 130 )
      goto LABEL_85;
    v18 = -1073741661;
  }
  else
  {
    if ( (unsigned __int8)v24 == 128 )
      goto LABEL_28;
    if ( (unsigned __int8)v24 <= 0xEu )
    {
      if ( (unsigned __int8)v24 == 14 )
        goto LABEL_28;
      if ( (unsigned __int8)v24 > 7u )
      {
        if ( (unsigned __int8)v24 != 8 && (unsigned __int8)v24 != 9 && (unsigned __int8)v24 != 10 )
        {
          if ( (unsigned __int8)v24 == 11 )
            goto LABEL_28;
          v17 = (unsigned __int8)v24 - 12;
          if ( (unsigned __int8)v24 == 12 )
          {
            v18 = -1073740758;
            goto LABEL_29;
          }
          goto LABEL_85;
        }
      }
      else if ( (unsigned __int8)v24 != 7 )
      {
        if ( !(_BYTE)v24 )
        {
          v18 = 0;
          goto LABEL_29;
        }
        if ( (unsigned __int8)v24 == 1 || (unsigned __int8)v24 == 2 )
          goto LABEL_28;
        if ( (unsigned __int8)v24 == 3 || (unsigned __int8)v24 == 4 )
          goto LABEL_105;
        v23 = (unsigned __int8)v24 - 5;
        v22 = (unsigned __int8)v24 == 5;
LABEL_55:
        if ( !v22 && v23 != 1 )
          goto LABEL_105;
        goto LABEL_57;
      }
LABEL_87:
      v18 = -1073741248;
      goto LABEL_29;
    }
    if ( (unsigned __int8)v24 <= 0x16u )
    {
      if ( (unsigned __int8)v24 == 22
        || (unsigned __int8)v24 == 15
        || (unsigned __int8)v24 == 16
        || (unsigned __int8)v24 == 17
        || (unsigned __int8)v24 == 18
        || (unsigned __int8)v24 == 19 )
      {
        goto LABEL_28;
      }
      v12 = (unsigned __int8)v24 - 20;
      if ( (unsigned __int8)v24 != 20 )
        goto LABEL_96;
LABEL_57:
      v18 = -1073741436;
      goto LABEL_29;
    }
    if ( (unsigned __int8)v24 == 24 )
      goto LABEL_28;
    if ( (unsigned __int8)v24 != 25 && (unsigned __int8)v24 != 26 )
    {
      if ( (unsigned __int8)v24 != 27 )
      {
        if ( (unsigned __int8)v24 == 28 )
          goto LABEL_105;
        v25 = (unsigned __int8)v24 == 30;
        goto LABEL_104;
      }
      goto LABEL_87;
    }
    v18 = -1073741643;
  }
LABEL_29:
  *(_DWORD *)(v7 + 48) = v18;
  *(_QWORD *)(v7 + 56) = 0LL;
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
  NvmeControllerReclaimExtendedCommand(a1, a2);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 152));
  v14 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v7 + 141) = -84;
  if ( v14 )
    goto LABEL_166;
  v47 = 0LL;
  IoGetActivityIdIrp(v7, &v47);
  v20 = *(_QWORD *)(v7 + 184);
  if ( *(_BYTE *)v20 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_166;
    v26 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_165;
  }
  if ( *(_BYTE *)v20 != 15 )
  {
    if ( *(_BYTE *)v20 != 27 )
      goto LABEL_166;
    if ( *(_BYTE *)(v20 + 1) == 7 && !*(_DWORD *)(v20 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v21 = *(int **)(v7 + 56);
        if ( v21 )
          v4 = *v21;
        McTemplateK0pqd_EtwWriteTransfer(v19, v20, &v47, v7, v4, *(_DWORD *)(v7 + 48));
      }
      goto LABEL_166;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_166;
    v26 = &EventPnpRequestComplete;
LABEL_165:
    McTemplateK0pd_EtwWriteTransfer(v19, v26, &v47, v7, *(_DWORD *)(v7 + 48));
    goto LABEL_166;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_166;
  v27 = *(_QWORD *)(v20 + 8);
  v28 = 0;
  v29 = 0LL;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  if ( *(_BYTE *)(v27 + 2) != 40 )
  {
    v40 = *(_BYTE *)(v27 + 72);
    v29 = *(_BYTE **)(v27 + 32);
    v30 = *(_BYTE *)(v27 + 11);
    v28 = *(_BYTE *)(v27 + 4);
    if ( *(_BYTE *)(v27 + 2) )
      goto LABEL_166;
LABEL_140:
    LOBYTE(v19) = v40 - 8;
    if ( (v19 & 0x5D) != 0 )
      goto LABEL_166;
    v41 = *(_BYTE *)(v27 + 3);
    if ( v41 == 1 || !v29 || !v30 )
      goto LABEL_159;
    v42 = *v29 & 0x7F;
    if ( v42 == 114 || v42 == 115 )
    {
      v19 = (unsigned __int64)&v29[v30];
      LOBYTE(v27) = 0;
      if ( (unsigned __int64)(v29 + 8) > v19 )
        goto LABEL_157;
      v32 = v29[2];
      v31 = v29[1] & 0xF;
      v33 = v29[3];
    }
    else
    {
      v19 = (unsigned __int64)&v29[v30];
      LOBYTE(v27) = 0;
      if ( (unsigned __int64)(v29 + 8) > v19 )
        goto LABEL_157;
      v43 = v29 + 13;
      v31 = v29[2] & 0xF;
      v44 = v30;
      if ( (unsigned int)(unsigned __int8)v29[7] + 8 <= v30 )
        v44 = (unsigned __int8)v29[7] + 8;
      v19 = (unsigned __int64)&v29[v44];
      if ( (unsigned __int64)v43 <= v19 )
        v32 = v29[12];
      if ( (unsigned __int64)(v29 + 14) > v19 )
        v33 = 0;
      else
        v33 = *v43;
    }
    LOBYTE(v27) = 1;
LABEL_157:
    if ( (_BYTE)v27 )
      v34 = 1;
LABEL_159:
    if ( byte_140173441 < 0 )
    {
      if ( !v34 )
      {
        v33 = 0;
        v32 = 0;
        v31 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v19, v27, &v47, v7, *(_DWORD *)(v7 + 48), v41, v28, v31, v32, v33, v7);
    }
    goto LABEL_166;
  }
  v35 = 0LL;
  v45 = 0;
  if ( *(_DWORD *)(v27 + 20) )
    goto LABEL_166;
  v36 = 0;
  v46 = *(_DWORD *)(v27 + 56);
  if ( !v46 )
    goto LABEL_166;
  while ( 1 )
  {
    v19 = *(unsigned int *)(v27 + 4LL * v36 + 120);
    if ( (unsigned int)v19 >= 0x80 )
    {
      v37 = *(unsigned int *)(v27 + 16);
      if ( (unsigned int)v19 < (unsigned int)v37 )
        break;
    }
LABEL_131:
    if ( ++v36 >= v46 )
      goto LABEL_137;
  }
  v38 = (unsigned int)v19;
  v39 = *(_DWORD *)(v19 + v27) - 64;
  if ( v39 )
  {
    v19 = (unsigned int)(v39 - 1);
    if ( (_DWORD)v19 )
    {
      if ( (_DWORD)v19 == 1 )
      {
        v19 = v38 + 40;
        if ( v38 + 40 <= v37 )
        {
          if ( *(_DWORD *)(v38 + v27 + 12) )
            v35 = (char *)(v38 + v27 + 32);
          v29 = *(_BYTE **)(v38 + v27 + 24);
          goto LABEL_136;
        }
      }
    }
    else
    {
      v19 = v38 + 56;
      if ( v38 + 56 <= v37 )
      {
        v45 = 1;
        if ( *(_BYTE *)(v38 + v27 + 10) )
          v35 = (char *)(v38 + v27 + 24);
        v28 = *(_BYTE *)(v38 + v27 + 8);
        v29 = *(_BYTE **)(v38 + v27 + 16);
        v30 = *(_BYTE *)(v38 + v27 + 9);
      }
    }
    goto LABEL_130;
  }
  v19 = v38 + 40;
  if ( v38 + 40 > v37 )
  {
LABEL_130:
    if ( v45 )
      goto LABEL_137;
    goto LABEL_131;
  }
  if ( *(_BYTE *)(v38 + v27 + 10) )
    v35 = (char *)(v38 + v27 + 24);
  v29 = *(_BYTE **)(v38 + v27 + 16);
LABEL_136:
  v30 = *(_BYTE *)(v38 + v27 + 9);
  v28 = *(_BYTE *)(v38 + v27 + 8);
LABEL_137:
  if ( v35 )
  {
    v40 = *v35;
    v34 = 0;
    goto LABEL_140;
  }
LABEL_166:
  IofCompleteRequest((PIRP)v7, 1);
}
