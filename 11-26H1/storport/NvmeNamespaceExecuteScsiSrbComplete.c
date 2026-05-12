/*
 * XREFs of NvmeNamespaceExecuteScsiSrbComplete @ 0x140104F50
 * Callers:
 *     <none>
 * Callees:
 *     RaidNtStatusToSrbStatus @ 0x140003A14 (RaidNtStatusToSrbStatus.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

void __fastcall NvmeNamespaceExecuteScsiSrbComplete(union _SLIST_HEADER *a1, __int64 a2, __int64 a3)
{
  int v5; // edi
  __int64 v6; // rsi
  unsigned int v7; // edx
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v10; // edx
  bool v11; // zf
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rsi
  __int64 v17; // rcx
  bool v18; // zf
  int v19; // ecx
  unsigned int v20; // edx
  bool v21; // zf
  char v22; // al
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // r10
  char v26; // dl
  void **v27; // rcx
  _DWORD *v28; // rax
  __int64 v29; // rbx
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  int *v32; // rax
  const EVENT_DESCRIPTOR *v33; // rdx
  __int64 v34; // rdx
  char v35; // r13
  _BYTE *v36; // r9
  unsigned __int8 v37; // bp
  char v38; // r10
  char v39; // bl
  char v40; // r11
  char v41; // r14
  char *v42; // r14
  unsigned int v43; // r12d
  unsigned __int64 v44; // r15
  __int64 v45; // r8
  int v46; // ecx
  char v47; // cl
  char v48; // r8
  char v49; // al
  char *v50; // r11
  unsigned int v51; // eax
  __int64 v52; // [rsp+20h] [rbp-98h]
  char v53; // [rsp+60h] [rbp-58h]
  unsigned int v54; // [rsp+64h] [rbp-54h]
  GUID v55; // [rsp+68h] [rbp-50h] BYREF

  v5 = 0;
  *(_WORD *)(*(_QWORD *)a2 + 4260LL) = *(_WORD *)(a3 + 14);
  v6 = *(_QWORD *)a2;
  v7 = *(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL);
  if ( ((v7 >> 9) & 7) != 0 )
  {
    if ( ((v7 >> 9) & 7) != 1 )
    {
      if ( ((v7 >> 9) & 7) == 2 )
      {
        v8 = v7 >> 1;
        if ( (unsigned __int8)v8 != 128
          && (unsigned __int8)v8 != 129
          && (unsigned __int8)v8 != 130
          && (unsigned __int8)v8 != 131
          && (unsigned __int8)v8 != 132 )
        {
          v9 = (unsigned __int8)v8 - 133;
          if ( (unsigned __int8)v8 != 133 )
          {
LABEL_85:
            if ( v9 == 1 )
              goto LABEL_86;
          }
        }
      }
LABEL_94:
      v15 = -1073741435;
      goto LABEL_26;
    }
    v10 = v7 >> 1;
    if ( (unsigned __int8)v10 > 0x80u )
    {
      if ( (unsigned __int8)v10 == 129 )
        goto LABEL_25;
      v14 = (unsigned __int8)v10 - 130;
      if ( (unsigned __int8)v10 != 130 )
        goto LABEL_74;
    }
    else
    {
      if ( (unsigned __int8)v10 == 128 )
        goto LABEL_25;
      if ( (unsigned __int8)v10 <= 0x11u )
      {
        if ( (unsigned __int8)v10 != 17 )
        {
          if ( (unsigned __int8)v10 <= 9u )
          {
            if ( (unsigned __int8)v10 == 9
              || !(_BYTE)v10
              || (unsigned __int8)v10 == 1
              || (unsigned __int8)v10 == 2
              || (unsigned __int8)v10 == 3 )
            {
              goto LABEL_25;
            }
            v12 = (unsigned __int8)v10 - 5;
            v11 = (unsigned __int8)v10 == 5;
LABEL_22:
            if ( v11 )
              goto LABEL_25;
            v13 = v12 - 1;
            if ( !v13 )
              goto LABEL_25;
            v14 = v13 - 1;
            if ( !v14 )
              goto LABEL_25;
LABEL_74:
            v21 = v14 == 1;
LABEL_93:
            if ( !v21 )
              goto LABEL_94;
LABEL_25:
            v15 = -1073741808;
            goto LABEL_26;
          }
          if ( (unsigned __int8)v10 == 10 )
            goto LABEL_25;
          if ( (unsigned __int8)v10 != 11 )
          {
            if ( (unsigned __int8)v10 == 12
              || (unsigned __int8)v10 == 13
              || (unsigned __int8)v10 == 14
              || (unsigned __int8)v10 == 15 )
            {
              goto LABEL_25;
            }
            if ( (unsigned __int8)v10 != 16 )
              goto LABEL_94;
          }
        }
        v15 = -2147483210;
        goto LABEL_26;
      }
      if ( (unsigned __int8)v10 <= 0x1Au )
      {
        switch ( (unsigned __int8)v10 )
        {
          case 0x1Au:
          case 0x12u:
          case 0x13u:
            goto LABEL_46;
          case 0x14u:
            v15 = -1073741800;
            goto LABEL_26;
          case 0x15u:
            goto LABEL_94;
          case 0x16u:
            goto LABEL_46;
        }
        v19 = (unsigned __int8)v10 - 24;
        v18 = (unsigned __int8)v10 == 24;
        goto LABEL_44;
      }
      if ( (unsigned __int8)v10 == 27 )
      {
        v15 = -1073741637;
        goto LABEL_26;
      }
      if ( (unsigned __int8)v10 == 28 )
        goto LABEL_25;
      if ( (unsigned __int8)v10 != 30 )
      {
        v12 = (unsigned __int8)v10 - 31;
        v11 = (unsigned __int8)v10 == 31;
        goto LABEL_22;
      }
    }
LABEL_86:
    v15 = -1073741790;
    goto LABEL_26;
  }
  v20 = v7 >> 1;
  if ( (unsigned __int8)v20 > 0x80u )
  {
    if ( (unsigned __int8)v20 == 129 )
      goto LABEL_25;
    v14 = (unsigned __int8)v20 - 130;
    if ( (unsigned __int8)v20 != 130 )
      goto LABEL_74;
    v15 = -1073741661;
  }
  else
  {
    if ( (unsigned __int8)v20 == 128 )
      goto LABEL_25;
    if ( (unsigned __int8)v20 <= 0xEu )
    {
      if ( (unsigned __int8)v20 == 14 )
        goto LABEL_25;
      if ( (unsigned __int8)v20 > 7u )
      {
        if ( (unsigned __int8)v20 != 8 && (unsigned __int8)v20 != 9 && (unsigned __int8)v20 != 10 )
        {
          if ( (unsigned __int8)v20 == 11 )
            goto LABEL_25;
          v14 = (unsigned __int8)v20 - 12;
          if ( (unsigned __int8)v20 == 12 )
          {
            v15 = -1073740758;
            goto LABEL_26;
          }
          goto LABEL_74;
        }
      }
      else if ( (unsigned __int8)v20 != 7 )
      {
        if ( !(_BYTE)v20 )
        {
          v15 = 0;
          goto LABEL_26;
        }
        if ( (unsigned __int8)v20 == 1 || (unsigned __int8)v20 == 2 )
          goto LABEL_25;
        if ( (unsigned __int8)v20 == 3 || (unsigned __int8)v20 == 4 )
          goto LABEL_94;
        v19 = (unsigned __int8)v20 - 5;
        v18 = (unsigned __int8)v20 == 5;
LABEL_44:
        if ( !v18 && v19 != 1 )
          goto LABEL_94;
        goto LABEL_46;
      }
LABEL_76:
      v15 = -1073741248;
      goto LABEL_26;
    }
    if ( (unsigned __int8)v20 <= 0x16u )
    {
      if ( (unsigned __int8)v20 == 22
        || (unsigned __int8)v20 == 15
        || (unsigned __int8)v20 == 16
        || (unsigned __int8)v20 == 17
        || (unsigned __int8)v20 == 18
        || (unsigned __int8)v20 == 19 )
      {
        goto LABEL_25;
      }
      v9 = (unsigned __int8)v20 - 20;
      if ( (unsigned __int8)v20 != 20 )
        goto LABEL_85;
LABEL_46:
      v15 = -1073741436;
      goto LABEL_26;
    }
    if ( (unsigned __int8)v20 == 24 )
      goto LABEL_25;
    if ( (unsigned __int8)v20 != 25 && (unsigned __int8)v20 != 26 )
    {
      if ( (unsigned __int8)v20 != 27 )
      {
        if ( (unsigned __int8)v20 == 28 )
          goto LABEL_94;
        v21 = (unsigned __int8)v20 == 30;
        goto LABEL_93;
      }
      goto LABEL_76;
    }
    v15 = -1073741643;
  }
LABEL_26:
  v16 = *(_QWORD *)(v6 + 4184);
  if ( v15 < 0 )
  {
    *(_DWORD *)(v16 + 48) = v15;
    v17 = 0LL;
  }
  else
  {
    *(_DWORD *)(v16 + 48) = 0;
    v17 = *(unsigned int *)(*(_QWORD *)a2 + 4248LL);
  }
  *(_QWORD *)(v16 + 56) = v17;
  v22 = RaidNtStatusToSrbStatus(v15);
  if ( *(char *)(v24 + 3) < 0 )
    v22 |= v25;
  *(_BYTE *)(v24 + 3) = v22;
  if ( !_bittest64((const signed __int64 *)&a1[8].Region, 0x20u)
    && (*(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 2) != 0
    && *(_QWORD *)(*(_QWORD *)a2 + 4160LL)
    && *(_DWORD *)(*(_QWORD *)a2 + 4248LL) )
  {
    if ( (int)v23 >= 0 )
    {
      v26 = *(_BYTE *)(v24 + 2);
      v27 = (void **)(v24 + 24);
      v28 = (_DWORD *)(v24 + 24);
      if ( v26 != 40 )
        v28 = (_DWORD *)(v24 + 12);
      if ( (*v28 & 0x40) != 0 )
      {
        if ( v26 == 40 )
          v27 = (void **)(v24 + 64);
        memmove(*v27, *(const void **)(*(_QWORD *)a2 + 4160LL), *(unsigned int *)(*(_QWORD *)a2 + 4248LL));
      }
    }
    NvmeFreeDmaBuffer(
      (__int64)a1,
      *(_DWORD *)(*(_QWORD *)a2 + 4248LL),
      v23,
      *(_QWORD *)(*(_QWORD *)a2 + 4160LL),
      *(_QWORD *)(*(_QWORD *)a2 + 4168LL));
  }
  v29 = *(_QWORD *)(*(_QWORD *)a2 + 4216LL);
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
  NvmeControllerReclaimExtendedCommand(a1, a2);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v29 + 120));
  v11 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v16 + 141) = -84;
  if ( v11 )
    goto LABEL_180;
  v55 = 0LL;
  IoGetActivityIdIrp(v16, &v55);
  v31 = *(_QWORD *)(v16 + 184);
  if ( *(_BYTE *)v31 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_180;
    v33 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_179;
  }
  if ( *(_BYTE *)v31 != 15 )
  {
    if ( *(_BYTE *)v31 != 27 )
      goto LABEL_180;
    if ( *(_BYTE *)(v31 + 1) == 7 && !*(_DWORD *)(v31 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v32 = *(int **)(v16 + 56);
        if ( v32 )
          v5 = *v32;
        LODWORD(v52) = v5;
        McTemplateK0pqd_EtwWriteTransfer(v30, v31, &v55, v16, v52, *(_DWORD *)(v16 + 48));
      }
      goto LABEL_180;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_180;
    v33 = &EventPnpRequestComplete;
LABEL_179:
    LODWORD(v52) = *(_DWORD *)(v16 + 48);
    McTemplateK0pd_EtwWriteTransfer(v30, v33, &v55, v16, v52);
    goto LABEL_180;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_180;
  v34 = *(_QWORD *)(v31 + 8);
  v35 = 0;
  v36 = 0LL;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  if ( *(_BYTE *)(v34 + 2) != 40 )
  {
    v47 = *(_BYTE *)(v34 + 72);
    v36 = *(_BYTE **)(v34 + 32);
    v37 = *(_BYTE *)(v34 + 11);
    v35 = *(_BYTE *)(v34 + 4);
    if ( *(_BYTE *)(v34 + 2) )
      goto LABEL_180;
LABEL_154:
    LOBYTE(v30) = v47 - 8;
    if ( (v30 & 0x5D) != 0 )
      goto LABEL_180;
    v48 = *(_BYTE *)(v34 + 3);
    if ( v48 == 1 || !v36 || !v37 )
      goto LABEL_173;
    v49 = *v36 & 0x7F;
    if ( v49 == 114 || v49 == 115 )
    {
      v30 = (unsigned __int64)&v36[v37];
      LOBYTE(v34) = 0;
      if ( (unsigned __int64)(v36 + 8) > v30 )
        goto LABEL_171;
      v39 = v36[2];
      v38 = v36[1] & 0xF;
      v40 = v36[3];
    }
    else
    {
      v30 = (unsigned __int64)&v36[v37];
      LOBYTE(v34) = 0;
      if ( (unsigned __int64)(v36 + 8) > v30 )
        goto LABEL_171;
      v50 = v36 + 13;
      v38 = v36[2] & 0xF;
      v51 = v37;
      if ( (unsigned int)(unsigned __int8)v36[7] + 8 <= v37 )
        v51 = (unsigned __int8)v36[7] + 8;
      v30 = (unsigned __int64)&v36[v51];
      if ( (unsigned __int64)v50 <= v30 )
        v39 = v36[12];
      if ( (unsigned __int64)(v36 + 14) > v30 )
        v40 = 0;
      else
        v40 = *v50;
    }
    LOBYTE(v34) = 1;
LABEL_171:
    if ( (_BYTE)v34 )
      v41 = 1;
LABEL_173:
    if ( byte_140173441 < 0 )
    {
      if ( !v41 )
      {
        v40 = 0;
        v39 = 0;
        v38 = 0;
      }
      LODWORD(v52) = *(_DWORD *)(v16 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v30, v34, &v55, v16, v52, v48, v35, v38, v39, v40, v16);
    }
    goto LABEL_180;
  }
  v42 = 0LL;
  v53 = 0;
  if ( *(_DWORD *)(v34 + 20) )
    goto LABEL_180;
  v43 = 0;
  v54 = *(_DWORD *)(v34 + 56);
  if ( !v54 )
    goto LABEL_180;
  while ( 1 )
  {
    v30 = *(unsigned int *)(v34 + 4LL * v43 + 120);
    if ( (unsigned int)v30 >= 0x80 )
    {
      v44 = *(unsigned int *)(v34 + 16);
      if ( (unsigned int)v30 < (unsigned int)v44 )
        break;
    }
LABEL_145:
    if ( ++v43 >= v54 )
      goto LABEL_151;
  }
  v45 = (unsigned int)v30;
  v46 = *(_DWORD *)(v30 + v34) - 64;
  if ( v46 )
  {
    v30 = (unsigned int)(v46 - 1);
    if ( (_DWORD)v30 )
    {
      if ( (_DWORD)v30 == 1 )
      {
        v30 = v45 + 40;
        if ( v45 + 40 <= v44 )
        {
          if ( *(_DWORD *)(v45 + v34 + 12) )
            v42 = (char *)(v45 + v34 + 32);
          v36 = *(_BYTE **)(v45 + v34 + 24);
          goto LABEL_150;
        }
      }
    }
    else
    {
      v30 = v45 + 56;
      if ( v45 + 56 <= v44 )
      {
        v53 = 1;
        if ( *(_BYTE *)(v45 + v34 + 10) )
          v42 = (char *)(v45 + v34 + 24);
        v35 = *(_BYTE *)(v45 + v34 + 8);
        v36 = *(_BYTE **)(v45 + v34 + 16);
        v37 = *(_BYTE *)(v45 + v34 + 9);
      }
    }
    goto LABEL_144;
  }
  v30 = v45 + 40;
  if ( v45 + 40 > v44 )
  {
LABEL_144:
    if ( v53 )
      goto LABEL_151;
    goto LABEL_145;
  }
  if ( *(_BYTE *)(v45 + v34 + 10) )
    v42 = (char *)(v45 + v34 + 24);
  v36 = *(_BYTE **)(v45 + v34 + 16);
LABEL_150:
  v37 = *(_BYTE *)(v45 + v34 + 9);
  v35 = *(_BYTE *)(v45 + v34 + 8);
LABEL_151:
  if ( v42 )
  {
    v47 = *v42;
    v41 = 0;
    goto LABEL_154;
  }
LABEL_180:
  IofCompleteRequest((PIRP)v16, 1);
}
