/*
 * XREFs of RaUnitStoragePowerIdle @ 0x140024E48
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitPoFxIdleComponentFromIoctl @ 0x1400250E0 (RaidUnitPoFxIdleComponentFromIoctl.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitStoragePowerIdle(__int64 a1, __int64 a2)
{
  int v2; // r14d
  int v5; // ebx
  bool v6; // zf
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  int *v10; // rax
  char v11; // al
  __int64 v12; // rdx
  char *v13; // r10
  char v14; // si
  unsigned int v15; // eax
  char v16; // r11
  char v17; // r10
  char v18; // r14
  char v19; // r13
  _BYTE *v20; // r9
  unsigned __int8 v21; // bp
  char *v22; // r14
  unsigned int v23; // r12d
  unsigned __int64 v24; // r15
  __int64 v25; // r8
  int v26; // ecx
  char v27; // cl
  char v28; // r8
  char v29; // [rsp+60h] [rbp-68h]
  unsigned int v30; // [rsp+64h] [rbp-64h]
  unsigned int v31; // [rsp+68h] [rbp-60h]
  __int128 v32; // [rsp+70h] [rbp-58h] BYREF

  v2 = -1073741823;
  v30 = -1073741823;
  LOBYTE(v5) = 0;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    RaidUnitPoFxIdleComponentFromIoctl(a1);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
    v2 = 0;
    v30 = 0;
  }
  v6 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v2;
  if ( v6 )
    goto LABEL_7;
  v32 = 0LL;
  IoGetActivityIdIrp(a2, &v32);
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v8 == 14 )
  {
    if ( (byte_140173442 & 8) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v7, &EventNonReadWriteRequestComplete, &v32, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_7;
  }
  if ( *(_BYTE *)v8 != 15 )
  {
    if ( *(_BYTE *)v8 == 27 )
    {
      if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v10 = *(int **)(a2 + 56);
          if ( v10 )
            v5 = *v10;
          McTemplateK0pqd_EtwWriteTransfer(v7, v8, (unsigned int)&v32, a2, v5, *(_DWORD *)(a2 + 48));
        }
      }
      else if ( (byte_140173442 & 0x20) != 0 )
      {
        McTemplateK0pd_EtwWriteTransfer(v7, &EventPnpRequestComplete, &v32, a2, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_7;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_7;
  v12 = *(_QWORD *)(v8 + 8);
  v19 = 0;
  v20 = 0LL;
  v21 = 0;
  v14 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v27 = *(_BYTE *)(v12 + 72);
    v20 = *(_BYTE **)(v12 + 32);
    v21 = *(_BYTE *)(v12 + 11);
    v19 = *(_BYTE *)(v12 + 4);
    if ( *(_BYTE *)(v12 + 2) )
      goto LABEL_7;
LABEL_67:
    LOBYTE(v7) = v27 - 8;
    if ( (v7 & 0x5D) != 0 )
      goto LABEL_7;
    v28 = *(_BYTE *)(v12 + 3);
    if ( v28 == 1 || !v20 || !v21 )
      goto LABEL_32;
    v11 = *v20 & 0x7F;
    if ( v11 == 114 || v11 == 115 )
    {
      v7 = (unsigned __int64)&v20[v21];
      LOBYTE(v12) = 0;
      if ( (unsigned __int64)(v20 + 8) > v7 )
      {
LABEL_30:
        if ( (_BYTE)v12 )
          v18 = 1;
LABEL_32:
        if ( byte_140173441 < 0 )
        {
          if ( !v18 )
          {
            v17 = 0;
            v16 = 0;
            v14 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v7,
            v12,
            (unsigned int)&v32,
            a2,
            *(_DWORD *)(a2 + 48),
            v28,
            v19,
            v14,
            v16,
            v17,
            a2);
        }
        goto LABEL_7;
      }
      v16 = v20[2];
      v14 = v20[1] & 0xF;
      v17 = v20[3];
    }
    else
    {
      v7 = (unsigned __int64)&v20[v21];
      LOBYTE(v12) = 0;
      if ( (unsigned __int64)(v20 + 8) > v7 )
        goto LABEL_30;
      v13 = v20 + 13;
      v14 = v20[2] & 0xF;
      v15 = v21;
      if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
        v15 = (unsigned __int8)v20[7] + 8;
      v7 = (unsigned __int64)&v20[v15];
      if ( (unsigned __int64)v13 <= v7 )
        v16 = v20[12];
      if ( (unsigned __int64)(v20 + 14) > v7 )
        v17 = 0;
      else
        v17 = *v13;
    }
    LOBYTE(v12) = 1;
    goto LABEL_30;
  }
  v22 = 0LL;
  v29 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_7;
  v23 = 0;
  v31 = *(_DWORD *)(v12 + 56);
  if ( !v31 )
    goto LABEL_7;
  while ( 1 )
  {
    v7 = *(unsigned int *)(v12 + 4LL * v23 + 120);
    if ( (unsigned int)v7 >= 0x80 )
    {
      v24 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v7 < (unsigned int)v24 )
        break;
    }
LABEL_57:
    if ( ++v23 >= v31 )
      goto LABEL_64;
  }
  v25 = (unsigned int)v7;
  v26 = *(_DWORD *)(v7 + v12) - 64;
  if ( v26 )
  {
    LODWORD(v7) = v26 - 1;
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        LODWORD(v7) = v25 + 40;
        if ( v25 + 40 <= v24 )
        {
          if ( *(_DWORD *)(v25 + v12 + 12) )
            v22 = (char *)(v25 + v12 + 32);
          v20 = *(_BYTE **)(v25 + v12 + 24);
          goto LABEL_63;
        }
      }
    }
    else
    {
      LODWORD(v7) = v25 + 56;
      if ( v25 + 56 <= v24 )
      {
        v29 = 1;
        if ( *(_BYTE *)(v25 + v12 + 10) )
          v22 = (char *)(v25 + v12 + 24);
        v19 = *(_BYTE *)(v25 + v12 + 8);
        v20 = *(_BYTE **)(v25 + v12 + 16);
        v21 = *(_BYTE *)(v25 + v12 + 9);
      }
    }
    goto LABEL_56;
  }
  LODWORD(v7) = v25 + 40;
  if ( v25 + 40 > v24 )
  {
LABEL_56:
    if ( v29 )
      goto LABEL_64;
    goto LABEL_57;
  }
  if ( *(_BYTE *)(v25 + v12 + 10) )
    v22 = (char *)(v25 + v12 + 24);
  v20 = *(_BYTE **)(v25 + v12 + 16);
LABEL_63:
  v21 = *(_BYTE *)(v25 + v12 + 9);
  v19 = *(_BYTE *)(v25 + v12 + 8);
LABEL_64:
  if ( v22 )
  {
    v27 = *v22;
    v18 = 0;
    goto LABEL_67;
  }
LABEL_7:
  IofCompleteRequest((PIRP)a2, 0);
  return v30;
}
