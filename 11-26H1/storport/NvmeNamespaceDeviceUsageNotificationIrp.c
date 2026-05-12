/*
 * XREFs of NvmeNamespaceDeviceUsageNotificationIrp @ 0x1401033E8
 * Callers:
 *     NvmeNamespacePnpIrp @ 0x140040B50 (NvmeNamespacePnpIrp.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x140037340 (RaSendIrpSynchronous.c)
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     NvmeNamespaceAcquireRemoveLock @ 0x140041680 (NvmeNamespaceAcquireRemoveLock.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidNotifyPoAboutSpecialDevice @ 0x1400C54E8 (RaidNotifyPoAboutSpecialDevice.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceDeviceUsageNotificationIrp(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // ebx
  volatile signed __int32 *v6; // r15
  __int64 v7; // r9
  __int64 v8; // r13
  _BYTE **v9; // r14
  char v10; // dl
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  const wchar_t *v14; // rdx
  __int64 v15; // r9
  const wchar_t *v16; // rdx
  bool v17; // cf
  __int64 v18; // r8
  __int64 v19; // r9
  PIRP Irp; // rax
  IRP *v21; // r13
  int Status; // r12d
  __int64 v23; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  void *v25; // xmm0_8
  __int64 v26; // rcx
  bool v27; // zf
  unsigned __int64 v28; // rcx
  _BYTE *v29; // rdx
  int *v30; // rax
  const EVENT_DESCRIPTOR *v31; // rdx
  __int64 v32; // rdx
  _BYTE *v33; // r9
  unsigned __int8 v34; // r14
  char v35; // r10
  char v36; // si
  char v37; // r11
  char v38; // r15
  char *v39; // r15
  unsigned int v40; // ecx
  __int64 v41; // rax
  unsigned __int64 v42; // r13
  __int64 v43; // r8
  int v44; // ecx
  char v45; // r13
  char v46; // cl
  char v47; // r8
  char v48; // al
  char *v49; // r11
  unsigned int v50; // eax
  __int64 v52; // [rsp+20h] [rbp-E0h]
  __int64 v53; // [rsp+28h] [rbp-D8h]
  char v54; // [rsp+60h] [rbp-A0h]
  char v55; // [rsp+60h] [rbp-A0h]
  char v56; // [rsp+61h] [rbp-9Fh] BYREF
  int v57; // [rsp+64h] [rbp-9Ch]
  unsigned int v58; // [rsp+68h] [rbp-98h] BYREF
  int v59; // [rsp+6Ch] [rbp-94h] BYREF
  int v60; // [rsp+70h] [rbp-90h] BYREF
  __int64 v61; // [rsp+78h] [rbp-88h] BYREF
  __int64 v62; // [rsp+80h] [rbp-80h]
  GUID v63; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v65; // [rsp+C0h] [rbp-40h]
  __int64 v66; // [rsp+C8h] [rbp-38h]
  __int64 v67; // [rsp+D0h] [rbp-30h]
  __int64 v68; // [rsp+D8h] [rbp-28h]
  __int64 v69; // [rsp+E0h] [rbp-20h]
  __int64 v70; // [rsp+E8h] [rbp-18h]
  int *v71; // [rsp+F0h] [rbp-10h]
  __int64 v72; // [rsp+F8h] [rbp-8h]
  int *v73; // [rsp+100h] [rbp+0h]
  __int64 v74; // [rsp+108h] [rbp+8h]
  unsigned int *v75; // [rsp+110h] [rbp+10h]
  __int64 v76; // [rsp+118h] [rbp+18h]
  char v77[16]; // [rsp+120h] [rbp+20h] BYREF
  char *v78; // [rsp+130h] [rbp+30h]
  __int64 v79; // [rsp+138h] [rbp+38h]
  char v80[16]; // [rsp+140h] [rbp+40h] BYREF

  v2 = *(_DWORD *)(a1 + 96);
  v3 = 0;
  v6 = 0LL;
  if ( v2 )
  {
    if ( (unsigned int)(v2 - 5) > 1 )
    {
      v7 = *(_QWORD *)(a1 + 16);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 128);
        v9 = (_BYTE **)(a2 + 184);
        v62 = *(_QWORD *)(a2 + 184);
        *(_QWORD *)&v63.Data1 = v8;
        v10 = *(_BYTE *)(v62 + 8);
        v57 = *(_DWORD *)(v62 + 16);
        v54 = v10;
        if ( v57 == 1 )
        {
          v6 = (volatile signed __int32 *)(a1 + 264);
        }
        else if ( v57 == 2 )
        {
          v6 = (volatile signed __int32 *)(a1 + 272);
        }
        else
        {
          v11 = (unsigned int)(v57 - 3);
          if ( v57 != 3 )
          {
            if ( v57 == 4 )
            {
              v12 = *(_QWORD *)(a1 + 112);
              if ( v10 )
              {
                *(_QWORD *)(a1 + 112) = v12 | 0x40;
                *(_QWORD *)(v8 + 144) |= 0x2000uLL;
                if ( (unsigned int)dword_140172178 > 5 && tlgKeywordOn(v11, 0x400000000000LL) )
                {
                  v14 = *(const wchar_t **)(v8 + 1032);
                  v65 = &v61;
                  v61 = 0x1000000LL;
                  v67 = v8 + 1048;
                  v69 = a1 + 160;
                  v59 = *(_DWORD *)(a1 + 56);
                  v71 = &v59;
                  v60 = *(_DWORD *)(v8 + 56);
                  v73 = &v60;
                  v58 = *(unsigned __int16 *)(v13 + 4);
                  v75 = &v58;
                  v66 = 8LL;
                  v68 = 16LL;
                  v70 = 16LL;
                  v72 = 4LL;
                  v74 = 4LL;
                  v76 = 4LL;
                  tlgCreate1Sz_wchar_t((__int64)v77, v14);
                  v16 = *(const wchar_t **)(v8 + 1040);
                  v17 = (*(_BYTE *)(v15 + 136) & 2) != 0;
                  v79 = 1LL;
                  v56 = v17 ? 20 : 17;
                  v78 = &v56;
                  tlgCreate1Sz_wchar_t((__int64)v80, v16);
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)v64,
                    (unsigned __int8 *)dword_1401651BE,
                    v18,
                    v19,
                    0xBu,
                    v64);
                }
              }
              else
              {
                *(_QWORD *)(a1 + 112) = v12 & 0xFFFFFFFFFFFFFFBFuLL;
                *(_QWORD *)(v8 + 144) &= ~0x2000uLL;
              }
            }
            goto LABEL_12;
          }
          v6 = (volatile signed __int32 *)(a1 + 268);
        }
        if ( v6 && !*v6 && !v10 )
        {
          Status = -1073741823;
          goto LABEL_37;
        }
LABEL_12:
        Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v8 + 8) + 76LL) + 3, 0);
        v21 = Irp;
        if ( !Irp )
        {
          Status = -1073741801;
          goto LABEL_37;
        }
        Status = NvmeNamespaceAcquireRemoveLock(a1, (__int64)Irp);
        if ( Status < 0 )
          goto LABEL_35;
        v23 = v62;
        v21->Tail.Overlay.Thread = *(_ETHREAD **)(a2 + 152);
        CurrentStackLocation = v21->Tail.Overlay.CurrentStackLocation;
        v21->IoStatus.Status = -1073741637;
        *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)v23;
        *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)(v23 + 16);
        *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(v23 + 32);
        *(_OWORD *)&CurrentStackLocation[-1].FileObject = *(_OWORD *)(v23 + 48);
        v25 = *(void **)(v23 + 64);
        v26 = *(_QWORD *)&v63.Data1;
        CurrentStackLocation[-1].Context = v25;
        Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(v26 + 8), v21);
        if ( Status < 0 || (Status = v21->IoStatus.Status, Status < 0) )
        {
          if ( Status != -1073741637 || v57 != 4 )
          {
LABEL_34:
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
LABEL_35:
            IoFreeIrp(v21);
            goto LABEL_37;
          }
          Status = 0;
        }
        if ( v6 )
        {
          if ( v54 )
            _InterlockedIncrement(v6);
          else
            _InterlockedDecrement(v6);
          IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 8));
          if ( v57 == 1 )
            RaidNotifyPoAboutSpecialDevice(*(_QWORD *)(a1 + 8), *v6);
        }
        goto LABEL_34;
      }
    }
  }
  Status = -1073741810;
  v9 = (_BYTE **)(a2 + 184);
LABEL_37:
  v27 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = Status;
  if ( v27 )
    goto LABEL_103;
  v63 = 0LL;
  IoGetActivityIdIrp(a2, &v63);
  v29 = *v9;
  if ( **v9 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_103;
    v31 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_102;
  }
  if ( **v9 != 15 )
  {
    if ( **v9 != 27 )
      goto LABEL_103;
    if ( v29[1] == 7 && !*((_DWORD *)v29 + 2) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v30 = *(int **)(a2 + 56);
        if ( v30 )
          v3 = *v30;
        LODWORD(v53) = *(_DWORD *)(a2 + 48);
        LODWORD(v52) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v28, (__int64)v29, &v63, a2, v52, v53);
      }
      goto LABEL_103;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_103;
    v31 = &EventPnpRequestComplete;
LABEL_102:
    LODWORD(v52) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v28, v31, &v63, a2, v52);
    goto LABEL_103;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_103;
  v32 = *((_QWORD *)v29 + 1);
  v33 = 0LL;
  v55 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  if ( *(_BYTE *)(v32 + 2) != 40 )
  {
    v46 = *(_BYTE *)(v32 + 72);
    v33 = *(_BYTE **)(v32 + 32);
    v34 = *(_BYTE *)(v32 + 11);
    v45 = *(_BYTE *)(v32 + 4);
    if ( *(_BYTE *)(v32 + 2) )
      goto LABEL_103;
LABEL_77:
    LOBYTE(v28) = v46 - 8;
    if ( (v28 & 0x5D) != 0 )
      goto LABEL_103;
    v47 = *(_BYTE *)(v32 + 3);
    if ( v47 == 1 || !v33 || !v34 )
      goto LABEL_96;
    v48 = *v33 & 0x7F;
    if ( v48 == 114 || v48 == 115 )
    {
      v28 = (unsigned __int64)&v33[v34];
      LOBYTE(v32) = 0;
      if ( (unsigned __int64)(v33 + 8) > v28 )
        goto LABEL_94;
      v36 = v33[2];
      v35 = v33[1] & 0xF;
      v37 = v33[3];
    }
    else
    {
      v28 = (unsigned __int64)&v33[v34];
      LOBYTE(v32) = 0;
      if ( (unsigned __int64)(v33 + 8) > v28 )
        goto LABEL_94;
      v49 = v33 + 13;
      v35 = v33[2] & 0xF;
      v50 = v34;
      if ( (unsigned int)(unsigned __int8)v33[7] + 8 <= v34 )
        v50 = (unsigned __int8)v33[7] + 8;
      v28 = (unsigned __int64)&v33[v50];
      if ( (unsigned __int64)v49 <= v28 )
        v36 = v33[12];
      if ( (unsigned __int64)(v33 + 14) > v28 )
        v37 = 0;
      else
        v37 = *v49;
    }
    LOBYTE(v32) = 1;
LABEL_94:
    if ( (_BYTE)v32 )
      v38 = 1;
LABEL_96:
    if ( byte_140173441 < 0 )
    {
      if ( !v38 )
      {
        v37 = 0;
        v36 = 0;
        v35 = 0;
      }
      LOBYTE(v53) = v47;
      LODWORD(v52) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v28, v32, &v63, a2, v52, v53, v45, v35, v36, v37, a2);
    }
    goto LABEL_103;
  }
  v39 = 0LL;
  v56 = 0;
  if ( !*(_DWORD *)(v32 + 20) )
  {
    v40 = *(_DWORD *)(v32 + 56);
    v41 = 0LL;
    v57 = 0;
    v58 = v40;
    if ( v40 )
    {
      do
      {
        v28 = *(unsigned int *)(v32 + 4 * v41 + 120);
        if ( (unsigned int)v28 >= 0x80 )
        {
          v42 = *(unsigned int *)(v32 + 16);
          if ( (unsigned int)v28 < (unsigned int)v42 )
          {
            v43 = (unsigned int)v28;
            v44 = *(_DWORD *)(v28 + v32) - 64;
            if ( v44 )
            {
              v28 = (unsigned int)(v44 - 1);
              if ( (_DWORD)v28 )
              {
                if ( (_DWORD)v28 == 1 )
                {
                  v28 = v43 + 40;
                  if ( v43 + 40 <= v42 )
                  {
                    if ( *(_DWORD *)(v43 + v32 + 12) )
                      v39 = (char *)(v43 + v32 + 32);
                    v33 = *(_BYTE **)(v43 + v32 + 24);
LABEL_62:
                    v45 = *(_BYTE *)(v43 + v32 + 8);
                    v34 = *(_BYTE *)(v43 + v32 + 9);
                    goto LABEL_71;
                  }
                }
              }
              else
              {
                v28 = v43 + 56;
                if ( v43 + 56 <= v42 )
                {
                  v56 = 1;
                  if ( *(_BYTE *)(v43 + v32 + 10) )
                    v39 = (char *)(v43 + v32 + 24);
                  v33 = *(_BYTE **)(v43 + v32 + 16);
                  v34 = *(_BYTE *)(v43 + v32 + 9);
                  v55 = *(_BYTE *)(v43 + v32 + 8);
                }
              }
            }
            else
            {
              v28 = v43 + 40;
              if ( v43 + 40 <= v42 )
              {
                if ( *(_BYTE *)(v43 + v32 + 10) )
                  v39 = (char *)(v43 + v32 + 24);
                v33 = *(_BYTE **)(v43 + v32 + 16);
                goto LABEL_62;
              }
            }
            if ( v56 )
              break;
          }
        }
        v41 = (unsigned int)(v57 + 1);
        v57 = v41;
      }
      while ( (unsigned int)v41 < v58 );
      v45 = v55;
LABEL_71:
      if ( v39 )
      {
        v46 = *v39;
        v38 = 0;
        goto LABEL_77;
      }
    }
  }
LABEL_103:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)Status;
}
