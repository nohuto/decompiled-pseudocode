/*
 * XREFs of NvmeControllerRequeueSQPendingRequests @ 0x1400F9ED4
 * Callers:
 *     NvmeControllerProcessPendingRequestForResetRecovery @ 0x14012BA9C (NvmeControllerProcessPendingRequestForResetRecovery.c)
 * Callees:
 *     NvmeControllerGetNamespace @ 0x1400317F0 (NvmeControllerGetNamespace.c)
 *     FreeNVMePrpListBufferEntry @ 0x140045980 (FreeNVMePrpListBufferEntry.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeControllerProcessExtendedCommandForResetRecovery @ 0x1400F8C8C (NvmeControllerProcessExtendedCommandForResetRecovery.c)
 *     NvmeProcessIoForResetRecovery @ 0x1400FFB24 (NvmeProcessIoForResetRecovery.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeControllerRequeueSQPendingRequests(__int64 a1)
{
  __int64 v1; // r14
  unsigned int v3; // esi
  __int16 v4; // dx
  __int64 result; // rax
  unsigned int v6; // r12d
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // rdi
  bool v10; // bp
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned int v15; // eax
  _QWORD *Namespace; // rax
  __int64 v17; // r9
  unsigned int v18; // r15d
  bool v19; // zf
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned int *v22; // rax
  __int64 v23; // rcx
  const EVENT_DESCRIPTOR *v24; // rdx
  unsigned __int64 v25; // rdx
  _BYTE *v26; // r9
  unsigned __int8 v27; // r10
  char v28; // r13
  char v29; // r12
  char v30; // bp
  char v31; // r14
  char *v32; // r14
  unsigned __int64 v33; // r11
  __int64 v34; // r8
  int v35; // ecx
  char v36; // r11
  char v37; // cl
  char v38; // r8
  char v39; // al
  unsigned int v40; // eax
  __int64 v41; // [rsp+20h] [rbp-B8h]
  __int64 v42; // [rsp+28h] [rbp-B0h]
  __int64 v43; // [rsp+30h] [rbp-A8h]
  __int64 v44; // [rsp+38h] [rbp-A0h]
  __int64 v45; // [rsp+40h] [rbp-98h]
  __int64 v46; // [rsp+48h] [rbp-90h]
  char v47; // [rsp+60h] [rbp-78h]
  char v48; // [rsp+61h] [rbp-77h]
  unsigned int v49; // [rsp+64h] [rbp-74h]
  unsigned int v50; // [rsp+6Ch] [rbp-6Ch]
  __int16 v51; // [rsp+70h] [rbp-68h]
  __int64 v52; // [rsp+78h] [rbp-60h]
  unsigned int v53; // [rsp+80h] [rbp-58h]
  __int64 v54; // [rsp+88h] [rbp-50h]
  __int64 v55; // [rsp+90h] [rbp-48h]
  GUID v56; // [rsp+98h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 88);
  v3 = *(_DWORD *)(a1 + 124);
  v4 = *(_WORD *)(a1 + 136);
  v51 = v4;
  result = v3 - 1;
  v55 = v1;
  if ( (*(_BYTE *)(v1 + 136) & 2) == 0 )
    --v3;
  v50 = v3;
  v6 = 0;
  v49 = 0;
  if ( v3 )
  {
    v7 = 0LL;
    v52 = 0LL;
    v8 = 0LL;
    v54 = 0LL;
    while ( 1 )
    {
      result = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(result + v8 + 60) & 1) != 0 )
        break;
LABEL_21:
      ++v6;
      ++v7;
      v8 += 128LL;
      v49 = v6;
      v52 = v7;
      v54 = v8;
      if ( v6 >= v3 )
        goto LABEL_22;
    }
    v9 = v7 << 7;
    v10 = (*(_BYTE *)(*(_QWORD *)(a1 + 32) + (v7 << 7) + 60) & 8) != 0;
    *(_BYTE *)(*(_QWORD *)(a1 + 32) + (v7 << 7) + 60) &= ~1u;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + (v7 << 7) + 16) )
    {
      FreeNVMePrpListBufferEntry(
        v1,
        *(unsigned __int16 *)(v9 + *(_QWORD *)(a1 + 32) + 52),
        *(_QWORD *)(v9 + *(_QWORD *)(a1 + 32) + 16));
      v4 = v51;
    }
    if ( (*(_BYTE *)(v9 + *(_QWORD *)(a1 + 32) + 60) & 0x10) != 0
      || (*(_BYTE *)(v9 + *(_QWORD *)(a1 + 32) + 61) & 2) != 0 )
    {
LABEL_20:
      result = *(_QWORD *)(a1 + 32);
      v4 = v51;
      *(_WORD *)(v9 + result + 56) = -1;
      goto LABEL_21;
    }
    v11 = *(_QWORD *)(a1 + 32);
    v12 = v1;
    if ( !v4 )
    {
      NvmeControllerProcessExtendedCommandForResetRecovery(
        v1,
        *(unsigned int **)(v11 + v9 + 40),
        *(unsigned __int16 *)(v11 + v9 + 52));
      goto LABEL_20;
    }
    v13 = _InterlockedExchange64((volatile __int64 *)(v11 + v9 + 24), 0LL);
    v14 = *(_QWORD *)(a1 + 32);
    v15 = *(_DWORD *)(v9 + v14 + 80);
    if ( !v15 )
    {
LABEL_18:
      NvmeControllerProcessExtendedCommandForResetRecovery(
        v12,
        *(unsigned int **)(v9 + v14 + 40),
        *(unsigned __int16 *)(v9 + v14 + 52));
LABEL_19:
      v3 = v50;
      goto LABEL_20;
    }
    Namespace = NvmeControllerGetNamespace(v1, v15);
    v17 = 0LL;
    if ( Namespace )
    {
      if ( (*(_BYTE *)(v9 + *(_QWORD *)(a1 + 32) + 60) & 2) == 0 )
      {
        if ( v13 )
        {
          LOBYTE(v17) = v10;
          NvmeProcessIoForResetRecovery(
            Namespace,
            v13,
            *(unsigned __int16 *)(v9 + *(_QWORD *)(a1 + 32) + 52),
            v17,
            *(_QWORD *)(v9 + *(_QWORD *)(a1 + 32) + 40));
        }
        goto LABEL_19;
      }
      v14 = *(_QWORD *)(a1 + 32);
      v12 = v1;
      goto LABEL_18;
    }
    if ( !v13 )
      goto LABEL_19;
    v18 = 0;
    *(_BYTE *)(v13 + 141) = -84;
    v19 = StorEtwLoggingEnabled == 0;
    *(_DWORD *)(v13 + 48) = -2147483619;
    if ( v19 )
      goto LABEL_91;
    v56 = 0LL;
    IoGetActivityIdIrp(v13, &v56);
    v21 = *(_QWORD *)(v13 + 184);
    if ( *(_BYTE *)v21 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_91;
      v24 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_37;
    }
    if ( *(_BYTE *)v21 != 15 )
    {
      if ( *(_BYTE *)v21 == 27 )
      {
        if ( *(_BYTE *)(v21 + 1) == 7 && !*(_DWORD *)(v21 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v22 = *(unsigned int **)(v13 + 56);
            if ( v22 )
              v23 = *v22;
            else
              v23 = 0LL;
            LODWORD(v42) = *(_DWORD *)(v13 + 48);
            LODWORD(v41) = v23;
            McTemplateK0pqd_EtwWriteTransfer(v23, v21, &v56, v13, v41, v42);
          }
          goto LABEL_91;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v24 = &EventPnpRequestComplete;
LABEL_37:
          LODWORD(v41) = *(_DWORD *)(v13 + 48);
          McTemplateK0pd_EtwWriteTransfer(v20, v24, &v56, v13, v41);
        }
      }
LABEL_91:
      IofCompleteRequest((PIRP)v13, 0);
      v1 = v55;
      v8 = v54;
      goto LABEL_19;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_91;
    v25 = *(_QWORD *)(v21 + 8);
    v26 = 0LL;
    v47 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    if ( *(_BYTE *)(v25 + 2) == 40 )
    {
      v32 = 0LL;
      v48 = 0;
      if ( *(_DWORD *)(v25 + 20) )
        goto LABEL_90;
      v53 = *(_DWORD *)(v25 + 56);
      if ( !v53 )
        goto LABEL_90;
      do
      {
        v20 = *(unsigned int *)(v25 + 4LL * v18 + 120);
        if ( (unsigned int)v20 >= 0x80 )
        {
          v33 = *(unsigned int *)(v25 + 16);
          if ( (unsigned int)v20 < (unsigned int)v33 )
          {
            v34 = (unsigned int)v20;
            v35 = *(_DWORD *)(v20 + v25) - 64;
            if ( v35 )
            {
              v20 = (unsigned int)(v35 - 1);
              if ( (_DWORD)v20 )
              {
                if ( (_DWORD)v20 == 1 )
                {
                  v20 = v34 + 40;
                  if ( v34 + 40 <= v33 )
                  {
                    if ( *(_DWORD *)(v34 + v25 + 12) )
                      v32 = (char *)(v34 + v25 + 32);
                    v26 = *(_BYTE **)(v34 + v25 + 24);
LABEL_51:
                    v36 = *(_BYTE *)(v34 + v25 + 8);
                    v27 = *(_BYTE *)(v34 + v25 + 9);
                    goto LABEL_60;
                  }
                }
              }
              else
              {
                v20 = v34 + 56;
                if ( v34 + 56 <= v33 )
                {
                  v48 = 1;
                  if ( *(_BYTE *)(v34 + v25 + 10) )
                    v32 = (char *)(v34 + v25 + 24);
                  v26 = *(_BYTE **)(v34 + v25 + 16);
                  v27 = *(_BYTE *)(v34 + v25 + 9);
                  v47 = *(_BYTE *)(v34 + v25 + 8);
                }
              }
            }
            else
            {
              v20 = v34 + 40;
              if ( v34 + 40 <= v33 )
              {
                if ( *(_BYTE *)(v34 + v25 + 10) )
                  v32 = (char *)(v34 + v25 + 24);
                v26 = *(_BYTE **)(v34 + v25 + 16);
                goto LABEL_51;
              }
            }
            if ( v48 )
              break;
          }
        }
        ++v18;
      }
      while ( v18 < v53 );
      v36 = v47;
LABEL_60:
      if ( !v32 )
        goto LABEL_90;
      v37 = *v32;
      v31 = 0;
    }
    else
    {
      v37 = *(_BYTE *)(v25 + 72);
      v26 = *(_BYTE **)(v25 + 32);
      v27 = *(_BYTE *)(v25 + 11);
      v36 = *(_BYTE *)(v25 + 4);
      if ( *(_BYTE *)(v25 + 2) )
        goto LABEL_90;
    }
    LOBYTE(v20) = v37 - 8;
    if ( (v20 & 0x5D) == 0 )
    {
      v38 = *(_BYTE *)(v25 + 3);
      if ( v38 == 1 || !v26 || !v27 )
      {
LABEL_86:
        if ( byte_140173441 < 0 )
        {
          if ( !v31 )
          {
            v30 = 0;
            v29 = 0;
            v28 = 0;
          }
          LOBYTE(v46) = v30;
          LOBYTE(v45) = v29;
          LOBYTE(v44) = v28;
          LOBYTE(v43) = v36;
          LOBYTE(v42) = v38;
          LODWORD(v41) = *(_DWORD *)(v13 + 48);
          McTemplateK0pduuuuup_EtwWriteTransfer(v20, v25, &v56, v13, v41, v42, v43, v44, v45, v46, v13);
        }
        goto LABEL_90;
      }
      v39 = *v26 & 0x7F;
      if ( v39 == 114 || v39 == 115 )
      {
        v20 = (unsigned __int64)&v26[v27];
        LOBYTE(v25) = 0;
        if ( (unsigned __int64)(v26 + 8) > v20 )
          goto LABEL_84;
        v29 = v26[2];
        v28 = v26[1] & 0xF;
        v30 = v26[3];
      }
      else
      {
        v20 = (unsigned __int64)&v26[v27];
        LOBYTE(v25) = 0;
        if ( (unsigned __int64)(v26 + 8) > v20 )
          goto LABEL_84;
        v25 = (unsigned __int64)(v26 + 13);
        v28 = v26[2] & 0xF;
        v40 = v27;
        if ( (unsigned int)(unsigned __int8)v26[7] + 8 <= v27 )
          v40 = (unsigned __int8)v26[7] + 8;
        v20 = (unsigned __int64)&v26[v40];
        if ( v25 > v20 )
          v29 = 0;
        else
          v29 = v26[12];
        if ( (unsigned __int64)(v26 + 14) > v20 )
          v30 = 0;
        else
          v30 = *(_BYTE *)v25;
      }
      LOBYTE(v25) = 1;
LABEL_84:
      if ( (_BYTE)v25 )
        v31 = 1;
      goto LABEL_86;
    }
LABEL_90:
    v6 = v49;
    v7 = v52;
    goto LABEL_91;
  }
LABEL_22:
  *(_WORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  return result;
}
