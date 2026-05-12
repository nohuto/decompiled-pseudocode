/*
 * XREFs of NvmeNamespaceDiskVerifyIoctl @ 0x1401A5B5C
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceDiskVerifyIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rdx
  int v6; // esi
  __int64 *v7; // r14
  unsigned __int64 v8; // r9
  __int64 v9; // r11
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r8
  _BYTE *v12; // rax
  unsigned int v13; // r8d
  unsigned int v14; // r13d
  __int64 ExtendedCommand; // rax
  __int64 v16; // r14
  unsigned int v17; // r12d
  unsigned __int64 v18; // rbp
  unsigned int v19; // eax
  unsigned int v20; // r13d
  unsigned int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // r8
  bool v25; // zf
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  int *v28; // rax
  const EVENT_DESCRIPTOR *v29; // rdx
  __int64 v30; // rdx
  char v31; // r13
  _BYTE *v32; // r9
  unsigned __int8 v33; // r14
  char v34; // r10
  char v35; // bp
  char v36; // r11
  char v37; // r15
  char *v38; // r15
  __int64 v39; // rax
  unsigned __int64 v40; // r12
  __int64 v41; // r8
  int v42; // ecx
  char v43; // cl
  char v44; // r8
  char v45; // al
  char *v46; // r11
  unsigned int v47; // eax
  char v49; // [rsp+60h] [rbp-78h]
  unsigned int v50; // [rsp+64h] [rbp-74h]
  int v51; // [rsp+64h] [rbp-74h]
  unsigned int v52; // [rsp+68h] [rbp-70h]
  unsigned int v53; // [rsp+68h] [rbp-70h]
  unsigned __int64 v55; // [rsp+78h] [rbp-60h]
  GUID v56; // [rsp+88h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v4 = a2;
  *(_QWORD *)&v56.Data1 = a2;
  v5 = *(_QWORD *)(a2 + 24);
  v6 = 0;
  v7 = (__int64 *)(v4 + 184);
  if ( !v5 || *(_DWORD *)(*v7 + 16) < 0x10u )
    goto LABEL_25;
  v8 = *(_QWORD *)v5;
  v9 = *(unsigned int *)(v5 + 8);
  if ( *(__int64 *)v5 < 0
    || (v10 = *(unsigned int *)(a1 + 64), v11 = *(_QWORD *)(a1 + 424) * v10, v8 > v11)
    || v9 + v8 < v8
    || ((unsigned int)(v10 - 1) & (v8 | (unsigned int)v9)) != 0
    || v9 + v8 > v11 )
  {
    v7 = (__int64 *)(v4 + 184);
LABEL_25:
    v6 = -1073741811;
    goto LABEL_26;
  }
  if ( !(_DWORD)v9 )
  {
LABEL_9:
    v7 = (__int64 *)(v4 + 184);
    goto LABEL_26;
  }
  v12 = *(_BYTE **)(v2 + 600);
  if ( v12 && *v12 )
  {
    v13 = (1 << *v12) * (1 << ((*(_BYTE *)(v2 + 590) & 0xF) + 12));
  }
  else
  {
    if ( *(char *)(*(_QWORD *)(v2 + 592) + 520LL) >= 0 )
      goto LABEL_9;
    v13 = (_DWORD)v10 << 16;
  }
  v7 = (__int64 *)(v4 + 184);
  v50 = v13 / (unsigned int)v10;
  v55 = v8 / v10;
  v52 = (unsigned int)v9 / (unsigned int)v10;
  v14 = (unsigned int)v9 / (unsigned int)v10;
  if ( (unsigned int)v9 / (unsigned int)v10 )
  {
    ExtendedCommand = NvmeControllerGetExtendedCommand((union _SLIST_HEADER *)v2);
    v16 = ExtendedCommand;
    if ( !ExtendedCommand )
    {
      v6 = -1073741670;
      goto LABEL_9;
    }
    v17 = 0;
    v18 = v55;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~1u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
    do
    {
      v19 = v14;
      v20 = v50;
      v21 = v19 - v17;
      if ( v21 < v50 )
        v20 = v21;
      memset_0((void *)(*(_QWORD *)v16 + 4096LL), 0, 0x40uLL);
      v22 = *(_DWORD *)(a1 + 64);
      v23 = *(_QWORD *)v16;
      *(_DWORD *)(v23 + 4100) = *(_DWORD *)(a1 + 56);
      *(_BYTE *)(v23 + 4096) = 12;
      *(_DWORD *)(v23 + 4096) &= 0xFFFFFCFF;
      *(_QWORD *)(v23 + 4136) = v18 * v22;
      *(_WORD *)(v23 + 4144) = v20 - 1;
      *(_DWORD *)(v23 + 4144) &= 0x3FFFFFFu;
      *(_QWORD *)(v23 + 4148) = 0LL;
      *(_DWORD *)(v23 + 4156) = 0;
      v6 = NvmeControllerProcessCommandSync((PVOID)v2, v16);
      if ( v6 < 0 )
        break;
      v24 = v20;
      v17 += v20;
      v14 = v52;
      v18 += v24;
    }
    while ( v17 < v52 );
    NvmeControllerReclaimExtendedCommand((union _SLIST_HEADER *)v2, v16);
    v7 = (__int64 *)(v4 + 184);
    v4 = *(_QWORD *)&v56.Data1;
  }
LABEL_26:
  v25 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(v4 + 56) = 0LL;
  *(_BYTE *)(v4 + 141) = -84;
  *(_DWORD *)(v4 + 48) = v6;
  if ( v25 )
    goto LABEL_92;
  v56 = 0LL;
  IoGetActivityIdIrp(v4, &v56);
  v27 = *v7;
  if ( *(_BYTE *)*v7 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_92;
    v29 = &EventNonReadWriteRequestComplete;
    goto LABEL_91;
  }
  if ( *(_BYTE *)*v7 != 15 )
  {
    if ( *(_BYTE *)*v7 != 27 )
      goto LABEL_92;
    if ( *(_BYTE *)(v27 + 1) == 7 && !*(_DWORD *)(v27 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v28 = *(int **)(v4 + 56);
        if ( v28 )
          v3 = *v28;
        McTemplateK0pqd_EtwWriteTransfer(v26, v27, &v56, v4, v3, *(_DWORD *)(v4 + 48));
      }
      goto LABEL_92;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_92;
    v29 = &EventPnpRequestComplete;
LABEL_91:
    McTemplateK0pd_EtwWriteTransfer(v26, v29, &v56, v4, *(_DWORD *)(v4 + 48));
    goto LABEL_92;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_92;
  v30 = *(_QWORD *)(v27 + 8);
  v31 = 0;
  v32 = 0LL;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  if ( *(_BYTE *)(v30 + 2) != 40 )
  {
    v43 = *(_BYTE *)(v30 + 72);
    v32 = *(_BYTE **)(v30 + 32);
    v33 = *(_BYTE *)(v30 + 11);
    v31 = *(_BYTE *)(v30 + 4);
    if ( *(_BYTE *)(v30 + 2) )
      goto LABEL_92;
LABEL_66:
    LOBYTE(v26) = v43 - 8;
    if ( (v26 & 0x5D) != 0 )
      goto LABEL_92;
    v44 = *(_BYTE *)(v30 + 3);
    if ( v44 == 1 || !v32 || !v33 )
      goto LABEL_85;
    v45 = *v32 & 0x7F;
    if ( v45 == 114 || v45 == 115 )
    {
      v26 = (unsigned __int64)&v32[v33];
      LOBYTE(v30) = 0;
      if ( (unsigned __int64)(v32 + 8) > v26 )
        goto LABEL_83;
      v35 = v32[2];
      v34 = v32[1] & 0xF;
      v36 = v32[3];
    }
    else
    {
      v26 = (unsigned __int64)&v32[v33];
      LOBYTE(v30) = 0;
      if ( (unsigned __int64)(v32 + 8) > v26 )
        goto LABEL_83;
      v46 = v32 + 13;
      v34 = v32[2] & 0xF;
      v47 = v33;
      if ( (unsigned int)(unsigned __int8)v32[7] + 8 <= v33 )
        v47 = (unsigned __int8)v32[7] + 8;
      v26 = (unsigned __int64)&v32[v47];
      if ( (unsigned __int64)v46 <= v26 )
        v35 = v32[12];
      if ( (unsigned __int64)(v32 + 14) > v26 )
        v36 = 0;
      else
        v36 = *v46;
    }
    LOBYTE(v30) = 1;
LABEL_83:
    if ( (_BYTE)v30 )
      v37 = 1;
LABEL_85:
    if ( byte_140173441 < 0 )
    {
      if ( !v37 )
      {
        v36 = 0;
        v35 = 0;
        v34 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v26, v30, &v56, v4, *(_DWORD *)(v4 + 48), v44, v31, v34, v35, v36, v4);
    }
    goto LABEL_92;
  }
  v38 = 0LL;
  v49 = 0;
  if ( *(_DWORD *)(v30 + 20) )
    goto LABEL_92;
  v39 = 0LL;
  v51 = 0;
  v53 = *(_DWORD *)(v30 + 56);
  if ( !v53 )
    goto LABEL_92;
  while ( 1 )
  {
    v26 = *(unsigned int *)(v30 + 4 * v39 + 120);
    if ( (unsigned int)v26 >= 0x80 )
    {
      v40 = *(unsigned int *)(v30 + 16);
      if ( (unsigned int)v26 < (unsigned int)v40 )
        break;
    }
LABEL_57:
    v39 = (unsigned int)(v51 + 1);
    v51 = v39;
    if ( (unsigned int)v39 >= v53 )
      goto LABEL_63;
  }
  v41 = (unsigned int)v26;
  v42 = *(_DWORD *)(v26 + v30) - 64;
  if ( v42 )
  {
    v26 = (unsigned int)(v42 - 1);
    if ( (_DWORD)v26 )
    {
      if ( (_DWORD)v26 == 1 )
      {
        v26 = v41 + 40;
        if ( v41 + 40 <= v40 )
        {
          if ( *(_DWORD *)(v41 + v30 + 12) )
            v38 = (char *)(v41 + v30 + 32);
          v32 = *(_BYTE **)(v41 + v30 + 24);
          goto LABEL_62;
        }
      }
    }
    else
    {
      v26 = v41 + 56;
      if ( v41 + 56 <= v40 )
      {
        v49 = 1;
        if ( *(_BYTE *)(v41 + v30 + 10) )
          v38 = (char *)(v41 + v30 + 24);
        v31 = *(_BYTE *)(v41 + v30 + 8);
        v32 = *(_BYTE **)(v41 + v30 + 16);
        v33 = *(_BYTE *)(v41 + v30 + 9);
      }
    }
    goto LABEL_56;
  }
  v26 = v41 + 40;
  if ( v41 + 40 > v40 )
  {
LABEL_56:
    if ( v49 )
      goto LABEL_63;
    goto LABEL_57;
  }
  if ( *(_BYTE *)(v41 + v30 + 10) )
    v38 = (char *)(v41 + v30 + 24);
  v32 = *(_BYTE **)(v41 + v30 + 16);
LABEL_62:
  v33 = *(_BYTE *)(v41 + v30 + 9);
  v31 = *(_BYTE *)(v41 + v30 + 8);
LABEL_63:
  if ( v38 )
  {
    v43 = *v38;
    v37 = 0;
    goto LABEL_66;
  }
LABEL_92:
  IofCompleteRequest((PIRP)v4, 0);
  return (unsigned int)v6;
}
