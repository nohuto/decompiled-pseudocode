/*
 * XREFs of ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1402155BC
 * Callers:
 *     DrawFrameControl @ 0x140125D60 (DrawFrameControl.c)
 * Callees:
 *     GreSetTextColor @ 0x140027BB0 (GreSetTextColor.c)
 *     GrePolyPatBlt @ 0x140126C64 (GrePolyPatBlt.c)
 *     GreExtTextOutW @ 0x14012725C (GreExtTextOutW.c)
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
  _DWORD v24[4]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v25; // [rsp+50h] [rbp-38h]

  v4 = a2->right - a2->left;
  if ( v4 >= a2->bottom - a2->top )
    v4 = a2->bottom - a2->top;
  v7 = a2->right - v4;
  v8 = a2->bottom - v4;
  v10 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904);
  if ( (a3 & 0xC000) != 0 )
  {
    v11 = *(_QWORD *)(v10 + 4736);
    v22 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19904);
    v13 = *(_DWORD *)(v22 + 4592);
    v15 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v22, v23) + 19904) + 4592LL);
  }
  else
  {
    v11 = *(_QWORD *)(v10 + 4816);
    v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19904);
    v13 = *(_DWORD *)(v12 + 4648);
    v15 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v14) + 19904) + 4632LL);
  }
  left = a2->left;
  top = a2->top;
  v18 = a2->right - a2->left;
  v25 = v11;
  v24[2] = v18;
  v19 = a2->bottom - top;
  v24[0] = left;
  v24[1] = top;
  v24[3] = v19;
  GrePolyPatBlt(a1, 15728673, (struct _POLYPATBLT *)v24, 1);
  v20 = GreSetTextColor(a1, v13);
  if ( (a3 & 0x10) != 0 )
  {
    GreExtTextOutW(a1, v7, v8, 0, 0LL, (__int64)L"x", 1);
    GreSetTextColor(a1, v15);
    GreExtTextOutW(a1, v7, v8, 0, 0LL, (__int64)L"y", 1);
  }
  else
  {
    GreExtTextOutW(a1, v7, v8, 0, 0LL, (__int64)L"o", 1);
    GreSetTextColor(a1, v15);
    GreExtTextOutW(a1, v7, v8, 0, 0LL, (__int64)L"p", 1);
  }
  GreSetTextColor(a1, v20);
  return 1LL;
}
