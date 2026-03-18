/*
 * XREFs of ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x14007EC78
 * Callers:
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x14007E904 (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ProcessKeyboardInputWorker @ 0x140123CFC (ProcessKeyboardInputWorker.c)
 *     ?IsKeyDownSpecified@@YAHEPEBE@Z @ 0x14021CA04 (-IsKeyDownSpecified@@YAHEPEBE@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x14021CA34 (-SendKeyUpDown@@YAXEE@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall MapFlexibleKeys(struct tagKE *a1, char a2, struct DEVICEINFO *a3)
{
  unsigned int v3; // r13d
  unsigned int v4; // edi
  char v5; // bl
  struct tagKE *v6; // r12
  char v7; // dl
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v11; // rsi
  unsigned int v12; // r14d
  unsigned __int8 *v13; // r15
  unsigned __int64 v14; // r13
  char v15; // dl
  int v16; // ecx
  int v17; // r8d
  int v18; // ebx
  int v19; // r8d
  __int64 UserSessionState; // rax
  int v21; // eax
  unsigned int v22; // r15d
  unsigned int v23; // esi
  __int64 v24; // rsi
  __int64 v25; // rbx
  char v26; // dl
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  char v32; // dl
  int v33; // r8d
  __int64 v34; // rax
  unsigned int v35; // r13d
  __int64 v36; // rsi
  __int64 v37; // rbx
  char v38; // dl
  int v39; // ecx
  int v40; // r8d
  __int64 v41; // rax
  char v42; // dl
  int v43; // ecx
  int v44; // r8d
  __int64 v45; // rax
  char v46; // dl
  __int64 v47; // rcx
  int v48; // r8d
  __int16 v49; // ax
  char v50; // dl
  int v51; // ecx
  int v52; // r8d
  char v53; // bl
  char v54; // dl
  int v55; // ecx
  int v56; // r8d
  char v57; // dl
  int v58; // ecx
  int v59; // r8d
  unsigned __int8 *v60; // rbx
  __int64 v61; // rdi
  unsigned __int8 *v62; // rbx
  __int64 v63; // rdi
  unsigned int v65; // [rsp+24h] [rbp-3Ch]
  struct tagKE *v66; // [rsp+28h] [rbp-38h]
  _WORD v68[2]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v69; // [rsp+3Ch] [rbp-24h]
  __int16 v70; // [rsp+3Eh] [rbp-22h]
  int v71; // [rsp+40h] [rbp-20h]
  _BYTE v72[8]; // [rsp+48h] [rbp-18h] BYREF
  _BYTE v73[8]; // [rsp+50h] [rbp-10h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = a2;
  v66 = a1;
  v6 = a1;
  while ( v4 < *(_DWORD *)(W32GetUserSessionState((_DWORD)a1, a2, (_DWORD)a3) + 12904) )
  {
    v11 = 16LL * v4;
    a1 = *(struct tagKE **)(W32GetUserSessionState((_DWORD)a1, a2, (_DWORD)a3) + 12896);
    if ( *((_BYTE *)a1 + v11 + 1) == v5 )
    {
      a1 = *(struct tagKE **)(W32GetUserSessionState((_DWORD)a1, a2, (_DWORD)a3) + 12896);
      if ( *((_BYTE *)a1 + v11) == *(_BYTE *)v6 )
      {
        if ( *((__int16 *)v6 + 1) >= 0 || v4 != *(_DWORD *)(W32GetUserSessionState((_DWORD)a1, a2, (_DWORD)a3) + 12908) )
        {
          v12 = 0;
          v13 = (unsigned __int8 *)&unk_14027C670;
          while ( 1 )
          {
            v14 = *v13;
            if ( (_BYTE)v14 == *(_BYTE *)(W32GetUserSessionState((_DWORD)a1, a2, (_DWORD)a3) + 13985) )
            {
              v3 = 0;
              *(_BYTE *)(W32GetUserSessionState(v16, v15, v17) + 13985) = 0;
            }
            else
            {
              v18 = (1 << (2 * (v14 & 3))) & *(unsigned __int8 *)(W32GetUserSessionState(v16, v15, v17)
                                                                + (v14 >> 2)
                                                                + 14392);
              UserSessionState = W32GetUserSessionState(2 * (unsigned int)(v14 & 3), (unsigned __int8)(v14 >> 2), v19);
              v21 = IsKeyDownSpecified(
                      v14,
                      (const unsigned __int8 *)(v11 + *(_QWORD *)(UserSessionState + 12896) + 2LL));
              v3 = 0;
              LODWORD(a1) = v18 == 0;
              if ( (_DWORD)a1 == v21 )
              {
                v5 = a2;
                goto LABEL_17;
              }
            }
            ++v12;
            ++v13;
            if ( v12 >= 0xA )
              goto LABEL_3;
          }
        }
        *(_DWORD *)(W32GetUserSessionState((_DWORD)a1, a2, (_DWORD)a3) + 12908) = -1;
        break;
      }
    }
LABEL_17:
    ++v4;
  }
LABEL_3:
  if ( v4 >= *(_DWORD *)(W32GetUserSessionState((_DWORD)a1, a2, (_DWORD)a3) + 12904) )
    return 1LL;
  v22 = 0;
  v70 = 0;
  v23 = 0;
  v65 = 0;
  if ( *((__int16 *)v6 + 1) >= 0 )
  {
    v24 = 16LL * v4;
    do
    {
      v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 12896);
      if ( !*(_BYTE *)(v8 + v24 + 2) )
        break;
      v25 = *(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 12896);
      v29 = W32GetUserSessionState(v27, v26, v28);
      if ( !(unsigned int)IsKeyDownSpecified(
                            *(_BYTE *)(*(_QWORD *)(v29 + 12896) + v24 + 2),
                            (const unsigned __int8 *)(16LL * v4 + v25 + 10)) )
      {
        v30 = W32GetUserSessionState(v8, v7, v9);
        v31 = v22++;
        v72[v31] = *(_BYTE *)(*(_QWORD *)(v30 + 12896) + v24 + 2);
        v34 = W32GetUserSessionState(v31, v32, v33);
        SendKeyUpDown(*(_BYTE *)(*(_QWORD *)(v34 + 12896) + v24 + 2), 1u);
      }
      ++v3;
      ++v24;
    }
    while ( v3 < 6 );
    v35 = 0;
    v36 = 16LL * v4;
    do
    {
      v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 12896);
      if ( !*(_BYTE *)(v8 + 17LL * v4 + 10) )
        break;
      v37 = *(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 12896);
      v41 = W32GetUserSessionState(v39, v38, v40);
      if ( !(unsigned int)IsKeyDownSpecified(
                            *(_BYTE *)(*(_QWORD *)(v41 + 12896) + v36 + 10),
                            (const unsigned __int8 *)(16LL * v4 + v37 + 2)) )
      {
        v73[v65++] = *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 12896) + v36 + 10);
        v45 = W32GetUserSessionState(v43, v42, v44);
        SendKeyUpDown(*(_BYTE *)(*(_QWORD *)(v45 + 12896) + v36 + 10), 0);
      }
      ++v35;
      ++v36;
    }
    while ( v35 < 6 );
    v6 = v66;
    v23 = v65;
  }
  v71 = 0;
  v69 = 0;
  v47 = *(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 12896);
  if ( *(_BYTE *)(v47 + 16LL * v4 + 9) == 0xE0 )
  {
    v49 = v69 | 2;
LABEL_34:
    v69 = v49;
    goto LABEL_35;
  }
  v47 = *(_QWORD *)(W32GetUserSessionState(v47, v46, v48) + 12896);
  v49 = v69;
  if ( *(_BYTE *)(v47 + 16LL * v4 + 9) == 0xE1 )
  {
    v49 = v69 | 4;
    goto LABEL_34;
  }
LABEL_35:
  if ( *((__int16 *)v6 + 1) < 0 )
    v69 = v49 | 1;
  v68[1] = *(unsigned __int8 *)(*(_QWORD *)(W32GetUserSessionState(v47, v46, v48) + 12896) + 16LL * v4 + 8);
  v68[0] = 0;
  ProcessKeyboardInputWorker(v68, a3, 0LL);
  if ( *((__int16 *)v6 + 1) >= 0 )
  {
    v53 = *(_BYTE *)(W32GetUserSessionState(v51, v50, v52) + 13984);
    *(_BYTE *)(W32GetUserSessionState(v55, v54, v56) + 13985) = v53;
    *(_DWORD *)(W32GetUserSessionState(v58, v57, v59) + 12908) = v4;
  }
  if ( v22 )
  {
    v60 = v72;
    v61 = v22;
    do
    {
      SendKeyUpDown(*v60++, 0);
      --v61;
    }
    while ( v61 );
  }
  if ( v23 )
  {
    v62 = v73;
    v63 = v23;
    do
    {
      SendKeyUpDown(*v62++, 1u);
      --v63;
    }
    while ( v63 );
  }
  return 0LL;
}
