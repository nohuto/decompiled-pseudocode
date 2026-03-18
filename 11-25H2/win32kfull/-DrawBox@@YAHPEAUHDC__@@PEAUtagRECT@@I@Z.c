/*
 * XREFs of ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x140056E58
 * Callers:
 *     DrawFrameControl @ 0x140054934 (DrawFrameControl.c)
 * Callees:
 *     FillRect @ 0x1400557E0 (FillRect.c)
 *     GrePolyPatBlt @ 0x140055878 (GrePolyPatBlt.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x140056184 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     GreSetTextColor @ 0x140056CB4 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x140056D44 (GreSetBkColor.c)
 *     GreExtTextOutW @ 0x140057230 (GreExtTextOutW.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall DrawBox(HDC a1, LPCRECT a2, __int16 a3)
{
  const wchar_t *v3; // r14
  int v5; // r15d
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  int v17; // ebx
  const wchar_t *v18; // rax
  HBRUSH v19; // r8
  LONG top; // r9d
  int v21; // r10d
  int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // r12d
  __int64 v25; // rdx
  unsigned int v26; // r13d
  int v27; // r15d
  const unsigned __int16 *v28; // r14
  __int64 i; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 UserSessionState; // rax
  int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // [rsp+28h] [rbp-58h]
  int v45; // [rsp+40h] [rbp-40h]
  int v46; // [rsp+44h] [rbp-3Ch]
  _DWORD v47[4]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v48; // [rsp+58h] [rbp-28h]
  int v49; // [rsp+60h] [rbp-20h]
  __int64 v50; // [rsp+64h] [rbp-1Ch]
  __int64 v51; // [rsp+6Ch] [rbp-14h]

  v3 = L"nmlkji";
  v5 = a3 & 0x708;
  if ( (a3 & 2) != 0 )
  {
    v51 = 0LL;
    v17 = 0;
    v50 = 0LL;
    v49 = 0;
    v19 = *(HBRUSH *)(W32GetUserSessionState(a1, a2) + 43048);
    goto LABEL_11;
  }
  v9 = *(_DWORD **)(W32GetUserSessionState(a1, a2) + 19872);
  if ( (a3 & 0xC000) != 0 )
  {
    v14 = v9[1148];
    LODWORD(v51) = v14;
    HIDWORD(v50) = v14;
    LODWORD(v50) = v14;
  }
  else
  {
    LODWORD(v50) = v9[1164];
    v10 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19872);
    HIDWORD(v50) = *(_DWORD *)(v10 + 4652);
    v12 = *(_QWORD *)(W32GetUserSessionState(v10, v11) + 19872);
    LODWORD(v51) = *(_DWORD *)(v12 + 4648);
    v9 = *(_DWORD **)(W32GetUserSessionState(v12, v13) + 19872);
    v14 = v9[1158];
  }
  HIDWORD(v51) = v14;
  v16 = *(_DWORD **)(W32GetUserSessionState(v9, v8) + 19872);
  if ( (a3 & 0x300) != 0 )
  {
    v17 = v16[1157];
  }
  else if ( v5 == 1032 )
  {
    v17 = v16[1162];
  }
  else
  {
    v17 = v16[1147];
  }
  v49 = v17;
  if ( (a3 & 1) != 0 )
  {
    v19 = *(HBRUSH *)(W32GetUserSessionState(v16, v15) + 43056);
LABEL_11:
    FillRect(a1, a2, v19);
    goto LABEL_12;
  }
  v18 = L"gfedcb";
  if ( (a3 & 4) != 0 )
    v18 = L"nmlkji";
  v3 = v18;
LABEL_12:
  top = a2->top;
  v21 = a2->bottom - top;
  v22 = a2->right - a2->left;
  v46 = v21;
  v45 = v22;
  v23 = (unsigned int)v22;
  if ( v22 >= v21 )
    v23 = (unsigned int)v21;
  v24 = a2->left + (v22 - (int)v23) / 2;
  v25 = (unsigned int)((v21 - (int)v23) >> 31);
  v26 = top + (v21 - (int)v23) / 2;
  if ( v5 == 1032
    && ((LODWORD(v25) = (v21 - (int)v23) % 2,
         v36 = *(_QWORD *)(W32GetUserSessionState(v23, v25) + 19872),
         *(_WORD *)(v36 + 6996) < 8u)
     || (v36 = *(_QWORD *)(W32GetUserSessionState(v36, v35) + 19872), *(_DWORD *)(v36 + 4648) == 0xFFFFFF)) )
  {
    UserSessionState = W32GetUserSessionState(v36, v35);
    v38 = GreSetBkColor(a1, *(_DWORD *)(*(_QWORD *)(UserSessionState + 19872) + 4648LL));
    v41 = W32GetUserSessionState(v40, v39);
    v27 = GreSetTextColor(a1, *(_DWORD *)(*(_QWORD *)(v41 + 19872) + 4628LL));
    v47[0] = v24;
    v47[2] = v45;
    v47[3] = v46;
    v47[1] = v26;
    v48 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v43, v42) + 19872) + 4944LL);
    GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v47, 1u);
    GreSetBkColor(a1, v38);
  }
  else
  {
    v27 = GreSetTextColor(a1, v17);
    GreExtTextOutW(a1, 0LL, (__int64)v3, 1);
  }
  v28 = v3 + 1;
  for ( i = 1LL; i < 5; ++i )
  {
    GreSetTextColor(a1, *(&v49 + i));
    v44 = (__int64)v28++;
    GreExtTextOutW(a1, 0LL, v44, 1);
  }
  if ( (a3 & 0x400) != 0 )
  {
    v33 = W32GetUserSessionState(v31, v30);
    if ( (a3 & 0x108) != 0 )
    {
      v34 = *(_DWORD *)(*(_QWORD *)(v33 + 19872) + 4632LL);
    }
    else if ( (a3 & 0x1000) != 0 )
    {
      v34 = *(_DWORD *)(*(_QWORD *)(v33 + 19872) + 4672LL);
    }
    else
    {
      v34 = *(_DWORD *)(*(_QWORD *)(v33 + 19872) + 4600LL);
    }
    GreSetTextColor(a1, v34);
    FlipUserTextOutW(a1, v24, v26, v28);
  }
  GreSetTextColor(a1, v27);
  return 1LL;
}
