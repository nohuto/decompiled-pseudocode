/*
 * XREFs of RaidAdapterMiniportProcessServiceRequest @ 0x14001E6BC
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qqDD @ 0x14006F568 (WPP_SF_qqDD.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidAdapterMiniportProcessServiceRequest(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v5; // r14d
  __int64 v6; // rdx
  bool v7; // zf
  int v8; // esi
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  void *v12; // rdx
  __int64 v13; // rdx
  char v14; // cl
  char v15; // r12
  _BYTE *v16; // r8
  unsigned __int8 v17; // r10
  char v18; // si
  char v19; // bp
  char v20; // r11
  int v21; // eax
  unsigned int v22; // r9d
  __int64 v23; // rax
  unsigned __int64 v24; // r13
  __int64 v25; // r9
  int v26; // ecx
  char v27; // r13
  char v28; // al
  char *v29; // r11
  unsigned int v30; // eax
  char v32; // [rsp+61h] [rbp-77h]
  int v33; // [rsp+64h] [rbp-74h]
  int v34; // [rsp+68h] [rbp-70h]
  char *v35; // [rsp+70h] [rbp-68h]
  unsigned int v36; // [rsp+78h] [rbp-60h]
  __int128 v37; // [rsp+80h] [rbp-58h] BYREF

  LOBYTE(v2) = 0;
  v5 = -1073741637;
  if ( a1 != -376 )
  {
    v6 = *(_QWORD *)(a1 + 608);
    if ( v6 )
    {
      if ( !*(_BYTE *)(a1 + 4434) && (*(_DWORD *)(a1 + 624) & 8) != 0 && *(_QWORD *)(v6 + 144) )
      {
        *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
        (*(void (__fastcall **)(__int64, __int64))(v6 + 144))(*(_QWORD *)(a1 + 616) + 16LL, a2);
        return 259;
      }
    }
  }
  v7 = StorEtwLoggingEnabled == 0;
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  v33 = v8;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = -1073741637;
  if ( v7 )
    goto LABEL_76;
  v37 = 0LL;
  IoGetActivityIdIrp(a2, &v37);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_76;
    v12 = &EventNonReadWriteRequestComplete;
    goto LABEL_19;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_76;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v2 = *v11;
        McTemplateK0pqd_EtwWriteTransfer(v9, v10, (unsigned int)&v37, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_76;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_76;
    v12 = &EventPnpRequestComplete;
LABEL_19:
    McTemplateK0pd_EtwWriteTransfer(v9, v12, &v37, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_76;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_76;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0;
  v15 = 0;
  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = *(unsigned __int8 *)(v13 + 2);
  if ( (_BYTE)v21 != 40 )
  {
    v14 = *(_BYTE *)(v13 + 72);
    v16 = *(_BYTE **)(v13 + 32);
    v17 = *(_BYTE *)(v13 + 11);
    v15 = *(_BYTE *)(v13 + 4);
    goto LABEL_51;
  }
  v35 = 0LL;
  v32 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_75;
  v22 = *(_DWORD *)(v13 + 56);
  v23 = 0LL;
  v34 = 0;
  v36 = v22;
  if ( !v22 )
    goto LABEL_50;
  while ( 1 )
  {
    v9 = *(unsigned int *)(v13 + 4 * v23 + 120);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v24 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v9 < (unsigned int)v24 )
        break;
    }
LABEL_40:
    v23 = (unsigned int)(v34 + 1);
    v34 = v23;
    if ( (unsigned int)v23 >= v22 )
      goto LABEL_46;
  }
  v25 = (unsigned int)v9;
  v26 = *(_DWORD *)(v9 + v13) - 64;
  if ( v26 )
  {
    LODWORD(v9) = v26 - 1;
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        LODWORD(v9) = v25 + 40;
        if ( v25 + 40 <= v24 )
        {
          if ( *(_DWORD *)(v25 + v13 + 12) )
            v35 = (char *)(v25 + v13 + 32);
          v16 = *(_BYTE **)(v25 + v13 + 24);
          goto LABEL_45;
        }
      }
    }
    else
    {
      LODWORD(v9) = v25 + 56;
      if ( v25 + 56 <= v24 )
      {
        v32 = 1;
        if ( *(_BYTE *)(v25 + v13 + 10) )
          v35 = (char *)(v25 + v13 + 24);
        v15 = *(_BYTE *)(v25 + v13 + 8);
        v16 = *(_BYTE **)(v25 + v13 + 16);
        v17 = *(_BYTE *)(v25 + v13 + 9);
      }
    }
    goto LABEL_38;
  }
  LODWORD(v9) = v25 + 40;
  if ( v25 + 40 > v24 )
  {
LABEL_38:
    if ( v32 )
      goto LABEL_46;
    v22 = v36;
    goto LABEL_40;
  }
  if ( *(_BYTE *)(v25 + v13 + 10) )
    v35 = (char *)(v25 + v13 + 24);
  v16 = *(_BYTE **)(v25 + v13 + 16);
LABEL_45:
  v17 = *(_BYTE *)(v25 + v13 + 9);
  v15 = *(_BYTE *)(v25 + v13 + 8);
LABEL_46:
  if ( v35 )
  {
    v14 = *v35;
    goto LABEL_52;
  }
  v14 = 0;
LABEL_50:
  v21 = 0;
LABEL_51:
  if ( !v21 )
  {
LABEL_52:
    if ( ((v14 - 8) & 0x5D) == 0 )
    {
      v27 = *(_BYTE *)(v13 + 3);
      if ( v27 == 1 || !v16 || !v17 )
        goto LABEL_70;
      v28 = *v16 & 0x7F;
      if ( v28 == 114 || v28 == 115 )
      {
        v9 = (unsigned __int64)&v16[v17];
        LOBYTE(v13) = 0;
        if ( (unsigned __int64)(v16 + 8) <= v9 )
        {
          v19 = v16[2];
          v18 = v16[1] & 0xF;
          v20 = v16[3];
          goto LABEL_68;
        }
      }
      else
      {
        v9 = (unsigned __int64)&v16[v17];
        LOBYTE(v13) = 0;
        if ( (unsigned __int64)(v16 + 8) <= v9 )
        {
          v29 = v16 + 13;
          v18 = v16[2] & 0xF;
          v30 = v17;
          if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
            v30 = (unsigned __int8)v16[7] + 8;
          v9 = (unsigned __int64)&v16[v30];
          if ( (unsigned __int64)v29 <= v9 )
            v19 = v16[12];
          if ( (unsigned __int64)(v16 + 14) > v9 )
            v20 = 0;
          else
            v20 = *v29;
LABEL_68:
          LOBYTE(v13) = 1;
        }
      }
      LOBYTE(v9) = 1;
      if ( !(_BYTE)v13 )
LABEL_70:
        LOBYTE(v9) = 0;
      if ( byte_140173441 < 0 )
      {
        v5 = -1073741637;
        if ( !(_BYTE)v9 )
        {
          v20 = 0;
          v19 = 0;
          v18 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v9,
          v13,
          (unsigned int)&v37,
          a2,
          *(_DWORD *)(a2 + 48),
          v27,
          v15,
          v18,
          v19,
          v20,
          a2);
      }
    }
  }
LABEL_75:
  v8 = v33;
LABEL_76:
  IofCompleteRequest((PIRP)a2, 0);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      35LL,
      &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
      a1,
      a2,
      v8,
      -1073741637);
  }
  return v5;
}
