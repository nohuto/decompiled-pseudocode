/*
 * XREFs of RaUnitStorageManageBypassIOIoctl @ 0x14018D90C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaUnitStorageManageBypassIOIoctl(__int64 a1, __int64 a2)
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
  const wchar_t *v16; // rax
  _OWORD *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  size_t v20; // r8
  _OWORD *v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int16 v25; // ax
  bool v26; // zf
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  int *v29; // rax
  const EVENT_DESCRIPTOR *v30; // rdx
  __int64 v31; // rdx
  _BYTE *v32; // r9
  unsigned __int8 v33; // r15
  char v34; // r10
  char v35; // r14
  char v36; // r11
  char v37; // r12
  char *v38; // r12
  __int64 v39; // rax
  unsigned __int64 v40; // r13
  __int64 v41; // r8
  int v42; // ecx
  char v43; // r13
  char v44; // cl
  char v45; // r8
  char v46; // al
  char *v47; // r11
  unsigned int v48; // eax
  int v50; // [rsp+20h] [rbp-59h]
  char v51; // [rsp+60h] [rbp-19h]
  char v52; // [rsp+61h] [rbp-18h]
  const wchar_t *v53; // [rsp+68h] [rbp-11h]
  unsigned int v54; // [rsp+68h] [rbp-11h]
  int v56; // [rsp+70h] [rbp-9h]
  unsigned __int16 v57; // [rsp+78h] [rbp-1h]
  GUID Src; // [rsp+80h] [rbp+7h] BYREF
  wchar_t v59; // [rsp+90h] [rbp+17h]

  v2 = *(int **)(a2 + 24);
  v3 = 0;
  v5 = *(_QWORD *)(a2 + 184);
  v59 = aDriver_0[8];
  v7 = 0;
  v53 = L"Failure found while processing operation parameters";
  v8 = 0;
  v9 = 0LL;
  v10 = *(unsigned int *)(v5 + 8);
  v11 = -1LL;
  Src = *(GUID *)L"\\Driver\\";
  do
    ++v11;
  while ( *((_WORD *)&Src.Data1 + v11) );
  v57 = v11;
  *(_QWORD *)&Src.Data1 = *(_QWORD *)L".sys";
  *(_WORD *)Src.Data4 = aSys[4];
  if ( *(_DWORD *)(v5 + 16) < 0x18u )
  {
    v7 = -1073741820;
    goto LABEL_46;
  }
  if ( *v2 != 24 )
  {
    v7 = -1073741637;
    goto LABEL_46;
  }
  v12 = v2[2];
  if ( v12 != 1 && (unsigned int)(v12 - 2) > 1 )
    goto LABEL_9;
  if ( (unsigned int)v10 < 8 )
  {
    v7 = -1073741789;
    goto LABEL_46;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( !v14 )
    {
      v8 = 24;
      v15 = 2;
      goto LABEL_19;
    }
    if ( v14 != 1 )
    {
LABEL_9:
      v7 = -1073741811;
      goto LABEL_46;
    }
    v15 = 3;
  }
  else
  {
    v15 = 1;
  }
  v8 = 352;
  v9 = v2 + 6;
LABEL_19:
  if ( (unsigned int)v10 < v8 )
  {
    memset_0(v2, 0, v10);
    v2[1] = v8;
    v8 = 8;
    *v2 = 352;
    goto LABEL_46;
  }
  if ( *(_BYTE *)(a2 + 64) )
  {
    v7 = -1073741790;
    v16 = L"Access denied, operation not supported from user mode";
  }
  else if ( (*(_DWORD *)(a1 + 1952) & 0x40) != 0 )
  {
    if ( v15 == 1 || (unsigned int)(v15 - 2) < 2 )
      goto LABEL_29;
    v7 = -1073741811;
    v16 = L"Invalid operation";
  }
  else
  {
    v7 = -1073741637;
    v16 = L"Bypass IO not supported";
  }
  v53 = v16;
LABEL_29:
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
      v17 = (_OWORD *)((char *)v9 + 6);
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      v19 = *(unsigned __int16 *)(v18 + 56);
      v20 = v19 - 16;
      v21 = (_OWORD *)(*(_QWORD *)(v18 + 64) + 2LL * v57);
      if ( (unsigned __int64)(v19 - 8) >= 0x40 )
      {
        if ( v20 >= 0x40 )
        {
          *v17 = *v21;
          *(_OWORD *)((char *)v9 + 22) = v21[1];
          *(_OWORD *)((char *)v9 + 38) = v21[2];
          *(_OWORD *)((char *)v9 + 54) = v21[3];
        }
        else
        {
          memmove((char *)v9 + 6, v21, v20);
          v24 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 56LL);
          memmove((char *)v9 + 2 * ((v24 >> 1) - v57) + 6, &Src, 80 - v24);
        }
        v22 = -1LL;
        LOWORD(v23) = 32;
      }
      else
      {
        memmove((char *)v9 + 6, v21, v20);
        v22 = -1LL;
        *(_QWORD *)((char *)v9
                  + 2
                  * (((unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 56LL) >> 1) - v57)
                  + 6) = *(_QWORD *)&Src.Data1;
        v23 = -1LL;
        do
          ++v23;
        while ( *((_WORD *)v17 + v23) );
      }
      *((_WORD *)v9 + 2) = v23;
      do
        ++v22;
      while ( v53[v22] );
      v25 = 128;
      if ( v22 < 0x80 )
        v25 = v22;
      *((_WORD *)v9 + 35) = v25;
      memmove(v9 + 18, v53, 2LL * v25);
    }
  }
  v7 = 0;
LABEL_46:
  v26 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = v8;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v26 )
    goto LABEL_112;
  Src = 0LL;
  IoGetActivityIdIrp(a2, &Src);
  v28 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v28 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_112;
    v50 = *(_DWORD *)(a2 + 48);
    v30 = &EventNonReadWriteRequestComplete;
    goto LABEL_111;
  }
  if ( *(_BYTE *)v28 != 15 )
  {
    if ( *(_BYTE *)v28 != 27 )
      goto LABEL_112;
    if ( *(_BYTE *)(v28 + 1) == 7 && !*(_DWORD *)(v28 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v29 = *(int **)(a2 + 56);
        if ( v29 )
          v3 = *v29;
        McTemplateK0pqd_EtwWriteTransfer(v27, v28, &Src, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_112;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_112;
    v30 = &EventPnpRequestComplete;
    v50 = *(_DWORD *)(a2 + 48);
LABEL_111:
    McTemplateK0pd_EtwWriteTransfer(v27, v30, &Src, a2, v50);
    goto LABEL_112;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_112;
  v31 = *(_QWORD *)(v28 + 8);
  v32 = 0LL;
  v51 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  if ( *(_BYTE *)(v31 + 2) != 40 )
  {
    v44 = *(_BYTE *)(v31 + 72);
    v32 = *(_BYTE **)(v31 + 32);
    v33 = *(_BYTE *)(v31 + 11);
    v43 = *(_BYTE *)(v31 + 4);
    if ( *(_BYTE *)(v31 + 2) )
      goto LABEL_112;
LABEL_86:
    LOBYTE(v27) = v44 - 8;
    if ( (v27 & 0x5D) != 0 )
      goto LABEL_112;
    v45 = *(_BYTE *)(v31 + 3);
    if ( v45 == 1 || !v32 || !v33 )
      goto LABEL_105;
    v46 = *v32 & 0x7F;
    if ( v46 == 114 || v46 == 115 )
    {
      v27 = (unsigned __int64)&v32[v33];
      LOBYTE(v31) = 0;
      if ( (unsigned __int64)(v32 + 8) > v27 )
        goto LABEL_103;
      v35 = v32[2];
      v34 = v32[1] & 0xF;
      v36 = v32[3];
    }
    else
    {
      v27 = (unsigned __int64)&v32[v33];
      LOBYTE(v31) = 0;
      if ( (unsigned __int64)(v32 + 8) > v27 )
        goto LABEL_103;
      v47 = v32 + 13;
      v34 = v32[2] & 0xF;
      v48 = v33;
      if ( (unsigned int)(unsigned __int8)v32[7] + 8 <= v33 )
        v48 = (unsigned __int8)v32[7] + 8;
      v27 = (unsigned __int64)&v32[v48];
      if ( (unsigned __int64)v47 <= v27 )
        v35 = v32[12];
      if ( (unsigned __int64)(v32 + 14) > v27 )
        v36 = 0;
      else
        v36 = *v47;
    }
    LOBYTE(v31) = 1;
LABEL_103:
    if ( (_BYTE)v31 )
      v37 = 1;
LABEL_105:
    if ( byte_140173441 < 0 )
    {
      if ( !v37 )
      {
        v36 = 0;
        v35 = 0;
        v34 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v27, v31, &Src, a2, *(_DWORD *)(a2 + 48), v45, v43, v34, v35, v36, a2);
    }
    goto LABEL_112;
  }
  v38 = 0LL;
  v52 = 0;
  if ( !*(_DWORD *)(v31 + 20) )
  {
    v39 = 0LL;
    v56 = 0;
    v54 = *(_DWORD *)(v31 + 56);
    if ( v54 )
    {
      do
      {
        v27 = *(unsigned int *)(v31 + 4 * v39 + 120);
        if ( (unsigned int)v27 >= 0x80 )
        {
          v40 = *(unsigned int *)(v31 + 16);
          if ( (unsigned int)v27 < (unsigned int)v40 )
          {
            v41 = (unsigned int)v27;
            v42 = *(_DWORD *)(v27 + v31) - 64;
            if ( v42 )
            {
              v27 = (unsigned int)(v42 - 1);
              if ( (_DWORD)v27 )
              {
                if ( (_DWORD)v27 == 1 )
                {
                  v27 = v41 + 40;
                  if ( v41 + 40 <= v40 )
                  {
                    if ( *(_DWORD *)(v41 + v31 + 12) )
                      v38 = (char *)(v41 + v31 + 32);
                    v32 = *(_BYTE **)(v41 + v31 + 24);
LABEL_71:
                    v43 = *(_BYTE *)(v41 + v31 + 8);
                    v33 = *(_BYTE *)(v41 + v31 + 9);
                    goto LABEL_80;
                  }
                }
              }
              else
              {
                v27 = v41 + 56;
                if ( v41 + 56 <= v40 )
                {
                  v52 = 1;
                  if ( *(_BYTE *)(v41 + v31 + 10) )
                    v38 = (char *)(v41 + v31 + 24);
                  v32 = *(_BYTE **)(v41 + v31 + 16);
                  v33 = *(_BYTE *)(v41 + v31 + 9);
                  v51 = *(_BYTE *)(v41 + v31 + 8);
                }
              }
            }
            else
            {
              v27 = v41 + 40;
              if ( v41 + 40 <= v40 )
              {
                if ( *(_BYTE *)(v41 + v31 + 10) )
                  v38 = (char *)(v41 + v31 + 24);
                v32 = *(_BYTE **)(v41 + v31 + 16);
                goto LABEL_71;
              }
            }
            if ( v52 )
              break;
          }
        }
        v39 = (unsigned int)(v56 + 1);
        v56 = v39;
      }
      while ( (unsigned int)v39 < v54 );
      v43 = v51;
LABEL_80:
      if ( v38 )
      {
        v44 = *v38;
        v37 = 0;
        goto LABEL_86;
      }
    }
  }
LABEL_112:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v7;
}
