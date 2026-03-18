/*
 * XREFs of ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1401E5A0C
 * Callers:
 *     DrawFrameControl @ 0x140054934 (DrawFrameControl.c)
 * Callees:
 *     GrePolyPatBlt @ 0x140055878 (GrePolyPatBlt.c)
 *     GreSetTextColor @ 0x140056CB4 (GreSetTextColor.c)
 *     GreExtTextOutW @ 0x140057230 (GreExtTextOutW.c)
 */

__int64 __fastcall DrawGrip(HDC a1, struct tagRECT *a2, __int16 a3)
{
  int v4; // r8d
  unsigned int v7; // edi
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // rcx
  int v13; // r12d
  __int64 v14; // rdx
  int v15; // ebp
  LONG left; // ecx
  LONG top; // r8d
  int v18; // eax
  int v19; // eax
  int v20; // r14d
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned int v24; // [rsp+38h] [rbp-50h]
  unsigned int v25; // [rsp+38h] [rbp-50h]
  unsigned int v26; // [rsp+38h] [rbp-50h]
  _DWORD v27[4]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v28; // [rsp+50h] [rbp-38h]

  v4 = a2->right - a2->left;
  if ( v4 >= a2->bottom - a2->top )
    v4 = a2->bottom - a2->top;
  v7 = a2->right - v4;
  v8 = a2->bottom - v4;
  v10 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872);
  if ( (a3 & 0xC000) != 0 )
  {
    v11 = *(_QWORD *)(v10 + 4736);
    v22 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19872);
    v13 = *(_DWORD *)(v22 + 4592);
    v15 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v22, v23) + 19872) + 4592LL);
  }
  else
  {
    v11 = *(_QWORD *)(v10 + 4816);
    v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19872);
    v13 = *(_DWORD *)(v12 + 4648);
    v15 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v14) + 19872) + 4632LL);
  }
  left = a2->left;
  top = a2->top;
  v18 = a2->right - a2->left;
  v28 = v11;
  v27[2] = v18;
  v19 = a2->bottom - top;
  v27[0] = left;
  v27[1] = top;
  v27[3] = v19;
  GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v27, 1u);
  v20 = GreSetTextColor(a1, v13);
  if ( (a3 & 0x10) != 0 )
  {
    GreExtTextOutW(a1, v7, v8, 0, 0LL, L"x", 1, v24);
    GreSetTextColor(a1, v15);
    GreExtTextOutW(a1, v7, v8, 0, 0LL, L"y", 1, v26);
  }
  else
  {
    GreExtTextOutW(a1, v7, v8, 0, 0LL, L"o", 1, v24);
    GreSetTextColor(a1, v15);
    GreExtTextOutW(a1, v7, v8, 0, 0LL, L"p", 1, v25);
  }
  GreSetTextColor(a1, v20);
  return 1LL;
}
