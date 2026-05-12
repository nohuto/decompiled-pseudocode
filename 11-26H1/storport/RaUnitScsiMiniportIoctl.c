/*
 * XREFs of RaUnitScsiMiniportIoctl @ 0x140019FE0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001BC80 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidGetSrbIoctlFromIrp @ 0x14001CB38 (RaidGetSrbIoctlFromIrp.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14002517C (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14003DA54 (RaidAdapterPoFxActivateComponent.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitScsiMiniportIoctl(__int64 a1, __int64 a2)
{
  int v2; // edi
  int SrbIoctlFromIrp; // eax
  __int64 v6; // r15
  char v7; // bl
  unsigned int v8; // eax
  __int64 v9; // r14
  unsigned int v10; // r15d
  volatile signed __int32 *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  bool v15; // zf
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  void *v18; // rdx
  int *v19; // rax
  char v20; // al
  __int64 v21; // rdx
  char *v22; // r10
  char v23; // bl
  unsigned int v24; // eax
  char v25; // r11
  char v26; // r10
  char v27; // r15
  _BYTE *v28; // r9
  unsigned __int8 v29; // si
  char *v30; // r15
  unsigned int v31; // r13d
  unsigned __int64 v32; // r12
  __int64 v33; // r8
  int v34; // ecx
  char v35; // r12
  char v36; // cl
  char v37; // r8
  char v38; // [rsp+60h] [rbp-9h]
  char v39; // [rsp+61h] [rbp-8h]
  unsigned int v40; // [rsp+64h] [rbp-5h] BYREF
  unsigned int v41; // [rsp+68h] [rbp-1h] BYREF
  __int128 v42; // [rsp+70h] [rbp+7h] BYREF

  LOBYTE(v2) = 0;
  *(_QWORD *)&v42 = 0LL;
  v41 = 0;
  v40 = 0;
  SrbIoctlFromIrp = RaidGetSrbIoctlFromIrp(a2, (unsigned int)&v42, (unsigned int)&v41, (unsigned int)&v40, 1);
  v40 = SrbIoctlFromIrp;
  if ( SrbIoctlFromIrp < 0 )
  {
    v15 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = SrbIoctlFromIrp;
    if ( v15 )
      goto LABEL_23;
    v42 = 0LL;
    IoGetActivityIdIrp(a2, &v42);
    v17 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v17 )
    {
      case 0xE:
        if ( (byte_140173442 & 8) == 0 )
          goto LABEL_23;
        v18 = &EventNonReadWriteRequestComplete;
        break;
      case 0xF:
        if ( byte_140173441 >= 0 )
          goto LABEL_23;
        v21 = *(_QWORD *)(v17 + 8);
        v28 = 0LL;
        v38 = 0;
        v29 = 0;
        v23 = 0;
        v25 = 0;
        v26 = 0;
        v27 = 0;
        if ( *(_BYTE *)(v21 + 2) == 40 )
        {
          v30 = 0LL;
          v39 = 0;
          if ( *(_DWORD *)(v21 + 20) )
            goto LABEL_23;
          v31 = 0;
          v41 = *(_DWORD *)(v21 + 56);
          if ( !v41 )
            goto LABEL_23;
          while ( 1 )
          {
            v16 = *(unsigned int *)(v21 + 4LL * v31 + 120);
            if ( (unsigned int)v16 >= 0x80 )
            {
              v32 = *(unsigned int *)(v21 + 16);
              if ( (unsigned int)v16 < (unsigned int)v32 )
              {
                v33 = (unsigned int)v16;
                v34 = *(_DWORD *)(v16 + v21) - 64;
                if ( v34 )
                {
                  LODWORD(v16) = v34 - 1;
                  if ( (_DWORD)v16 )
                  {
                    if ( (_DWORD)v16 == 1 )
                    {
                      LODWORD(v16) = v33 + 40;
                      if ( v33 + 40 <= v32 )
                      {
                        if ( *(_DWORD *)(v33 + v21 + 12) )
                          v30 = (char *)(v33 + v21 + 32);
                        v28 = *(_BYTE **)(v33 + v21 + 24);
                        goto LABEL_85;
                      }
                    }
                  }
                  else
                  {
                    LODWORD(v16) = v33 + 56;
                    if ( v33 + 56 <= v32 )
                    {
                      v39 = 1;
                      if ( *(_BYTE *)(v33 + v21 + 10) )
                        v30 = (char *)(v33 + v21 + 24);
                      v28 = *(_BYTE **)(v33 + v21 + 16);
                      v29 = *(_BYTE *)(v33 + v21 + 9);
                      v38 = *(_BYTE *)(v33 + v21 + 8);
                    }
                  }
                }
                else
                {
                  LODWORD(v16) = v33 + 40;
                  if ( v33 + 40 <= v32 )
                  {
                    if ( *(_BYTE *)(v33 + v21 + 10) )
                      v30 = (char *)(v33 + v21 + 24);
                    v28 = *(_BYTE **)(v33 + v21 + 16);
LABEL_85:
                    v35 = *(_BYTE *)(v33 + v21 + 8);
                    v29 = *(_BYTE *)(v33 + v21 + 9);
LABEL_79:
                    if ( v30 )
                    {
                      v36 = *v30;
                      v27 = 0;
                      goto LABEL_87;
                    }
                    goto LABEL_23;
                  }
                }
                if ( v39 )
                  goto LABEL_78;
              }
            }
            if ( ++v31 >= v41 )
            {
LABEL_78:
              v35 = v38;
              goto LABEL_79;
            }
          }
        }
        v36 = *(_BYTE *)(v21 + 72);
        v28 = *(_BYTE **)(v21 + 32);
        v29 = *(_BYTE *)(v21 + 11);
        v35 = *(_BYTE *)(v21 + 4);
        if ( *(_BYTE *)(v21 + 2) )
          goto LABEL_23;
LABEL_87:
        LOBYTE(v16) = v36 - 8;
        if ( (v16 & 0x5D) != 0 )
        {
LABEL_23:
          IofCompleteRequest((PIRP)a2, 0);
          return v40;
        }
        v37 = *(_BYTE *)(v21 + 3);
        if ( v37 == 1 || !v28 || !v29 )
        {
LABEL_47:
          if ( byte_140173441 < 0 )
          {
            if ( !v27 )
            {
              v26 = 0;
              v25 = 0;
              v23 = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(
              v16,
              v21,
              (unsigned int)&v42,
              a2,
              *(_DWORD *)(a2 + 48),
              v37,
              v35,
              v23,
              v25,
              v26,
              a2);
          }
          goto LABEL_23;
        }
        v20 = *v28 & 0x7F;
        if ( v20 == 114 || v20 == 115 )
        {
          v16 = (unsigned __int64)&v28[v29];
          LOBYTE(v21) = 0;
          if ( (unsigned __int64)(v28 + 8) > v16 )
          {
LABEL_45:
            if ( (_BYTE)v21 )
              v27 = 1;
            goto LABEL_47;
          }
          v25 = v28[2];
          v23 = v28[1] & 0xF;
          v26 = v28[3];
        }
        else
        {
          v16 = (unsigned __int64)&v28[v29];
          LOBYTE(v21) = 0;
          if ( (unsigned __int64)(v28 + 8) > v16 )
            goto LABEL_45;
          v22 = v28 + 13;
          v23 = v28[2] & 0xF;
          v24 = v29;
          if ( (unsigned int)(unsigned __int8)v28[7] + 8 <= v29 )
            v24 = (unsigned __int8)v28[7] + 8;
          v16 = (unsigned __int64)&v28[v24];
          if ( (unsigned __int64)v22 <= v16 )
            v25 = v28[12];
          if ( (unsigned __int64)(v28 + 14) > v16 )
            v26 = 0;
          else
            v26 = *v22;
        }
        LOBYTE(v21) = 1;
        goto LABEL_45;
      case 0x1B:
        if ( *(_BYTE *)(v17 + 1) == 7 && !*(_DWORD *)(v17 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v19 = *(int **)(a2 + 56);
            if ( v19 )
              v2 = *v19;
            McTemplateK0pqd_EtwWriteTransfer(v16, v17, (unsigned int)&v42, a2, v2, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_23;
        }
        if ( (byte_140173442 & 0x20) == 0 )
          goto LABEL_23;
        v18 = &EventPnpRequestComplete;
        break;
      default:
        goto LABEL_23;
    }
    McTemplateK0pd_EtwWriteTransfer(v16, v18, &v42, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_23;
  }
  v6 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v6 + 5024) )
  {
    RaidAdapterPoFxActivateComponent(*(_QWORD *)(a1 + 24), 0LL, 1LL);
    v7 = 2;
  }
  else
  {
    v7 = 0;
  }
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( (*(_BYTE *)(v6 + 108) & 1) != 0 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 2168), 1uLL);
      if ( (*(_BYTE *)(v6 + 108) & 2) != 0 )
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 2176), 1uLL);
    }
    v12 = *(volatile signed __int32 **)(a1 + 1872);
    if ( (v12[37] & 1) != 0 )
    {
      _InterlockedAdd(v12 + 36, 1u);
      v12 = *(volatile signed __int32 **)(a1 + 1872);
    }
    v13 = 5LL;
    v14 = *(_QWORD *)v12;
    if ( !*(_DWORD *)(a1 + 1036) )
      v13 = 1LL;
    PoFxActivateComponent(v14, 0LL, v13);
    v7 |= 1u;
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  }
  v8 = RaidAdapterScsiMiniportIoctlWithAddress(
         *(_QWORD *)(a1 + 24),
         a2,
         *(unsigned __int8 *)(a1 + 104),
         *(unsigned __int8 *)(a1 + 105),
         *(unsigned __int8 *)(a1 + 106),
         1);
  v9 = *(_QWORD *)(a1 + 24);
  v10 = v8;
  if ( (v7 & 1) != 0 && RaidUnitCheckAndAcquirePoFx(a1) )
  {
    PoFxIdleComponent(**(_QWORD **)(a1 + 1872), 0LL, 0LL);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  }
  if ( (unsigned __int8)v7 >= 2u )
  {
    if ( *(_QWORD *)(v9 + 5024) )
      RaidAdapterPoFxIdleComponent(v9, 0LL, 0LL);
  }
  return v10;
}
