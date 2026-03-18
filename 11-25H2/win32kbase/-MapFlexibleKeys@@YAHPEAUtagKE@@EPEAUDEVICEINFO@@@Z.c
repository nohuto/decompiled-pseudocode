/*
 * XREFs of ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x14002B018
 * Callers:
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x14002AF30 (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ProcessKeyboardInputWorker @ 0x1400FAA64 (ProcessKeyboardInputWorker.c)
 *     ?IsKeyDownSpecified@@YAHEPEBE@Z @ 0x140217820 (-IsKeyDownSpecified@@YAHEPEBE@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x140217A28 (-SendKeyUpDown@@YAXEE@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall MapFlexibleKeys(unsigned __int64 a1, __int64 a2, struct DEVICEINFO *a3)
{
  unsigned int v3; // esi
  char v4; // bl
  unsigned __int64 v5; // r12
  unsigned int i; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // r14
  unsigned __int8 *v11; // r15
  unsigned __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int8 v15; // bl
  __int64 v16; // rdx
  __int64 UserSessionState; // rax
  int v18; // eax
  unsigned int v19; // r15d
  unsigned int v20; // r13d
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int16 v41; // ax
  __int64 v42; // rdx
  __int64 v43; // rcx
  char v44; // bl
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned __int8 *v49; // rbx
  __int64 v50; // rdi
  unsigned __int8 *v51; // rbx
  __int64 v52; // rdi
  char v53; // [rsp+20h] [rbp-50h]
  unsigned int v54; // [rsp+24h] [rbp-4Ch]
  unsigned int v55; // [rsp+24h] [rbp-4Ch]
  unsigned __int64 v56; // [rsp+30h] [rbp-40h]
  _WORD v58[2]; // [rsp+40h] [rbp-30h] BYREF
  __int16 v59; // [rsp+44h] [rbp-2Ch]
  __int16 v60; // [rsp+46h] [rbp-2Ah]
  int v61; // [rsp+48h] [rbp-28h]
  _DWORD v62[2]; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v63[8]; // [rsp+58h] [rbp-18h] BYREF

  v3 = 0;
  v4 = a2;
  v53 = a2;
  v5 = a1;
  v56 = a1;
  for ( i = 0; i < *(_DWORD *)(W32GetUserSessionState(a1, a2) + 12912); ++i )
  {
    v10 = 16LL * i;
    a1 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 12904);
    if ( *(_BYTE *)(v10 + a1 + 1) == v4 )
    {
      a1 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 12904);
      if ( *(_BYTE *)(v10 + a1) == *(_BYTE *)v5 )
      {
        if ( *(__int16 *)(v5 + 2) < 0 && i == *(_DWORD *)(W32GetUserSessionState(a1, a2) + 12916) )
        {
          *(_DWORD *)(W32GetUserSessionState(a1, a2) + 12916) = -1;
          break;
        }
        v11 = (unsigned __int8 *)&unk_140273CF8;
        do
        {
          v12 = *v11;
          if ( (_BYTE)v12 == *(_BYTE *)(W32GetUserSessionState(a1, a2) + 13993) )
          {
            *(_BYTE *)(W32GetUserSessionState(v14, v13) + 13993) = 0;
          }
          else
          {
            v15 = *(_BYTE *)((v12 >> 2) + W32GetUserSessionState(v14, v13) + 14400);
            UserSessionState = W32GetUserSessionState(v12 >> 2, v16);
            v18 = IsKeyDownSpecified(v12, (const unsigned __int8 *)(v10 + *(_QWORD *)(UserSessionState + 12904) + 2LL));
            a2 = (unsigned int)(1 << (2 * (v12 & 3)));
            a1 = ((unsigned __int8)a2 & v15) == 0;
            if ( (_DWORD)a1 == v18 )
              break;
          }
          ++v3;
          ++v11;
        }
        while ( v3 < 0xA );
        v5 = v56;
        if ( v3 >= 0xA )
          break;
        v4 = v53;
        v3 = 0;
      }
    }
  }
  if ( i >= *(_DWORD *)(W32GetUserSessionState(a1, a2) + 12912) )
    return 1LL;
  v19 = 0;
  v60 = 0;
  v20 = 0;
  v62[0] = 0;
  if ( *(__int16 *)(v5 + 2) >= 0 )
  {
    v54 = 0;
    v21 = 16LL * i;
    do
    {
      v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 12904);
      if ( !*(_BYTE *)(v8 + v21 + 2) )
        break;
      v22 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 12904);
      v25 = W32GetUserSessionState(v24, v23);
      if ( !(unsigned int)IsKeyDownSpecified(
                            *(_BYTE *)(*(_QWORD *)(v25 + 12904) + v21 + 2),
                            (const unsigned __int8 *)(16LL * i + v22 + 10)) )
      {
        v26 = W32GetUserSessionState(v8, v7);
        v27 = v19++;
        v63[v27] = *(_BYTE *)(*(_QWORD *)(v26 + 12904) + v21 + 2);
        v29 = W32GetUserSessionState(v27, v28);
        SendKeyUpDown(*(_BYTE *)(*(_QWORD *)(v29 + 12904) + v21 + 2), 1u);
      }
      ++v21;
      ++v54;
    }
    while ( v54 < 6 );
    v30 = 16LL * i;
    v55 = 0;
    v20 = v62[0];
    do
    {
      v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 12904);
      if ( !*(_BYTE *)(17LL * i + v8 + 10) )
        break;
      v31 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 12904);
      v34 = W32GetUserSessionState(v33, v32);
      if ( !(unsigned int)IsKeyDownSpecified(
                            *(_BYTE *)(*(_QWORD *)(v34 + 12904) + v30 + 10),
                            (const unsigned __int8 *)(16LL * i + v31 + 2)) )
      {
        v35 = W32GetUserSessionState(v8, v7);
        v36 = v20++;
        *((_BYTE *)v62 + v36) = *(_BYTE *)(*(_QWORD *)(v35 + 12904) + v30 + 10);
        v38 = W32GetUserSessionState(v36, v37);
        SendKeyUpDown(*(_BYTE *)(*(_QWORD *)(v38 + 12904) + v30 + 10), 0);
      }
      ++v30;
      ++v55;
    }
    while ( v55 < 6 );
    v5 = v56;
  }
  v61 = 0;
  v59 = 0;
  v40 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 12904);
  if ( *(_BYTE *)(v40 + 16LL * i + 9) == 0xE0 )
  {
    v41 = v59 | 2;
LABEL_35:
    v59 = v41;
    goto LABEL_36;
  }
  v40 = *(_QWORD *)(W32GetUserSessionState(v40, v39) + 12904);
  v41 = v59;
  if ( *(_BYTE *)(v40 + 16LL * i + 9) == 0xE1 )
  {
    v41 = v59 | 4;
    goto LABEL_35;
  }
LABEL_36:
  if ( *(__int16 *)(v5 + 2) < 0 )
    v59 = v41 | 1;
  v58[1] = *(unsigned __int8 *)(*(_QWORD *)(W32GetUserSessionState(v40, v39) + 12904) + 16LL * i + 8);
  v58[0] = 0;
  ProcessKeyboardInputWorker(v58, a3, 0LL);
  if ( *(__int16 *)(v5 + 2) >= 0 )
  {
    v44 = *(_BYTE *)(W32GetUserSessionState(v43, v42) + 13992);
    *(_BYTE *)(W32GetUserSessionState(v46, v45) + 13993) = v44;
    *(_DWORD *)(W32GetUserSessionState(v48, v47) + 12916) = i;
  }
  if ( v19 )
  {
    v49 = v63;
    v50 = v19;
    do
    {
      SendKeyUpDown(*v49++, 0);
      --v50;
    }
    while ( v50 );
  }
  if ( v20 )
  {
    v51 = (unsigned __int8 *)v62;
    v52 = v20;
    do
    {
      SendKeyUpDown(*v51++, 1u);
      --v52;
    }
    while ( v52 );
  }
  return 0LL;
}
