/*
 * XREFs of ?_FindWindowEx@@YAPEAUtagWND@@PEAU1@0GPEBG@Z @ 0x140035120
 * Callers:
 *     NtUserFindWindowEx @ 0x140296B00 (NtUserFindWindowEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

struct tagWND *__fastcall _FindWindowEx(struct tagWND *a1, struct tagWND **a2, __int16 a3, const unsigned __int16 *a4)
{
  bool v4; // r15
  __int64 v5; // r14
  struct tagWND *v9; // rbx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  struct tagWND *v13; // rbx
  const wchar_t *v14; // rdx
  struct tagTHREADINFO *v16; // rax
  __int64 v17; // rax

  v4 = 0;
  v5 = 0LL;
  v9 = a1;
  if ( !a1 )
  {
    v9 = 0LL;
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(0LL, a2);
    if ( CurrentThreadNonPaged )
    {
      v11 = *CurrentThreadNonPaged;
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 504);
        if ( v12 )
          v9 = *(struct tagWND **)(v12 + 24);
      }
    }
    v4 = a2 == 0LL;
  }
  if ( !a2 )
    goto LABEL_8;
  if ( a2[13] != v9 )
    return 0LL;
  v13 = a2[11];
  while ( 2 )
  {
    while ( v13 )
    {
      if ( !a3 || a3 == *(_WORD *)(*(_QWORD *)(*((_QWORD *)v13 + 17) + 8LL) + 2LL) )
      {
        if ( !a4 )
          return v13;
        v14 = (const wchar_t *)(*(_DWORD *)(*((_QWORD *)v13 + 5) + 184LL) ? *((_QWORD *)v13 + 23) : szNull);
        if ( !_wcsicmp(a4, v14) )
          return v13;
      }
      v13 = (struct tagWND *)*((_QWORD *)v13 + 11);
    }
    if ( v4 )
    {
      v4 = 0;
      v9 = 0LL;
      v16 = PtiCurrent();
      if ( v16 )
      {
        v17 = *((_QWORD *)v16 + 62);
        if ( v17 )
          v9 = *(struct tagWND **)(v17 + 112);
      }
LABEL_8:
      v13 = (struct tagWND *)*((_QWORD *)v9 + 14);
      continue;
    }
    break;
  }
  return (struct tagWND *)v5;
}
