/*
 * XREFs of EtwpComputeRegEntryEnableInfo @ 0x140916200
 * Callers:
 *     SendCaptureStateNotificationsWorker @ 0x140833730 (SendCaptureStateNotificationsWorker.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140912F1C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpCalculateUpdateNotification @ 0x140915B30 (EtwpCalculateUpdateNotification.c)
 *     EtwpRegisterKMProvider @ 0x140916E38 (EtwpRegisterKMProvider.c)
 *     EtwpAddRegEntryToGroup @ 0x1409172C0 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpComputeRegEntryEnableInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // r9d
  int v4; // r12d
  __int64 v6; // rax
  __int64 v7; // r15
  unsigned __int8 *v8; // r14
  _QWORD *v9; // r11
  int v10; // r10d
  int *v11; // r9
  unsigned int i; // r8d
  int *v13; // rdi
  int *v14; // rbx
  _QWORD *v15; // rsi
  unsigned int v16; // r14d
  __int64 result; // rax
  unsigned __int8 v18; // cl
  unsigned __int8 v19; // cl
  unsigned __int8 v20; // cl
  unsigned __int8 v21; // cl
  unsigned __int8 v22; // cl
  unsigned __int8 v23; // cl
  unsigned __int8 v24; // cl
  unsigned __int8 v25; // cl
  int v26; // r8d
  char *v27; // r9
  unsigned int v28; // r8d
  char *v29; // r9
  unsigned __int8 v30; // cl
  unsigned __int8 v31; // cl
  unsigned __int8 v32; // cl
  unsigned __int8 v33; // cl
  unsigned __int8 v34; // cl
  unsigned __int8 v35; // cl
  unsigned __int8 v36; // cl
  unsigned __int8 v37; // cl
  unsigned __int8 *v38; // r9
  __int64 v39; // r8
  _QWORD *v40; // r10
  unsigned int v41; // ebx
  int *v42; // r11
  int v43; // ebp
  unsigned __int8 v44; // cl
  unsigned __int8 v45; // cl
  unsigned __int8 v46; // cl
  unsigned __int8 v47; // cl
  unsigned __int8 v48; // cl
  unsigned __int8 v49; // cl
  unsigned __int8 v50; // cl
  unsigned __int8 v51; // cl
  unsigned __int8 v52; // cl
  int *v53; // rsi
  unsigned __int8 v54; // cl
  int *v55; // rdi
  unsigned __int8 v56; // cl
  unsigned __int8 v57; // cl
  unsigned __int8 v58; // cl
  unsigned __int8 v59; // cl
  unsigned __int8 v60; // cl
  unsigned __int8 v61; // cl
  unsigned __int16 v62; // [rsp+50h] [rbp+8h]
  unsigned __int16 v63; // [rsp+58h] [rbp+10h]
  __int64 v64; // [rsp+60h] [rbp+18h]
  __int64 v65; // [rsp+68h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(unsigned __int16 *)(a1 + 100);
  v4 = *(unsigned __int16 *)(a1 + 102);
  v62 = *(_WORD *)(a1 + 104);
  v63 = *(_WORD *)(a1 + 106);
  v6 = *(_QWORD *)(a1 + 32);
  v65 = *(_QWORD *)(v6 + 656);
  if ( v2 )
    v64 = *(_QWORD *)(v2 + 656);
  else
    v64 = 0LL;
  *(_QWORD *)a2 = 0LL;
  v7 = v6 + 176;
  *(_QWORD *)(a2 + 8) = 0LL;
  v8 = (unsigned __int8 *)(a2 + 4);
  *(_QWORD *)(a2 + 16) = 0LL;
  v9 = (_QWORD *)(a2 + 16);
  v10 = v3;
  v11 = (int *)(a2 + 8);
  *(_QWORD *)(a2 + 24) = -1LL;
  for ( i = 0; i < 0x10; i += 8 )
  {
    if ( _bittest(&v10, (unsigned __int8)i) )
    {
      v18 = *v8;
      v13 = (int *)(a2 + 8);
      *(_DWORD *)a2 = 1;
      if ( v18 <= *(_BYTE *)(v7 - 44) )
        v18 = *(_BYTE *)(v7 - 44);
      *v8 = v18;
      *v9 |= *(_QWORD *)(v7 - 32);
      *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v7 - 24);
      *v11 |= *(_DWORD *)(v7 - 40);
    }
    else
    {
      v13 = v11;
    }
    if ( _bittest(&v10, (unsigned __int8)(i + 1)) )
    {
      *(_DWORD *)a2 = 1;
      v19 = *v8;
      if ( *v8 <= *(_BYTE *)(v7 - 12) )
        v19 = *(_BYTE *)(v7 - 12);
      *v8 = v19;
      *v9 |= *(_QWORD *)v7;
      *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v7 + 8);
      *v11 |= *(_DWORD *)(v7 - 8);
    }
    else
    {
      v13 = v11;
    }
    if ( _bittest(&v10, (unsigned __int8)(i + 2)) )
    {
      *(_DWORD *)a2 = 1;
      v14 = (int *)(a2 + 8);
      v20 = *v8;
      if ( *v8 <= *(_BYTE *)(v7 + 20) )
        v20 = *(_BYTE *)(v7 + 20);
      *v8 = v20;
      *v9 |= *(_QWORD *)(v7 + 32);
      *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v7 + 40);
      *v13 = *v11 | *(_DWORD *)(v7 + 24);
    }
    else
    {
      v14 = v13;
    }
    v8 = (unsigned __int8 *)(a2 + 4);
    v15 = (_QWORD *)(a2 + 16);
    if ( _bittest(&v10, (unsigned __int8)(i + 3)) )
    {
      *(_DWORD *)a2 = 1;
      v21 = *v8;
      if ( *v8 <= *(_BYTE *)(v7 + 52) )
        v21 = *(_BYTE *)(v7 + 52);
      *v8 = v21;
      *v15 |= *(_QWORD *)(v7 + 64);
      *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v7 + 72);
      *v13 |= *(_DWORD *)(v7 + 56);
    }
    else
    {
      v14 = v13;
    }
    if ( _bittest(&v10, (unsigned __int8)(i + 4)) )
    {
      *(_DWORD *)a2 = 1;
      v9 = (_QWORD *)(a2 + 16);
      v11 = (int *)(a2 + 8);
      v22 = *v8;
      if ( *v8 <= *(_BYTE *)(v7 + 84) )
        v22 = *(_BYTE *)(v7 + 84);
      *v8 = v22;
      *v15 |= *(_QWORD *)(v7 + 96);
      *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v7 + 104);
      *v14 |= *(_DWORD *)(v7 + 88);
    }
    else
    {
      v9 = (_QWORD *)(a2 + 16);
      v11 = v14;
    }
    if ( _bittest(&v10, (unsigned __int8)(i + 5)) )
    {
      *(_DWORD *)a2 = 1;
      v23 = *v8;
      if ( *v8 <= *(_BYTE *)(v7 + 116) )
        v23 = *(_BYTE *)(v7 + 116);
      *v8 = v23;
      *v15 |= *(_QWORD *)(v7 + 128);
      *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v7 + 136);
      *v14 |= *(_DWORD *)(v7 + 120);
    }
    else
    {
      v8 = (unsigned __int8 *)(a2 + 4);
      v9 = (_QWORD *)(a2 + 16);
      v11 = v14;
    }
    if ( _bittest(&v10, (unsigned __int8)(i + 6)) )
    {
      *(_DWORD *)a2 = 1;
      v24 = *v8;
      if ( *v8 <= *(_BYTE *)(v7 + 148) )
        v24 = *(_BYTE *)(v7 + 148);
      *v8 = v24;
      *v9 |= *(_QWORD *)(v7 + 160);
      *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v7 + 168);
      *v11 |= *(_DWORD *)(v7 + 152);
    }
    else
    {
      v9 = (_QWORD *)(a2 + 16);
      v11 = (int *)(a2 + 8);
    }
    if ( _bittest(&v10, (unsigned __int8)(i + 7)) )
    {
      *(_DWORD *)a2 = 1;
      v25 = *v8;
      if ( *v8 <= *(_BYTE *)(v7 + 180) )
        v25 = *(_BYTE *)(v7 + 180);
      *v8 = v25;
      *v9 |= *(_QWORD *)(v7 + 192);
      *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v7 + 200);
      *v11 |= *(_DWORD *)(v7 + 184);
    }
    v7 += 256LL;
  }
  v16 = 0;
  if ( (_WORD)v4 )
  {
    v28 = 0;
    v29 = (char *)(v2 + 164);
    do
    {
      if ( _bittest(&v4, (unsigned __int8)v28) && *((_DWORD *)v29 - 9) )
      {
        v30 = *(_BYTE *)(a2 + 4);
        *(_DWORD *)a2 = 1;
        if ( v30 <= (unsigned __int8)*(v29 - 32) )
          v30 = *(v29 - 32);
        *(_BYTE *)(a2 + 4) = v30;
        *(_QWORD *)(a2 + 16) |= *(_QWORD *)(v29 - 20);
        *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v29 - 12);
        *(_DWORD *)(a2 + 8) |= *((_DWORD *)v29 - 7);
      }
      if ( _bittest(&v4, (unsigned __int8)(v28 + 1)) && *((_DWORD *)v29 - 1) )
      {
        *(_DWORD *)a2 = 1;
        v31 = *(_BYTE *)(a2 + 4);
        if ( v31 <= (unsigned __int8)*v29 )
          v31 = *v29;
        *(_BYTE *)(a2 + 4) = v31;
        *(_QWORD *)(a2 + 16) |= *(_QWORD *)(v29 + 12);
        *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v29 + 20);
        *(_DWORD *)(a2 + 8) |= *((_DWORD *)v29 + 1);
      }
      if ( _bittest(&v4, (unsigned __int8)(v28 + 2)) && *((_DWORD *)v29 + 7) )
      {
        *(_DWORD *)a2 = 1;
        v32 = *(_BYTE *)(a2 + 4);
        if ( v32 <= (unsigned __int8)v29[32] )
          v32 = v29[32];
        *(_BYTE *)(a2 + 4) = v32;
        *(_QWORD *)(a2 + 16) |= *(_QWORD *)(v29 + 44);
        *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v29 + 52);
        *(_DWORD *)(a2 + 8) |= *((_DWORD *)v29 + 9);
      }
      if ( _bittest(&v4, (unsigned __int8)(v28 + 3)) && *((_DWORD *)v29 + 15) )
      {
        *(_DWORD *)a2 = 1;
        v33 = *(_BYTE *)(a2 + 4);
        if ( v33 <= (unsigned __int8)v29[64] )
          v33 = v29[64];
        *(_BYTE *)(a2 + 4) = v33;
        *(_QWORD *)(a2 + 16) |= *(_QWORD *)(v29 + 76);
        *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v29 + 84);
        *(_DWORD *)(a2 + 8) |= *((_DWORD *)v29 + 17);
      }
      if ( _bittest(&v4, (unsigned __int8)(v28 + 4)) && *((_DWORD *)v29 + 23) )
      {
        *(_DWORD *)a2 = 1;
        v34 = *(_BYTE *)(a2 + 4);
        if ( v34 <= (unsigned __int8)v29[96] )
          v34 = v29[96];
        *(_BYTE *)(a2 + 4) = v34;
        *(_QWORD *)(a2 + 16) |= *(_QWORD *)(v29 + 108);
        *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v29 + 116);
        *(_DWORD *)(a2 + 8) |= *((_DWORD *)v29 + 25);
      }
      if ( _bittest(&v4, (unsigned __int8)(v28 + 5)) && *((_DWORD *)v29 + 31) )
      {
        *(_DWORD *)a2 = 1;
        v35 = *(_BYTE *)(a2 + 4);
        if ( v35 <= (unsigned __int8)v29[128] )
          v35 = v29[128];
        *(_BYTE *)(a2 + 4) = v35;
        *(_QWORD *)(a2 + 16) |= *(_QWORD *)(v29 + 140);
        *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v29 + 148);
        *(_DWORD *)(a2 + 8) |= *((_DWORD *)v29 + 33);
      }
      if ( _bittest(&v4, (unsigned __int8)(v28 + 6)) && *((_DWORD *)v29 + 39) )
      {
        *(_DWORD *)a2 = 1;
        v36 = *(_BYTE *)(a2 + 4);
        if ( v36 <= (unsigned __int8)v29[160] )
          v36 = v29[160];
        *(_BYTE *)(a2 + 4) = v36;
        *(_QWORD *)(a2 + 16) |= *(_QWORD *)(v29 + 172);
        *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v29 + 180);
        *(_DWORD *)(a2 + 8) |= *((_DWORD *)v29 + 41);
      }
      if ( _bittest(&v4, (unsigned __int8)(v28 + 7)) && *((_DWORD *)v29 + 47) )
      {
        *(_DWORD *)a2 = 1;
        v37 = *(_BYTE *)(a2 + 4);
        if ( v37 <= (unsigned __int8)v29[192] )
          v37 = v29[192];
        *(_BYTE *)(a2 + 4) = v37;
        *(_QWORD *)(a2 + 16) |= *(_QWORD *)(v29 + 204);
        *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v29 + 212);
        *(_DWORD *)(a2 + 8) |= *((_DWORD *)v29 + 49);
      }
      v28 += 8;
      v29 += 256;
    }
    while ( v28 < 0x10 );
  }
  result = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(result + 656) )
  {
    if ( v62 )
    {
      v38 = (unsigned __int8 *)(a2 + 4);
      v39 = v65 + 176;
      v40 = (_QWORD *)(a2 + 16);
      v41 = 0;
      v42 = (int *)(a2 + 8);
      v43 = v62;
      do
      {
        if ( _bittest(&v43, (unsigned __int8)v41) )
        {
          v52 = *v38;
          v53 = (int *)(a2 + 8);
          *(_DWORD *)a2 = 1;
          if ( v52 <= *(_BYTE *)(v39 - 44) )
            v52 = *(_BYTE *)(v39 - 44);
          *v38 = v52;
          *v40 |= *(_QWORD *)(v39 - 32);
          *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v39 - 24);
          *v42 |= *(_DWORD *)(v39 - 40);
        }
        else
        {
          v53 = v42;
        }
        if ( _bittest(&v43, (unsigned __int8)(v41 + 1)) )
        {
          *(_DWORD *)a2 = 1;
          v54 = *v38;
          if ( *v38 <= *(_BYTE *)(v39 - 12) )
            v54 = *(_BYTE *)(v39 - 12);
          *v38 = v54;
          *v40 |= *(_QWORD *)v39;
          *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v39 + 8);
          *v42 |= *(_DWORD *)(v39 - 8);
        }
        else
        {
          v53 = v42;
        }
        if ( _bittest(&v43, (unsigned __int8)(v41 + 2)) )
        {
          *(_DWORD *)a2 = 1;
          v55 = (int *)(a2 + 8);
          v56 = *v38;
          if ( *v38 <= *(_BYTE *)(v39 + 20) )
            v56 = *(_BYTE *)(v39 + 20);
          *v38 = v56;
          *v40 |= *(_QWORD *)(v39 + 32);
          *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v39 + 40);
          *v53 = *v42 | *(_DWORD *)(v39 + 24);
        }
        else
        {
          v55 = v53;
        }
        v38 = (unsigned __int8 *)(a2 + 4);
        v40 = (_QWORD *)(a2 + 16);
        if ( _bittest(&v43, (unsigned __int8)(v41 + 3)) )
        {
          *(_DWORD *)a2 = 1;
          v57 = *v38;
          if ( *v38 <= *(_BYTE *)(v39 + 52) )
            v57 = *(_BYTE *)(v39 + 52);
          *v38 = v57;
          *v40 |= *(_QWORD *)(v39 + 64);
          *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v39 + 72);
          *v53 |= *(_DWORD *)(v39 + 56);
        }
        else
        {
          v55 = v53;
        }
        if ( _bittest(&v43, (unsigned __int8)(v41 + 4)) )
        {
          *(_DWORD *)a2 = 1;
          v42 = (int *)(a2 + 8);
          v58 = *v38;
          if ( *v38 <= *(_BYTE *)(v39 + 84) )
            v58 = *(_BYTE *)(v39 + 84);
          *v38 = v58;
          *v40 |= *(_QWORD *)(v39 + 96);
          *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v39 + 104);
          *v55 |= *(_DWORD *)(v39 + 88);
        }
        else
        {
          v42 = v55;
        }
        if ( _bittest(&v43, (unsigned __int8)(v41 + 5)) )
        {
          *(_DWORD *)a2 = 1;
          v59 = *v38;
          if ( *v38 <= *(_BYTE *)(v39 + 116) )
            v59 = *(_BYTE *)(v39 + 116);
          *v38 = v59;
          *v40 |= *(_QWORD *)(v39 + 128);
          *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v39 + 136);
          *v55 |= *(_DWORD *)(v39 + 120);
        }
        else
        {
          v38 = (unsigned __int8 *)(a2 + 4);
          v42 = v55;
          v40 = (_QWORD *)(a2 + 16);
        }
        if ( _bittest(&v43, (unsigned __int8)(v41 + 6)) )
        {
          *(_DWORD *)a2 = 1;
          v60 = *v38;
          if ( *v38 <= *(_BYTE *)(v39 + 148) )
            v60 = *(_BYTE *)(v39 + 148);
          *v38 = v60;
          *v40 |= *(_QWORD *)(v39 + 160);
          *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v39 + 168);
          *v42 |= *(_DWORD *)(v39 + 152);
        }
        else
        {
          v42 = (int *)(a2 + 8);
        }
        if ( _bittest(&v43, (unsigned __int8)(v41 + 7)) )
        {
          *(_DWORD *)a2 = 1;
          v61 = *v38;
          if ( *v38 <= *(_BYTE *)(v39 + 180) )
            v61 = *(_BYTE *)(v39 + 180);
          *v38 = v61;
          *v40 |= *(_QWORD *)(v39 + 192);
          *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v39 + 200);
          *v42 |= *(_DWORD *)(v39 + 184);
        }
        v41 += 8;
        v39 += 256LL;
      }
      while ( v41 < 0x10 );
    }
    result = v63;
    if ( v63 )
    {
      v26 = v63;
      v27 = (char *)(v64 + 164);
      do
      {
        if ( _bittest(&v26, (unsigned __int8)v16) && *((_DWORD *)v27 - 9) )
        {
          v44 = *(_BYTE *)(a2 + 4);
          *(_DWORD *)a2 = 1;
          if ( v44 <= (unsigned __int8)*(v27 - 32) )
            v44 = *(v27 - 32);
          *(_BYTE *)(a2 + 4) = v44;
          *(_QWORD *)(a2 + 16) |= *(_QWORD *)(v27 - 20);
          *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v27 - 12);
          *(_DWORD *)(a2 + 8) |= *((_DWORD *)v27 - 7);
        }
        if ( _bittest(&v26, (unsigned __int8)(v16 + 1)) && *((_DWORD *)v27 - 1) )
        {
          *(_DWORD *)a2 = 1;
          v45 = *(_BYTE *)(a2 + 4);
          if ( v45 <= (unsigned __int8)*v27 )
            v45 = *v27;
          *(_BYTE *)(a2 + 4) = v45;
          *(_QWORD *)(a2 + 16) |= *(_QWORD *)(v27 + 12);
          *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v27 + 20);
          *(_DWORD *)(a2 + 8) |= *((_DWORD *)v27 + 1);
        }
        if ( _bittest(&v26, (unsigned __int8)(v16 + 2)) && *((_DWORD *)v27 + 7) )
        {
          *(_DWORD *)a2 = 1;
          v46 = *(_BYTE *)(a2 + 4);
          if ( v46 <= (unsigned __int8)v27[32] )
            v46 = v27[32];
          *(_BYTE *)(a2 + 4) = v46;
          *(_QWORD *)(a2 + 16) |= *(_QWORD *)(v27 + 44);
          *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v27 + 52);
          *(_DWORD *)(a2 + 8) |= *((_DWORD *)v27 + 9);
        }
        if ( _bittest(&v26, (unsigned __int8)(v16 + 3)) && *((_DWORD *)v27 + 15) )
        {
          *(_DWORD *)a2 = 1;
          v47 = *(_BYTE *)(a2 + 4);
          if ( v47 <= (unsigned __int8)v27[64] )
            v47 = v27[64];
          *(_BYTE *)(a2 + 4) = v47;
          *(_QWORD *)(a2 + 16) |= *(_QWORD *)(v27 + 76);
          *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v27 + 84);
          *(_DWORD *)(a2 + 8) |= *((_DWORD *)v27 + 17);
        }
        if ( _bittest(&v26, (unsigned __int8)(v16 + 4)) && *((_DWORD *)v27 + 23) )
        {
          *(_DWORD *)a2 = 1;
          v48 = *(_BYTE *)(a2 + 4);
          if ( v48 <= (unsigned __int8)v27[96] )
            v48 = v27[96];
          *(_BYTE *)(a2 + 4) = v48;
          *(_QWORD *)(a2 + 16) |= *(_QWORD *)(v27 + 108);
          *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v27 + 116);
          *(_DWORD *)(a2 + 8) |= *((_DWORD *)v27 + 25);
        }
        if ( _bittest(&v26, (unsigned __int8)(v16 + 5)) && *((_DWORD *)v27 + 31) )
        {
          *(_DWORD *)a2 = 1;
          v49 = *(_BYTE *)(a2 + 4);
          if ( v49 <= (unsigned __int8)v27[128] )
            v49 = v27[128];
          *(_BYTE *)(a2 + 4) = v49;
          *(_QWORD *)(a2 + 16) |= *(_QWORD *)(v27 + 140);
          *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v27 + 148);
          *(_DWORD *)(a2 + 8) |= *((_DWORD *)v27 + 33);
        }
        if ( _bittest(&v26, (unsigned __int8)(v16 + 6)) && *((_DWORD *)v27 + 39) )
        {
          *(_DWORD *)a2 = 1;
          v50 = *(_BYTE *)(a2 + 4);
          if ( v50 <= (unsigned __int8)v27[160] )
            v50 = v27[160];
          *(_BYTE *)(a2 + 4) = v50;
          *(_QWORD *)(a2 + 16) |= *(_QWORD *)(v27 + 172);
          *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v27 + 180);
          *(_DWORD *)(a2 + 8) |= *((_DWORD *)v27 + 41);
        }
        result = v16 + 7;
        if ( _bittest(&v26, (unsigned __int8)(v16 + 7)) && *((_DWORD *)v27 + 47) )
        {
          *(_DWORD *)a2 = 1;
          v51 = *(_BYTE *)(a2 + 4);
          if ( v51 <= (unsigned __int8)v27[192] )
            v51 = v27[192];
          *(_BYTE *)(a2 + 4) = v51;
          *(_QWORD *)(a2 + 16) |= *(_QWORD *)(v27 + 204);
          *(_QWORD *)(a2 + 24) &= *(_QWORD *)(v27 + 212);
          result = *((unsigned int *)v27 + 49);
          *(_DWORD *)(a2 + 8) |= result;
        }
        v16 += 8;
        v27 += 256;
      }
      while ( v16 < 0x10 );
    }
  }
  return result;
}
