/*
 * XREFs of RaidAdapterPowerIrp @ 0x14002E3C0
 * Callers:
 *     RaDriverPowerIrp @ 0x140072930 (RaDriverPowerIrp.c)
 * Callees:
 *     RaidAdapterQueryPowerIrp @ 0x14002E708 (RaidAdapterQueryPowerIrp.c)
 *     RaidAdapterSetPowerIrp @ 0x14002E870 (RaidAdapterSetPowerIrp.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qqDD @ 0x14006F568 (WPP_SF_qqDD.c)
 *     RaForwardPowerIrp @ 0x140091D40 (RaForwardPowerIrp.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterPowerIrp(__int64 a1, __int64 a2)
{
  int v4; // ebx
  int v5; // ebp
  unsigned int PowerIrp; // eax
  unsigned int v7; // ebx
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  void *v12; // rdx
  int *v13; // rax
  char v14; // al
  __int64 v15; // rdx
  char *v16; // r11
  char v17; // bp
  unsigned int v18; // eax
  char v19; // r14
  char v20; // r11
  char v21; // cl
  char v22; // r15
  _BYTE *v23; // r8
  unsigned __int8 v24; // r10
  int v25; // eax
  char *v26; // r12
  unsigned int v27; // r9d
  __int64 v28; // rax
  unsigned __int64 v29; // r13
  __int64 v30; // r9
  int v31; // ecx
  char v32; // r12
  char v33; // [rsp+61h] [rbp-67h]
  int v34; // [rsp+64h] [rbp-64h]
  unsigned int v35; // [rsp+6Ch] [rbp-5Ch]
  __int128 v36; // [rsp+70h] [rbp-58h] BYREF

  LOBYTE(v4) = 0;
  if ( ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336)) )
  {
    v5 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 11LL, &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids, a1, a2, v5);
    }
    if ( v5 == 2 )
    {
      PowerIrp = RaidAdapterSetPowerIrp(a1, a2);
    }
    else if ( v5 == 3 )
    {
      PowerIrp = RaidAdapterQueryPowerIrp(a1, a2);
    }
    else
    {
      PowerIrp = RaForwardPowerIrp(*(_QWORD *)(a1 + 24), a2);
    }
    v7 = PowerIrp;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqDD(
        WPP_GLOBAL_Control->AttachedDevice,
        12LL,
        &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
        a1,
        a2,
        v5,
        PowerIrp);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
    return v7;
  }
  v9 = StorEtwLoggingEnabled == 0;
  *(_DWORD *)(a2 + 48) = -1073741738;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v9 )
    goto LABEL_13;
  v36 = 0LL;
  IoGetActivityIdIrp(a2, &v36);
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v11 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_13;
    v12 = &EventNonReadWriteRequestComplete;
    goto LABEL_44;
  }
  if ( *(_BYTE *)v11 != 15 )
  {
    if ( *(_BYTE *)v11 != 27 )
      goto LABEL_13;
    if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v4 = *v13;
        McTemplateK0pqd_EtwWriteTransfer(v10, v11, (unsigned int)&v36, a2, v4, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_13;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_13;
    v12 = &EventPnpRequestComplete;
LABEL_44:
    McTemplateK0pd_EtwWriteTransfer(v10, v12, &v36, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_13;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_13;
  v15 = *(_QWORD *)(v11 + 8);
  v21 = 0;
  v22 = 0;
  v23 = 0LL;
  v24 = 0;
  v17 = 0;
  v19 = 0;
  v20 = 0;
  v25 = *(unsigned __int8 *)(v15 + 2);
  if ( (_BYTE)v25 != 40 )
  {
    v21 = *(_BYTE *)(v15 + 72);
    v23 = *(_BYTE **)(v15 + 32);
    v24 = *(_BYTE *)(v15 + 11);
    v22 = *(_BYTE *)(v15 + 4);
    goto LABEL_84;
  }
  v26 = 0LL;
  v33 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_13;
  v27 = *(_DWORD *)(v15 + 56);
  v28 = 0LL;
  v34 = 0;
  v35 = v27;
  if ( !v27 )
    goto LABEL_83;
  while ( 1 )
  {
    v10 = *(unsigned int *)(v15 + 4 * v28 + 120);
    if ( (unsigned int)v10 >= 0x80 )
    {
      v29 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v10 < (unsigned int)v29 )
        break;
    }
LABEL_72:
    v28 = (unsigned int)(v34 + 1);
    v34 = v28;
    if ( (unsigned int)v28 >= v27 )
      goto LABEL_79;
  }
  v30 = (unsigned int)v10;
  v31 = *(_DWORD *)(v10 + v15) - 64;
  if ( v31 )
  {
    LODWORD(v10) = v31 - 1;
    if ( (_DWORD)v10 )
    {
      if ( (_DWORD)v10 == 1 )
      {
        LODWORD(v10) = v30 + 40;
        if ( v30 + 40 <= v29 )
        {
          if ( *(_DWORD *)(v30 + v15 + 12) )
            v26 = (char *)(v30 + v15 + 32);
          v23 = *(_BYTE **)(v30 + v15 + 24);
          goto LABEL_78;
        }
      }
    }
    else
    {
      LODWORD(v10) = v30 + 56;
      if ( v30 + 56 <= v29 )
      {
        v33 = 1;
        if ( *(_BYTE *)(v30 + v15 + 10) )
          v26 = (char *)(v30 + v15 + 24);
        v22 = *(_BYTE *)(v30 + v15 + 8);
        v23 = *(_BYTE **)(v30 + v15 + 16);
        v24 = *(_BYTE *)(v30 + v15 + 9);
      }
    }
    goto LABEL_70;
  }
  LODWORD(v10) = v30 + 40;
  if ( v30 + 40 > v29 )
  {
LABEL_70:
    if ( v33 )
      goto LABEL_79;
    v27 = v35;
    goto LABEL_72;
  }
  if ( *(_BYTE *)(v30 + v15 + 10) )
    v26 = (char *)(v30 + v15 + 24);
  v23 = *(_BYTE **)(v30 + v15 + 16);
LABEL_78:
  v24 = *(_BYTE *)(v30 + v15 + 9);
  v22 = *(_BYTE *)(v30 + v15 + 8);
LABEL_79:
  if ( v26 )
  {
    v21 = *v26;
    goto LABEL_85;
  }
  v21 = 0;
LABEL_83:
  v25 = 0;
LABEL_84:
  if ( !v25 )
  {
LABEL_85:
    if ( ((v21 - 8) & 0x5D) == 0 )
    {
      v32 = *(_BYTE *)(v15 + 3);
      if ( v32 == 1 || !v23 || !v24 )
        goto LABEL_41;
      v14 = *v23 & 0x7F;
      if ( v14 == 114 || v14 == 115 )
      {
        v10 = (unsigned __int64)&v23[v24];
        LOBYTE(v15) = 0;
        if ( (unsigned __int64)(v23 + 8) <= v10 )
        {
          v19 = v23[2];
          v17 = v23[1] & 0xF;
          v20 = v23[3];
          goto LABEL_36;
        }
      }
      else
      {
        v10 = (unsigned __int64)&v23[v24];
        LOBYTE(v15) = 0;
        if ( (unsigned __int64)(v23 + 8) <= v10 )
        {
          v16 = v23 + 13;
          v17 = v23[2] & 0xF;
          v18 = v24;
          if ( (unsigned int)(unsigned __int8)v23[7] + 8 <= v24 )
            v18 = (unsigned __int8)v23[7] + 8;
          v10 = (unsigned __int64)&v23[v18];
          if ( (unsigned __int64)v16 <= v10 )
            v19 = v23[12];
          if ( (unsigned __int64)(v23 + 14) > v10 )
            v20 = 0;
          else
            v20 = *v16;
LABEL_36:
          LOBYTE(v15) = 1;
        }
      }
      LOBYTE(v10) = 1;
      if ( !(_BYTE)v15 )
LABEL_41:
        LOBYTE(v10) = 0;
      if ( byte_140173441 < 0 )
      {
        if ( !(_BYTE)v10 )
        {
          v20 = 0;
          v19 = 0;
          v17 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v10,
          v15,
          (unsigned int)&v36,
          a2,
          *(_DWORD *)(a2 + 48),
          v32,
          v22,
          v17,
          v19,
          v20,
          a2);
      }
    }
  }
LABEL_13:
  IofCompleteRequest((PIRP)a2, 0);
  return 3221225558LL;
}
