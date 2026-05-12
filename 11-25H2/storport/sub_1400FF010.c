/*
 * XREFs of sub_1400FF010 @ 0x1400FF010
 * Callers:
 *     sub_14006B460 @ 0x14006B460 (sub_14006B460.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400F8C38 @ 0x1400F8C38 (sub_1400F8C38.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400FF010(char *Context, PIRP Irp)
{
  int v4; // ebx
  bool v5; // zf
  unsigned __int64 v6; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *v8; // rax
  const GUID *v9; // r8
  const GUID *v10; // r8
  const EVENT_DESCRIPTOR *v11; // rdx
  unsigned __int64 ProviderId; // rdx
  char v13; // r15
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // si
  char v17; // r11
  char v18; // r12
  char *v19; // r11
  unsigned int *v20; // r13
  __int64 v21; // rax
  unsigned __int64 v22; // r14
  char v23; // cl
  char v24; // r8
  _BYTE *v25; // rax
  unsigned int v26; // eax
  char v27; // al
  const GUID *v28; // r8
  NTSTATUS v29; // eax
  int *Information; // rax
  char v31; // r15
  _BYTE *v32; // r9
  unsigned __int8 v33; // r10
  char v34; // si
  char v35; // r11
  char v36; // r12
  char *v37; // r11
  unsigned int *v38; // r13
  __int64 v39; // rax
  unsigned __int64 v40; // r14
  char v41; // cl
  char v42; // r8
  _BYTE *v43; // rax
  unsigned int v44; // eax
  char v45; // al
  __int64 v47; // rdx
  KSPIN_LOCK *v48; // r14
  KIRQL v49; // dl
  struct _LIST_ENTRY *v50; // rsi
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rdi
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int64 v53; // rcx
  struct _IO_STACK_LOCATION *v54; // rdx
  int *v55; // rax
  const EVENT_DESCRIPTOR *v56; // rdx
  unsigned __int64 v57; // rdx
  char v58; // r15
  _BYTE *v59; // r9
  unsigned __int8 v60; // r10
  char v61; // r11
  char v62; // r13
  char v63; // r12
  char *v64; // rsi
  unsigned int v65; // r8d
  unsigned int *v66; // rax
  __int64 v67; // rax
  unsigned __int64 v68; // r14
  char v69; // cl
  char v70; // r8
  _BYTE *v71; // rax
  unsigned int v72; // eax
  char v73; // al
  char v74; // [rsp+28h] [rbp-51h]
  char v75; // [rsp+30h] [rbp-49h]
  char v76; // [rsp+38h] [rbp-41h]
  char v77; // [rsp+40h] [rbp-39h]
  char v78; // [rsp+48h] [rbp-31h]
  PIRP v79; // [rsp+50h] [rbp-29h]
  char v80; // [rsp+60h] [rbp-19h]
  char v81; // [rsp+60h] [rbp-19h]
  char v82; // [rsp+61h] [rbp-18h]
  char v83; // [rsp+61h] [rbp-18h]
  char v84; // [rsp+61h] [rbp-18h]
  int v85; // [rsp+64h] [rbp-15h]
  int v86; // [rsp+64h] [rbp-15h]
  int v87; // [rsp+64h] [rbp-15h]
  unsigned int v88; // [rsp+68h] [rbp-11h]
  unsigned int v89; // [rsp+70h] [rbp-9h]
  unsigned int v90; // [rsp+70h] [rbp-9h]
  unsigned __int64 v91; // [rsp+70h] [rbp-9h]
  GUID v92; // [rsp+78h] [rbp-1h] BYREF
  __int128 v93; // [rsp+88h] [rbp+Fh] BYREF

  if ( (*(_BYTE *)(*((_QWORD *)Context + 2) + 136LL) & 2) == 0 )
  {
    v29 = sub_1400F8C38((__int64)Context, (__int64)Irp);
    v4 = 0;
    v88 = v29;
    if ( v29 < 0 )
    {
      v5 = byte_140168DAA == 0;
      Irp->IoStatus.Information = 0LL;
      *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
      Irp->IoStatus.Status = v29;
      if ( v5 )
        goto LABEL_138;
      v92 = 0LL;
      IoGetActivityIdIrp(Irp, &v92);
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      if ( CurrentStackLocation->MajorFunction != 14 )
      {
        if ( CurrentStackLocation->MajorFunction == 15 )
        {
          if ( byte_1401694F1 >= 0 )
            goto LABEL_138;
          ProviderId = CurrentStackLocation->Parameters.WMI.ProviderId;
          v31 = 0;
          v32 = 0LL;
          v81 = 0;
          v33 = 0;
          v34 = 0;
          v35 = 0;
          v36 = 0;
          if ( *(_BYTE *)(ProviderId + 2) != 40 )
          {
            v41 = *(_BYTE *)(ProviderId + 72);
            v32 = *(_BYTE **)(ProviderId + 32);
            v33 = *(_BYTE *)(ProviderId + 11);
            v31 = *(_BYTE *)(ProviderId + 4);
            if ( *(_BYTE *)(ProviderId + 2) )
              goto LABEL_138;
            goto LABEL_113;
          }
          v37 = 0LL;
          v83 = 0;
          if ( *(_DWORD *)(ProviderId + 20) )
            goto LABEL_138;
          v6 = 0LL;
          v86 = 0;
          v90 = *(_DWORD *)(ProviderId + 56);
          if ( !v90 )
            goto LABEL_110;
          v38 = (unsigned int *)(ProviderId + 120);
          while ( 1 )
          {
            v39 = *v38;
            if ( (unsigned int)v39 >= 0x80 )
            {
              v40 = *(unsigned int *)(ProviderId + 16);
              if ( (unsigned int)v39 < (unsigned int)v40 )
              {
                if ( *(_DWORD *)(v39 + ProviderId) == 64 )
                {
                  v6 = v39 + 40;
                  if ( v39 + 40 <= v40 )
                  {
                    if ( *(_BYTE *)(v39 + ProviderId + 10) )
                      v37 = (char *)(v39 + ProviderId + 24);
                    v32 = *(_BYTE **)(v39 + ProviderId + 16);
LABEL_109:
                    v33 = *(_BYTE *)(v39 + ProviderId + 9);
                    v31 = *(_BYTE *)(v39 + ProviderId + 8);
LABEL_110:
                    if ( !v37 )
                      goto LABEL_138;
                    v41 = *v37;
                    v35 = 0;
LABEL_113:
                    LOBYTE(v6) = v41 - 8;
                    if ( (v6 & 0x5D) != 0 )
                      goto LABEL_138;
                    v42 = *(_BYTE *)(ProviderId + 3);
                    if ( v42 == 1 || !v32 || !v33 )
                      goto LABEL_132;
                    LOBYTE(ProviderId) = 0;
                    v6 = (unsigned __int64)&v32[v33];
                    v43 = v32 + 8;
                    if ( (unsigned __int8)((*v32 & 0x7F) - 114) <= 1u )
                    {
                      if ( (unsigned __int64)v43 <= v6 )
                      {
                        LOBYTE(ProviderId) = 1;
                        v35 = v32[2];
                        v34 = v32[1] & 0xF;
                        v36 = v32[3];
                      }
                    }
                    else
                    {
                      if ( (unsigned __int64)v43 <= v6 )
                      {
                        v34 = v32[2] & 0xF;
                        v44 = v33;
                        if ( (unsigned int)(unsigned __int8)v32[7] + 8 <= v33 )
                          v44 = (unsigned __int8)v32[7] + 8;
                        v6 = (unsigned __int64)(v32 + 13);
                        ProviderId = (unsigned __int64)&v32[v44];
                        if ( (unsigned __int64)(v32 + 13) > ProviderId )
                          v81 = 0;
                        else
                          v81 = v32[12];
                        if ( (unsigned __int64)(v32 + 14) <= ProviderId )
                          v36 = *(_BYTE *)v6;
                        LOBYTE(ProviderId) = 1;
                      }
                      v35 = v81;
                    }
                    if ( (_BYTE)ProviderId )
                    {
                      LOBYTE(v4) = v35;
                      v45 = v36;
                    }
                    else
                    {
LABEL_132:
                      v34 = 0;
                      v45 = 0;
                    }
                    v79 = Irp;
                    v78 = v45;
                    v77 = v4;
                    v76 = v34;
                    v75 = v31;
                    v74 = v42;
                    v28 = &v92;
LABEL_67:
                    sub_140052E64(v6, ProviderId, v28, Irp, Irp->IoStatus.Status, v74, v75, v76, v77, v78, v79);
                    goto LABEL_138;
                  }
                }
                else
                {
                  v6 = (unsigned int)(*(_DWORD *)(v39 + ProviderId) - 65);
                  if ( *(_DWORD *)(v39 + ProviderId) == 65 )
                  {
                    v6 = v39 + 56;
                    if ( v39 + 56 <= v40 )
                    {
                      v83 = 1;
                      if ( *(_BYTE *)(v39 + ProviderId + 10) )
                        v37 = (char *)(v39 + ProviderId + 24);
                      v31 = *(_BYTE *)(v39 + ProviderId + 8);
                      v32 = *(_BYTE **)(v39 + ProviderId + 16);
                      v33 = *(_BYTE *)(v39 + ProviderId + 9);
                    }
                  }
                  else if ( *(_DWORD *)(v39 + ProviderId) == 66 )
                  {
                    v6 = v39 + 40;
                    if ( v39 + 40 <= v40 )
                    {
                      if ( *(_DWORD *)(v39 + ProviderId + 12) )
                        v37 = (char *)(v39 + ProviderId + 32);
                      v32 = *(_BYTE **)(v39 + ProviderId + 24);
                      goto LABEL_109;
                    }
                  }
                }
                if ( v83 )
                  goto LABEL_110;
                LODWORD(v6) = v86;
              }
            }
            v6 = (unsigned int)(v6 + 1);
            ++v38;
            v86 = v6;
            if ( (unsigned int)v6 >= v90 )
              goto LABEL_110;
          }
        }
        if ( CurrentStackLocation->MajorFunction != 27 )
          goto LABEL_138;
        if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
        {
          if ( (byte_1401694F2 & 0x40) == 0 )
            goto LABEL_138;
          Information = (int *)Irp->IoStatus.Information;
          if ( Information )
            v4 = *Information;
          v9 = &v92;
LABEL_12:
          sub_140056AB0(v6, (__int64)CurrentStackLocation, v9, Irp, v4, Irp->IoStatus.Status);
          goto LABEL_138;
        }
        if ( (byte_1401694F2 & 0x20) == 0 )
          goto LABEL_138;
        v10 = &v92;
        goto LABEL_15;
      }
      if ( (byte_1401694F2 & 8) == 0 )
        goto LABEL_138;
      v10 = &v92;
LABEL_136:
      v11 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
      goto LABEL_137;
    }
    v47 = *((_QWORD *)Context + 2);
    if ( (*(_BYTE *)(*(_QWORD *)(v47 + 592) + 525LL) & 1) != 0 && (*(_DWORD *)(v47 + 136) & 0x80000) != 0 )
    {
      v48 = (KSPIN_LOCK *)(Context + 544);
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 68);
      if ( *((_QWORD *)Context + 69) )
      {
        if ( *((_QWORD *)Context + 72) )
        {
          v50 = (struct _LIST_ENTRY *)(Context + 584);
          p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&Irp->Tail.Overlay.ListEntry;
          Blink = v50->Blink;
          if ( Blink->Flink != v50 )
            __fastfail(3u);
          p_ListEntry->ListEntry.Flink = v50;
          p_ListEntry->ListEntry.Blink = Blink;
          Blink->Flink = &p_ListEntry->ListEntry;
          v50->Blink = &p_ListEntry->ListEntry;
        }
        else
        {
          *((_QWORD *)Context + 72) = Irp;
        }
        KeReleaseSpinLock(v48, v49);
      }
      else
      {
        *((_QWORD *)Context + 69) = Irp;
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 68, v49);
        IoQueueWorkItemEx(*((PIO_WORKITEM *)Context + 67), sub_1400FFA50, DelayedWorkQueue, Context);
      }
      return 259LL;
    }
    Irp->IoStatus.Status = 0;
    Irp->IoStatus.Information = 0LL;
    ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 15));
    v5 = byte_140168DAA == 0;
    *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
    Irp->IoStatus.Status = 0;
    if ( v5 )
      goto LABEL_214;
    v92 = 0LL;
    IoGetActivityIdIrp(Irp, &v92);
    v54 = Irp->Tail.Overlay.CurrentStackLocation;
    if ( v54->MajorFunction == 14 )
    {
      if ( (byte_1401694F2 & 8) == 0 )
        goto LABEL_214;
      v56 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
      goto LABEL_213;
    }
    if ( v54->MajorFunction != 15 )
    {
      if ( v54->MajorFunction != 27 )
        goto LABEL_214;
      if ( v54->MinorFunction == 7 && !v54->Parameters.Read.Length )
      {
        if ( (byte_1401694F2 & 0x40) != 0 )
        {
          v55 = (int *)Irp->IoStatus.Information;
          if ( v55 )
            v4 = *v55;
          sub_140056AB0(v53, (__int64)v54, &v92, Irp, v4, Irp->IoStatus.Status);
        }
        goto LABEL_214;
      }
      if ( (byte_1401694F2 & 0x20) == 0 )
        goto LABEL_214;
      v56 = &stru_140149FE8;
LABEL_213:
      sub_140052F3C(v53, v56, &v92, Irp, Irp->IoStatus.Status);
      goto LABEL_214;
    }
    if ( byte_1401694F1 >= 0 )
      goto LABEL_214;
    v57 = v54->Parameters.WMI.ProviderId;
    v58 = 0;
    v59 = 0LL;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    if ( *(_BYTE *)(v57 + 2) == 40 )
    {
      v64 = 0LL;
      v84 = 0;
      if ( *(_DWORD *)(v57 + 20) )
        goto LABEL_214;
      v53 = 0LL;
      v87 = 0;
      if ( !*(_DWORD *)(v57 + 56) )
        goto LABEL_189;
      v65 = *(_DWORD *)(v57 + 56);
      v66 = (unsigned int *)(v57 + 120);
      v91 = v57 + 120;
      while ( 1 )
      {
        v67 = *v66;
        if ( (unsigned int)v67 >= 0x80 )
        {
          v68 = *(unsigned int *)(v57 + 16);
          if ( (unsigned int)v67 < (unsigned int)v68 )
          {
            if ( *(_DWORD *)(v67 + v57) == 64 )
            {
              v53 = v67 + 40;
              if ( v67 + 40 <= v68 )
              {
                if ( *(_BYTE *)(v67 + v57 + 10) )
                  v64 = (char *)(v67 + v57 + 24);
                v59 = *(_BYTE **)(v67 + v57 + 16);
LABEL_188:
                v60 = *(_BYTE *)(v67 + v57 + 9);
                v58 = *(_BYTE *)(v67 + v57 + 8);
LABEL_189:
                if ( v64 )
                {
                  v69 = *v64;
                  goto LABEL_192;
                }
                goto LABEL_214;
              }
            }
            else
            {
              v53 = (unsigned int)(*(_DWORD *)(v67 + v57) - 65);
              if ( *(_DWORD *)(v67 + v57) == 65 )
              {
                v53 = v67 + 56;
                if ( v67 + 56 <= v68 )
                {
                  v84 = 1;
                  if ( *(_BYTE *)(v67 + v57 + 10) )
                    v64 = (char *)(v67 + v57 + 24);
                  v58 = *(_BYTE *)(v67 + v57 + 8);
                  v59 = *(_BYTE **)(v67 + v57 + 16);
                  v60 = *(_BYTE *)(v67 + v57 + 9);
                }
              }
              else if ( *(_DWORD *)(v67 + v57) == 66 )
              {
                v53 = v67 + 40;
                if ( v67 + 40 <= v68 )
                {
                  if ( *(_DWORD *)(v67 + v57 + 12) )
                    v64 = (char *)(v67 + v57 + 32);
                  v59 = *(_BYTE **)(v67 + v57 + 24);
                  goto LABEL_188;
                }
              }
            }
            if ( v84 )
              goto LABEL_189;
            LODWORD(v53) = v87;
            v65 = *(_DWORD *)(v57 + 56);
          }
        }
        v53 = (unsigned int)(v53 + 1);
        v66 = (unsigned int *)(v91 + 4);
        v87 = v53;
        v91 += 4LL;
        if ( (unsigned int)v53 >= v65 )
          goto LABEL_189;
      }
    }
    v69 = *(_BYTE *)(v57 + 72);
    v59 = *(_BYTE **)(v57 + 32);
    v60 = *(_BYTE *)(v57 + 11);
    v58 = *(_BYTE *)(v57 + 4);
    if ( *(_BYTE *)(v57 + 2) )
      goto LABEL_214;
LABEL_192:
    LOBYTE(v53) = v69 - 8;
    if ( (v53 & 0x5D) != 0 )
    {
LABEL_214:
      IofCompleteRequest(Irp, 0);
      return 0LL;
    }
    v70 = *(_BYTE *)(v57 + 3);
    if ( v70 == 1 || !v59 || !v60 )
      goto LABEL_209;
    LOBYTE(v57) = 0;
    v53 = (unsigned __int64)&v59[v60];
    v71 = v59 + 8;
    if ( (unsigned __int8)((*v59 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v71 > v53 )
        goto LABEL_207;
      v62 = v59[2];
      v61 = v59[1] & 0xF;
      v63 = v59[3];
    }
    else
    {
      if ( (unsigned __int64)v71 > v53 )
        goto LABEL_207;
      v61 = v59[2] & 0xF;
      v72 = v60;
      if ( (unsigned int)(unsigned __int8)v59[7] + 8 <= v60 )
        v72 = (unsigned __int8)v59[7] + 8;
      v53 = (unsigned __int64)(v59 + 13);
      v57 = (unsigned __int64)&v59[v72];
      if ( (unsigned __int64)(v59 + 13) <= v57 )
        v62 = v59[12];
      if ( (unsigned __int64)(v59 + 14) <= v57 )
        v63 = *(_BYTE *)v53;
    }
    LOBYTE(v57) = 1;
LABEL_207:
    if ( (_BYTE)v57 )
    {
      LOBYTE(v4) = v62;
      v73 = v63;
LABEL_210:
      sub_140052E64(v53, v57, &v92, Irp, Irp->IoStatus.Status, v70, v58, v61, v4, v73, Irp);
      goto LABEL_214;
    }
LABEL_209:
    v61 = 0;
    v73 = 0;
    goto LABEL_210;
  }
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  v4 = 0;
  v88 = -1073741637;
  v5 = byte_140168DAA == 0;
  Irp->IoStatus.Status = -1073741637;
  if ( v5 )
    goto LABEL_138;
  v93 = 0LL;
  IoGetActivityIdIrp(Irp, &v93);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_138;
    v10 = (const GUID *)&v93;
    goto LABEL_136;
  }
  if ( CurrentStackLocation->MajorFunction != 15 )
  {
    if ( CurrentStackLocation->MajorFunction != 27 )
      goto LABEL_138;
    if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
    {
      if ( (byte_1401694F2 & 0x40) == 0 )
        goto LABEL_138;
      v8 = (int *)Irp->IoStatus.Information;
      if ( v8 )
        v4 = *v8;
      v9 = (const GUID *)&v93;
      goto LABEL_12;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_138;
    v10 = (const GUID *)&v93;
LABEL_15:
    v11 = &stru_140149FE8;
LABEL_137:
    sub_140052F3C(v6, v11, v10, Irp, Irp->IoStatus.Status);
    goto LABEL_138;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_138;
  ProviderId = CurrentStackLocation->Parameters.WMI.ProviderId;
  v13 = 0;
  v14 = 0LL;
  v80 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(ProviderId + 2) == 40 )
  {
    v19 = 0LL;
    v82 = 0;
    if ( *(_DWORD *)(ProviderId + 20) )
      goto LABEL_138;
    v6 = 0LL;
    v85 = 0;
    v89 = *(_DWORD *)(ProviderId + 56);
    if ( !v89 )
      goto LABEL_43;
    v20 = (unsigned int *)(ProviderId + 120);
    while ( 1 )
    {
      v21 = *v20;
      if ( (unsigned int)v21 >= 0x80 )
      {
        v22 = *(unsigned int *)(ProviderId + 16);
        if ( (unsigned int)v21 < (unsigned int)v22 )
        {
          if ( *(_DWORD *)(v21 + ProviderId) == 64 )
          {
            v6 = v21 + 40;
            if ( v21 + 40 <= v22 )
            {
              if ( *(_BYTE *)(v21 + ProviderId + 10) )
                v19 = (char *)(v21 + ProviderId + 24);
              v14 = *(_BYTE **)(v21 + ProviderId + 16);
LABEL_42:
              v15 = *(_BYTE *)(v21 + ProviderId + 9);
              v13 = *(_BYTE *)(v21 + ProviderId + 8);
LABEL_43:
              if ( v19 )
              {
                v23 = *v19;
                v17 = 0;
                goto LABEL_46;
              }
              goto LABEL_138;
            }
          }
          else
          {
            v6 = (unsigned int)(*(_DWORD *)(v21 + ProviderId) - 65);
            if ( *(_DWORD *)(v21 + ProviderId) == 65 )
            {
              v6 = v21 + 56;
              if ( v21 + 56 <= v22 )
              {
                v82 = 1;
                if ( *(_BYTE *)(v21 + ProviderId + 10) )
                  v19 = (char *)(v21 + ProviderId + 24);
                v13 = *(_BYTE *)(v21 + ProviderId + 8);
                v14 = *(_BYTE **)(v21 + ProviderId + 16);
                v15 = *(_BYTE *)(v21 + ProviderId + 9);
              }
            }
            else if ( *(_DWORD *)(v21 + ProviderId) == 66 )
            {
              v6 = v21 + 40;
              if ( v21 + 40 <= v22 )
              {
                if ( *(_DWORD *)(v21 + ProviderId + 12) )
                  v19 = (char *)(v21 + ProviderId + 32);
                v14 = *(_BYTE **)(v21 + ProviderId + 24);
                goto LABEL_42;
              }
            }
          }
          if ( v82 )
            goto LABEL_43;
          LODWORD(v6) = v85;
        }
      }
      v6 = (unsigned int)(v6 + 1);
      ++v20;
      v85 = v6;
      if ( (unsigned int)v6 >= v89 )
        goto LABEL_43;
    }
  }
  v23 = *(_BYTE *)(ProviderId + 72);
  v14 = *(_BYTE **)(ProviderId + 32);
  v15 = *(_BYTE *)(ProviderId + 11);
  v13 = *(_BYTE *)(ProviderId + 4);
  if ( *(_BYTE *)(ProviderId + 2) )
    goto LABEL_138;
LABEL_46:
  LOBYTE(v6) = v23 - 8;
  if ( (v6 & 0x5D) == 0 )
  {
    v24 = *(_BYTE *)(ProviderId + 3);
    if ( v24 == 1 || !v14 || !v15 )
      goto LABEL_65;
    LOBYTE(ProviderId) = 0;
    v6 = (unsigned __int64)&v14[v15];
    v25 = v14 + 8;
    if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v25 <= v6 )
      {
        LOBYTE(ProviderId) = 1;
        v17 = v14[2];
        v16 = v14[1] & 0xF;
        v18 = v14[3];
      }
    }
    else
    {
      if ( (unsigned __int64)v25 <= v6 )
      {
        v16 = v14[2] & 0xF;
        v26 = v15;
        if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
          v26 = (unsigned __int8)v14[7] + 8;
        v6 = (unsigned __int64)(v14 + 13);
        ProviderId = (unsigned __int64)&v14[v26];
        if ( (unsigned __int64)(v14 + 13) > ProviderId )
          v80 = 0;
        else
          v80 = v14[12];
        if ( (unsigned __int64)(v14 + 14) <= ProviderId )
          v18 = *(_BYTE *)v6;
        LOBYTE(ProviderId) = 1;
      }
      v17 = v80;
    }
    if ( (_BYTE)ProviderId )
    {
      LOBYTE(v4) = v17;
      v27 = v18;
    }
    else
    {
LABEL_65:
      v16 = 0;
      v27 = 0;
    }
    v79 = Irp;
    v78 = v27;
    v77 = v4;
    v76 = v16;
    v75 = v13;
    v74 = v24;
    v28 = (const GUID *)&v93;
    goto LABEL_67;
  }
LABEL_138:
  IofCompleteRequest(Irp, 0);
  return v88;
}
