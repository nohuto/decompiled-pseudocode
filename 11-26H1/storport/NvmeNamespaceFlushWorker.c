/*
 * XREFs of NvmeNamespaceFlushWorker @ 0x140044970
 * Callers:
 *     <none>
 * Callees:
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

void __fastcall NvmeNamespaceFlushWorker(PVOID IoObject, char *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rdi
  _DWORD *v5; // rax
  __int16 v6; // ax
  __int64 v7; // rax
  int v8; // eax
  bool v9; // zf
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  int v14; // ecx
  void *v15; // rdx
  __int64 v16; // rdx
  char v17; // r13
  _BYTE *v18; // r9
  unsigned __int8 v19; // bp
  char v20; // r10
  char v21; // si
  char v22; // r11
  char v23; // r14
  char *v24; // r14
  unsigned int v25; // eax
  __int64 v26; // r12
  unsigned __int64 v27; // r15
  __int64 v28; // r8
  int v29; // ecx
  char v30; // cl
  char v31; // r8
  char v32; // al
  char *v33; // r11
  unsigned int v34; // eax
  KIRQL v35; // al
  _QWORD *v36; // rcx
  char *v37; // rdx
  KIRQL v38; // r9
  __int64 v39; // rdx
  _QWORD **v40; // rdx
  _QWORD *v41; // rax
  _QWORD *v42; // r8
  _QWORD *v43; // r8
  __int64 v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rdx
  _QWORD *v47; // rax
  _QWORD **v48; // rdx
  _QWORD *v49; // rax
  _QWORD *v50; // r8
  _QWORD *v51; // r8
  char v52; // [rsp+60h] [rbp-48h]
  char v53; // [rsp+61h] [rbp-47h]
  __int128 v54; // [rsp+68h] [rbp-40h] BYREF

  v3 = *((_QWORD *)Context + 66);
  v52 = 0;
  memset_0(*(void **)v3, 0, 0x10B0uLL);
  v5 = *(_DWORD **)v3;
  v5[1025] = *((_DWORD *)Context + 14);
  *((_BYTE *)v5 + 4096) = 0;
  *(_DWORD *)(*(_QWORD *)v3 + 4256LL) &= ~1u;
  *(_DWORD *)(*(_QWORD *)v3 + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)v3 + 4256LL) &= ~2u;
  *(_QWORD *)(*(_QWORD *)v3 + 4184LL) = *((_QWORD *)Context + 69);
  *(_QWORD *)(*(_QWORD *)v3 + 4192LL) = NvmeNamespaceFlushCommandCompletion;
  *(_QWORD *)(*(_QWORD *)v3 + 4200LL) = v3;
  *(_QWORD *)(*(_QWORD *)v3 + 4216LL) = Context;
  *(_QWORD *)(*(_QWORD *)v3 + 4240LL) = v3;
  *(_DWORD *)(v3 + 48) |= 1u;
  v6 = *(_WORD *)(v3 + 52);
  if ( (unsigned __int16)v6 <= 0xAu )
    v6 = 10;
  *(_WORD *)(v3 + 52) = v6;
  v7 = *(_QWORD *)(*((_QWORD *)Context + 2) + 1048LL);
  if ( v7 && (*(_DWORD *)(v7 + 24) & 0x20000000) != 0 )
    *(_DWORD *)(*(_QWORD *)v3 + 4256LL) |= 0x100u;
  v8 = NvmeControllerProcessCommand(*((PVOID *)Context + 2));
  if ( v8 < 0 )
  {
    *(_DWORD *)(v3 + 48) &= ~1u;
    v9 = StorEtwLoggingEnabled == 0;
    *(_DWORD *)(*((_QWORD *)Context + 69) + 48LL) = v8;
    *(_QWORD *)(*((_QWORD *)Context + 69) + 56LL) = 0LL;
    v10 = *((_QWORD *)Context + 69);
    *(_BYTE *)(v10 + 141) = -84;
    *(_DWORD *)(v10 + 48) = v8;
    if ( v9 )
      goto LABEL_75;
    v54 = 0LL;
    IoGetActivityIdIrp(v10, &v54);
    v12 = *(_QWORD *)(v10 + 184);
    if ( *(_BYTE *)v12 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_75;
      v15 = &EventNonReadWriteRequestComplete;
      goto LABEL_74;
    }
    if ( *(_BYTE *)v12 != 15 )
    {
      if ( *(_BYTE *)v12 != 27 )
        goto LABEL_75;
      if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v13 = *(int **)(v10 + 56);
          if ( v13 )
            v14 = *v13;
          else
            v14 = 0;
          McTemplateK0pqd_EtwWriteTransfer(v14, v12, (unsigned int)&v54, v10, v14, *(_DWORD *)(v10 + 48));
        }
        goto LABEL_75;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_75;
      v15 = &EventPnpRequestComplete;
LABEL_74:
      McTemplateK0pd_EtwWriteTransfer(v11, v15, &v54, v10, *(_DWORD *)(v10 + 48));
      goto LABEL_75;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_75;
    v16 = *(_QWORD *)(v12 + 8);
    v17 = 0;
    v18 = 0LL;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    if ( *(_BYTE *)(v16 + 2) == 40 )
    {
      v24 = 0LL;
      v53 = 0;
      if ( *(_DWORD *)(v16 + 20) )
        goto LABEL_75;
      v25 = *(_DWORD *)(v16 + 56);
      v26 = 0LL;
      if ( !v25 )
        goto LABEL_75;
      while ( 1 )
      {
        v11 = *(unsigned int *)(v16 + 4 * v26 + 120);
        if ( (unsigned int)v11 >= 0x80 )
        {
          v27 = *(unsigned int *)(v16 + 16);
          if ( (unsigned int)v11 < (unsigned int)v27 )
          {
            v28 = (unsigned int)v11;
            v29 = *(_DWORD *)(v11 + v16) - 64;
            if ( v29 )
            {
              LODWORD(v11) = v29 - 1;
              if ( (_DWORD)v11 )
              {
                if ( (_DWORD)v11 == 1 )
                {
                  LODWORD(v11) = v28 + 40;
                  if ( v28 + 40 <= v27 )
                  {
                    if ( *(_DWORD *)(v28 + v16 + 12) )
                      v24 = (char *)(v28 + v16 + 32);
                    v18 = *(_BYTE **)(v28 + v16 + 24);
                    goto LABEL_45;
                  }
                }
              }
              else
              {
                LODWORD(v11) = v28 + 56;
                if ( v28 + 56 <= v27 )
                {
                  v53 = 1;
                  if ( *(_BYTE *)(v28 + v16 + 10) )
                    v24 = (char *)(v28 + v16 + 24);
                  v17 = *(_BYTE *)(v28 + v16 + 8);
                  v18 = *(_BYTE **)(v28 + v16 + 16);
                  v19 = *(_BYTE *)(v28 + v16 + 9);
                }
              }
            }
            else
            {
              LODWORD(v11) = v28 + 40;
              if ( v28 + 40 <= v27 )
              {
                if ( *(_BYTE *)(v28 + v16 + 10) )
                  v24 = (char *)(v28 + v16 + 24);
                v18 = *(_BYTE **)(v28 + v16 + 16);
LABEL_45:
                v19 = *(_BYTE *)(v28 + v16 + 9);
                v17 = *(_BYTE *)(v28 + v16 + 8);
LABEL_46:
                if ( v24 )
                {
                  v30 = *v24;
                  v23 = 0;
                  goto LABEL_49;
                }
                goto LABEL_75;
              }
            }
            if ( v53 )
              goto LABEL_46;
          }
        }
        v26 = (unsigned int)(v26 + 1);
        if ( (unsigned int)v26 >= v25 )
          goto LABEL_46;
      }
    }
    v30 = *(_BYTE *)(v16 + 72);
    v18 = *(_BYTE **)(v16 + 32);
    v19 = *(_BYTE *)(v16 + 11);
    v17 = *(_BYTE *)(v16 + 4);
    if ( *(_BYTE *)(v16 + 2) )
      goto LABEL_75;
LABEL_49:
    LOBYTE(v11) = v30 - 8;
    if ( (v11 & 0x5D) == 0 )
    {
      v31 = *(_BYTE *)(v16 + 3);
      if ( v31 == 1 || !v18 || !v19 )
      {
LABEL_68:
        if ( byte_140173441 < 0 )
        {
          if ( !v23 )
          {
            v22 = 0;
            v21 = 0;
            v20 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v11,
            v16,
            (unsigned int)&v54,
            v10,
            *(_DWORD *)(v10 + 48),
            v31,
            v17,
            v20,
            v21,
            v22,
            v10);
        }
        goto LABEL_75;
      }
      v32 = *v18 & 0x7F;
      if ( v32 == 114 || v32 == 115 )
      {
        v11 = (unsigned __int64)&v18[v19];
        LOBYTE(v16) = 0;
        if ( (unsigned __int64)(v18 + 8) > v11 )
          goto LABEL_66;
        v21 = v18[2];
        v20 = v18[1] & 0xF;
        v22 = v18[3];
      }
      else
      {
        v11 = (unsigned __int64)&v18[v19];
        LOBYTE(v16) = 0;
        if ( (unsigned __int64)(v18 + 8) > v11 )
          goto LABEL_66;
        v33 = v18 + 13;
        v20 = v18[2] & 0xF;
        v34 = v19;
        if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
          v34 = (unsigned __int8)v18[7] + 8;
        v11 = (unsigned __int64)&v18[v34];
        if ( (unsigned __int64)v33 <= v11 )
          v21 = v18[12];
        if ( (unsigned __int64)(v18 + 14) > v11 )
          v22 = 0;
        else
          v22 = *v33;
      }
      LOBYTE(v16) = 1;
LABEL_66:
      if ( (_BYTE)v16 )
        v23 = 1;
      goto LABEL_68;
    }
LABEL_75:
    IofCompleteRequest((PIRP)v10, 1);
    v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 68);
    v36 = Context + 560;
    *((_QWORD *)Context + 69) = 0LL;
    v37 = (char *)*((_QWORD *)Context + 70);
    v38 = v35;
    if ( v37 == Context + 560 )
    {
      v39 = *((_QWORD *)Context + 72);
      if ( v39 )
      {
        *((_QWORD *)Context + 69) = v39;
        v40 = (_QWORD **)(Context + 584);
        v52 = 1;
        *((_QWORD *)Context + 72) = 0LL;
        while ( 1 )
        {
          v41 = *v40;
          if ( *v40 == v40 )
            break;
          if ( (_QWORD **)v41[1] != v40 )
            goto LABEL_98;
          v42 = (_QWORD *)*v41;
          if ( *(_QWORD **)(*v41 + 8LL) != v41 )
            goto LABEL_98;
          *v40 = v42;
          v42[1] = v40;
          v43 = (_QWORD *)*((_QWORD *)Context + 71);
          if ( (_QWORD *)*v43 != v36 )
            goto LABEL_98;
          *v41 = v36;
          v41[1] = v43;
          *v43 = v41;
          *((_QWORD *)Context + 71) = v41;
        }
      }
      else if ( *((char **)Context + 73) != Context + 584 )
      {
        *((_DWORD *)Context + 150) |= 1u;
      }
LABEL_85:
      KeReleaseSpinLock((PKSPIN_LOCK)Context + 68, v38);
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 15));
      if ( v52 )
        IoQueueWorkItemEx(*((PIO_WORKITEM *)Context + 67), NvmeNamespaceFlushWorker, DelayedWorkQueue, Context);
      return;
    }
    v52 = 1;
    if ( *((_QWORD **)v37 + 1) == v36 )
    {
      v44 = *(_QWORD *)v37;
      if ( *(char **)(*(_QWORD *)v37 + 8LL) == v37 )
      {
        *v36 = v44;
        *(_QWORD *)(v44 + 8) = v36;
        *((_QWORD *)Context + 69) = v37 - 168;
        *((_QWORD *)v37 + 1) = v37;
        *(_QWORD *)v37 = v37;
        v45 = *((_QWORD *)Context + 72);
        if ( !v45 )
          goto LABEL_92;
        v46 = (_QWORD *)*((_QWORD *)Context + 71);
        v47 = (_QWORD *)(v45 + 168);
        if ( (_QWORD *)*v46 == v36 )
        {
          *v47 = v36;
          v47[1] = v46;
          *v46 = v47;
          *((_QWORD *)Context + 71) = v47;
LABEL_92:
          v48 = (_QWORD **)(Context + 584);
          while ( 1 )
          {
            v49 = *v48;
            if ( *v48 == v48 )
              goto LABEL_85;
            if ( (_QWORD **)v49[1] != v48 )
              break;
            v50 = (_QWORD *)*v49;
            if ( *(_QWORD **)(*v49 + 8LL) != v49 )
              break;
            *v48 = v50;
            v50[1] = v48;
            v51 = (_QWORD *)*((_QWORD *)Context + 71);
            if ( (_QWORD *)*v51 != v36 )
              break;
            *v49 = v36;
            v49[1] = v51;
            *v51 = v49;
            *((_QWORD *)Context + 71) = v49;
          }
        }
      }
    }
LABEL_98:
    __fastfail(3u);
  }
}
