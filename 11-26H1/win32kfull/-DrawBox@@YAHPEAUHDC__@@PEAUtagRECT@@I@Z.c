/*
 * XREFs of ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x140126D24
 * Callers:
 *     DrawFrameControl @ 0x140125D60 (DrawFrameControl.c)
 * Callees:
 *     GreSetTextColor @ 0x140027BB0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x140027C40 (GreSetBkColor.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x140125814 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     FillRect @ 0x140126BCC (FillRect.c)
 *     GrePolyPatBlt @ 0x140126C64 (GrePolyPatBlt.c)
 *     GreExtTextOutW @ 0x14012725C (GreExtTextOutW.c)
 */

__int64 __fastcall DrawBox(HDC a1, LPCRECT a2, __int16 a3)
{
  const char *v3; // r14
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
  HBRUSH v18; // r8
  LONG top; // r9d
  int v20; // r10d
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // r12d
  __int64 v24; // rdx
  unsigned int v25; // r13d
  int v26; // r15d
  const unsigned __int16 *v27; // r14
  __int64 i; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  _DWORD *v31; // rcx
  int v32; // edx
  const wchar_t *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 UserSessionState; // rax
  int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // [rsp+28h] [rbp-48h]
  char v45; // [rsp+38h] [rbp-38h]
  int v46; // [rsp+40h] [rbp-30h]
  __int64 v47; // [rsp+44h] [rbp-2Ch]
  __int64 v48; // [rsp+4Ch] [rbp-24h]
  _DWORD v49[4]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v50; // [rsp+68h] [rbp-8h]
  int v51; // [rsp+B8h] [rbp+48h]
  int v52; // [rsp+C0h] [rbp+50h]

  v3 = L"nmlkji";
  v5 = a3 & 0x708;
  if ( (a3 & 2) != 0 )
  {
    v48 = 0LL;
    v17 = 0;
    v47 = 0LL;
    v46 = 0;
    v18 = *(HBRUSH *)(W32GetUserSessionState(a1, a2) + 43072);
    goto LABEL_8;
  }
  v9 = *(_DWORD **)(W32GetUserSessionState(a1, a2) + 19904);
  if ( (a3 & 0xC000) != 0 )
  {
    v14 = v9[1148];
    LODWORD(v48) = v14;
    HIDWORD(v47) = v14;
    LODWORD(v47) = v14;
  }
  else
  {
    LODWORD(v47) = v9[1164];
    v10 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19904);
    HIDWORD(v47) = *(_DWORD *)(v10 + 4652);
    v12 = *(_QWORD *)(W32GetUserSessionState(v10, v11) + 19904);
    LODWORD(v48) = *(_DWORD *)(v12 + 4648);
    v9 = *(_DWORD **)(W32GetUserSessionState(v12, v13) + 19904);
    v14 = v9[1158];
  }
  HIDWORD(v48) = v14;
  v16 = *(_DWORD **)(W32GetUserSessionState(v9, v8) + 19904);
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
  v46 = v17;
  if ( (a3 & 1) != 0 )
  {
    v18 = *(HBRUSH *)(W32GetUserSessionState(v16, v15) + 43080);
LABEL_8:
    FillRect(a1, a2, v18);
    goto LABEL_9;
  }
  v34 = L"gfedcb";
  if ( (a3 & 4) != 0 )
    v34 = (const wchar_t *)L"nmlkji";
  v3 = (const char *)v34;
LABEL_9:
  top = a2->top;
  v20 = a2->bottom - top;
  v21 = a2->right - a2->left;
  v51 = v20;
  v52 = v21;
  v22 = (unsigned int)v21;
  if ( v21 >= v20 )
    v22 = (unsigned int)v20;
  v23 = a2->left + (v21 - (int)v22) / 2;
  v24 = (unsigned int)((v20 - (int)v22) >> 31);
  v25 = top + (v20 - (int)v22) / 2;
  if ( v5 == 1032
    && ((LODWORD(v24) = (v20 - (int)v22) % 2,
         v36 = *(_QWORD *)(W32GetUserSessionState(v22, v24) + 19904),
         *(_WORD *)(v36 + 6996) < 8u)
     || (v36 = *(_QWORD *)(W32GetUserSessionState(v36, v35) + 19904), *(_DWORD *)(v36 + 4648) == 0xFFFFFF)) )
  {
    UserSessionState = W32GetUserSessionState(v36, v35);
    v38 = GreSetBkColor(a1, *(_DWORD *)(*(_QWORD *)(UserSessionState + 19904) + 4648LL));
    v41 = W32GetUserSessionState(v40, v39);
    v26 = GreSetTextColor(a1, *(_DWORD *)(*(_QWORD *)(v41 + 19904) + 4628LL));
    v49[0] = v23;
    v49[2] = v52;
    v49[3] = v51;
    v49[1] = v25;
    v50 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v43, v42) + 19904) + 4944LL);
    GrePolyPatBlt(a1, 15728673, (struct _POLYPATBLT *)v49, 1);
    GreSetBkColor(a1, v38);
  }
  else
  {
    v26 = GreSetTextColor(a1, v17);
    GreExtTextOutW(a1, 0LL, (__int64)v3, 1, v45);
  }
  v27 = (const unsigned __int16 *)(v3 + 2);
  for ( i = 1LL; i < 5; ++i )
  {
    GreSetTextColor(a1, *(&v46 + i));
    v44 = (__int64)v27++;
    GreExtTextOutW(a1, 0LL, v44, 1, v45);
  }
  if ( (a3 & 0x400) != 0 )
  {
    v31 = *(_DWORD **)(W32GetUserSessionState(v30, v29) + 19904);
    if ( (a3 & 0x108) != 0 )
    {
      v32 = v31[1158];
    }
    else if ( (a3 & 0x1000) != 0 )
    {
      v32 = v31[1168];
    }
    else
    {
      v32 = v31[1150];
    }
    GreSetTextColor(a1, v32);
    FlipUserTextOutW(a1, v23, v25, v27);
  }
  GreSetTextColor(a1, v26);
  return 1LL;
}
