/*
 * XREFs of RaUnitRemoveDeviceIrp @ 0x14009EC3C
 * Callers:
 *     RaUnitPnpIrp @ 0x14003FBDC (RaUnitPnpIrp.c)
 * Callees:
 *     RaidUnitReenablePendingTimer @ 0x1400337B0 (RaidUnitReenablePendingTimer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x14007ECF0 (RaUnitDeregisterFromIdleDetection.c)
 *     RaUnitDeleteDeviceIrp @ 0x14009A2C0 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x14009B0F4 (RaUnitDisableDeviceIrp.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitRemoveDeviceIrp(__int64 a1, __int64 a2)
{
  int v4; // ebx
  bool v5; // zf
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  int *v8; // rax
  const EVENT_DESCRIPTOR *v9; // rdx
  __int64 v10; // rdx
  char v11; // r13
  _BYTE *v12; // r9
  unsigned __int8 v13; // bp
  char v14; // si
  char v15; // r11
  char v16; // r10
  char v17; // r14
  char *v18; // r14
  unsigned int v19; // r12d
  unsigned __int64 v20; // r15
  __int64 v21; // r8
  int v22; // ecx
  char v23; // cl
  char v24; // r8
  char v25; // al
  char *v26; // r10
  unsigned int v27; // eax
  unsigned int v29; // esi
  __int64 v30; // [rsp+20h] [rbp-98h]
  char v31; // [rsp+60h] [rbp-58h]
  unsigned int v32; // [rsp+64h] [rbp-54h]
  GUID v33; // [rsp+68h] [rbp-50h] BYREF

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xCu,
      (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids,
      a1,
      a2);
  }
  if ( *(_DWORD *)(a1 + 56) == 6 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xDu,
        (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids,
        a1,
        a2);
    }
    v4 = 0;
    *(_BYTE *)(a2 + 141) = -84;
    v5 = StorEtwLoggingEnabled == 0;
    *(_DWORD *)(a2 + 48) = -1073741810;
    if ( v5 )
      goto LABEL_76;
    v33 = 0LL;
    IoGetActivityIdIrp(a2, &v33);
    v7 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v7 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_76;
      LODWORD(v30) = *(_DWORD *)(a2 + 48);
      v9 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_75;
    }
    if ( *(_BYTE *)v7 != 15 )
    {
      if ( *(_BYTE *)v7 != 27 )
        goto LABEL_76;
      if ( *(_BYTE *)(v7 + 1) == 7 && !*(_DWORD *)(v7 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v8 = *(int **)(a2 + 56);
          if ( v8 )
            v4 = *v8;
          LODWORD(v30) = v4;
          McTemplateK0pqd_EtwWriteTransfer(v6, v7, &v33, a2, v30, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_76;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_76;
      v9 = &EventPnpRequestComplete;
      LODWORD(v30) = *(_DWORD *)(a2 + 48);
LABEL_75:
      McTemplateK0pd_EtwWriteTransfer(v6, v9, &v33, a2, v30);
      goto LABEL_76;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_76;
    v10 = *(_QWORD *)(v7 + 8);
    v11 = 0;
    v12 = 0LL;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    if ( *(_BYTE *)(v10 + 2) == 40 )
    {
      v18 = 0LL;
      v31 = 0;
      if ( *(_DWORD *)(v10 + 20) )
        goto LABEL_76;
      v19 = 0;
      v32 = *(_DWORD *)(v10 + 56);
      if ( !v32 )
        goto LABEL_76;
      while ( 1 )
      {
        v6 = *(unsigned int *)(v10 + 4LL * v19 + 120);
        if ( (unsigned int)v6 >= 0x80 )
        {
          v20 = *(unsigned int *)(v10 + 16);
          if ( (unsigned int)v6 < (unsigned int)v20 )
          {
            v21 = (unsigned int)v6;
            v22 = *(_DWORD *)(v6 + v10) - 64;
            if ( v22 )
            {
              v6 = (unsigned int)(v22 - 1);
              if ( (_DWORD)v6 )
              {
                if ( (_DWORD)v6 == 1 )
                {
                  v6 = v21 + 40;
                  if ( v21 + 40 <= v20 )
                  {
                    if ( *(_DWORD *)(v21 + v10 + 12) )
                      v18 = (char *)(v21 + v10 + 32);
                    v12 = *(_BYTE **)(v21 + v10 + 24);
                    goto LABEL_46;
                  }
                }
              }
              else
              {
                v6 = v21 + 56;
                if ( v21 + 56 <= v20 )
                {
                  v31 = 1;
                  if ( *(_BYTE *)(v21 + v10 + 10) )
                    v18 = (char *)(v21 + v10 + 24);
                  v11 = *(_BYTE *)(v21 + v10 + 8);
                  v12 = *(_BYTE **)(v21 + v10 + 16);
                  v13 = *(_BYTE *)(v21 + v10 + 9);
                }
              }
            }
            else
            {
              v6 = v21 + 40;
              if ( v21 + 40 <= v20 )
              {
                if ( *(_BYTE *)(v21 + v10 + 10) )
                  v18 = (char *)(v21 + v10 + 24);
                v12 = *(_BYTE **)(v21 + v10 + 16);
LABEL_46:
                v13 = *(_BYTE *)(v21 + v10 + 9);
                v11 = *(_BYTE *)(v21 + v10 + 8);
LABEL_47:
                if ( v18 )
                {
                  v23 = *v18;
                  v17 = 0;
                  goto LABEL_50;
                }
                goto LABEL_76;
              }
            }
            if ( v31 )
              goto LABEL_47;
          }
        }
        if ( ++v19 >= v32 )
          goto LABEL_47;
      }
    }
    v23 = *(_BYTE *)(v10 + 72);
    v12 = *(_BYTE **)(v10 + 32);
    v13 = *(_BYTE *)(v10 + 11);
    v11 = *(_BYTE *)(v10 + 4);
    if ( *(_BYTE *)(v10 + 2) )
      goto LABEL_76;
LABEL_50:
    LOBYTE(v6) = v23 - 8;
    if ( (v6 & 0x5D) == 0 )
    {
      v24 = *(_BYTE *)(v10 + 3);
      if ( v24 == 1 || !v12 || !v13 )
      {
LABEL_69:
        if ( byte_140173441 < 0 )
        {
          if ( !v17 )
          {
            v16 = 0;
            v15 = 0;
            v14 = 0;
          }
          LODWORD(v30) = *(_DWORD *)(a2 + 48);
          McTemplateK0pduuuuup_EtwWriteTransfer(v6, v10, &v33, a2, v30, v24, v11, v14, v15, v16, a2);
        }
        goto LABEL_76;
      }
      v25 = *v12 & 0x7F;
      if ( v25 == 114 || v25 == 115 )
      {
        v6 = (unsigned __int64)&v12[v13];
        LOBYTE(v10) = 0;
        if ( (unsigned __int64)(v12 + 8) > v6 )
          goto LABEL_67;
        v15 = v12[2];
        v14 = v12[1] & 0xF;
        v16 = v12[3];
      }
      else
      {
        v6 = (unsigned __int64)&v12[v13];
        LOBYTE(v10) = 0;
        if ( (unsigned __int64)(v12 + 8) > v6 )
          goto LABEL_67;
        v26 = v12 + 13;
        v14 = v12[2] & 0xF;
        v27 = v13;
        if ( (unsigned int)(unsigned __int8)v12[7] + 8 <= v13 )
          v27 = (unsigned __int8)v12[7] + 8;
        v6 = (unsigned __int64)&v12[v27];
        if ( (unsigned __int64)v26 <= v6 )
          v15 = v12[12];
        if ( (unsigned __int64)(v12 + 14) > v6 )
          v16 = 0;
        else
          v16 = *v26;
      }
      LOBYTE(v10) = 1;
LABEL_67:
      if ( (_BYTE)v10 )
        v17 = 1;
      goto LABEL_69;
    }
LABEL_76:
    IofCompleteRequest((PIRP)a2, 0);
    return 3221225486LL;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 504) & 0x20) == 0 )
      RaUnitDeregisterFromIdleDetection(a1);
    if ( (*(_BYTE *)(a1 + 504) & 4) != 0 )
    {
      v29 = RaUnitDisableDeviceIrp(a1, a2);
      RaidUnitReenablePendingTimer(a1, 0);
    }
    else
    {
      v29 = RaUnitDeleteDeviceIrp(a1, a2);
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xEu,
        (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids,
        a1,
        a2,
        v29);
    }
    return v29;
  }
}
