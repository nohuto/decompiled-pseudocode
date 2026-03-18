/*
 * XREFs of ?GetWindowData@@YA_JPEAUtagWND@@_JH_N@Z @ 0x140225C28
 * Callers:
 *     NtUserfnGETWINDOWDATA @ 0x1402C1170 (NtUserfnGETWINDOWDATA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowData(struct tagWND *a1, __int64 a2, int a3, char a4)
{
  __int64 v4; // rax
  __int64 v5; // r10
  int v6; // r8d
  __int64 v7; // r11
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  bool v10; // cc

  v4 = *((_QWORD *)a1 + 5);
  v5 = 0LL;
  v6 = a3 - *(_DWORD *)(v4 + 248);
  if ( v6 < 0 )
    return v5;
  v7 = *(_QWORD *)(v4 + 296);
  if ( a2 )
  {
    v8 = a2 - 1;
    if ( !v8 )
    {
      v10 = (unsigned __int64)(unsigned int)v6 + 4 <= *(unsigned int *)(v4 + 200);
LABEL_7:
      if ( v10 )
        return *(unsigned int *)(v6 + v7);
      return v5;
    }
    if ( v8 != 1 )
      return v5;
    v9 = *(unsigned int *)(v4 + 200);
    if ( a4 )
    {
      v10 = (unsigned __int64)(unsigned int)v6 + 4 <= v9;
      goto LABEL_7;
    }
    if ( (unsigned __int64)(unsigned int)v6 + 8 <= v9 )
      return *(_QWORD *)(v6 + v7);
  }
  else if ( (unsigned __int64)(unsigned int)v6 + 2 <= *(unsigned int *)(v4 + 200) )
  {
    return *(unsigned __int16 *)(v6 + v7);
  }
  return v5;
}
