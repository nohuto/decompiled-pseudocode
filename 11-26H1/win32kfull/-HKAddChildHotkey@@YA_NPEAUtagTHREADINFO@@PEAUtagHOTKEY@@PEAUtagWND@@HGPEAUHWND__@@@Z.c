/*
 * XREFs of ?HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HGPEAUHWND__@@@Z @ 0x140235BE8
 * Callers:
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x1401A24FC (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

char __fastcall HKAddChildHotkey(
        struct tagTHREADINFO *a1,
        struct tagHOTKEY *a2,
        struct tagWND *a3,
        int a4,
        unsigned __int16 a5,
        HWND a6)
{
  struct tagHOTKEY *v9; // rbx
  __int64 v10; // rsi
  struct tagHOTKEY *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  struct tagTHREADINFO *v14; // rax
  char *v15; // rax
  char **v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct tagTHREADINFO *v20; // rdx

  if ( (a5 & 0xBF7F) != 0 )
    return 0;
  v9 = (struct tagHOTKEY *)((char *)a2 + 56);
  v10 = 0LL;
  v11 = (struct tagHOTKEY *)*((_QWORD *)a2 + 7);
  if ( v11 != (struct tagHOTKEY *)((char *)a2 + 56) )
  {
    while ( v11 != v9 )
    {
      v18 = 0LL;
      if ( a3 )
        v18 = *(_QWORD *)a3;
      v19 = *((_QWORD *)v11 - 3);
      v20 = (struct tagTHREADINFO *)*((_QWORD *)v11 - 4);
      if ( v19 == v18 )
      {
        if ( v20 != a1 )
          return 0;
        if ( *((_DWORD *)v11 - 3) == a4 )
        {
          if ( *((_WORD *)v11 - 8) == a5 )
            return 0;
          *((_WORD *)v11 - 8) = a5;
          return 1;
        }
        if ( v19 == v18 )
          return 0;
      }
      if ( v20 == a1 )
        return 0;
      v11 = *(struct tagHOTKEY **)v11;
    }
  }
  v13 = Win32AllocPoolZInit(48LL, 1802007381LL);
  if ( !v13 )
    return 0;
  v14 = PtiCurrent(v12);
  *(_QWORD *)v13 = v14;
  ++*((_DWORD *)v14 + 236);
  if ( a3 )
    v10 = *(_QWORD *)a3;
  *(_QWORD *)(v13 + 24) = a6;
  v15 = (char *)(v13 + 32);
  *(_QWORD *)(v13 + 8) = v10;
  *(_DWORD *)(v13 + 20) = a4;
  *(_WORD *)(v13 + 16) = a5;
  v16 = (char **)*((_QWORD *)v9 + 1);
  if ( *v16 != (char *)v9 )
    __fastfail(3u);
  *(_QWORD *)v15 = v9;
  *(_QWORD *)(v13 + 40) = v16;
  *v16 = v15;
  *((_QWORD *)v9 + 1) = v15;
  return 1;
}
