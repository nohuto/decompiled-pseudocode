/*
 * XREFs of RaUnitStoragePowerActive @ 0x1400A39D8
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitPoFxActivateComponent @ 0x14002A810 (RaidUnitPoFxActivateComponent.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitStoragePowerActive(__int64 a1, __int64 a2)
{
  int v2; // r14d
  int v5; // ebx
  PEX_RUNDOWN_REF_CACHE_AWARE *v6; // rsi
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  __int64 v12; // rdx
  char v13; // r13
  _BYTE *v14; // r9
  unsigned __int8 v15; // bp
  char v16; // r11
  char v17; // si
  char v18; // r10
  char v19; // r14
  char *v20; // r14
  unsigned int v21; // r12d
  unsigned __int64 v22; // r15
  __int64 v23; // r8
  int v24; // ecx
  char v25; // cl
  char v26; // al
  char v27; // r8
  char *v28; // r10
  unsigned int v29; // eax
  int v31; // [rsp+20h] [rbp-A8h]
  char v32; // [rsp+60h] [rbp-68h]
  unsigned int v33; // [rsp+64h] [rbp-64h]
  unsigned int v34; // [rsp+68h] [rbp-60h]
  GUID v35; // [rsp+70h] [rbp-58h] BYREF

  v2 = -1073741823;
  v33 = -1073741823;
  v5 = 0;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    RaidUnitPoFxActivateComponent(a1, 0, 2LL, 0LL);
    v6 = (PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864);
    if ( RaidUnitCheckAndAcquirePoFx(a1) )
      ExReleaseRundownProtectionCacheAware(*v6);
    ExReleaseRundownProtectionCacheAware(*v6);
    v2 = 0;
    v33 = 0;
  }
  v7 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v2;
  if ( v7 )
    goto LABEL_71;
  v35 = 0LL;
  IoGetActivityIdIrp(a2, &v35);
  v9 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_71;
    v31 = *(_DWORD *)(a2 + 48);
    v11 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_70;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_71;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v10 = *(int **)(a2 + 56);
        if ( v10 )
          v5 = *v10;
        McTemplateK0pqd_EtwWriteTransfer(v8, v9, &v35, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_71;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_71;
    v11 = &EventPnpRequestComplete;
    v31 = *(_DWORD *)(a2 + 48);
LABEL_70:
    McTemplateK0pd_EtwWriteTransfer(v8, v11, &v35, a2, v31);
    goto LABEL_71;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_71;
  v12 = *(_QWORD *)(v9 + 8);
  v13 = 0;
  v14 = 0LL;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v25 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( *(_BYTE *)(v12 + 2) )
      goto LABEL_71;
LABEL_45:
    LOBYTE(v8) = v25 - 8;
    if ( (v8 & 0x5D) != 0 )
      goto LABEL_71;
    if ( *(_BYTE *)(v12 + 3) == 1 || !v14 || !v15 )
      goto LABEL_64;
    v26 = *v14 & 0x7F;
    if ( v26 == 114 || v26 == 115 )
    {
      v8 = (unsigned __int64)&v14[v15];
      v27 = 0;
      if ( (unsigned __int64)(v14 + 8) > v8 )
        goto LABEL_62;
      v17 = v14[2];
      v16 = v14[1] & 0xF;
      v18 = v14[3];
    }
    else
    {
      v8 = (unsigned __int64)&v14[v15];
      v27 = 0;
      if ( (unsigned __int64)(v14 + 8) > v8 )
        goto LABEL_62;
      v28 = v14 + 13;
      v16 = v14[2] & 0xF;
      v29 = v15;
      if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
        v29 = (unsigned __int8)v14[7] + 8;
      v8 = (unsigned __int64)&v14[v29];
      if ( (unsigned __int64)v28 <= v8 )
        v17 = v14[12];
      if ( (unsigned __int64)(v14 + 14) > v8 )
        v18 = 0;
      else
        v18 = *v28;
    }
    v27 = 1;
LABEL_62:
    if ( v27 )
      v19 = 1;
LABEL_64:
    if ( byte_140173441 < 0 )
    {
      if ( !v19 )
      {
        v18 = 0;
        v17 = 0;
        v16 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v8,
        v12,
        &v35,
        a2,
        *(_DWORD *)(a2 + 48),
        *(_BYTE *)(v12 + 3),
        v13,
        v16,
        v17,
        v18,
        a2);
    }
    goto LABEL_71;
  }
  v20 = 0LL;
  v32 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_71;
  v21 = 0;
  v34 = *(_DWORD *)(v12 + 56);
  if ( !v34 )
    goto LABEL_71;
  while ( 1 )
  {
    v8 = *(unsigned int *)(v12 + 4LL * v21 + 120);
    if ( (unsigned int)v8 >= 0x80 )
    {
      v22 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v8 < (unsigned int)v22 )
        break;
    }
LABEL_36:
    if ( ++v21 >= v34 )
      goto LABEL_42;
  }
  v23 = (unsigned int)v8;
  v24 = *(_DWORD *)(v8 + v12) - 64;
  if ( v24 )
  {
    v8 = (unsigned int)(v24 - 1);
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 == 1 )
      {
        v8 = v23 + 40;
        if ( v23 + 40 <= v22 )
        {
          if ( *(_DWORD *)(v23 + v12 + 12) )
            v20 = (char *)(v23 + v12 + 32);
          v14 = *(_BYTE **)(v23 + v12 + 24);
          goto LABEL_41;
        }
      }
    }
    else
    {
      v8 = v23 + 56;
      if ( v23 + 56 <= v22 )
      {
        v32 = 1;
        if ( *(_BYTE *)(v23 + v12 + 10) )
          v20 = (char *)(v23 + v12 + 24);
        v13 = *(_BYTE *)(v23 + v12 + 8);
        v14 = *(_BYTE **)(v23 + v12 + 16);
        v15 = *(_BYTE *)(v23 + v12 + 9);
      }
    }
    goto LABEL_35;
  }
  v8 = v23 + 40;
  if ( v23 + 40 > v22 )
  {
LABEL_35:
    if ( v32 )
      goto LABEL_42;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v23 + v12 + 10) )
    v20 = (char *)(v23 + v12 + 24);
  v14 = *(_BYTE **)(v23 + v12 + 16);
LABEL_41:
  v15 = *(_BYTE *)(v23 + v12 + 9);
  v13 = *(_BYTE *)(v23 + v12 + 8);
LABEL_42:
  if ( v20 )
  {
    v25 = *v20;
    v19 = 0;
    goto LABEL_45;
  }
LABEL_71:
  IofCompleteRequest((PIRP)a2, 0);
  return v33;
}
