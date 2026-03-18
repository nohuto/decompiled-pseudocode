/*
 * XREFs of xxxSetInternalWindowPos @ 0x1402ACC4C
 * Callers:
 *     NtUserSetInternalWindowPos @ 0x14029F490 (NtUserSetInternalWindowPos.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     UpdateCheckpoint @ 0x14009075C (UpdateCheckpoint.c)
 *     GetMonitorWorkRect @ 0x140090FBC (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x140091000 (GetMonitorRect.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x1402DCC18 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetInternalWindowPos(struct tagWND *a1, unsigned __int16 a2, struct tagRECT *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  unsigned int *v10; // rdi
  __int64 v11; // rbx
  __m128i v12; // xmm6
  __int64 v13; // rcx
  int v14; // edx
  int v15; // eax
  __int64 v16; // rbx
  __m128i v17; // xmm6
  __int128 *MonitorRect; // rax
  __int128 v19; // xmm0
  int v20; // ecx
  __int64 v21; // rcx
  unsigned int v22; // ecx
  _BYTE v23[16]; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v24; // [rsp+50h] [rbp-30h] BYREF

  result = (__int64)UpdateCheckpoint(a1);
  v10 = (unsigned int *)result;
  if ( result )
  {
    if ( a3 )
    {
      v24 = *a3;
      if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
      {
        v11 = MonitorFromRect(&a3->left, 1u, 0);
        v12 = *(__m128i *)GetMonitorWorkRect((__int64)v23, v11);
        v13 = *(_QWORD *)GetMonitorRect((__int64)v23, v11);
        v14 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 4)) - HIDWORD(v13);
        v24.bottom += v14;
        v15 = _mm_cvtsi128_si32(v12) - v13;
        v24.left += v15;
        v24.right += v15;
        v24.top += v14;
      }
      CHECKPOINT::SetNormalRect((CHECKPOINT *)v10, a1, &v24, 0);
    }
    if ( !a4 || *(_DWORD *)a4 == -1 )
    {
      v22 = v10[4] & 0xFFFFFFEF;
      v10[4] = v22;
      v21 = v22 & 0xFFFFFFFE;
    }
    else
    {
      *(_QWORD *)v10 = *a4;
      if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
      {
        v24 = *(struct tagRECT *)(v10 + 5);
        v16 = MonitorFromRect(&v24.left, 1u, 0);
        v17 = *(__m128i *)GetMonitorWorkRect((__int64)v23, v16);
        MonitorRect = (__int128 *)GetMonitorRect((__int64)v23, v16);
        v19 = *MonitorRect;
        *v10 += _mm_cvtsi128_si32(v17) - *MonitorRect;
        v10[1] += _mm_cvtsi128_si32(_mm_srli_si128(v17, 4)) - DWORD1(v19);
      }
      v20 = v10[4] | 1;
      v10[4] = v20;
      v21 = v20 | 0x10u;
    }
    v10[4] = v21;
    LOBYTE(v9) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
    if ( (v9 & 0x20) != 0 )
    {
      if ( (v21 & 0x10) != 0 )
        xxxSetWindowPos(a1, 0LL, *v10, v10[1], 0, 0, 21);
    }
    else if ( (v9 & 1) == 0 && a3 )
    {
      xxxSetWindowPos(
        a1,
        0LL,
        (unsigned int)a3->left,
        (unsigned int)a3->top,
        a3->right - a3->left,
        a3->bottom - a3->top,
        4);
    }
    W32GetUserSessionState(v21, v9);
    xxxShowWindowEx(a1, a2, 0);
    return 1LL;
  }
  return result;
}
