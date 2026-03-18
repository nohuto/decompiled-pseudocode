/*
 * XREFs of ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1402B7660
 * Callers:
 *     xxxDesktopPaintCallback @ 0x140200ED0 (xxxDesktopPaintCallback.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     GetDPIServerInfo @ 0x140042F14 (GetDPIServerInfo.c)
 *     GreSelectFont @ 0x140054D30 (GreSelectFont.c)
 *     GreSetBkMode @ 0x140054F30 (GreSetBkMode.c)
 *     GreSetTextColor @ 0x140056CB4 (GreSetTextColor.c)
 *     GreExtTextOutW @ 0x140057230 (GreExtTextOutW.c)
 *     GreTextInitialized @ 0x1400C006C (GreTextInitialized.c)
 *     GreGetTextExtentW @ 0x1400C0134 (GreGetTextExtentW.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

void __fastcall PaintWatermark(HDC a1, const struct tagRECT *a2, __int64 a3)
{
  HFONT v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 DPIServerInfo; // rbp
  HFONT v9; // rdx
  __int64 v10; // rcx
  int v11; // r15d
  int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __m128i *UserSessionState; // rax
  __m128i *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // [rsp+38h] [rbp-40h]
  unsigned int v20; // [rsp+38h] [rbp-40h]
  unsigned int v21; // [rsp+38h] [rbp-40h]
  unsigned int v22; // [rsp+38h] [rbp-40h]
  __int64 v23; // [rsp+40h] [rbp-38h] BYREF
  char v24; // [rsp+90h] [rbp+18h] BYREF
  struct tagSIZE v25; // [rsp+98h] [rbp+20h] BYREF

  v25 = 0LL;
  v5 = 0LL;
  if ( (unsigned int)GreTextInitialized((__int64)a1, (__int64)a2, a3)
    && *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 19872) + 2164LL) )
  {
    DPIServerInfo = GetDPIServerInfo();
    v9 = *(HFONT *)(DPIServerInfo + 8);
    if ( v9 )
      v5 = GreSelectFont(a1, v9);
    LOBYTE(v9) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v24, (__int64)v9);
    EnterLeaveCritShared::EnterLeaveCritShared(&v23, 1LL);
    EnterSharedRenderCrit(v10);
    v11 = GreSetBkMode(a1, 1);
    v12 = GreSetTextColor(a1, 0xFFFFFF);
    UserSessionState = (__m128i *)W32GetUserSessionState(v14, v13);
    v16 = UserSessionState + 4142;
    if ( (unsigned int)GreGetTextExtentW(a1, UserSessionState + 4142, UserSessionState[4150].m128i_u32[0], &v25) )
    {
      GreExtTextOutW(a1, a2->left, a2->top, 0, 0LL, (unsigned __int16 *)v16, v16[8].m128i_i32[0], v19);
      GreExtTextOutW(a1, a2->right - v25.cx, a2->top, 0, 0LL, (unsigned __int16 *)v16, v16[8].m128i_i32[0], v20);
      GreExtTextOutW(
        a1,
        a2->right - v25.cx,
        a2->bottom - *(_DWORD *)(DPIServerInfo + 40),
        0,
        0LL,
        (unsigned __int16 *)v16,
        v16[8].m128i_i32[0],
        v21);
      GreExtTextOutW(
        a1,
        a2->left,
        a2->bottom - *(_DWORD *)(DPIServerInfo + 40),
        0,
        0LL,
        (unsigned __int16 *)v16,
        v16[8].m128i_i32[0],
        v22);
    }
    GreSetBkMode(a1, v11);
    GreSetTextColor(a1, v12);
    LeaveRenderCrit(v17);
    UserSessionSwitchLeaveCrit(v18);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v24);
    if ( v5 )
      GreSelectFont(a1, v5);
  }
}
