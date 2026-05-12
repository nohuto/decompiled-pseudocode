/*
 * XREFs of RaDriverIoIrp @ 0x14001F950
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterIoIrp @ 0x14001FCCC (RaidAdapterIoIrp.c)
 *     NvmeProcessIoIrp @ 0x140020090 (NvmeProcessIoIrp.c)
 *     RaUnitIoIrp @ 0x140021230 (RaUnitIoIrp.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaDriverIoIrp(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  int *v4; // rcx
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // esi
  int v9; // eax
  int v10; // ebx
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  void *v14; // rdx
  int *v15; // rax
  char v16; // al
  __int64 v17; // rdx
  char *v18; // r11
  char v19; // r14
  unsigned int v20; // eax
  char v21; // bp
  char v22; // r11
  char v23; // r15
  _BYTE *v24; // r9
  unsigned __int8 v25; // r10
  char *v26; // r15
  unsigned int v27; // r13d
  unsigned __int64 v28; // r12
  __int64 v29; // r8
  int v30; // ecx
  char v31; // r12
  char v32; // cl
  char v33; // r8
  char v34; // [rsp+60h] [rbp-68h]
  char v35; // [rsp+61h] [rbp-67h]
  unsigned int v37; // [rsp+70h] [rbp-58h]
  __int128 v38; // [rsp+78h] [rbp-50h] BYREF

  v3 = a1;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 20LL, &WPP_24b5fd126b0737de4e117b7643a3f5f0_Traceguids, a1, a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = *(int **)(v3 + 64);
  v5 = *v4;
  if ( *v4 != 1094997074 )
  {
    if ( v5 == 1314278989 )
    {
      v9 = v4[24];
      if ( v9 == 1 || (unsigned int)(v9 - 5) > 1 )
      {
        v7 = NvmeProcessIoIrp(v4, a2);
        if ( v7 == 259 )
          goto LABEL_6;
      }
      else
      {
        v7 = -1073741810;
      }
      *(_DWORD *)(a2 + 48) = v7;
      *(_QWORD *)(a2 + 56) = 0LL;
      goto LABEL_25;
    }
    if ( v5 == 1431193940 )
    {
      v6 = RaUnitIoIrp(v4, a2);
      goto LABEL_5;
    }
    if ( v5 != 1314275652 )
    {
      v7 = -1073741823;
      goto LABEL_6;
    }
    LOBYTE(v10) = 0;
    *(_BYTE *)(a2 + 141) = -84;
    v11 = StorEtwLoggingEnabled == 0;
    v7 = -1073741823;
    *(_DWORD *)(a2 + 48) = -1073741823;
    if ( !v11 )
    {
      v38 = 0LL;
      IoGetActivityIdIrp(a2, &v38);
      v13 = *(_QWORD *)(a2 + 184);
      switch ( *(_BYTE *)v13 )
      {
        case 0xE:
          if ( (byte_140173442 & 8) == 0 )
            break;
          v14 = &EventNonReadWriteRequestComplete;
LABEL_52:
          McTemplateK0pd_EtwWriteTransfer(v12, v14, &v38, a2, *(_DWORD *)(a2 + 48));
          break;
        case 0xF:
          if ( byte_140173441 >= 0 )
            break;
          v17 = *(_QWORD *)(v13 + 8);
          v24 = 0LL;
          v34 = 0;
          v25 = 0;
          v19 = 0;
          v21 = 0;
          v22 = 0;
          v23 = 0;
          if ( *(_BYTE *)(v17 + 2) == 40 )
          {
            v26 = 0LL;
            v35 = 0;
            if ( *(_DWORD *)(v17 + 20) )
              goto LABEL_94;
            v27 = 0;
            v37 = *(_DWORD *)(v17 + 56);
            if ( !v37 )
              goto LABEL_94;
            while ( 1 )
            {
              v12 = *(unsigned int *)(v17 + 4LL * v27 + 120);
              if ( (unsigned int)v12 >= 0x80 )
              {
                v28 = *(unsigned int *)(v17 + 16);
                if ( (unsigned int)v12 < (unsigned int)v28 )
                {
                  v29 = (unsigned int)v12;
                  v30 = *(_DWORD *)(v12 + v17) - 64;
                  if ( v30 )
                  {
                    LODWORD(v12) = v30 - 1;
                    if ( (_DWORD)v12 )
                    {
                      if ( (_DWORD)v12 == 1 )
                      {
                        LODWORD(v12) = v29 + 40;
                        if ( v29 + 40 <= v28 )
                        {
                          if ( *(_DWORD *)(v29 + v17 + 12) )
                            v26 = (char *)(v29 + v17 + 32);
                          v24 = *(_BYTE **)(v29 + v17 + 24);
                          goto LABEL_88;
                        }
                      }
                    }
                    else
                    {
                      LODWORD(v12) = v29 + 56;
                      if ( v29 + 56 <= v28 )
                      {
                        v35 = 1;
                        if ( *(_BYTE *)(v29 + v17 + 10) )
                          v26 = (char *)(v29 + v17 + 24);
                        v24 = *(_BYTE **)(v29 + v17 + 16);
                        v25 = *(_BYTE *)(v29 + v17 + 9);
                        v34 = *(_BYTE *)(v29 + v17 + 8);
                      }
                    }
                  }
                  else
                  {
                    LODWORD(v12) = v29 + 40;
                    if ( v29 + 40 <= v28 )
                    {
                      if ( *(_BYTE *)(v29 + v17 + 10) )
                        v26 = (char *)(v29 + v17 + 24);
                      v24 = *(_BYTE **)(v29 + v17 + 16);
LABEL_88:
                      v31 = *(_BYTE *)(v29 + v17 + 8);
                      v25 = *(_BYTE *)(v29 + v17 + 9);
LABEL_82:
                      if ( v26 )
                      {
                        v32 = *v26;
                        v23 = 0;
                        goto LABEL_90;
                      }
                      goto LABEL_94;
                    }
                  }
                  if ( v35 )
                    goto LABEL_81;
                }
              }
              if ( ++v27 >= v37 )
              {
LABEL_81:
                v31 = v34;
                goto LABEL_82;
              }
            }
          }
          v32 = *(_BYTE *)(v17 + 72);
          v24 = *(_BYTE **)(v17 + 32);
          v25 = *(_BYTE *)(v17 + 11);
          v31 = *(_BYTE *)(v17 + 4);
          if ( *(_BYTE *)(v17 + 2) )
            goto LABEL_94;
LABEL_90:
          LOBYTE(v12) = v32 - 8;
          if ( (v12 & 0x5D) != 0 )
          {
LABEL_94:
            v3 = a1;
            break;
          }
          v33 = *(_BYTE *)(v17 + 3);
          if ( v33 == 1 || !v24 || !v25 )
          {
LABEL_47:
            if ( byte_140173441 < 0 )
            {
              if ( !v23 )
              {
                v22 = 0;
                v21 = 0;
                v19 = 0;
              }
              McTemplateK0pduuuuup_EtwWriteTransfer(
                v12,
                v17,
                (unsigned int)&v38,
                a2,
                *(_DWORD *)(a2 + 48),
                v33,
                v31,
                v19,
                v21,
                v22,
                a2);
            }
            goto LABEL_94;
          }
          v16 = *v24 & 0x7F;
          if ( v16 == 114 || v16 == 115 )
          {
            v12 = (unsigned __int64)&v24[v25];
            LOBYTE(v17) = 0;
            if ( (unsigned __int64)(v24 + 8) > v12 )
            {
LABEL_45:
              if ( (_BYTE)v17 )
                v23 = 1;
              goto LABEL_47;
            }
            v21 = v24[2];
            v19 = v24[1] & 0xF;
            v22 = v24[3];
          }
          else
          {
            v12 = (unsigned __int64)&v24[v25];
            LOBYTE(v17) = 0;
            if ( (unsigned __int64)(v24 + 8) > v12 )
              goto LABEL_45;
            v18 = v24 + 13;
            v19 = v24[2] & 0xF;
            v20 = v25;
            if ( (unsigned int)(unsigned __int8)v24[7] + 8 <= v25 )
              v20 = (unsigned __int8)v24[7] + 8;
            v12 = (unsigned __int64)&v24[v20];
            if ( (unsigned __int64)v18 <= v12 )
              v21 = v24[12];
            if ( (unsigned __int64)(v24 + 14) > v12 )
              v22 = 0;
            else
              v22 = *v18;
          }
          LOBYTE(v17) = 1;
          goto LABEL_45;
        case 0x1B:
          if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
          {
            if ( (byte_140173442 & 0x40) != 0 )
            {
              v15 = *(int **)(a2 + 56);
              if ( v15 )
                v10 = *v15;
              McTemplateK0pqd_EtwWriteTransfer(v12, v13, (unsigned int)&v38, a2, v10, *(_DWORD *)(a2 + 48));
            }
            break;
          }
          if ( (byte_140173442 & 0x20) != 0 )
          {
            v14 = &EventPnpRequestComplete;
            goto LABEL_52;
          }
          break;
      }
    }
LABEL_25:
    IofCompleteRequest((PIRP)a2, 0);
    goto LABEL_6;
  }
  v6 = RaidAdapterIoIrp(v4, a2);
LABEL_5:
  v7 = v6;
LABEL_6:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 21LL, &WPP_24b5fd126b0737de4e117b7643a3f5f0_Traceguids, v3, a2, v7);
  }
  return v7;
}
