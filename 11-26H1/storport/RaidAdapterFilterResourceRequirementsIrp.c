/*
 * XREFs of RaidAdapterFilterResourceRequirementsIrp @ 0x140184FF8
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1400355D8 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x14000EF30 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 *     RaForwardIrpSynchronous @ 0x1400372E8 (RaForwardIrpSynchronous.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qD @ 0x14006F3F4 (WPP_SF_qD.c)
 *     RaidMachineRequireIoPortResource @ 0x1400C53EC (RaidMachineRequireIoPortResource.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterFilterResourceRequirementsIrp(__int64 a1, __int64 a2)
{
  int v4; // ebx
  int v5; // r13d
  _DWORD *v6; // rsi
  _DWORD *v7; // rdx
  unsigned int v8; // r15d
  _DWORD *v9; // r8
  unsigned int v10; // r9d
  unsigned int v11; // r10d
  _DWORD *v12; // rcx
  __int64 v13; // r11
  __int64 v14; // rax
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  __int64 v17; // rcx
  bool v18; // zf
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  int *v21; // rax
  const EVENT_DESCRIPTOR *v22; // rdx
  __int64 v23; // rdx
  _BYTE *v24; // r9
  unsigned __int8 v25; // r14
  char v26; // r11
  char v27; // si
  char v28; // r10
  char v29; // r15
  char *v30; // r15
  unsigned int v31; // r13d
  unsigned __int64 v32; // r12
  __int64 v33; // r8
  int v34; // ecx
  char v35; // r12
  char v36; // cl
  char v37; // r8
  char v38; // al
  char *v39; // r10
  unsigned int v40; // eax
  __int64 v42; // [rsp+20h] [rbp-59h]
  __int64 v43; // [rsp+28h] [rbp-51h]
  char v44; // [rsp+60h] [rbp-19h]
  char v45; // [rsp+61h] [rbp-18h]
  int v46; // [rsp+64h] [rbp-15h]
  unsigned int v47; // [rsp+68h] [rbp-11h]
  GUID v48; // [rsp+80h] [rbp+7h] BYREF

  v4 = 0;
  v46 = RaForwardIrpSynchronous(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
  v5 = v46;
  if ( v46 >= 0 )
  {
    v6 = *(_DWORD **)(a2 + 56);
    if ( v6 )
    {
      *(_DWORD *)(a1 + 952) = v6[2];
      *(_DWORD *)(a1 + 956) = v6[3];
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 608) + 184LL) & 0x200) != 0
        && !(unsigned __int8)RaidMachineRequireIoPortResource() )
      {
        v7 = v6 + 8;
        v8 = 0;
        v9 = v6 + 8;
        if ( v6[7] )
        {
          while ( 1 )
          {
            v10 = 0;
            v11 = v7[1];
            *(_WORD *)v9 = *(_WORD *)v7;
            *((_WORD *)v9 + 1) = *((_WORD *)v7 + 1);
            if ( v11 )
              break;
LABEL_13:
            v9[1] = v10;
            if ( v11 )
              v15 = &v7[8 * v11 - 8];
            else
              v15 = v7;
            v7 = v15 + 10;
            if ( v10 )
              v16 = &v9[8 * v10 - 8];
            else
              v16 = v9;
            ++v8;
            v9 = v16 + 10;
            if ( v8 >= v6[7] )
              goto LABEL_20;
          }
          v12 = v7 + 2;
          v13 = v11;
          while ( 1 )
          {
            if ( *((_BYTE *)v12 + 1) != 1 )
              goto LABEL_11;
            if ( (*(_BYTE *)v12 & 8) == 0 )
              break;
LABEL_12:
            v12 += 8;
            if ( !--v13 )
              goto LABEL_13;
          }
          *((_BYTE *)v12 + 1) = 0;
LABEL_11:
          v14 = 8LL * v10++;
          *(_OWORD *)&v9[v14 + 2] = *(_OWORD *)v12;
          *(_OWORD *)&v9[v14 + 6] = *((_OWORD *)v12 + 1);
          goto LABEL_12;
        }
      }
LABEL_20:
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 608) + 184LL) & 0x100) != 0 )
      {
        if ( RaidIsAdapterControlSupported(a1 + 376, 13) )
        {
          v46 = RaCallMiniportAdapterControl(a1 + 376);
          v5 = v46;
          if ( v46 < 0 )
          {
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
            {
              WPP_SF_qD(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                0x1Cu,
                (__int64)&WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
                a1,
                v46);
            }
            v5 = 0;
            v46 = 0;
          }
        }
      }
    }
  }
  if ( StorEtwLoggingEnabled )
  {
    v48 = 0LL;
    IoGetActivityIdIrp(a2, &v48);
    if ( (byte_140173442 & 0x20) != 0 )
    {
      LODWORD(v42) = *(_DWORD *)(a2 + 48);
      McTemplateK0pd_EtwWriteTransfer(v17, &EventPnpRequestComplete, &v48, a2, v42);
    }
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Du,
      (__int64)&WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
      a1,
      a2,
      v5);
  }
  v18 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( !v18 )
  {
    v48 = 0LL;
    IoGetActivityIdIrp(a2, &v48);
    v20 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v20 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_101;
      v22 = &EventNonReadWriteRequestComplete;
      goto LABEL_100;
    }
    if ( *(_BYTE *)v20 != 15 )
    {
      if ( *(_BYTE *)v20 != 27 )
        goto LABEL_101;
      if ( *(_BYTE *)(v20 + 1) == 7 && !*(_DWORD *)(v20 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v21 = *(int **)(a2 + 56);
          if ( v21 )
            v4 = *v21;
          LODWORD(v43) = *(_DWORD *)(a2 + 48);
          LODWORD(v42) = v4;
          McTemplateK0pqd_EtwWriteTransfer(v19, v20, &v48, a2, v42, v43);
        }
        goto LABEL_101;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_101;
      v22 = &EventPnpRequestComplete;
LABEL_100:
      LODWORD(v42) = *(_DWORD *)(a2 + 48);
      McTemplateK0pd_EtwWriteTransfer(v19, v22, &v48, a2, v42);
      goto LABEL_101;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_101;
    v23 = *(_QWORD *)(v20 + 8);
    v24 = 0LL;
    v44 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    if ( *(_BYTE *)(v23 + 2) != 40 )
    {
      v36 = *(_BYTE *)(v23 + 72);
      v24 = *(_BYTE **)(v23 + 32);
      v25 = *(_BYTE *)(v23 + 11);
      v35 = *(_BYTE *)(v23 + 4);
      if ( *(_BYTE *)(v23 + 2) )
        goto LABEL_101;
LABEL_75:
      LOBYTE(v19) = v36 - 8;
      if ( (v19 & 0x5D) != 0 )
        goto LABEL_101;
      v37 = *(_BYTE *)(v23 + 3);
      if ( v37 == 1 || !v24 || !v25 )
        goto LABEL_94;
      v38 = *v24 & 0x7F;
      if ( v38 == 114 || v38 == 115 )
      {
        v19 = (unsigned __int64)&v24[v25];
        LOBYTE(v23) = 0;
        if ( (unsigned __int64)(v24 + 8) > v19 )
          goto LABEL_92;
        v27 = v24[2];
        v26 = v24[1] & 0xF;
        v28 = v24[3];
      }
      else
      {
        v19 = (unsigned __int64)&v24[v25];
        LOBYTE(v23) = 0;
        if ( (unsigned __int64)(v24 + 8) > v19 )
          goto LABEL_92;
        v39 = v24 + 13;
        v26 = v24[2] & 0xF;
        v40 = v25;
        if ( (unsigned int)(unsigned __int8)v24[7] + 8 <= v25 )
          v40 = (unsigned __int8)v24[7] + 8;
        v19 = (unsigned __int64)&v24[v40];
        if ( (unsigned __int64)v39 <= v19 )
          v27 = v24[12];
        if ( (unsigned __int64)(v24 + 14) > v19 )
          v28 = 0;
        else
          v28 = *v39;
      }
      LOBYTE(v23) = 1;
LABEL_92:
      if ( (_BYTE)v23 )
        v29 = 1;
LABEL_94:
      if ( byte_140173441 < 0 )
      {
        if ( !v29 )
        {
          v28 = 0;
          v27 = 0;
          v26 = 0;
        }
        LOBYTE(v43) = v37;
        LODWORD(v42) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v19, v23, &v48, a2, v42, v43, v35, v26, v27, v28, a2);
      }
      goto LABEL_101;
    }
    v30 = 0LL;
    v45 = 0;
    if ( !*(_DWORD *)(v23 + 20) )
    {
      v31 = 0;
      v47 = *(_DWORD *)(v23 + 56);
      if ( v47 )
      {
        do
        {
          v19 = *(unsigned int *)(v23 + 4LL * v31 + 120);
          if ( (unsigned int)v19 >= 0x80 )
          {
            v32 = *(unsigned int *)(v23 + 16);
            if ( (unsigned int)v19 < (unsigned int)v32 )
            {
              v33 = (unsigned int)v19;
              v34 = *(_DWORD *)(v19 + v23) - 64;
              if ( v34 )
              {
                v19 = (unsigned int)(v34 - 1);
                if ( (_DWORD)v19 )
                {
                  if ( (_DWORD)v19 == 1 )
                  {
                    v19 = v33 + 40;
                    if ( v33 + 40 <= v32 )
                    {
                      if ( *(_DWORD *)(v33 + v23 + 12) )
                        v30 = (char *)(v33 + v23 + 32);
                      v24 = *(_BYTE **)(v33 + v23 + 24);
LABEL_60:
                      v35 = *(_BYTE *)(v33 + v23 + 8);
                      v25 = *(_BYTE *)(v33 + v23 + 9);
                      goto LABEL_69;
                    }
                  }
                }
                else
                {
                  v19 = v33 + 56;
                  if ( v33 + 56 <= v32 )
                  {
                    v45 = 1;
                    if ( *(_BYTE *)(v33 + v23 + 10) )
                      v30 = (char *)(v33 + v23 + 24);
                    v24 = *(_BYTE **)(v33 + v23 + 16);
                    v25 = *(_BYTE *)(v33 + v23 + 9);
                    v44 = *(_BYTE *)(v33 + v23 + 8);
                  }
                }
              }
              else
              {
                v19 = v33 + 40;
                if ( v33 + 40 <= v32 )
                {
                  if ( *(_BYTE *)(v33 + v23 + 10) )
                    v30 = (char *)(v33 + v23 + 24);
                  v24 = *(_BYTE **)(v33 + v23 + 16);
                  goto LABEL_60;
                }
              }
              if ( v45 )
                break;
            }
          }
          ++v31;
        }
        while ( v31 < v47 );
        v35 = v44;
LABEL_69:
        if ( v30 )
        {
          v36 = *v30;
          v29 = 0;
          goto LABEL_75;
        }
      }
    }
  }
LABEL_101:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v46;
}
