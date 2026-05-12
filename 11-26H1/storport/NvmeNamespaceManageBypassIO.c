/*
 * XREFs of NvmeNamespaceManageBypassIO @ 0x1401A6A28
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceManageBypassIO(__int64 a1, __int64 a2)
{
  int *v2; // r14
  int v3; // ebx
  __int64 v5; // rdx
  int v7; // esi
  unsigned int v8; // r15d
  int *v9; // r13
  size_t v10; // r8
  __int64 v11; // rax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // r12d
  __int64 v16; // rax
  const wchar_t *v17; // rax
  _OWORD *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  size_t v21; // r8
  _OWORD *v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int16 v26; // ax
  bool v27; // zf
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  int *v30; // rax
  const EVENT_DESCRIPTOR *v31; // rdx
  __int64 v32; // rdx
  _BYTE *v33; // r9
  unsigned __int8 v34; // r15
  char v35; // r10
  char v36; // r14
  char v37; // r11
  char v38; // r12
  char *v39; // r12
  __int64 v40; // rax
  unsigned __int64 v41; // r13
  __int64 v42; // r8
  int v43; // ecx
  char v44; // r13
  char v45; // cl
  char v46; // r8
  char v47; // al
  char *v48; // r11
  unsigned int v49; // eax
  int v51; // [rsp+20h] [rbp-59h]
  char v52; // [rsp+60h] [rbp-19h]
  char v53; // [rsp+61h] [rbp-18h]
  const wchar_t *v54; // [rsp+68h] [rbp-11h]
  unsigned int v55; // [rsp+68h] [rbp-11h]
  int v57; // [rsp+70h] [rbp-9h]
  unsigned __int16 v58; // [rsp+78h] [rbp-1h]
  GUID Src; // [rsp+80h] [rbp+7h] BYREF
  wchar_t v60; // [rsp+90h] [rbp+17h]

  v2 = *(int **)(a2 + 24);
  v3 = 0;
  v5 = *(_QWORD *)(a2 + 184);
  v60 = aDriver_0[8];
  v7 = 0;
  v54 = L"Failure found while processing operation parameters";
  v8 = 0;
  v9 = 0LL;
  v10 = *(unsigned int *)(v5 + 8);
  v11 = -1LL;
  Src = *(GUID *)L"\\Driver\\";
  do
    ++v11;
  while ( *((_WORD *)&Src.Data1 + v11) );
  v58 = v11;
  *(_QWORD *)&Src.Data1 = *(_QWORD *)L".sys";
  *(_WORD *)Src.Data4 = aSys[4];
  if ( *(_DWORD *)(v5 + 16) < 0x18u )
  {
    v7 = -1073741820;
    goto LABEL_47;
  }
  if ( *v2 != 24 )
  {
    v7 = -1073741637;
    goto LABEL_47;
  }
  v12 = v2[2];
  if ( v12 != 1 && (unsigned int)(v12 - 2) > 1 )
    goto LABEL_9;
  if ( (unsigned int)v10 < 8 )
  {
    v7 = -1073741789;
    goto LABEL_47;
  }
  if ( *(_BYTE *)(a2 + 64) )
  {
    v7 = -1073741790;
    goto LABEL_47;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( !v14 )
    {
      v8 = 24;
      v15 = 2;
      goto LABEL_21;
    }
    if ( v14 != 1 )
    {
LABEL_9:
      v7 = -1073741811;
      goto LABEL_47;
    }
    v15 = 3;
  }
  else
  {
    v15 = 1;
  }
  v8 = 352;
  v9 = v2 + 6;
LABEL_21:
  if ( (unsigned int)v10 < v8 )
  {
    memset_0(v2, 0, v10);
    v2[1] = v8;
    v8 = 8;
    *v2 = 352;
    goto LABEL_47;
  }
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1048LL);
  if ( v16 && (*(_DWORD *)(v16 + 24) & 0x20000) != 0 )
  {
    v7 = -1073741637;
    v17 = L"Bypass IO not supported";
  }
  else
  {
    if ( v15 == 1 || (unsigned int)(v15 - 2) < 2 )
      goto LABEL_30;
    v7 = -1073741811;
    v17 = L"Invalid operation";
  }
  v54 = v17;
LABEL_30:
  if ( v8 == 24 )
  {
    memset_0(v2, 0, v10);
    *v2 = 352;
    v2[1] = 24;
    v2[2] = v15;
  }
  else
  {
    memset_0(v2, 0, v10);
    *v2 = 352;
    v2[1] = 352;
    v2[2] = v15;
    if ( v7 < 0 )
    {
      *v9 = v7;
      v18 = (_OWORD *)((char *)v9 + 6);
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      v20 = *(unsigned __int16 *)(v19 + 56);
      v21 = v20 - 16;
      v22 = (_OWORD *)(*(_QWORD *)(v19 + 64) + 2LL * v58);
      if ( (unsigned __int64)(v20 - 8) >= 0x40 )
      {
        if ( v21 >= 0x40 )
        {
          *v18 = *v22;
          *(_OWORD *)((char *)v9 + 22) = v22[1];
          *(_OWORD *)((char *)v9 + 38) = v22[2];
          *(_OWORD *)((char *)v9 + 54) = v22[3];
        }
        else
        {
          memmove((char *)v9 + 6, v22, v21);
          v25 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 56LL);
          memmove((char *)v9 + 2 * ((v25 >> 1) - v58) + 6, &Src, 80 - v25);
        }
        v23 = -1LL;
        LOWORD(v24) = 32;
      }
      else
      {
        memmove((char *)v9 + 6, v22, v21);
        v23 = -1LL;
        *(_QWORD *)((char *)v9
                  + 2
                  * (((unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 56LL) >> 1) - v58)
                  + 6) = *(_QWORD *)&Src.Data1;
        v24 = -1LL;
        do
          ++v24;
        while ( *((_WORD *)v18 + v24) );
      }
      *((_WORD *)v9 + 2) = v24;
      do
        ++v23;
      while ( v54[v23] );
      v26 = 128;
      if ( v23 < 0x80 )
        v26 = v23;
      *((_WORD *)v9 + 35) = v26;
      memmove(v9 + 18, v54, 2LL * v26);
    }
  }
  v7 = 0;
LABEL_47:
  v27 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = v8;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v27 )
    goto LABEL_113;
  Src = 0LL;
  IoGetActivityIdIrp(a2, &Src);
  v29 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v29 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_113;
    v51 = *(_DWORD *)(a2 + 48);
    v31 = &EventNonReadWriteRequestComplete;
    goto LABEL_112;
  }
  if ( *(_BYTE *)v29 != 15 )
  {
    if ( *(_BYTE *)v29 != 27 )
      goto LABEL_113;
    if ( *(_BYTE *)(v29 + 1) == 7 && !*(_DWORD *)(v29 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v30 = *(int **)(a2 + 56);
        if ( v30 )
          v3 = *v30;
        McTemplateK0pqd_EtwWriteTransfer(v28, v29, &Src, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_113;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_113;
    v31 = &EventPnpRequestComplete;
    v51 = *(_DWORD *)(a2 + 48);
LABEL_112:
    McTemplateK0pd_EtwWriteTransfer(v28, v31, &Src, a2, v51);
    goto LABEL_113;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_113;
  v32 = *(_QWORD *)(v29 + 8);
  v33 = 0LL;
  v52 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  if ( *(_BYTE *)(v32 + 2) != 40 )
  {
    v45 = *(_BYTE *)(v32 + 72);
    v33 = *(_BYTE **)(v32 + 32);
    v34 = *(_BYTE *)(v32 + 11);
    v44 = *(_BYTE *)(v32 + 4);
    if ( *(_BYTE *)(v32 + 2) )
      goto LABEL_113;
LABEL_87:
    LOBYTE(v28) = v45 - 8;
    if ( (v28 & 0x5D) != 0 )
      goto LABEL_113;
    v46 = *(_BYTE *)(v32 + 3);
    if ( v46 == 1 || !v33 || !v34 )
      goto LABEL_106;
    v47 = *v33 & 0x7F;
    if ( v47 == 114 || v47 == 115 )
    {
      v28 = (unsigned __int64)&v33[v34];
      LOBYTE(v32) = 0;
      if ( (unsigned __int64)(v33 + 8) > v28 )
        goto LABEL_104;
      v36 = v33[2];
      v35 = v33[1] & 0xF;
      v37 = v33[3];
    }
    else
    {
      v28 = (unsigned __int64)&v33[v34];
      LOBYTE(v32) = 0;
      if ( (unsigned __int64)(v33 + 8) > v28 )
        goto LABEL_104;
      v48 = v33 + 13;
      v35 = v33[2] & 0xF;
      v49 = v34;
      if ( (unsigned int)(unsigned __int8)v33[7] + 8 <= v34 )
        v49 = (unsigned __int8)v33[7] + 8;
      v28 = (unsigned __int64)&v33[v49];
      if ( (unsigned __int64)v48 <= v28 )
        v36 = v33[12];
      if ( (unsigned __int64)(v33 + 14) > v28 )
        v37 = 0;
      else
        v37 = *v48;
    }
    LOBYTE(v32) = 1;
LABEL_104:
    if ( (_BYTE)v32 )
      v38 = 1;
LABEL_106:
    if ( byte_140173441 < 0 )
    {
      if ( !v38 )
      {
        v37 = 0;
        v36 = 0;
        v35 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v28, v32, &Src, a2, *(_DWORD *)(a2 + 48), v46, v44, v35, v36, v37, a2);
    }
    goto LABEL_113;
  }
  v39 = 0LL;
  v53 = 0;
  if ( !*(_DWORD *)(v32 + 20) )
  {
    v40 = 0LL;
    v57 = 0;
    v55 = *(_DWORD *)(v32 + 56);
    if ( v55 )
    {
      do
      {
        v28 = *(unsigned int *)(v32 + 4 * v40 + 120);
        if ( (unsigned int)v28 >= 0x80 )
        {
          v41 = *(unsigned int *)(v32 + 16);
          if ( (unsigned int)v28 < (unsigned int)v41 )
          {
            v42 = (unsigned int)v28;
            v43 = *(_DWORD *)(v28 + v32) - 64;
            if ( v43 )
            {
              v28 = (unsigned int)(v43 - 1);
              if ( (_DWORD)v28 )
              {
                if ( (_DWORD)v28 == 1 )
                {
                  v28 = v42 + 40;
                  if ( v42 + 40 <= v41 )
                  {
                    if ( *(_DWORD *)(v42 + v32 + 12) )
                      v39 = (char *)(v42 + v32 + 32);
                    v33 = *(_BYTE **)(v42 + v32 + 24);
LABEL_72:
                    v44 = *(_BYTE *)(v42 + v32 + 8);
                    v34 = *(_BYTE *)(v42 + v32 + 9);
                    goto LABEL_81;
                  }
                }
              }
              else
              {
                v28 = v42 + 56;
                if ( v42 + 56 <= v41 )
                {
                  v53 = 1;
                  if ( *(_BYTE *)(v42 + v32 + 10) )
                    v39 = (char *)(v42 + v32 + 24);
                  v33 = *(_BYTE **)(v42 + v32 + 16);
                  v34 = *(_BYTE *)(v42 + v32 + 9);
                  v52 = *(_BYTE *)(v42 + v32 + 8);
                }
              }
            }
            else
            {
              v28 = v42 + 40;
              if ( v42 + 40 <= v41 )
              {
                if ( *(_BYTE *)(v42 + v32 + 10) )
                  v39 = (char *)(v42 + v32 + 24);
                v33 = *(_BYTE **)(v42 + v32 + 16);
                goto LABEL_72;
              }
            }
            if ( v53 )
              break;
          }
        }
        v40 = (unsigned int)(v57 + 1);
        v57 = v40;
      }
      while ( (unsigned int)v40 < v55 );
      v44 = v52;
LABEL_81:
      if ( v39 )
      {
        v45 = *v39;
        v38 = 0;
        goto LABEL_87;
      }
    }
  }
LABEL_113:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v7;
}
