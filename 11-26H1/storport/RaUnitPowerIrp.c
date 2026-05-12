/*
 * XREFs of RaUnitPowerIrp @ 0x14003C8D0
 * Callers:
 *     RaDriverPowerIrp @ 0x140072930 (RaDriverPowerIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004AB0 (RaUnitAcquireRemoveLock.c)
 *     RaidUnitSetPowerIrp @ 0x14003CC5C (RaidUnitSetPowerIrp.c)
 *     RaidUnitQueryPowerIrp @ 0x14003D674 (RaidUnitQueryPowerIrp.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qqDD @ 0x14006F568 (WPP_SF_qqDD.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitPowerIrp(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // ebx
  int v6; // r14d
  unsigned int PowerIrp; // eax
  unsigned int v8; // ebx
  unsigned __int64 v9; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  void *v16; // rdx
  int *v17; // rax
  char v18; // al
  __int64 v19; // rdx
  char *v20; // r11
  char v21; // r10
  unsigned int v22; // eax
  char v23; // si
  char v24; // r11
  char v25; // r15
  _BYTE *v26; // r9
  unsigned __int8 v27; // r14
  char *v28; // r15
  unsigned int v29; // r13d
  unsigned __int64 v30; // r12
  __int64 v31; // r8
  int v32; // ecx
  char v33; // r12
  char v34; // cl
  char v35; // r8
  unsigned __int64 v36; // rcx
  __int64 v37; // rdx
  int *v38; // rax
  void *v39; // rdx
  __int64 v40; // rdx
  _BYTE *v41; // r9
  unsigned __int8 v42; // r10
  char v43; // r14
  char v44; // r15
  char v45; // r11
  char v46; // r12
  char *v47; // r12
  __int64 v48; // rax
  unsigned __int64 v49; // r13
  __int64 v50; // r8
  int v51; // ecx
  char v52; // r13
  char v53; // cl
  char v54; // r8
  char v55; // al
  char *v56; // r11
  unsigned int v57; // eax
  char v58; // [rsp+60h] [rbp-9h]
  char v59; // [rsp+60h] [rbp-9h]
  char v60; // [rsp+61h] [rbp-8h]
  char v61; // [rsp+61h] [rbp-8h]
  unsigned int v62; // [rsp+64h] [rbp-5h]
  int v63; // [rsp+64h] [rbp-5h]
  unsigned int v64; // [rsp+68h] [rbp-1h]
  int v65; // [rsp+68h] [rbp-1h]
  unsigned int v66; // [rsp+6Ch] [rbp+3h]
  __int128 v67; // [rsp+70h] [rbp+7h] BYREF

  v4 = RaUnitAcquireRemoveLock(a1, a2, 1);
  LOBYTE(v5) = 0;
  v62 = v4;
  if ( v4 < 0 )
  {
    v13 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v4;
    if ( v13 )
      goto LABEL_21;
    v67 = 0LL;
    IoGetActivityIdIrp(a2, &v67);
    v15 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v15 )
    {
      case 0xE:
        if ( (byte_140173442 & 8) == 0 )
          goto LABEL_21;
        v16 = &EventNonReadWriteRequestComplete;
        break;
      case 0xF:
        if ( byte_140173441 >= 0 )
          goto LABEL_21;
        v19 = *(_QWORD *)(v15 + 8);
        v26 = 0LL;
        v58 = 0;
        v27 = 0;
        v21 = 0;
        v23 = 0;
        v24 = 0;
        v25 = 0;
        if ( *(_BYTE *)(v19 + 2) == 40 )
        {
          v28 = 0LL;
          v60 = 0;
          if ( *(_DWORD *)(v19 + 20) )
            goto LABEL_21;
          v29 = 0;
          v64 = *(_DWORD *)(v19 + 56);
          if ( !v64 )
            goto LABEL_21;
          while ( 1 )
          {
            v14 = *(unsigned int *)(v19 + 4LL * v29 + 120);
            if ( (unsigned int)v14 >= 0x80 )
            {
              v30 = *(unsigned int *)(v19 + 16);
              if ( (unsigned int)v14 < (unsigned int)v30 )
              {
                v31 = (unsigned int)v14;
                v32 = *(_DWORD *)(v14 + v19) - 64;
                if ( v32 )
                {
                  LODWORD(v14) = v32 - 1;
                  if ( (_DWORD)v14 )
                  {
                    if ( (_DWORD)v14 == 1 )
                    {
                      LODWORD(v14) = v31 + 40;
                      if ( v31 + 40 <= v30 )
                      {
                        if ( *(_DWORD *)(v31 + v19 + 12) )
                          v28 = (char *)(v31 + v19 + 32);
                        v26 = *(_BYTE **)(v31 + v19 + 24);
                        goto LABEL_84;
                      }
                    }
                  }
                  else
                  {
                    LODWORD(v14) = v31 + 56;
                    if ( v31 + 56 <= v30 )
                    {
                      v60 = 1;
                      if ( *(_BYTE *)(v31 + v19 + 10) )
                        v28 = (char *)(v31 + v19 + 24);
                      v26 = *(_BYTE **)(v31 + v19 + 16);
                      v27 = *(_BYTE *)(v31 + v19 + 9);
                      v58 = *(_BYTE *)(v31 + v19 + 8);
                    }
                  }
                }
                else
                {
                  LODWORD(v14) = v31 + 40;
                  if ( v31 + 40 <= v30 )
                  {
                    if ( *(_BYTE *)(v31 + v19 + 10) )
                      v28 = (char *)(v31 + v19 + 24);
                    v26 = *(_BYTE **)(v31 + v19 + 16);
LABEL_84:
                    v33 = *(_BYTE *)(v31 + v19 + 8);
                    v27 = *(_BYTE *)(v31 + v19 + 9);
LABEL_78:
                    if ( v28 )
                    {
                      v34 = *v28;
                      v25 = 0;
                      goto LABEL_86;
                    }
                    goto LABEL_21;
                  }
                }
                if ( v60 )
                  goto LABEL_77;
              }
            }
            if ( ++v29 >= v64 )
            {
LABEL_77:
              v33 = v58;
              goto LABEL_78;
            }
          }
        }
        v34 = *(_BYTE *)(v19 + 72);
        v26 = *(_BYTE **)(v19 + 32);
        v27 = *(_BYTE *)(v19 + 11);
        v33 = *(_BYTE *)(v19 + 4);
        if ( *(_BYTE *)(v19 + 2) )
          goto LABEL_21;
LABEL_86:
        LOBYTE(v14) = v34 - 8;
        if ( (v14 & 0x5D) != 0 )
        {
LABEL_21:
          IofCompleteRequest((PIRP)a2, 0);
          return v62;
        }
        v35 = *(_BYTE *)(v19 + 3);
        if ( v35 == 1 || !v26 || !v27 )
        {
LABEL_49:
          if ( byte_140173441 < 0 )
          {
            if ( !v25 )
            {
              v24 = 0;
              v23 = 0;
              v21 = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(
              v14,
              v19,
              (unsigned int)&v67,
              a2,
              *(_DWORD *)(a2 + 48),
              v35,
              v33,
              v21,
              v23,
              v24,
              a2);
          }
          goto LABEL_21;
        }
        v18 = *v26 & 0x7F;
        if ( v18 == 114 || v18 == 115 )
        {
          v14 = (unsigned __int64)&v26[v27];
          LOBYTE(v19) = 0;
          if ( (unsigned __int64)(v26 + 8) > v14 )
          {
LABEL_47:
            if ( (_BYTE)v19 )
              v25 = 1;
            goto LABEL_49;
          }
          v23 = v26[2];
          v21 = v26[1] & 0xF;
          v24 = v26[3];
        }
        else
        {
          v14 = (unsigned __int64)&v26[v27];
          LOBYTE(v19) = 0;
          if ( (unsigned __int64)(v26 + 8) > v14 )
            goto LABEL_47;
          v20 = v26 + 13;
          v21 = v26[2] & 0xF;
          v22 = v27;
          if ( (unsigned int)(unsigned __int8)v26[7] + 8 <= v27 )
            v22 = (unsigned __int8)v26[7] + 8;
          v14 = (unsigned __int64)&v26[v22];
          if ( (unsigned __int64)v20 <= v14 )
            v23 = v26[12];
          if ( (unsigned __int64)(v26 + 14) > v14 )
            v24 = 0;
          else
            v24 = *v20;
        }
        LOBYTE(v19) = 1;
        goto LABEL_47;
      case 0x1B:
        if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v17 = *(int **)(a2 + 56);
            if ( v17 )
              v5 = *v17;
            McTemplateK0pqd_EtwWriteTransfer(v14, v15, (unsigned int)&v67, a2, v5, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_21;
        }
        if ( (byte_140173442 & 0x20) == 0 )
          goto LABEL_21;
        v16 = &EventPnpRequestComplete;
        break;
      default:
        goto LABEL_21;
    }
    McTemplateK0pd_EtwWriteTransfer(v14, v16, &v67, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_21;
  }
  v6 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
  v63 = v6;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 45LL, &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids, a1, a2, v6);
  }
  if ( v6 != 2 )
  {
    if ( v6 == 3 )
    {
      PowerIrp = RaidUnitQueryPowerIrp(a1, a2);
      goto LABEL_6;
    }
    v13 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741637;
    if ( v13 )
      goto LABEL_155;
    v67 = 0LL;
    IoGetActivityIdIrp(a2, &v67);
    v37 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v37 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_155;
      v39 = &EventNonReadWriteRequestComplete;
      goto LABEL_102;
    }
    if ( *(_BYTE *)v37 != 15 )
    {
      if ( *(_BYTE *)v37 == 27 )
      {
        if ( *(_BYTE *)(v37 + 1) == 7 && !*(_DWORD *)(v37 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v38 = *(int **)(a2 + 56);
            if ( v38 )
              v5 = *v38;
            McTemplateK0pqd_EtwWriteTransfer(v36, v37, (unsigned int)&v67, a2, v5, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_155;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v39 = &EventPnpRequestComplete;
LABEL_102:
          McTemplateK0pd_EtwWriteTransfer(v36, v39, &v67, a2, *(_DWORD *)(a2 + 48));
        }
      }
LABEL_155:
      IofCompleteRequest((PIRP)a2, 0);
      v8 = -1073741637;
      goto LABEL_7;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_155;
    v40 = *(_QWORD *)(v37 + 8);
    v41 = 0LL;
    v59 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    if ( *(_BYTE *)(v40 + 2) == 40 )
    {
      v47 = 0LL;
      v61 = 0;
      if ( *(_DWORD *)(v40 + 20) )
        goto LABEL_154;
      v48 = 0LL;
      v65 = 0;
      v66 = *(_DWORD *)(v40 + 56);
      if ( !v66 )
        goto LABEL_154;
      while ( 1 )
      {
        v36 = *(unsigned int *)(v40 + 4 * v48 + 120);
        if ( (unsigned int)v36 >= 0x80 )
        {
          v49 = *(unsigned int *)(v40 + 16);
          if ( (unsigned int)v36 < (unsigned int)v49 )
          {
            v50 = (unsigned int)v36;
            v51 = *(_DWORD *)(v40 + v36) - 64;
            if ( v51 )
            {
              LODWORD(v36) = v51 - 1;
              if ( (_DWORD)v36 )
              {
                if ( (_DWORD)v36 == 1 )
                {
                  LODWORD(v36) = v50 + 40;
                  if ( v50 + 40 <= v49 )
                  {
                    if ( *(_DWORD *)(v40 + v50 + 12) )
                      v47 = (char *)(v50 + v40 + 32);
                    v41 = *(_BYTE **)(v40 + v50 + 24);
                    goto LABEL_129;
                  }
                }
              }
              else
              {
                LODWORD(v36) = v50 + 56;
                if ( v50 + 56 <= v49 )
                {
                  v61 = 1;
                  if ( *(_BYTE *)(v40 + v50 + 10) )
                    v47 = (char *)(v50 + v40 + 24);
                  v41 = *(_BYTE **)(v40 + v50 + 16);
                  v42 = *(_BYTE *)(v40 + v50 + 9);
                  v59 = *(_BYTE *)(v40 + v50 + 8);
                }
              }
            }
            else
            {
              LODWORD(v36) = v50 + 40;
              if ( v50 + 40 <= v49 )
              {
                if ( *(_BYTE *)(v40 + v50 + 10) )
                  v47 = (char *)(v50 + v40 + 24);
                v41 = *(_BYTE **)(v40 + v50 + 16);
LABEL_129:
                v52 = *(_BYTE *)(v40 + v50 + 8);
                v42 = *(_BYTE *)(v40 + v50 + 9);
LABEL_123:
                if ( v47 )
                {
                  v53 = *v47;
                  v46 = 0;
                  goto LABEL_131;
                }
                goto LABEL_154;
              }
            }
            if ( v61 )
              goto LABEL_122;
          }
        }
        v48 = (unsigned int)(v65 + 1);
        v65 = v48;
        if ( (unsigned int)v48 >= v66 )
        {
LABEL_122:
          v52 = v59;
          goto LABEL_123;
        }
      }
    }
    v53 = *(_BYTE *)(v40 + 72);
    v41 = *(_BYTE **)(v40 + 32);
    v42 = *(_BYTE *)(v40 + 11);
    v52 = *(_BYTE *)(v40 + 4);
    if ( *(_BYTE *)(v40 + 2) )
      goto LABEL_154;
LABEL_131:
    LOBYTE(v36) = v53 - 8;
    if ( (v36 & 0x5D) != 0 )
    {
LABEL_154:
      v6 = v63;
      goto LABEL_155;
    }
    v54 = *(_BYTE *)(v40 + 3);
    if ( v54 == 1 || !v41 || !v42 )
    {
LABEL_150:
      if ( byte_140173441 < 0 )
      {
        if ( !v46 )
        {
          v45 = 0;
          v44 = 0;
          v43 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v36,
          v40,
          (unsigned int)&v67,
          a2,
          *(_DWORD *)(a2 + 48),
          v54,
          v52,
          v43,
          v44,
          v45,
          a2);
      }
      goto LABEL_154;
    }
    v55 = *v41 & 0x7F;
    if ( v55 == 114 || v55 == 115 )
    {
      v36 = (unsigned __int64)&v41[v42];
      LOBYTE(v40) = 0;
      if ( (unsigned __int64)(v41 + 8) > v36 )
        goto LABEL_148;
      v44 = v41[2];
      v43 = v41[1] & 0xF;
      v45 = v41[3];
    }
    else
    {
      v36 = (unsigned __int64)&v41[v42];
      LOBYTE(v40) = 0;
      if ( (unsigned __int64)(v41 + 8) > v36 )
        goto LABEL_148;
      v56 = v41 + 13;
      v43 = v41[2] & 0xF;
      v57 = v42;
      if ( (unsigned int)(unsigned __int8)v41[7] + 8 <= v42 )
        v57 = (unsigned __int8)v41[7] + 8;
      v36 = (unsigned __int64)&v41[v57];
      if ( (unsigned __int64)v56 <= v36 )
        v44 = v41[12];
      if ( (unsigned __int64)(v41 + 14) > v36 )
        v45 = 0;
      else
        v45 = *v56;
    }
    LOBYTE(v40) = 1;
LABEL_148:
    if ( (_BYTE)v40 )
      v46 = 1;
    goto LABEL_150;
  }
  PowerIrp = RaidUnitSetPowerIrp((PVOID)a1, (PIRP)a2);
LABEL_6:
  v8 = PowerIrp;
LABEL_7:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      46LL,
      &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
      a1,
      a2,
      v6,
      v8);
  }
  v9 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v10 = *(_DWORD *)(v9 + *(_QWORD *)(a1 + 40));
  while ( (v10 & 1) == 0 )
  {
    v11 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + *(_QWORD *)(a1 + 40)), v10 - 2, v10);
    if ( v11 == v10 )
      return v8;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
  return v8;
}
