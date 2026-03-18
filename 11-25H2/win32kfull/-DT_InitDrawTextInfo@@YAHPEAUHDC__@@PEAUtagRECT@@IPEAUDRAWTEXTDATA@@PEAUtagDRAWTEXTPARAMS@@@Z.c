/*
 * XREFs of ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1400C2AE4
 * Callers:
 *     DrawTextExWorker @ 0x1400C188C (DrawTextExWorker.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetDPIServerInfo @ 0x140042F14 (GetDPIServerInfo.c)
 *     _GetTextMetricsW @ 0x1400C00C4 (_GetTextMetricsW.c)
 *     IsSysFontAndDefaultMode @ 0x14021EDAC (IsSysFontAndDefaultMode.c)
 *     GreGetTextCharsetInfo @ 0x1403050AC (GreGetTextCharsetInfo.c)
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
  _DWORD *DPIServerInfo; // rax
  int v12; // ebx
  int v13; // r14d
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 UserSessionState; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ebx
  struct tagTHREADINFO *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  __int64 result; // rax
  int v27; // ecx
  __int64 CurrentProcessWin32Process; // rax
  int TextMetricsW; // eax
  struct _POINTL v30; // [rsp+20h] [rbp-50h] BYREF
  struct _POINTL v31; // [rsp+28h] [rbp-48h] BYREF
  __int128 v32; // [rsp+30h] [rbp-40h] BYREF
  __int128 v33; // [rsp+40h] [rbp-30h]
  __int128 v34; // [rsp+50h] [rbp-20h]
  __int64 v35; // [rsp+60h] [rbp-10h]
  int v36; // [rsp+68h] [rbp-8h]

  v35 = 0LL;
  v36 = 0;
  v31 = 0LL;
  v30 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
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
  if ( !GreGetDCPoint(a1, 1u, &v31) )
    return 0LL;
  GreGetDCPoint(a1, 2u, &v30);
  *((_DWORD *)a4 + 5) = (((v31.x ^ v30.x) >> 31) & 0xFFFFFFFE) + 1;
  *((_DWORD *)a4 + 6) = (((v31.y ^ v30.y) >> 31) & 0xFFFFFFFE) + 1;
  if ( (a3 & 0x1000) != 0 || (unsigned int)IsSysFontAndDefaultMode(a1) )
  {
    DPIServerInfo = (_DWORD *)GetDPIServerInfo();
    v12 = DPIServerInfo[9];
    v13 = DPIServerInfo[15];
    v14 = DPIServerInfo[18];
    UserSessionState = W32GetUserSessionState(v16, v15);
    GreGetTextCharsetInfo(*(HDC *)(*(_QWORD *)(UserSessionState + 56968) + 64LL));
  }
  else
  {
    TextMetricsW = GetTextMetricsW(a1, (__int64)&v32);
    v12 = v32;
    if ( TextMetricsW )
      v14 = v34;
    else
      v14 = 0;
    v13 = DWORD1(v33);
  }
  v20 = *((_DWORD *)a4 + 6) * v12;
  *((_DWORD *)a4 + 4) = 8 * v13;
  *((_DWORD *)a4 + 14) = v14;
  *((_DWORD *)a4 + 7) = v20;
  v21 = PtiCurrent(v19, v18);
  if ( v21 == *(struct tagTHREADINFO **)(W32GetUserSessionState(v23, v22) + 18648) )
  {
    v25 = 0;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v25 = *(_DWORD *)(CurrentProcessWin32Process + 744) & 4;
  }
  *((_DWORD *)a4 + 15) = v25;
  if ( !v25 )
    *((_QWORD *)a4 + 6) = UserTextOutWInternal;
  *(struct tagRECT *)a4 = *a2;
  if ( v9 | v10 )
  {
    v27 = v10 * *((_DWORD *)a4 + 5);
    *(_DWORD *)a4 += v9 * *((_DWORD *)a4 + 5);
    *((_DWORD *)a4 + 10) = v27;
    *((_DWORD *)a4 + 2) -= v27;
  }
  else
  {
    *((_DWORD *)a4 + 10) = 0;
  }
  result = 1LL;
  *((_QWORD *)a4 + 4) = (unsigned int)(*((_DWORD *)a4 + 5) * (*((_DWORD *)a4 + 2) - *(_DWORD *)a4));
  return result;
}
