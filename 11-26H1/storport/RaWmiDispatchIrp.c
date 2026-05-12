/*
 * XREFs of RaWmiDispatchIrp @ 0x1401B7718
 * Callers:
 *     RaDriverSystemControlIrp @ 0x1401B7620 (RaDriverSystemControlIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004AB0 (RaUnitAcquireRemoveLock.c)
 *     RaidAcquireAdapterRemoveLock @ 0x14002F6B4 (RaidAcquireAdapterRemoveLock.c)
 *     RaidReleaseAdapterRemoveLock @ 0x14003F754 (RaidReleaseAdapterRemoveLock.c)
 *     NvmeAdapterAcquireRemoveLock @ 0x14004B464 (NvmeAdapterAcquireRemoveLock.c)
 *     RaidCompleteWmiIrp @ 0x14004E19C (RaidCompleteWmiIrp.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_d @ 0x14005C17C (WPP_SF_d.c)
 *     NvmeAdapterReleaseRemoveLock @ 0x14005CBF8 (NvmeAdapterReleaseRemoveLock.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     RaWmiIrpNormalRequest @ 0x1401B8994 (RaWmiIrpNormalRequest.c)
 *     RaWmiIrpRegisterRequest @ 0x1401B9580 (RaWmiIrpRegisterRequest.c)
 */

NTSTATUS __fastcall RaWmiDispatchIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // ebx
  __int64 v6; // rsi
  __int64 v7; // r12
  int *v9; // rcx
  int v10; // r14d
  int v11; // eax
  bool v12; // zf
  unsigned __int64 v13; // rcx
  unsigned __int8 *v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  _BYTE *v17; // r9
  unsigned __int8 v18; // r14
  char v19; // r11
  char v20; // si
  char v21; // r10
  char v22; // r15
  int v23; // eax
  char *v24; // r15
  unsigned int v25; // r13d
  unsigned __int64 v26; // r12
  __int64 v27; // r8
  int v28; // ecx
  char v29; // r12
  const EVENT_DESCRIPTOR *v30; // rdx
  char v31; // cl
  char v32; // r8
  char v33; // al
  char *v34; // r10
  unsigned int v35; // eax
  __int64 v36; // rdx
  int v37; // ecx
  int v38; // eax
  int v39; // r15d
  bool v40; // sf
  __int64 v41; // rax
  unsigned __int64 v42; // r8
  signed __int32 v43; // eax
  signed __int32 v44; // ett
  NTSTATUS v45; // ebx
  unsigned __int64 v46; // r8
  signed __int32 v47; // eax
  signed __int32 v48; // ett
  int *v49; // rax
  unsigned int v50; // r13d
  unsigned __int64 v51; // r12
  int v52; // ecx
  char v53; // [rsp+60h] [rbp-29h]
  char v54; // [rsp+61h] [rbp-28h]
  char v55; // [rsp+61h] [rbp-28h]
  int v56; // [rsp+64h] [rbp-25h]
  __int64 v57; // [rsp+68h] [rbp-21h]
  unsigned int v58; // [rsp+68h] [rbp-21h]
  unsigned int v59; // [rsp+68h] [rbp-21h]
  _QWORD v60[2]; // [rsp+70h] [rbp-19h] BYREF
  unsigned int v61; // [rsp+80h] [rbp-9h]
  int v62; // [rsp+84h] [rbp-5h]
  __int64 v63; // [rsp+88h] [rbp-1h]
  GUID v64; // [rsp+90h] [rbp+7h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v62 = 0;
  v57 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( *(_QWORD *)(v2 + 8) != a1 )
    return RaidCompleteWmiIrp(a1, a2);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xAu,
      (__int64)&WPP_83491b0a8e35394f9ae62345ae9f178a_Traceguids,
      *(unsigned __int8 *)(v2 + 1));
  }
  v9 = *(int **)(a1 + 64);
  v10 = *v9;
  if ( *v9 == 1094997074 )
  {
    v7 = *(_QWORD *)(a1 + 64);
    v11 = RaidAcquireAdapterRemoveLock((__int64)v9);
  }
  else if ( v10 == 1314275652 )
  {
    v57 = *(_QWORD *)(a1 + 64);
    v11 = NvmeAdapterAcquireRemoveLock((__int64)v9);
  }
  else
  {
    if ( v10 != 1431193940 )
    {
      v11 = -1073741637;
      v56 = -1073741637;
      goto LABEL_15;
    }
    v6 = *(_QWORD *)(a1 + 64);
    v11 = RaUnitAcquireRemoveLock((__int64)v9, a2, 1);
  }
  v56 = v11;
  if ( v11 < 0 )
  {
LABEL_15:
    v12 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v11;
    if ( v12 )
      goto LABEL_136;
    v64 = 0LL;
    IoGetActivityIdIrp(a2, &v64);
    v14 = *(unsigned __int8 **)(a2 + 184);
    if ( *v14 != 14 )
    {
      v15 = *v14 - 15;
      if ( *v14 == 15 )
      {
        if ( byte_140173441 >= 0 )
          goto LABEL_136;
        v16 = *((_QWORD *)v14 + 1);
        v17 = 0LL;
        v53 = 0;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        v21 = 0;
        v22 = 0;
        v23 = *(unsigned __int8 *)(v16 + 2);
        if ( (_BYTE)v23 == 40 )
        {
          v24 = 0LL;
          v54 = 0;
          if ( !*(_DWORD *)(v16 + 20) )
          {
            v25 = 0;
            v58 = *(_DWORD *)(v16 + 56);
            if ( v58 )
            {
              while ( 1 )
              {
                v13 = *(unsigned int *)(v16 + 4LL * v25 + 120);
                if ( (unsigned int)v13 >= 0x80 )
                {
                  v26 = *(unsigned int *)(v16 + 16);
                  if ( (unsigned int)v13 < (unsigned int)v26 )
                  {
                    v27 = (unsigned int)v13;
                    v28 = *(_DWORD *)(v13 + v16) - 64;
                    if ( v28 )
                    {
                      v13 = (unsigned int)(v28 - 1);
                      if ( (_DWORD)v13 )
                      {
                        if ( (_DWORD)v13 == 1 )
                        {
                          v13 = v27 + 40;
                          if ( v27 + 40 <= v26 )
                            goto LABEL_28;
                        }
                      }
                      else
                      {
                        v13 = v27 + 56;
                        if ( v27 + 56 <= v26 )
                        {
                          v54 = 1;
                          if ( *(_BYTE *)(v27 + v16 + 10) )
                            v24 = (char *)(v27 + v16 + 24);
                          v17 = *(_BYTE **)(v27 + v16 + 16);
                          v18 = *(_BYTE *)(v27 + v16 + 9);
                          v53 = *(_BYTE *)(v27 + v16 + 8);
                        }
                      }
                    }
                    else
                    {
                      v13 = v27 + 40;
                      if ( v27 + 40 <= v26 )
                        goto LABEL_44;
                    }
                    if ( v54 )
                      goto LABEL_41;
                  }
                }
                if ( ++v25 >= v58 )
                  goto LABEL_41;
              }
            }
          }
          goto LABEL_136;
        }
        goto LABEL_47;
      }
LABEL_98:
      if ( v15 != 12 )
        goto LABEL_136;
      if ( v14[1] == 7 && !*((_DWORD *)v14 + 2) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v49 = *(int **)(a2 + 56);
          if ( v49 )
            v3 = *v49;
          McTemplateK0pqd_EtwWriteTransfer(v13, (__int64)v14, &v64, a2, v3, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_136;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_136;
      v30 = &EventPnpRequestComplete;
LABEL_135:
      McTemplateK0pd_EtwWriteTransfer(v13, v30, &v64, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_136;
    }
    goto LABEL_133;
  }
  v60[0] = *(_QWORD *)(v2 + 8);
  v60[1] = *(_QWORD *)(v2 + 16);
  v63 = *(_QWORD *)(v2 + 32);
  v61 = *(_DWORD *)(v2 + 24);
  v36 = *(unsigned __int8 *)(v2 + 1);
  if ( (unsigned int)v36 > 5 )
  {
    if ( (_DWORD)v36 == 6 || (_DWORD)v36 == 7 )
      goto LABEL_66;
    v37 = v36 - 8;
    if ( (_DWORD)v36 == 8 )
    {
      v38 = RaWmiIrpRegisterRequest(a1, v60);
LABEL_67:
      v39 = v38;
      v56 = v38;
      *(_DWORD *)(a2 + 48) = v38;
      v40 = v38 < 0;
      v41 = v61;
      if ( v40 )
        v41 = 0LL;
      *(_QWORD *)(a2 + 56) = v41;
      if ( v10 == 1094997074 )
      {
        RaidReleaseAdapterRemoveLock(v7);
      }
      else if ( v10 == 1314275652 )
      {
        NvmeAdapterReleaseRemoveLock(v57);
      }
      else
      {
        v42 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
        v43 = *(_DWORD *)(v42 + *(_QWORD *)(v6 + 40));
        while ( (v43 & 1) == 0 )
        {
          v44 = v43;
          v43 = _InterlockedCompareExchange((volatile signed __int32 *)(v42 + *(_QWORD *)(v6 + 40)), v43 - 2, v43);
          if ( v44 == v43 )
            goto LABEL_95;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 1032), 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(v6 + 520), 0, 0);
      }
LABEL_95:
      v12 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = v39;
      if ( v12 )
        goto LABEL_136;
      v64 = 0LL;
      IoGetActivityIdIrp(a2, &v64);
      v14 = *(unsigned __int8 **)(a2 + 184);
      if ( *v14 != 14 )
      {
        v15 = *v14 - 15;
        if ( *v14 == 15 )
        {
          if ( byte_140173441 >= 0 )
            goto LABEL_136;
          v16 = *((_QWORD *)v14 + 1);
          v17 = 0LL;
          v53 = 0;
          v18 = 0;
          v19 = 0;
          v20 = 0;
          v21 = 0;
          v22 = 0;
          v23 = *(unsigned __int8 *)(v16 + 2);
          if ( (_BYTE)v23 == 40 )
          {
            v24 = 0LL;
            v55 = 0;
            if ( *(_DWORD *)(v16 + 20) )
              goto LABEL_136;
            v50 = 0;
            v59 = *(_DWORD *)(v16 + 56);
            if ( !v59 )
              goto LABEL_136;
            do
            {
              v13 = *(unsigned int *)(v16 + 4LL * v50 + 120);
              if ( (unsigned int)v13 >= 0x80 )
              {
                v51 = *(unsigned int *)(v16 + 16);
                if ( (unsigned int)v13 < (unsigned int)v51 )
                {
                  v27 = (unsigned int)v13;
                  v52 = *(_DWORD *)(v13 + v16) - 64;
                  if ( v52 )
                  {
                    v13 = (unsigned int)(v52 - 1);
                    if ( (_DWORD)v13 )
                    {
                      if ( (_DWORD)v13 == 1 )
                      {
                        v13 = v27 + 40;
                        if ( v27 + 40 <= v51 )
                        {
LABEL_28:
                          if ( *(_DWORD *)(v27 + v16 + 12) )
                            v24 = (char *)(v27 + v16 + 32);
                          v17 = *(_BYTE **)(v27 + v16 + 24);
LABEL_31:
                          v29 = *(_BYTE *)(v27 + v16 + 8);
                          v18 = *(_BYTE *)(v27 + v16 + 9);
                          goto LABEL_42;
                        }
                      }
                    }
                    else
                    {
                      v13 = v27 + 56;
                      if ( v27 + 56 <= v51 )
                      {
                        v55 = 1;
                        if ( *(_BYTE *)(v27 + v16 + 10) )
                          v24 = (char *)(v27 + v16 + 24);
                        v17 = *(_BYTE **)(v27 + v16 + 16);
                        v18 = *(_BYTE *)(v27 + v16 + 9);
                        v53 = *(_BYTE *)(v27 + v16 + 8);
                      }
                    }
                  }
                  else
                  {
                    v13 = v27 + 40;
                    if ( v27 + 40 <= v51 )
                    {
LABEL_44:
                      if ( *(_BYTE *)(v27 + v16 + 10) )
                        v24 = (char *)(v27 + v16 + 24);
                      v17 = *(_BYTE **)(v27 + v16 + 16);
                      goto LABEL_31;
                    }
                  }
                  if ( v55 )
                    break;
                }
              }
              ++v50;
            }
            while ( v50 < v59 );
LABEL_41:
            v29 = v53;
LABEL_42:
            if ( !v24 )
              goto LABEL_136;
            v31 = *v24;
            v22 = 0;
LABEL_48:
            LOBYTE(v13) = v31 - 8;
            if ( (v13 & 0x5D) == 0 )
            {
              v32 = *(_BYTE *)(v16 + 3);
              if ( v32 == 1 || !v17 || !v18 )
              {
LABEL_129:
                if ( byte_140173441 < 0 )
                {
                  if ( !v22 )
                  {
                    v21 = 0;
                    v19 = 0;
                    v20 = 0;
                  }
                  McTemplateK0pduuuuup_EtwWriteTransfer(
                    v13,
                    v16,
                    &v64,
                    a2,
                    *(_DWORD *)(a2 + 48),
                    v32,
                    v29,
                    v19,
                    v20,
                    v21,
                    a2);
                }
                goto LABEL_136;
              }
              v33 = *v17 & 0x7F;
              if ( v33 == 114 || v33 == 115 )
              {
                v13 = (unsigned __int64)&v17[v18];
                LOBYTE(v16) = 0;
                if ( (unsigned __int64)(v17 + 8) > v13 )
                  goto LABEL_127;
                v21 = v17[3];
                v19 = v17[1] & 0xF;
                v20 = v17[2];
              }
              else
              {
                v13 = (unsigned __int64)&v17[v18];
                LOBYTE(v16) = 0;
                if ( (unsigned __int64)(v17 + 8) > v13 )
                  goto LABEL_127;
                v34 = v17 + 13;
                v19 = v17[2] & 0xF;
                v35 = v18;
                if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
                  v35 = (unsigned __int8)v17[7] + 8;
                v13 = (unsigned __int64)&v17[v35];
                if ( (unsigned __int64)v34 <= v13 )
                  v20 = v17[12];
                if ( (unsigned __int64)(v17 + 14) > v13 )
                  v21 = 0;
                else
                  v21 = *v34;
              }
              LOBYTE(v16) = 1;
LABEL_127:
              if ( (_BYTE)v16 )
                v22 = 1;
              goto LABEL_129;
            }
LABEL_136:
            IofCompleteRequest((PIRP)a2, 0);
            return v56;
          }
LABEL_47:
          v29 = *(_BYTE *)(v16 + 4);
          v18 = *(_BYTE *)(v16 + 11);
          v17 = *(_BYTE **)(v16 + 32);
          v31 = *(_BYTE *)(v16 + 72);
          if ( v23 )
            goto LABEL_136;
          goto LABEL_48;
        }
        goto LABEL_98;
      }
LABEL_133:
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_136;
      v30 = &EventNonReadWriteRequestComplete;
      goto LABEL_135;
    }
  }
  else
  {
    if ( (_DWORD)v36 == 5 )
      goto LABEL_66;
    if ( (unsigned int)v36 <= 2 )
      goto LABEL_66;
    v37 = v36 - 3;
    if ( (_DWORD)v36 == 3 )
      goto LABEL_66;
  }
  if ( v37 == 1 )
  {
LABEL_66:
    v38 = RaWmiIrpNormalRequest(a1, v36, v60);
    goto LABEL_67;
  }
  v45 = RaidCompleteWmiIrp(a1, a2);
  if ( v10 == 1094997074 )
  {
    RaidReleaseAdapterRemoveLock(v7);
  }
  else if ( v10 == 1314275652 )
  {
    NvmeAdapterReleaseRemoveLock(v57);
  }
  else
  {
    v46 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v47 = *(_DWORD *)(v46 + *(_QWORD *)(v6 + 40));
    while ( (v47 & 1) == 0 )
    {
      v48 = v47;
      v47 = _InterlockedCompareExchange((volatile signed __int32 *)(v46 + *(_QWORD *)(v6 + 40)), v47 - 2, v47);
      if ( v48 == v47 )
        return v45;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v6 + 520), 0, 0);
  }
  return v45;
}
