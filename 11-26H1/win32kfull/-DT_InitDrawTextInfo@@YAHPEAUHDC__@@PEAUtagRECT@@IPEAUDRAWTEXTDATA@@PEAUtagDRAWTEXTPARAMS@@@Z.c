/*
 * XREFs of ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x14011FD74
 * Callers:
 *     DrawTextExWorker @ 0x14011FA9C (DrawTextExWorker.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetTextMetricsW @ 0x140122AE8 (_GetTextMetricsW.c)
 *     IsSysFontAndDefaultMode @ 0x1401F9248 (IsSysFontAndDefaultMode.c)
 *     GetDpiServerInfoForCurrentThread @ 0x140302578 (GetDpiServerInfoForCurrentThread.c)
 *     GreGetTextCharsetInfo @ 0x14031CA90 (GreGetTextCharsetInfo.c)
 */

__int64 __fastcall DT_InitDrawTextInfo(
        HDC a1,
        struct tagRECT *a2,
        __int16 a3,
        struct DRAWTEXTDATA *a4,
        struct tagDRAWTEXTPARAMS *a5)
{
  int v9; // r15d
  int v10; // r12d
  _DWORD *DpiServerInfoForCurrentThread; // rax
  int v12; // ebx
  int v13; // r14d
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 UserSessionState; // rax
  __int64 v18; // rcx
  int v19; // ebx
  struct tagTHREADINFO *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  __int64 result; // rax
  int v26; // ecx
  __int64 CurrentProcessWin32Process; // rax
  int TextMetricsW; // eax
  struct _POINTL v29; // [rsp+20h] [rbp-50h] BYREF
  struct _POINTL v30; // [rsp+28h] [rbp-48h] BYREF
  __int128 v31; // [rsp+30h] [rbp-40h]
  __int128 v32; // [rsp+40h] [rbp-30h]
  __int128 v33; // [rsp+50h] [rbp-20h]
  __int64 v34; // [rsp+60h] [rbp-10h]
  int v35; // [rsp+68h] [rbp-8h]

  v34 = 0LL;
  v35 = 0;
  v30 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( a5 )
  {
    v9 = *((_DWORD *)a5 + 2);
    v10 = *((_DWORD *)a5 + 3);
  }
  else
  {
    v10 = 0;
    v9 = 0;
  }
  if ( !GreGetDCPoint(a1, 1u, &v30) )
    return 0LL;
  GreGetDCPoint(a1, 2u, &v29);
  *((_DWORD *)a4 + 5) = (((v30.x ^ v29.x) >> 31) & 0xFFFFFFFE) + 1;
  *((_DWORD *)a4 + 6) = (((v30.y ^ v29.y) >> 31) & 0xFFFFFFFE) + 1;
  if ( (a3 & 0x1000) != 0 || (unsigned int)IsSysFontAndDefaultMode(a1) )
  {
    DpiServerInfoForCurrentThread = (_DWORD *)GetDpiServerInfoForCurrentThread();
    v12 = DpiServerInfoForCurrentThread[9];
    v13 = DpiServerInfoForCurrentThread[15];
    v14 = DpiServerInfoForCurrentThread[18];
    UserSessionState = W32GetUserSessionState(v16, v15);
    GreGetTextCharsetInfo(*(HDC *)(*(_QWORD *)(UserSessionState + 56968) + 56LL));
  }
  else
  {
    TextMetricsW = GetTextMetricsW(a1);
    v12 = v31;
    if ( TextMetricsW )
      v14 = v33;
    else
      v14 = 0;
    v13 = DWORD1(v32);
  }
  v19 = *((_DWORD *)a4 + 6) * v12;
  *((_DWORD *)a4 + 4) = 8 * v13;
  *((_DWORD *)a4 + 14) = v14;
  *((_DWORD *)a4 + 7) = v19;
  v20 = PtiCurrent(v18);
  if ( v20 == *(struct tagTHREADINFO **)(W32GetUserSessionState(v22, v21) + 18696) )
  {
    v24 = 0;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v24 = *(_DWORD *)(CurrentProcessWin32Process + 744) & 4;
  }
  *((_DWORD *)a4 + 15) = v24;
  if ( !v24 )
    *((_QWORD *)a4 + 6) = UserTextOutWInternal;
  *(struct tagRECT *)a4 = *a2;
  if ( v9 | v10 )
  {
    v26 = v10 * *((_DWORD *)a4 + 5);
    *(_DWORD *)a4 += v9 * *((_DWORD *)a4 + 5);
    *((_DWORD *)a4 + 10) = v26;
    *((_DWORD *)a4 + 2) -= v26;
  }
  else
  {
    *((_DWORD *)a4 + 10) = 0;
  }
  result = 1LL;
  *((_QWORD *)a4 + 4) = (unsigned int)(*((_DWORD *)a4 + 5) * (*((_DWORD *)a4 + 2) - *(_DWORD *)a4));
  return result;
}
