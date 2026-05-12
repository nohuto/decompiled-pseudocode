/*
 * XREFs of RaUnitStorageQueryDeviceFruIdPropertyIoctl @ 0x1400A4258
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1401B2144 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceFruIdPropertyIoctl(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _DWORD *v5; // r14
  size_t v6; // r15
  int v7; // ebx
  int v8; // esi
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // r12d
  const EVENT_DESCRIPTOR *v19; // rdx
  __int64 v20; // rdx
  _BYTE *v21; // r9
  unsigned __int8 v22; // r15
  char v23; // r11
  char v24; // r14
  char v25; // r10
  char v26; // r12
  char *v27; // r12
  __int64 v28; // rax
  unsigned __int64 v29; // r13
  __int64 v30; // r8
  int v31; // ecx
  char v32; // r13
  char v33; // cl
  char v34; // r8
  char v35; // al
  char *v36; // r10
  unsigned int v37; // eax
  char v39; // [rsp+60h] [rbp-A0h]
  char v40; // [rsp+61h] [rbp-9Fh]
  int v41; // [rsp+64h] [rbp-9Ch]
  unsigned int v42; // [rsp+68h] [rbp-98h]
  _DWORD v43[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 *v44; // [rsp+78h] [rbp-88h]
  _BYTE Src[144]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v46; // [rsp+110h] [rbp+10h] BYREF
  GUID v47; // [rsp+120h] [rbp+20h] BYREF

  memset_0(v43, 0, 0x98uLL);
  v4 = *(_QWORD *)(a2 + 184);
  v5 = *(_DWORD **)(a2 + 24);
  v46 = 0LL;
  v6 = *(unsigned int *)(v4 + 8);
  v7 = 0;
  if ( !RaidIsUnitControlSupported(a1, 13) )
    goto LABEL_2;
  v13 = v5[1];
  if ( v13 )
  {
    if ( v13 != 1 )
    {
LABEL_2:
      v8 = -1073741637;
LABEL_3:
      *(_QWORD *)(a2 + 56) = 0LL;
      goto LABEL_4;
    }
    goto LABEL_16;
  }
  memset_0(v5, 0, v6);
  if ( (unsigned int)v6 < 0x10 )
  {
    if ( (unsigned int)v6 < 8 )
    {
      v8 = -1073741789;
      goto LABEL_3;
    }
    *v5 = 16;
    v5[1] = 16;
    goto LABEL_20;
  }
  v14 = *(_QWORD *)(a1 + 24);
  LOWORD(v46) = 1;
  DWORD1(v46) = 4;
  WORD1(v46) = *(_WORD *)(v14 + 56);
  WORD4(v46) = *(_WORD *)(a1 + 104);
  BYTE10(v46) = *(_BYTE *)(a1 + 106);
  v44 = &v46;
  v43[0] = 1;
  v43[1] = 152;
  if ( *(_DWORD *)v14 == 1094997074 )
  {
    v15 = v14 + 376;
  }
  else if ( *(_DWORD *)v14 == 1314275652 )
  {
    v15 = v14 + 168;
  }
  else
  {
    v15 = 0LL;
  }
  v8 = RaCallMiniportUnitControl(v15);
  if ( v8 < 0 )
    goto LABEL_3;
  v16 = -1LL;
  v17 = -1LL;
  do
    ++v17;
  while ( Src[v17] );
  v18 = v17 + 12;
  *v5 = 16;
  v5[1] = v17 + 12;
  if ( (unsigned int)v6 < (int)v17 + 12 )
  {
LABEL_20:
    *(_QWORD *)(a2 + 56) = 8LL;
LABEL_16:
    v8 = 0;
    goto LABEL_4;
  }
  do
    ++v16;
  while ( Src[v16] );
  v5[2] = v16;
  memmove(v5 + 3, Src, (unsigned int)v16);
  *(_QWORD *)(a2 + 56) = v18;
LABEL_4:
  v9 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v9 )
    goto LABEL_89;
  v47 = 0LL;
  IoGetActivityIdIrp(a2, &v47);
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v11 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_89;
    v19 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_88;
  }
  if ( *(_BYTE *)v11 != 15 )
  {
    if ( *(_BYTE *)v11 != 27 )
      goto LABEL_89;
    if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v12 = *(int **)(a2 + 56);
        if ( v12 )
          v7 = *v12;
        McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v47, a2, v7, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_89;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_89;
    v19 = &EventPnpRequestComplete;
LABEL_88:
    McTemplateK0pd_EtwWriteTransfer(v10, v19, &v47, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_89;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_89;
  v20 = *(_QWORD *)(v11 + 8);
  v21 = 0LL;
  v39 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  if ( *(_BYTE *)(v20 + 2) != 40 )
  {
    v33 = *(_BYTE *)(v20 + 72);
    v21 = *(_BYTE **)(v20 + 32);
    v22 = *(_BYTE *)(v20 + 11);
    v32 = *(_BYTE *)(v20 + 4);
    if ( *(_BYTE *)(v20 + 2) )
      goto LABEL_89;
LABEL_63:
    LOBYTE(v10) = v33 - 8;
    if ( (v10 & 0x5D) != 0 )
      goto LABEL_89;
    v34 = *(_BYTE *)(v20 + 3);
    if ( v34 == 1 || !v21 || !v22 )
      goto LABEL_82;
    v35 = *v21 & 0x7F;
    if ( v35 == 114 || v35 == 115 )
    {
      v10 = (unsigned __int64)&v21[v22];
      LOBYTE(v20) = 0;
      if ( (unsigned __int64)(v21 + 8) > v10 )
        goto LABEL_80;
      v24 = v21[2];
      v23 = v21[1] & 0xF;
      v25 = v21[3];
    }
    else
    {
      v10 = (unsigned __int64)&v21[v22];
      LOBYTE(v20) = 0;
      if ( (unsigned __int64)(v21 + 8) > v10 )
        goto LABEL_80;
      v36 = v21 + 13;
      v23 = v21[2] & 0xF;
      v37 = v22;
      if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
        v37 = (unsigned __int8)v21[7] + 8;
      v10 = (unsigned __int64)&v21[v37];
      if ( (unsigned __int64)v36 <= v10 )
        v24 = v21[12];
      if ( (unsigned __int64)(v21 + 14) > v10 )
        v25 = 0;
      else
        v25 = *v36;
    }
    LOBYTE(v20) = 1;
LABEL_80:
    if ( (_BYTE)v20 )
      v26 = 1;
LABEL_82:
    if ( byte_140173441 < 0 )
    {
      if ( !v26 )
      {
        v25 = 0;
        v24 = 0;
        v23 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v10, v20, &v47, a2, *(_DWORD *)(a2 + 48), v34, v32, v23, v24, v25, a2);
    }
    goto LABEL_89;
  }
  v27 = 0LL;
  v40 = 0;
  if ( !*(_DWORD *)(v20 + 20) )
  {
    v28 = 0LL;
    v41 = 0;
    v42 = *(_DWORD *)(v20 + 56);
    if ( v42 )
    {
      do
      {
        v10 = *(unsigned int *)(v20 + 4 * v28 + 120);
        if ( (unsigned int)v10 >= 0x80 )
        {
          v29 = *(unsigned int *)(v20 + 16);
          if ( (unsigned int)v10 < (unsigned int)v29 )
          {
            v30 = (unsigned int)v10;
            v31 = *(_DWORD *)(v10 + v20) - 64;
            if ( v31 )
            {
              v10 = (unsigned int)(v31 - 1);
              if ( (_DWORD)v10 )
              {
                if ( (_DWORD)v10 == 1 )
                {
                  v10 = v30 + 40;
                  if ( v30 + 40 <= v29 )
                  {
                    if ( *(_DWORD *)(v30 + v20 + 12) )
                      v27 = (char *)(v30 + v20 + 32);
                    v21 = *(_BYTE **)(v30 + v20 + 24);
LABEL_48:
                    v32 = *(_BYTE *)(v30 + v20 + 8);
                    v22 = *(_BYTE *)(v30 + v20 + 9);
                    goto LABEL_57;
                  }
                }
              }
              else
              {
                v10 = v30 + 56;
                if ( v30 + 56 <= v29 )
                {
                  v40 = 1;
                  if ( *(_BYTE *)(v30 + v20 + 10) )
                    v27 = (char *)(v30 + v20 + 24);
                  v21 = *(_BYTE **)(v30 + v20 + 16);
                  v22 = *(_BYTE *)(v30 + v20 + 9);
                  v39 = *(_BYTE *)(v30 + v20 + 8);
                }
              }
            }
            else
            {
              v10 = v30 + 40;
              if ( v30 + 40 <= v29 )
              {
                if ( *(_BYTE *)(v30 + v20 + 10) )
                  v27 = (char *)(v30 + v20 + 24);
                v21 = *(_BYTE **)(v30 + v20 + 16);
                goto LABEL_48;
              }
            }
            if ( v40 )
              break;
          }
        }
        v28 = (unsigned int)(v41 + 1);
        v41 = v28;
      }
      while ( (unsigned int)v28 < v42 );
      v32 = v39;
LABEL_57:
      if ( v27 )
      {
        v33 = *v27;
        v26 = 0;
        goto LABEL_63;
      }
    }
  }
LABEL_89:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v8;
}
