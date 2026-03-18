/*
 * XREFs of ?HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1401BCC00
 * Callers:
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x1401A24FC (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 * Callees:
 *     ??$FreeHotKey@PEAUCHILDHOTKEY@@@@YAXPEAUCHILDHOTKEY@@@Z @ 0x140294E10 (--$FreeHotKey@PEAUCHILDHOTKEY@@@@YAXPEAUCHILDHOTKEY@@@Z.c)
 */

char __fastcall HKRemoveMatchingChildHotkeys(__int64 a1, __int64 a2, __int64 *a3, int a4, int a5)
{
  __int64 v5; // rsi
  __int64 *v6; // rbx
  __int64 *v7; // r10
  __int64 *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  bool v13; // zf
  __int64 **v14; // rax

  v5 = a1 + 56;
  v6 = a3;
  v7 = *(__int64 **)(a1 + 56);
  LOBYTE(a3) = 0;
  if ( v7 != (__int64 *)(a1 + 56) )
  {
    while ( 1 )
    {
      v10 = v7 - 4;
      v11 = *v7;
      if ( !a5 )
        break;
      switch ( a5 )
      {
        case 1:
          goto LABEL_8;
        case 2:
          goto LABEL_7;
        case 3:
          if ( *v10 != a2 )
            break;
LABEL_7:
          if ( *((_DWORD *)v10 + 5) != a4 )
            break;
LABEL_8:
          if ( v6 )
            v12 = *v6;
          else
            v12 = 0LL;
          v13 = v10[1] == v12;
LABEL_11:
          if ( v13 )
            goto LABEL_12;
          break;
        case 4:
LABEL_12:
          if ( *(__int64 **)(v11 + 8) != v7 || (v14 = (__int64 **)v7[1], *v14 != v7) )
            __fastfail(3u);
          *v14 = (__int64 *)v11;
          *(_QWORD *)(v11 + 8) = v14;
          FreeHotKey<CHILDHOTKEY *>(v10, a2, a3);
          LOBYTE(a3) = 1;
          break;
      }
      v7 = (__int64 *)v11;
      if ( v11 == v5 )
        return (char)a3;
    }
    v13 = *v10 == a2;
    goto LABEL_11;
  }
  return (char)a3;
}
