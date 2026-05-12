/*
 * XREFs of RaUnitUnlockQueueSrb @ 0x140028080
 * Callers:
 *     RaDriverScsiIrp @ 0x140003DF0 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x140004D30 (RaUnitScsiIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaidUnitRestartQueue @ 0x140029650 (RaidUnitRestartQueue.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline @ 0x140097F6C (Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitUnlockQueueSrb(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v4; // ebx
  __int64 v6; // rcx
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  void *v11; // rdx
  int *v12; // rax
  char v13; // al
  __int64 v14; // rdx
  char *v15; // r10
  char v16; // r11
  unsigned int v17; // eax
  char v18; // si
  char v19; // r10
  char v20; // r15
  _BYTE *v21; // r9
  unsigned __int8 v22; // r14
  char *v23; // r15
  unsigned int v24; // r13d
  KIRQL v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rax
  __int16 v28; // cx
  _DWORD *v29; // rcx
  _DWORD *v30; // rcx
  unsigned __int64 v31; // r12
  __int64 v32; // r8
  int v33; // ecx
  char v34; // r12
  char v35; // cl
  char v36; // r8
  char v37; // [rsp+60h] [rbp-39h]
  char v38; // [rsp+61h] [rbp-38h]
  unsigned int v39; // [rsp+64h] [rbp-35h]
  __int128 v40; // [rsp+68h] [rbp-31h] BYREF
  _OWORD v41[2]; // [rsp+78h] [rbp-21h] BYREF
  __int128 v42; // [rsp+98h] [rbp-1h]
  __int64 v43; // [rsp+A8h] [rbp+Fh]

  v2 = *(_QWORD *)(a2 + 184);
  LOBYTE(v4) = 0;
  memset(v41, 0, sizeof(v41));
  v6 = *(_QWORD *)(v2 + 8);
  v43 = 0LL;
  v42 = 0LL;
  *(_BYTE *)(v6 + 3) = 1;
  *(_BYTE *)(a1 + 757) = 0;
  if ( *(_QWORD *)(a1 + 32) && RaidIsUnitControlSupported(a1, 31) )
  {
    v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL));
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) &= ~0x20u;
    v26 = *(_QWORD *)(a1 + 32);
    if ( (*(_DWORD *)(v26 + 80) & 0x1E0) == 0 && *(int *)(v26 + 84) <= 0 )
    {
      LODWORD(v41[0]) = 56;
      *(_QWORD *)((char *)v41 + 4) = 0x300000038LL;
      if ( (unsigned int)Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline() )
      {
        v27 = *(_QWORD *)(a1 + 24);
        WORD4(v42) = 1;
        HIDWORD(v42) = 4;
        v28 = *(_WORD *)(v27 + 56);
        LOWORD(v43) = *(_WORD *)(a1 + 104);
        BYTE2(v43) = *(_BYTE *)(a1 + 106);
        WORD5(v42) = v28;
      }
      v29 = *(_DWORD **)(a1 + 24);
      if ( *v29 == 1094997074 )
      {
        v30 = v29 + 94;
      }
      else if ( *v29 == 1314275652 )
      {
        v30 = v29 + 42;
      }
      else
      {
        v30 = 0LL;
      }
      RaCallMiniportUnitControl(v30, 31LL, v41);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v25);
  }
  RaidUnitRestartQueue(a1, 0LL);
  v7 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v7 )
    goto LABEL_6;
  v40 = 0LL;
  IoGetActivityIdIrp(a2, &v40);
  v9 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_6;
    v11 = &EventNonReadWriteRequestComplete;
    goto LABEL_14;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_6;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v12 = *(int **)(a2 + 56);
        if ( v12 )
          v4 = *v12;
        McTemplateK0pqd_EtwWriteTransfer(v8, v9, (unsigned int)&v40, a2, v4, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_6;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_6;
    v11 = &EventPnpRequestComplete;
LABEL_14:
    McTemplateK0pd_EtwWriteTransfer(v8, v11, &v40, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_6;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_6;
  v14 = *(_QWORD *)(v9 + 8);
  v21 = 0LL;
  v37 = 0;
  v22 = 0;
  v16 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( *(_BYTE *)(v14 + 2) != 40 )
  {
    v35 = *(_BYTE *)(v14 + 72);
    v21 = *(_BYTE **)(v14 + 32);
    v22 = *(_BYTE *)(v14 + 11);
    v34 = *(_BYTE *)(v14 + 4);
    if ( *(_BYTE *)(v14 + 2) )
      goto LABEL_6;
LABEL_79:
    LOBYTE(v8) = v35 - 8;
    if ( (v8 & 0x5D) != 0 )
      goto LABEL_6;
    v36 = *(_BYTE *)(v14 + 3);
    if ( v36 == 1 || !v21 || !v22 )
      goto LABEL_32;
    v13 = *v21 & 0x7F;
    if ( v13 == 114 || v13 == 115 )
    {
      v8 = (unsigned __int64)&v21[v22];
      LOBYTE(v14) = 0;
      if ( (unsigned __int64)(v21 + 8) > v8 )
      {
LABEL_30:
        if ( (_BYTE)v14 )
          v20 = 1;
LABEL_32:
        if ( byte_140173441 < 0 )
        {
          if ( !v20 )
          {
            v19 = 0;
            v18 = 0;
            v16 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v8,
            v14,
            (unsigned int)&v40,
            a2,
            *(_DWORD *)(a2 + 48),
            v36,
            v34,
            v16,
            v18,
            v19,
            a2);
        }
        goto LABEL_6;
      }
      v18 = v21[2];
      v16 = v21[1] & 0xF;
      v19 = v21[3];
    }
    else
    {
      v8 = (unsigned __int64)&v21[v22];
      LOBYTE(v14) = 0;
      if ( (unsigned __int64)(v21 + 8) > v8 )
        goto LABEL_30;
      v15 = v21 + 13;
      v16 = v21[2] & 0xF;
      v17 = v22;
      if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
        v17 = (unsigned __int8)v21[7] + 8;
      v8 = (unsigned __int64)&v21[v17];
      if ( (unsigned __int64)v15 <= v8 )
        v18 = v21[12];
      if ( (unsigned __int64)(v21 + 14) > v8 )
        v19 = 0;
      else
        v19 = *v15;
    }
    LOBYTE(v14) = 1;
    goto LABEL_30;
  }
  v23 = 0LL;
  v38 = 0;
  if ( *(_DWORD *)(v14 + 20) )
    goto LABEL_6;
  v24 = 0;
  v39 = *(_DWORD *)(v14 + 56);
  if ( !v39 )
    goto LABEL_6;
  while ( 1 )
  {
    v8 = *(unsigned int *)(v14 + 4LL * v24 + 120);
    if ( (unsigned int)v8 >= 0x80 )
    {
      v31 = *(unsigned int *)(v14 + 16);
      if ( (unsigned int)v8 < (unsigned int)v31 )
        break;
    }
LABEL_69:
    if ( ++v24 >= v39 )
    {
LABEL_70:
      v34 = v37;
      goto LABEL_71;
    }
  }
  v32 = (unsigned int)v8;
  v33 = *(_DWORD *)(v8 + v14) - 64;
  if ( v33 )
  {
    LODWORD(v8) = v33 - 1;
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 == 1 )
      {
        LODWORD(v8) = v32 + 40;
        if ( v32 + 40 <= v31 )
        {
          if ( *(_DWORD *)(v32 + v14 + 12) )
            v23 = (char *)(v32 + v14 + 32);
          v21 = *(_BYTE **)(v32 + v14 + 24);
          goto LABEL_77;
        }
      }
    }
    else
    {
      LODWORD(v8) = v32 + 56;
      if ( v32 + 56 <= v31 )
      {
        v38 = 1;
        if ( *(_BYTE *)(v32 + v14 + 10) )
          v23 = (char *)(v32 + v14 + 24);
        v21 = *(_BYTE **)(v32 + v14 + 16);
        v22 = *(_BYTE *)(v32 + v14 + 9);
        v37 = *(_BYTE *)(v32 + v14 + 8);
      }
    }
    goto LABEL_68;
  }
  LODWORD(v8) = v32 + 40;
  if ( v32 + 40 > v31 )
  {
LABEL_68:
    if ( v38 )
      goto LABEL_70;
    goto LABEL_69;
  }
  if ( *(_BYTE *)(v32 + v14 + 10) )
    v23 = (char *)(v32 + v14 + 24);
  v21 = *(_BYTE **)(v32 + v14 + 16);
LABEL_77:
  v34 = *(_BYTE *)(v32 + v14 + 8);
  v22 = *(_BYTE *)(v32 + v14 + 9);
LABEL_71:
  if ( v23 )
  {
    v35 = *v23;
    v20 = 0;
    goto LABEL_79;
  }
LABEL_6:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
