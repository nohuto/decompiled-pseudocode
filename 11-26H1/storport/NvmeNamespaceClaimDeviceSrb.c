/*
 * XREFs of NvmeNamespaceClaimDeviceSrb @ 0x140101BE8
 * Callers:
 *     NvmeNamespaceScsiIrp @ 0x14010ECE8 (NvmeNamespaceScsiIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceClaimDeviceSrb(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // ebx
  char v9; // al
  int v10; // r14d
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  __int64 v16; // rdx
  char v17; // r13
  _BYTE *v18; // r9
  unsigned __int8 v19; // bp
  char v20; // r11
  char v21; // si
  char v22; // r10
  char v23; // r14
  char *v24; // r14
  unsigned int v25; // r12d
  unsigned __int64 v26; // r15
  __int64 v27; // r8
  int v28; // ecx
  char v29; // cl
  char v30; // r8
  char v31; // al
  char *v32; // r10
  unsigned int v33; // eax
  int v35; // [rsp+20h] [rbp-B8h]
  char v36; // [rsp+60h] [rbp-78h]
  unsigned int v37; // [rsp+64h] [rbp-74h]
  unsigned int v38; // [rsp+68h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-68h] BYREF
  GUID v40; // [rsp+88h] [rbp-50h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1 + 13, &LockHandle);
  v6 = a1[14];
  if ( (v6 & 8) != 0 )
  {
    v8 = 0;
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      *(_QWORD *)(a2 + 64) = 0LL;
      *(_DWORD *)(a2 + 44) = -2147483631;
    }
    else
    {
      *(_QWORD *)(a2 + 24) = 0LL;
      *(_DWORD *)(a2 + 64) = -2147483631;
    }
    v10 = -2147483631;
    v9 = 48;
  }
  else
  {
    a1[14] = v6 | 8;
    v7 = a1[1];
    if ( *(_BYTE *)(a2 + 2) == 40 )
      *(_QWORD *)(a2 + 64) = v7;
    else
      *(_QWORD *)(a2 + 24) = v7;
    v8 = 0;
    v9 = 1;
    v10 = 0;
  }
  v37 = v10;
  *(_BYTE *)(a2 + 3) = v9;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v11 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a3 + 141) = -84;
  *(_DWORD *)(a3 + 48) = v10;
  if ( v11 )
    goto LABEL_76;
  v40 = 0LL;
  IoGetActivityIdIrp(a3, &v40);
  v13 = *(_QWORD *)(a3 + 184);
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_76;
    v35 = *(_DWORD *)(a3 + 48);
    v15 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_75;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_76;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v14 = *(int **)(a3 + 56);
        if ( v14 )
          v8 = *v14;
        McTemplateK0pqd_EtwWriteTransfer(v12, v13, &v40, a3, v8, *(_DWORD *)(a3 + 48));
      }
      goto LABEL_76;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_76;
    v15 = &EventPnpRequestComplete;
    v35 = *(_DWORD *)(a3 + 48);
LABEL_75:
    McTemplateK0pd_EtwWriteTransfer(v12, v15, &v40, a3, v35);
    goto LABEL_76;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_76;
  v16 = *(_QWORD *)(v13 + 8);
  v17 = 0;
  v18 = 0LL;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( *(_BYTE *)(v16 + 2) != 40 )
  {
    v29 = *(_BYTE *)(v16 + 72);
    v18 = *(_BYTE **)(v16 + 32);
    v19 = *(_BYTE *)(v16 + 11);
    v17 = *(_BYTE *)(v16 + 4);
    if ( *(_BYTE *)(v16 + 2) )
      goto LABEL_76;
LABEL_50:
    LOBYTE(v12) = v29 - 8;
    if ( (v12 & 0x5D) != 0 )
      goto LABEL_76;
    v30 = *(_BYTE *)(v16 + 3);
    if ( v30 == 1 || !v18 || !v19 )
      goto LABEL_69;
    v31 = *v18 & 0x7F;
    if ( v31 == 114 || v31 == 115 )
    {
      v12 = (unsigned __int64)&v18[v19];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v18 + 8) > v12 )
        goto LABEL_67;
      v21 = v18[2];
      v20 = v18[1] & 0xF;
      v22 = v18[3];
    }
    else
    {
      v12 = (unsigned __int64)&v18[v19];
      LOBYTE(v16) = 0;
      if ( (unsigned __int64)(v18 + 8) > v12 )
        goto LABEL_67;
      v32 = v18 + 13;
      v20 = v18[2] & 0xF;
      v33 = v19;
      if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
        v33 = (unsigned __int8)v18[7] + 8;
      v12 = (unsigned __int64)&v18[v33];
      if ( (unsigned __int64)v32 <= v12 )
        v21 = v18[12];
      if ( (unsigned __int64)(v18 + 14) > v12 )
        v22 = 0;
      else
        v22 = *v32;
    }
    LOBYTE(v16) = 1;
LABEL_67:
    if ( (_BYTE)v16 )
      v23 = 1;
LABEL_69:
    if ( byte_140173441 < 0 )
    {
      if ( !v23 )
      {
        v22 = 0;
        v21 = 0;
        v20 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v12, v16, &v40, a3, *(_DWORD *)(a3 + 48), v30, v17, v20, v21, v22, a3);
    }
    goto LABEL_76;
  }
  v24 = 0LL;
  v36 = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_76;
  v25 = 0;
  v38 = *(_DWORD *)(v16 + 56);
  if ( !v38 )
    goto LABEL_76;
  while ( 1 )
  {
    v12 = *(unsigned int *)(v16 + 4LL * v25 + 120);
    if ( (unsigned int)v12 >= 0x80 )
    {
      v26 = *(unsigned int *)(v16 + 16);
      if ( (unsigned int)v12 < (unsigned int)v26 )
        break;
    }
LABEL_41:
    if ( ++v25 >= v38 )
      goto LABEL_47;
  }
  v27 = (unsigned int)v12;
  v28 = *(_DWORD *)(v12 + v16) - 64;
  if ( v28 )
  {
    v12 = (unsigned int)(v28 - 1);
    if ( (_DWORD)v12 )
    {
      if ( (_DWORD)v12 == 1 )
      {
        v12 = v27 + 40;
        if ( v27 + 40 <= v26 )
        {
          if ( *(_DWORD *)(v27 + v16 + 12) )
            v24 = (char *)(v27 + v16 + 32);
          v18 = *(_BYTE **)(v27 + v16 + 24);
          goto LABEL_46;
        }
      }
    }
    else
    {
      v12 = v27 + 56;
      if ( v27 + 56 <= v26 )
      {
        v36 = 1;
        if ( *(_BYTE *)(v27 + v16 + 10) )
          v24 = (char *)(v27 + v16 + 24);
        v17 = *(_BYTE *)(v27 + v16 + 8);
        v18 = *(_BYTE **)(v27 + v16 + 16);
        v19 = *(_BYTE *)(v27 + v16 + 9);
      }
    }
    goto LABEL_40;
  }
  v12 = v27 + 40;
  if ( v27 + 40 > v26 )
  {
LABEL_40:
    if ( v36 )
      goto LABEL_47;
    goto LABEL_41;
  }
  if ( *(_BYTE *)(v27 + v16 + 10) )
    v24 = (char *)(v27 + v16 + 24);
  v18 = *(_BYTE **)(v27 + v16 + 16);
LABEL_46:
  v19 = *(_BYTE *)(v27 + v16 + 9);
  v17 = *(_BYTE *)(v27 + v16 + 8);
LABEL_47:
  if ( v24 )
  {
    v29 = *v24;
    v23 = 0;
    goto LABEL_50;
  }
LABEL_76:
  IofCompleteRequest((PIRP)a3, 0);
  return v37;
}
