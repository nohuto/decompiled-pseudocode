/*
 * XREFs of RaidUnitTestDeviceQueue @ 0x1400A9E8C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidPauseUnitQueue @ 0x1400292F0 (RaidPauseUnitQueue.c)
 *     RaidUnitRestartQueue @ 0x140029650 (RaidUnitRestartQueue.c)
 *     RiDisableDeviceQueueFastPath @ 0x14002DED0 (RiDisableDeviceQueueFastPath.c)
 *     RaidPauseAdapterQueue @ 0x14002EEF0 (RaidPauseAdapterQueue.c)
 *     RaUnitUnlockForwardIo @ 0x1400429E0 (RaUnitUnlockForwardIo.c)
 *     RaUnitLockForwardIo @ 0x140042F00 (RaUnitLockForwardIo.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x14006DC84 (RaidResumeAndRestartAdapterQueues.c)
 *     RaidFreezeUnitQueue @ 0x1400A6784 (RaidFreezeUnitQueue.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1400A6948 (RaidResumeAndRestartUnitQueue.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitTestDeviceQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v5; // ebx
  _DWORD *v7; // rcx
  int v9; // r14d
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // edx
  int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  bool v19; // zf
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  int *v22; // rax
  const EVENT_DESCRIPTOR *v23; // rdx
  __int64 v24; // rdx
  char v25; // r13
  _BYTE *v26; // r9
  unsigned __int8 v27; // bp
  char v28; // di
  char v29; // r11
  char v30; // r10
  char v31; // r14
  char *v32; // r14
  unsigned int v33; // r12d
  unsigned __int64 v34; // r15
  __int64 v35; // r8
  int v36; // ecx
  char v37; // cl
  char v38; // r8
  char v39; // al
  char *v40; // r10
  unsigned int v41; // eax
  int v43; // [rsp+20h] [rbp-A8h]
  char v44; // [rsp+60h] [rbp-68h]
  unsigned int v45; // [rsp+64h] [rbp-64h]
  unsigned int v46; // [rsp+68h] [rbp-60h]
  GUID v47; // [rsp+70h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v7 = *(_DWORD **)(a2 + 24);
  v9 = 0;
  v45 = 0;
  if ( *(_DWORD *)(v4 + 16) >= 0xCu && *v7 == 12 && v7[1] == 12 )
  {
    v10 = v7[2];
    if ( v10 <= 5 )
    {
      if ( v10 == 5 )
      {
        *(_BYTE *)(a1 + 756) = 0;
        v14 = 3;
        goto LABEL_15;
      }
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( !v11 )
        {
          *(_BYTE *)(a1 + 757) = 0;
          v14 = 1;
          goto LABEL_15;
        }
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 == 1 )
            {
              RaidFreezeUnitQueue(a1);
              goto LABEL_28;
            }
            goto LABEL_27;
          }
          *(_BYTE *)(a1 + 759) = 0;
          v14 = 2;
LABEL_15:
          RaUnitUnlockForwardIo(a1, v14);
          RaidUnitRestartQueue(a1, 0);
          goto LABEL_28;
        }
        *(_BYTE *)(a1 + 759) = 1;
        RiDisableDeviceQueueFastPath((struct _EX_RUNDOWN_REF *)(a1 + 720), 0);
        v15 = 2;
      }
      else
      {
        *(_BYTE *)(a1 + 757) = 1;
        RiDisableDeviceQueueFastPath((struct _EX_RUNDOWN_REF *)(a1 + 720), 0);
        v15 = 1;
      }
      RaUnitLockForwardIo(a1, v15);
      goto LABEL_28;
    }
    v16 = v10 - 6;
    if ( !v16 )
    {
      RaidPauseUnitQueue(a1);
      goto LABEL_28;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      RaidResumeAndRestartUnitQueue(a1);
      goto LABEL_28;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      RaidPauseAdapterQueue(*(_QWORD *)(a1 + 24));
      goto LABEL_28;
    }
    if ( v18 == 1 )
    {
      RaidResumeAndRestartAdapterQueues(*(_QWORD *)(a1 + 24), a2, a3, a4);
      goto LABEL_28;
    }
  }
LABEL_27:
  v9 = -1073741811;
  v45 = -1073741811;
LABEL_28:
  v19 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v19 )
    goto LABEL_94;
  v47 = 0LL;
  IoGetActivityIdIrp(a2, &v47);
  v21 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v21 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_94;
    v43 = *(_DWORD *)(a2 + 48);
    v23 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_93;
  }
  if ( *(_BYTE *)v21 != 15 )
  {
    if ( *(_BYTE *)v21 != 27 )
      goto LABEL_94;
    if ( *(_BYTE *)(v21 + 1) == 7 && !*(_DWORD *)(v21 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v22 = *(int **)(a2 + 56);
        if ( v22 )
          v5 = *v22;
        McTemplateK0pqd_EtwWriteTransfer(v20, v21, &v47, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_94;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_94;
    v23 = &EventPnpRequestComplete;
    v43 = *(_DWORD *)(a2 + 48);
LABEL_93:
    McTemplateK0pd_EtwWriteTransfer(v20, v23, &v47, a2, v43);
    goto LABEL_94;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_94;
  v24 = *(_QWORD *)(v21 + 8);
  v25 = 0;
  v26 = 0LL;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  if ( *(_BYTE *)(v24 + 2) != 40 )
  {
    v37 = *(_BYTE *)(v24 + 72);
    v26 = *(_BYTE **)(v24 + 32);
    v27 = *(_BYTE *)(v24 + 11);
    v25 = *(_BYTE *)(v24 + 4);
    if ( *(_BYTE *)(v24 + 2) )
      goto LABEL_94;
LABEL_68:
    LOBYTE(v20) = v37 - 8;
    if ( (v20 & 0x5D) != 0 )
      goto LABEL_94;
    v38 = *(_BYTE *)(v24 + 3);
    if ( v38 == 1 || !v26 || !v27 )
      goto LABEL_87;
    v39 = *v26 & 0x7F;
    if ( v39 == 114 || v39 == 115 )
    {
      v20 = (unsigned __int64)&v26[v27];
      LOBYTE(v24) = 0;
      if ( (unsigned __int64)(v26 + 8) > v20 )
        goto LABEL_85;
      v29 = v26[2];
      v28 = v26[1] & 0xF;
      v30 = v26[3];
    }
    else
    {
      v20 = (unsigned __int64)&v26[v27];
      LOBYTE(v24) = 0;
      if ( (unsigned __int64)(v26 + 8) > v20 )
        goto LABEL_85;
      v40 = v26 + 13;
      v28 = v26[2] & 0xF;
      v41 = v27;
      if ( (unsigned int)(unsigned __int8)v26[7] + 8 <= v27 )
        v41 = (unsigned __int8)v26[7] + 8;
      v20 = (unsigned __int64)&v26[v41];
      if ( (unsigned __int64)v40 <= v20 )
        v29 = v26[12];
      if ( (unsigned __int64)(v26 + 14) > v20 )
        v30 = 0;
      else
        v30 = *v40;
    }
    LOBYTE(v24) = 1;
LABEL_85:
    if ( (_BYTE)v24 )
      v31 = 1;
LABEL_87:
    if ( byte_140173441 < 0 )
    {
      if ( !v31 )
      {
        v30 = 0;
        v29 = 0;
        v28 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v20, v24, &v47, a2, *(_DWORD *)(a2 + 48), v38, v25, v28, v29, v30, a2);
    }
    goto LABEL_94;
  }
  v32 = 0LL;
  v44 = 0;
  if ( *(_DWORD *)(v24 + 20) )
    goto LABEL_94;
  v33 = 0;
  v46 = *(_DWORD *)(v24 + 56);
  if ( !v46 )
    goto LABEL_94;
  while ( 1 )
  {
    v20 = *(unsigned int *)(v24 + 4LL * v33 + 120);
    if ( (unsigned int)v20 >= 0x80 )
    {
      v34 = *(unsigned int *)(v24 + 16);
      if ( (unsigned int)v20 < (unsigned int)v34 )
        break;
    }
LABEL_59:
    if ( ++v33 >= v46 )
      goto LABEL_65;
  }
  v35 = (unsigned int)v20;
  v36 = *(_DWORD *)(v20 + v24) - 64;
  if ( v36 )
  {
    v20 = (unsigned int)(v36 - 1);
    if ( (_DWORD)v20 )
    {
      if ( (_DWORD)v20 == 1 )
      {
        v20 = v35 + 40;
        if ( v35 + 40 <= v34 )
        {
          if ( *(_DWORD *)(v35 + v24 + 12) )
            v32 = (char *)(v35 + v24 + 32);
          v26 = *(_BYTE **)(v35 + v24 + 24);
          goto LABEL_64;
        }
      }
    }
    else
    {
      v20 = v35 + 56;
      if ( v35 + 56 <= v34 )
      {
        v44 = 1;
        if ( *(_BYTE *)(v35 + v24 + 10) )
          v32 = (char *)(v35 + v24 + 24);
        v25 = *(_BYTE *)(v35 + v24 + 8);
        v26 = *(_BYTE **)(v35 + v24 + 16);
        v27 = *(_BYTE *)(v35 + v24 + 9);
      }
    }
    goto LABEL_58;
  }
  v20 = v35 + 40;
  if ( v35 + 40 > v34 )
  {
LABEL_58:
    if ( v44 )
      goto LABEL_65;
    goto LABEL_59;
  }
  if ( *(_BYTE *)(v35 + v24 + 10) )
    v32 = (char *)(v35 + v24 + 24);
  v26 = *(_BYTE **)(v35 + v24 + 16);
LABEL_64:
  v27 = *(_BYTE *)(v35 + v24 + 9);
  v25 = *(_BYTE *)(v35 + v24 + 8);
LABEL_65:
  if ( v32 )
  {
    v37 = *v32;
    v31 = 0;
    goto LABEL_68;
  }
LABEL_94:
  IofCompleteRequest((PIRP)a2, 0);
  return v45;
}
