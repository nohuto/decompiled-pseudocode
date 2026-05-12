/*
 * XREFs of NvmeNamespaceSurpriseRemovalIrp @ 0x1401AF2A0
 * Callers:
 *     NvmeNamespacePnpIrp @ 0x140040B50 (NvmeNamespacePnpIrp.c)
 * Callees:
 *     NvmeNamespaceReleaseRemoveLock @ 0x14004EB30 (NvmeNamespaceReleaseRemoveLock.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorpUninitializeNvmeNamespaceTelemetry @ 0x1400C4278 (StorpUninitializeNvmeNamespaceTelemetry.c)
 *     McTemplateK0qjzshqusssjq_EtwWriteTransfer @ 0x140100014 (McTemplateK0qjzshqusssjq_EtwWriteTransfer.c)
 *     NvmeNamespaceCancelPendingRequests @ 0x1401017CC (NvmeNamespaceCancelPendingRequests.c)
 *     NvmeNamespaceTerminateSystemThread @ 0x140115E34 (NvmeNamespaceTerminateSystemThread.c)
 *     NvmeNamespaceWaitForRemoveLock @ 0x1401163B0 (NvmeNamespaceWaitForRemoveLock.c)
 *     NvmeNamespaceDeregisterFromPoFx @ 0x140127764 (NvmeNamespaceDeregisterFromPoFx.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeNamespaceSurpriseRemovalIrp(__int64 a1, __int64 a2)
{
  void (__fastcall *v2)(_QWORD, _QWORD); // rax
  int v3; // edi
  __int64 v6; // rbx
  const char *v7; // r8
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  __int64 v13; // rdx
  char v14; // r13
  _BYTE *v15; // r9
  unsigned __int8 v16; // si
  char v17; // r11
  char v18; // bl
  char v19; // r10
  char v20; // r14
  char *v21; // r14
  unsigned int v22; // r12d
  unsigned __int64 v23; // r15
  __int64 v24; // r8
  int v25; // ecx
  char v26; // cl
  char v27; // r8
  char v28; // al
  char *v29; // r10
  unsigned int v30; // eax
  __int64 v32; // [rsp+20h] [rbp-B8h]
  __int64 v33; // [rsp+28h] [rbp-B0h]
  __int64 v34; // [rsp+30h] [rbp-A8h]
  __int64 v35; // [rsp+38h] [rbp-A0h]
  __int64 v36; // [rsp+40h] [rbp-98h]
  __int64 v37; // [rsp+48h] [rbp-90h]
  char v38; // [rsp+80h] [rbp-58h]
  unsigned int v39; // [rsp+84h] [rbp-54h]
  GUID v40; // [rsp+88h] [rbp-50h] BYREF

  *(_QWORD *)(a1 + 112) &= ~0x400uLL;
  _InterlockedExchange((volatile __int32 *)(a1 + 96), 5);
  v2 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 280);
  v3 = 0;
  if ( v2 )
  {
    v2(0LL, 0LL);
    *(_QWORD *)(a1 + 280) = 0LL;
  }
  if ( (byte_14017344A & 0x10) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = (const char *)&dword_140154ADC;
    if ( *(_QWORD *)(v6 + 752) )
      v7 = *(const char **)(v6 + 752);
    McTemplateK0qjzshqusssjq_EtwWriteTransfer(
      v6 + 841,
      v6 + 800,
      (__int64)v7,
      *(_DWORD *)(*(_QWORD *)(v6 + 128) + 56LL),
      *(_QWORD *)(v6 + 128) + 1048LL,
      *(const wchar_t **)(*(_QWORD *)(v6 + 128) + 1032LL),
      *(const char **)(v6 + 792),
      *(_WORD *)(v6 + 4),
      *(_DWORD *)(a1 + 56),
      *(_BYTE *)(v6 + 744),
      v7,
      (const char *)(v6 + 800),
      (const char *)(v6 + 841),
      a1 + 160,
      (*(_BYTE *)(v6 + 136) & 2) != 0 ? 20 : 17);
  }
  NvmeNamespaceCancelPendingRequests(a1);
  NvmeNamespaceTerminateSystemThread(a1);
  *(_QWORD *)(a1 + 112) &= ~2uLL;
  NvmeNamespaceReleaseRemoveLock(a1);
  NvmeNamespaceWaitForRemoveLock(a1);
  StorpUninitializeNvmeNamespaceTelemetry(a1);
  NvmeNamespaceDeregisterFromPoFx(a1);
  v8 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v8 )
    goto LABEL_73;
  v40 = 0LL;
  IoGetActivityIdIrp(a2, &v40);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_73;
    v12 = &EventNonReadWriteRequestComplete;
    goto LABEL_72;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_73;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v3 = *v11;
        LODWORD(v33) = *(_DWORD *)(a2 + 48);
        LODWORD(v32) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v9, v10, &v40, a2, v32, v33);
      }
      goto LABEL_73;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_73;
    v12 = &EventPnpRequestComplete;
LABEL_72:
    LODWORD(v32) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v9, v12, &v40, a2, v32);
    goto LABEL_73;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_73;
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
      goto LABEL_73;
LABEL_47:
    LOBYTE(v9) = v26 - 8;
    if ( (v9 & 0x5D) != 0 )
      goto LABEL_73;
    v27 = *(_BYTE *)(v13 + 3);
    if ( v27 == 1 || !v15 || !v16 )
      goto LABEL_66;
    v28 = *v15 & 0x7F;
    if ( v28 == 114 || v28 == 115 )
    {
      v9 = (unsigned __int64)&v15[v16];
      LOBYTE(v13) = 0;
      if ( (unsigned __int64)(v15 + 8) > v9 )
        goto LABEL_64;
      v18 = v15[2];
      v17 = v15[1] & 0xF;
      v19 = v15[3];
    }
    else
    {
      v9 = (unsigned __int64)&v15[v16];
      LOBYTE(v13) = 0;
      if ( (unsigned __int64)(v15 + 8) > v9 )
        goto LABEL_64;
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
LABEL_64:
    if ( (_BYTE)v13 )
      v20 = 1;
LABEL_66:
    if ( byte_140173441 < 0 )
    {
      if ( !v20 )
      {
        v19 = 0;
        v18 = 0;
        v17 = 0;
      }
      LOBYTE(v37) = v19;
      LOBYTE(v36) = v18;
      LOBYTE(v35) = v17;
      LOBYTE(v34) = v14;
      LOBYTE(v33) = v27;
      LODWORD(v32) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v9, v13, &v40, a2, v32, v33, v34, v35, v36, v37, a2);
    }
    goto LABEL_73;
  }
  v21 = 0LL;
  v38 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_73;
  v22 = 0;
  v39 = *(_DWORD *)(v13 + 56);
  if ( !v39 )
    goto LABEL_73;
  while ( 1 )
  {
    v9 = *(unsigned int *)(v13 + 4LL * v22 + 120);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v23 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v9 < (unsigned int)v23 )
        break;
    }
LABEL_38:
    if ( ++v22 >= v39 )
      goto LABEL_44;
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
          goto LABEL_43;
        }
      }
    }
    else
    {
      v9 = v24 + 56;
      if ( v24 + 56 <= v23 )
      {
        v38 = 1;
        if ( *(_BYTE *)(v24 + v13 + 10) )
          v21 = (char *)(v24 + v13 + 24);
        v14 = *(_BYTE *)(v24 + v13 + 8);
        v15 = *(_BYTE **)(v24 + v13 + 16);
        v16 = *(_BYTE *)(v24 + v13 + 9);
      }
    }
    goto LABEL_37;
  }
  v9 = v24 + 40;
  if ( v24 + 40 > v23 )
  {
LABEL_37:
    if ( v38 )
      goto LABEL_44;
    goto LABEL_38;
  }
  if ( *(_BYTE *)(v24 + v13 + 10) )
    v21 = (char *)(v24 + v13 + 24);
  v15 = *(_BYTE **)(v24 + v13 + 16);
LABEL_43:
  v16 = *(_BYTE *)(v24 + v13 + 9);
  v14 = *(_BYTE *)(v24 + v13 + 8);
LABEL_44:
  if ( v21 )
  {
    v26 = *v21;
    v20 = 0;
    goto LABEL_47;
  }
LABEL_73:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
