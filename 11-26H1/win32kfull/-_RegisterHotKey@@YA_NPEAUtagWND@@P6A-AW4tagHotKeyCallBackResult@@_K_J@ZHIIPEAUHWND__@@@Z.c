/*
 * XREFs of ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x1401A24FC
 * Callers:
 *     NtUserShellRegisterHotKey @ 0x1401A16F0 (NtUserShellRegisterHotKey.c)
 *     NtUserRegisterHotKey @ 0x1401A23E0 (NtUserRegisterHotKey.c)
 *     ?RegisterSystemHotkeys@@YAXXZ @ 0x14029B3C4 (-RegisterSystemHotkeys@@YAXXZ.c)
 *     ?SetDebugHotKeys@@YAXXZ @ 0x14029B46C (-SetDebugHotKeys@@YAXXZ.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?FindHotKey@@YAPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAU1@@Z @ 0x14018D090 (-FindHotKey@@YAPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAU1@@Z.c)
 *     ??$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z @ 0x14018D720 (--$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z.c)
 *     IsShellProcess @ 0x1401A1AF8 (IsShellProcess.c)
 *     ?HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1401BCC00 (-HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryT.c)
 *     ?HKInsertHashElement@@YAXPEAUtagHOTKEY@@@Z @ 0x140213900 (-HKInsertHashElement@@YAXPEAUtagHOTKEY@@@Z.c)
 *     ?HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HGPEAUHWND__@@@Z @ 0x140235BE8 (-HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HGPEAUHWND__@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x14028FE90 (CheckWinstaAttributeAccess.c)
 *     ?AddSasKey@@YAHII@Z @ 0x140297BF8 (-AddSasKey@@YAHII@Z.c)
 */

bool __fastcall _RegisterHotKey(
        struct tagTHREADINFO **a1,
        enum tagHotKeyCallBackResult (__high *a2)(unsigned __int64, __int64),
        int a3,
        __int16 a4,
        unsigned int BugCheckParameter2,
        HWND a6)
{
  struct tagTHREADINFO *v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rcx
  char v17; // r13
  __int64 v18; // rcx
  __int16 v19; // si
  unsigned int v20; // r15d
  unsigned __int16 v21; // si
  int v22; // ecx
  struct tagHOTKEY *HotKey; // rax
  __int64 v25; // rcx
  struct tagHOTKEY *v26; // rdx
  __int16 v27; // ax
  struct tagHOTKEY *v28; // rcx
  struct tagTHREADINFO *v29; // rax
  struct tagHOTKEY *v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rbx
  struct tagTHREADINFO *v33; // rax
  struct tagTHREADINFO *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct tagHOTKEY *v37; // [rsp+38h] [rbp-40h] BYREF

  v8 = PtiCurrent((__int64)a1);
  v10 = *(_QWORD *)(W32GetUserGdiSessionState(v9) + 40);
  v14 = 0LL;
  if ( PsGetCurrentProcess(v11) != v10
    && *(_QWORD *)(W32GetUserSessionState(v13, v12) + 63512)
    && !(unsigned int)CheckWinstaAttributeAccess(0x10u)
    || BugCheckParameter2 == 231 )
  {
    return 0;
  }
  if ( (a4 & 0x8000) == 0
    || (v15 = *(_QWORD *)(W32GetUserGdiSessionState(v13) + 40), v17 = 1, PsGetCurrentProcess(v16) != v15) )
  {
    v17 = 0;
  }
  v18 = *((_QWORD *)v8 + 57);
  v19 = a4;
  v20 = a4 & 0xF;
  v21 = v19 & 0x7A80;
  if ( *(int *)(v18 + 12) >= 0 )
  {
    if ( (v21 & 0x2000) != 0 && !(unsigned int)IsShellProcess(v18) && !a2 )
    {
      v22 = 5;
      goto LABEL_17;
    }
  }
  else
  {
    v21 |= 0x2000u;
  }
  if ( a1 && a1[2] != v8 )
  {
    v22 = 1408;
LABEL_17:
    UserSetLastError(v22);
    return 0;
  }
  if ( (v21 & 0x200) != 0 && v17 )
    return 0;
  v37 = 0LL;
  HotKey = FindHotKey(v8, (struct tagWND *)a1, a3, v20, BugCheckParameter2, &v37);
  v26 = HotKey;
  if ( !HotKey )
  {
    v30 = v37;
    if ( v37 )
    {
      if ( *((__int16 *)v37 + 17) < 0 || v17 )
        KeBugCheckEx(
          0x164u,
          0x10uLL,
          *((unsigned int *)v37 + 9) | 0x80000000LL,
          *((unsigned __int16 *)v37 + 16),
          *((unsigned __int16 *)v37 + 17));
      *((_WORD *)v37 + 17) = v21;
      if ( *((_WORD *)v30 + 16) != (_WORD)v20 || *((_DWORD *)v30 + 9) != BugCheckParameter2 || (v21 & 0x200) == 0 )
        HKRemoveMatchingChildHotkeys(v30, 0LL, 0LL, 0LL, 4);
      *((_WORD *)v30 + 16) = v20;
      *((_DWORD *)v30 + 9) = BugCheckParameter2;
      *((_QWORD *)v30 + 3) = a6;
    }
    else
    {
      v32 = Win32AllocPoolZInit(72LL, 1802007381LL);
      if ( !v32 )
        return 0;
      v33 = PtiCurrent(v31);
      *(_QWORD *)v32 = v33;
      ++*((_DWORD *)v33 + 236);
      if ( v17 && !(unsigned int)AddSasKey(BugCheckParameter2, v20) )
      {
        FreeHotKey<tagHOTKEY *>((signed __int16 *)v32);
        KeBugCheckEx(0x164u, 0x10uLL, BugCheckParameter2, v20, v21);
      }
      v34 = 0LL;
      if ( a1 )
        v34 = *a1;
      *(_QWORD *)(v32 + 16) = v34;
      *(_DWORD *)(v32 + 40) = a3;
      if ( v17 )
        *(_WORD *)(v32 + 34) = 0x8000;
      else
        *(_WORD *)(v32 + 34) = 0;
      *(_WORD *)(v32 + 34) |= v21;
      *(_WORD *)(v32 + 32) = v20;
      *(_DWORD *)(v32 + 36) = BugCheckParameter2;
      *(_QWORD *)(v32 + 8) = a2;
      *(_QWORD *)(v32 + 24) = a6;
      *(_QWORD *)(v32 + 64) = v32 + 56;
      *(_QWORD *)(v32 + 56) = v32 + 56;
      HKInsertHashElement((struct tagHOTKEY *)v32);
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v25, v26) + 13992) )
      *(_QWORD *)(W32GetUserSessionState(v36, v35) + 13992) = 0LL;
    return 1;
  }
  if ( a2 || v17 )
    goto LABEL_44;
  if ( v37 )
  {
    if ( (v21 & 0x80u) != 0 && (*((_WORD *)v37 + 17) & 0xA00) == 0 )
    {
      *((_QWORD *)v37 + 3) = a6;
      return 1;
    }
LABEL_44:
    v22 = 1409;
    goto LABEL_17;
  }
  v27 = *((_WORD *)HotKey + 17);
  if ( (v27 & 0x1000) != 0 && (v21 & 0x80u) != 0 )
  {
    v28 = (struct tagHOTKEY *)*((_QWORD *)v26 + 7);
    if ( v28 != (struct tagHOTKEY *)((char *)v26 + 56) )
    {
      *((_QWORD *)v28 - 4) = v8;
      if ( a1 )
        v14 = *a1;
      *((_QWORD *)v28 - 1) = a6;
      *((_QWORD *)v28 - 3) = v14;
      *((_DWORD *)v28 - 3) = a3;
      *((_WORD *)v28 - 8) = v21;
      return 1;
    }
    return HKAddChildHotkey(v8, v26, (struct tagWND *)a1, a3, v21, a6);
  }
  else
  {
    if ( (v27 & 0x200) == 0 )
      goto LABEL_44;
    if ( (v21 & 0x200) != 0 )
    {
      if ( (v27 & 0x100) == 0 )
        return 0;
      v29 = 0LL;
      if ( a1 )
        v29 = *a1;
      *((_QWORD *)v26 + 2) = v29;
      *((_WORD *)v26 + 17) = v21;
      *(_QWORD *)v26 = v8;
      ++*((_DWORD *)v8 + 236);
      *((_QWORD *)v26 + 1) = 0LL;
      *((_DWORD *)v26 + 10) = a3;
      return 1;
    }
    return HKAddChildHotkey(v8, v26, (struct tagWND *)a1, a3, v21, 0LL);
  }
}
