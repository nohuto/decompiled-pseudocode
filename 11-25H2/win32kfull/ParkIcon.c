/*
 * XREFs of ParkIcon @ 0x1401EA1E8
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     NtUserGetWindowMinimizeRect @ 0x14002A900 (NtUserGetWindowMinimizeRect.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140036D34 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     InternalGetRealClientRect @ 0x1400431B4 (InternalGetRealClientRect.c)
 *     GetRect @ 0x140052B80 (GetRect.c)
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 */

__int64 __fastcall ParkIcon(_QWORD *a1, int *a2)
{
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r13d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r14d
  int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r15d
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // r13d
  __int64 result; // rax
  __int64 v25; // rsi
  int v26; // r12d
  int v27; // r14d
  int v28; // r15d
  __int64 UserSessionState; // rax
  unsigned int v30; // ecx
  unsigned int v31; // eax
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // [rsp+30h] [rbp-39h]
  int v36; // [rsp+34h] [rbp-35h]
  __int128 v37; // [rsp+38h] [rbp-31h] BYREF
  __int64 v38; // [rsp+48h] [rbp-21h] BYREF
  int v39; // [rsp+50h] [rbp-19h]
  int v40; // [rsp+54h] [rbp-15h]
  int v41; // [rsp+58h] [rbp-11h]
  int v42; // [rsp+5Ch] [rbp-Dh]
  int v43; // [rsp+60h] [rbp-9h]
  int v44; // [rsp+64h] [rbp-5h]
  int v45; // [rsp+68h] [rbp-1h]
  __int64 v46; // [rsp+70h] [rbp+7h]
  __int64 v47; // [rsp+78h] [rbp+Fh]
  int v50; // [rsp+E0h] [rbp+77h]
  int v51; // [rsp+E8h] [rbp+7Fh]

  v38 = 0LL;
  v37 = 0LL;
  v4 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872) + 2084LL);
  v45 = v4;
  v7 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 19872) + 2088LL);
  v41 = v7;
  if ( !IsTrayWindow(a1, 1LL) )
  {
    v47 = a1[13];
    InternalGetRealClientRect(v47, (__int64)&v37, 1, 0LL, 1);
    v11 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19872);
    if ( (*(_DWORD *)(v11 + 2120) & 1) != 0 )
    {
      v15 = DWORD2(v37) - v4;
      v51 = -v4;
    }
    else
    {
      v12 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19872);
      v51 = v4;
      v11 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19872);
      v15 = v37 + *(_DWORD *)(v12 + 2084) - *(_DWORD *)(v11 + 2124);
    }
    LODWORD(v38) = v15;
    v16 = v15;
    v42 = v15;
    v18 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19872);
    if ( (*(_DWORD *)(v18 + 2120) & 2) != 0 )
    {
      v32 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 19872);
      v35 = v7;
      v18 = *(_QWORD *)(W32GetUserSessionState(v34, v33) + 19872);
      v19 = DWORD1(v37) + *(_DWORD *)(v32 + 2088) - *(_DWORD *)(v18 + 2128);
    }
    else
    {
      v19 = HIDWORD(v37) - v7;
      v35 = -v7;
    }
    v20 = v19;
    v43 = v19;
    HIDWORD(v38) = v19;
    v21 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 19872);
    if ( (*(_DWORD *)(v21 + 2120) & 4) != 0 )
    {
      v22 = (unsigned int)(SHIDWORD(v37) >> 31);
      LODWORD(v22) = SHIDWORD(v37) % v7;
      v23 = SHIDWORD(v37) / v7;
      if ( v23 < 1 )
        v23 = 1;
      v46 = 0LL;
    }
    else
    {
      v22 = (unsigned int)(SDWORD2(v37) >> 31);
      v46 = 1LL;
      LODWORD(v22) = SDWORD2(v37) % v4;
      v23 = SDWORD2(v37) / v4;
      if ( SDWORD2(v37) / v4 < 1 )
        v23 = 1;
    }
    v44 = v23;
    v36 = 0;
    v50 = v23;
    while ( 1 )
    {
      v39 = v16 + v4;
      v40 = v20 + v41;
      result = v47;
      v25 = *(_QWORD *)(v47 + 112);
      if ( !v25 )
        goto LABEL_15;
      v26 = v45;
      v27 = v41;
      v28 = v36;
      do
      {
        result = *(_QWORD *)(v25 + 40);
        LOBYTE(v21) = *(_BYTE *)(result + 31);
        if ( (v21 & 0x10) == 0 || (_QWORD *)v25 == a1 )
          goto LABEL_13;
        if ( (v21 & 0x20) != 0 )
        {
          GetRect(v25, (__int64)&v37, 66);
        }
        else
        {
          UserSessionState = W32GetUserSessionState(v21, v22);
          result = GetProp(v25, *(unsigned __int16 *)(UserSessionState + 41334), 1u);
          if ( !result )
            goto LABEL_13;
          v21 = *(_DWORD *)(result + 16) & 0x11;
          if ( (*(_BYTE *)(result + 16) & 0x11) != 0x11 )
            goto LABEL_13;
          v30 = *(_DWORD *)result;
          v31 = *(_DWORD *)(result + 4);
          *(_QWORD *)&v37 = __PAIR64__(v31, v30);
          HIDWORD(v37) = v27 + v31;
          DWORD2(v37) = v26 + v30;
        }
        ++v28;
        result = IntersectRect(&v37, (int *)&v37, (int *)&v38);
        if ( (_DWORD)result )
          break;
LABEL_13:
        v25 = *(_QWORD *)(v25 + 88);
      }
      while ( v25 );
      v36 = v28;
      if ( !v25 )
        goto LABEL_15;
      if ( --v50 )
      {
        if ( !v46 )
        {
LABEL_33:
          v20 += v35;
          goto LABEL_34;
        }
        v16 += v51;
        LODWORD(v38) = v16;
      }
      else
      {
        v50 = v44;
        if ( v46 )
        {
          v16 = v42;
          LODWORD(v38) = v42;
          goto LABEL_33;
        }
        v16 += v51;
        v20 = v43;
        LODWORD(v38) = v16;
LABEL_34:
        HIDWORD(v38) = v20;
      }
      v4 = v45;
      if ( v28 >= 5000 )
      {
LABEL_15:
        *a2 = v16;
        a2[1] = v20;
        return result;
      }
    }
  }
  result = 4294935296LL;
  *a2 = -32000;
  a2[1] = -32000;
  return result;
}
