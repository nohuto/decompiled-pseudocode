/*
 * XREFs of NvmeAdapterGetNamespaces @ 0x14019C0D0
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeControllerAcquireRundown @ 0x1400C5B84 (NvmeControllerAcquireRundown.c)
 *     NvmeAdapterFindNvmeController @ 0x1400D55CC (NvmeAdapterFindNvmeController.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterGetNamespaces(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v3; // ebx
  __int64 v5; // rax
  int v6; // esi
  __int64 NvmeController; // rax
  __int64 v8; // rbp
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  _WORD *v13; // r14
  unsigned __int16 v14; // r8
  __int64 *v15; // rcx
  _WORD *v16; // rdx
  unsigned __int16 v17; // ax
  __int64 v18; // rax
  const EVENT_DESCRIPTOR *v19; // rdx
  __int64 v20; // rdx
  _BYTE *v21; // r9
  unsigned __int8 v22; // r14
  char v23; // r11
  char v24; // bp
  char v25; // r10
  char v26; // r15
  char *v27; // r15
  unsigned int v28; // r13d
  unsigned __int64 v29; // r12
  __int64 v30; // r8
  int v31; // ecx
  char v32; // r12
  char v33; // cl
  char v34; // al
  char v35; // r8
  char *v36; // r10
  unsigned int v37; // eax
  char v39; // [rsp+60h] [rbp-78h]
  char v40; // [rsp+61h] [rbp-77h]
  unsigned int v41; // [rsp+64h] [rbp-74h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-70h] BYREF
  GUID v43; // [rsp+80h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  LockHandle.LockQueue = 0LL;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 608) )
  {
    v5 = *(_QWORD *)(a2 + 24);
    if ( v5 && *(_DWORD *)(v2 + 16) >= 0x10u && *(_WORD *)v5 == 1 && *(_WORD *)(v5 + 2) >= 0x10u )
    {
      if ( *(_DWORD *)(v2 + 8) >= 8u )
      {
        NvmeController = NvmeAdapterFindNvmeController(a1, *(_QWORD *)(v5 + 8) ^ a1, 0, 0LL);
        v8 = NvmeController;
        if ( NvmeController )
        {
          v6 = NvmeControllerAcquireRundown(NvmeController);
          if ( v6 >= 0 )
          {
            if ( (*(_BYTE *)(v8 + 136) & 8) != 0 )
            {
              v6 = -2147483631;
            }
            else
            {
              v13 = *(_WORD **)(a2 + 24);
              memset_0(v13, 0, *(unsigned int *)(v2 + 8));
              *v13 = 1;
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 632), &LockHandle);
              v14 = 32 * *(_WORD *)(v8 + 656) + 8;
              v13[1] = v14;
              if ( *(_DWORD *)(v2 + 8) < (unsigned int)v14 )
              {
                v18 = 8LL;
              }
              else
              {
                v15 = *(__int64 **)(v8 + 640);
                v16 = v13 + 4;
                if ( v15 != (__int64 *)(v8 + 640) )
                {
                  do
                  {
                    if ( (v15[11] & 2) != 0 )
                    {
                      *(_DWORD *)v16 = 2097153;
                      if ( *((_DWORD *)v15 + 18) == 1 )
                        *((_DWORD *)v16 + 1) |= 1u;
                      *((_DWORD *)v16 + 2) = *((_DWORD *)v15 + 8);
                      *((_DWORD *)v16 + 3) = *((unsigned __int8 *)v15 + 36);
                      *((_OWORD *)v16 + 1) = *(_OWORD *)(v15 + 17);
                      ++*((_DWORD *)v13 + 1);
                      v16 += 16;
                    }
                    v15 = (__int64 *)*v15;
                  }
                  while ( v15 != (__int64 *)(v8 + 640) );
                  v14 = v13[1];
                }
                if ( *((_DWORD *)v13 + 1) < *(_DWORD *)(v8 + 656) )
                {
                  v17 = 32 * v13[2] + 8;
                  v13[1] = v17;
                  v14 = v17;
                }
                v18 = v14;
              }
              *(_QWORD *)(a2 + 56) = v18;
              KeReleaseInStackQueuedSpinLock(&LockHandle);
            }
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 552));
          }
        }
        else
        {
          v6 = -1073741275;
        }
      }
      else
      {
        v6 = -1073741789;
      }
    }
    else
    {
      v6 = -1073741811;
    }
  }
  else
  {
    v6 = -1073741637;
  }
  v9 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( !v9 )
  {
    v43 = 0LL;
    IoGetActivityIdIrp(a2, &v43);
    v11 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v11 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_96;
      v19 = &EventNonReadWriteRequestComplete;
      goto LABEL_95;
    }
    if ( *(_BYTE *)v11 != 15 )
    {
      if ( *(_BYTE *)v11 != 27 )
        goto LABEL_96;
      if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v12 = *(int **)(a2 + 56);
          if ( v12 )
            v3 = *v12;
          McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v43, a2, v3, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_96;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_96;
      v19 = &EventPnpRequestComplete;
LABEL_95:
      McTemplateK0pd_EtwWriteTransfer(v10, v19, &v43, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_96;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_96;
    v20 = *(_QWORD *)(v11 + 8);
    v21 = 0LL;
    v39 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    if ( *(_BYTE *)(v20 + 2) != 40 )
    {
      v33 = *(_BYTE *)(v20 + 72);
      v21 = *(_BYTE **)(v20 + 32);
      v22 = *(_BYTE *)(v20 + 11);
      v32 = *(_BYTE *)(v20 + 4);
      if ( *(_BYTE *)(v20 + 2) )
        goto LABEL_96;
LABEL_70:
      LOBYTE(v10) = v33 - 8;
      if ( (v10 & 0x5D) != 0 )
        goto LABEL_96;
      if ( *(_BYTE *)(v20 + 3) == 1 || !v21 || !v22 )
        goto LABEL_89;
      v34 = *v21 & 0x7F;
      if ( v34 == 114 || v34 == 115 )
      {
        v10 = (unsigned __int64)&v21[v22];
        v35 = 0;
        if ( (unsigned __int64)(v21 + 8) > v10 )
          goto LABEL_87;
        v24 = v21[2];
        v23 = v21[1] & 0xF;
        v25 = v21[3];
      }
      else
      {
        v10 = (unsigned __int64)&v21[v22];
        v35 = 0;
        if ( (unsigned __int64)(v21 + 8) > v10 )
          goto LABEL_87;
        v36 = v21 + 13;
        v23 = v21[2] & 0xF;
        v37 = v22;
        if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
          v37 = (unsigned __int8)v21[7] + 8;
        v10 = (unsigned __int64)&v21[v37];
        if ( (unsigned __int64)v36 <= v10 )
          v24 = v21[12];
        if ( (unsigned __int64)(v21 + 14) > v10 )
          v25 = 0;
        else
          v25 = *v36;
      }
      v35 = 1;
LABEL_87:
      if ( v35 )
        v26 = 1;
LABEL_89:
      if ( byte_140173441 < 0 )
      {
        if ( !v26 )
        {
          v25 = 0;
          v24 = 0;
          v23 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v10,
          v20,
          &v43,
          a2,
          *(_DWORD *)(a2 + 48),
          *(_BYTE *)(v20 + 3),
          v32,
          v23,
          v24,
          v25,
          a2);
      }
      goto LABEL_96;
    }
    v27 = 0LL;
    v40 = 0;
    if ( !*(_DWORD *)(v20 + 20) )
    {
      v28 = 0;
      v41 = *(_DWORD *)(v20 + 56);
      if ( v41 )
      {
        do
        {
          v10 = *(unsigned int *)(v20 + 4LL * v28 + 120);
          if ( (unsigned int)v10 >= 0x80 )
          {
            v29 = *(unsigned int *)(v20 + 16);
            if ( (unsigned int)v10 < (unsigned int)v29 )
            {
              v30 = (unsigned int)v10;
              v31 = *(_DWORD *)(v10 + v20) - 64;
              if ( v31 )
              {
                v10 = (unsigned int)(v31 - 1);
                if ( (_DWORD)v10 )
                {
                  if ( (_DWORD)v10 == 1 )
                  {
                    v10 = v30 + 40;
                    if ( v30 + 40 <= v29 )
                    {
                      if ( *(_DWORD *)(v30 + v20 + 12) )
                        v27 = (char *)(v30 + v20 + 32);
                      v21 = *(_BYTE **)(v30 + v20 + 24);
LABEL_55:
                      v32 = *(_BYTE *)(v30 + v20 + 8);
                      v22 = *(_BYTE *)(v30 + v20 + 9);
                      goto LABEL_64;
                    }
                  }
                }
                else
                {
                  v10 = v30 + 56;
                  if ( v30 + 56 <= v29 )
                  {
                    v40 = 1;
                    if ( *(_BYTE *)(v30 + v20 + 10) )
                      v27 = (char *)(v30 + v20 + 24);
                    v21 = *(_BYTE **)(v30 + v20 + 16);
                    v22 = *(_BYTE *)(v30 + v20 + 9);
                    v39 = *(_BYTE *)(v30 + v20 + 8);
                  }
                }
              }
              else
              {
                v10 = v30 + 40;
                if ( v30 + 40 <= v29 )
                {
                  if ( *(_BYTE *)(v30 + v20 + 10) )
                    v27 = (char *)(v30 + v20 + 24);
                  v21 = *(_BYTE **)(v30 + v20 + 16);
                  goto LABEL_55;
                }
              }
              if ( v40 )
                break;
            }
          }
          ++v28;
        }
        while ( v28 < v41 );
        v32 = v39;
LABEL_64:
        if ( v27 )
        {
          v33 = *v27;
          v26 = 0;
          goto LABEL_70;
        }
      }
    }
  }
LABEL_96:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v6;
}
