/*
 * XREFs of ?ContextMenu_GetCommandStringVerb@@YAJPEAUIContextMenu@@IPEAGH@Z @ 0x18065D830
 * Callers:
 *     ?GetVerbFromInvokeCommandInfo@@YAJPEAUIContextMenu@@PEAU_CMINVOKECOMMANDINFO@@PEAGK@Z @ 0x18065D964 (-GetVerbFromInvokeCommandInfo@@YAJPEAUIContextMenu@@PEAU_CMINVOKECOMMANDINFO@@PEAGK@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18009BEE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ContextMenu_GetCommandStringVerb(struct IContextMenu *a1, unsigned int a2, char *a3, int a4)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // r15
  HRESULT (__stdcall *GetCommandString)(IContextMenu *, UINT_PTR, UINT, UINT *, CHAR *, UINT); // rax
  int v9; // ebx
  int v10; // eax
  struct IContextMenuVtbl *lpVtbl; // rax
  CHAR pszSrc[272]; // [rsp+40h] [rbp-368h] BYREF
  unsigned __int16 v14[264]; // [rsp+150h] [rbp-258h] BYREF

  v5 = a4;
  v6 = a2;
  StringCchCopyW(a3, a4, (char *)&LocaleName);
  GetCommandString = a1->lpVtbl->GetCommandString;
  if ( v5 >= 0x41 )
  {
    v10 = ((__int64 (__fastcall *)(struct IContextMenu *, _QWORD, __int64, _QWORD, char *, _DWORD))GetCommandString)(
            a1,
            (unsigned int)v6,
            4LL,
            0LL,
            a3,
            v5);
    goto LABEL_5;
  }
  v14[0] = 0;
  v9 = ((__int64 (__fastcall *)(struct IContextMenu *, _QWORD, __int64, _QWORD, unsigned __int16 *, int))GetCommandString)(
         a1,
         (unsigned int)v6,
         4LL,
         0LL,
         v14,
         65);
  if ( v9 >= 0 )
  {
    v10 = StringCchCopyW(a3, v5, (char *)v14);
LABEL_5:
    v9 = v10;
  }
  if ( v9 < 0 && v9 != -2147024774 )
  {
    lpVtbl = a1->lpVtbl;
    pszSrc[0] = 0;
    v9 = ((__int64 (__fastcall *)(struct IContextMenu *, __int64, _QWORD, _QWORD, CHAR *, int))lpVtbl->GetCommandString)(
           a1,
           v6,
           0LL,
           0LL,
           pszSrc,
           65);
    if ( v9 >= 0 )
      SHAnsiToUnicode(pszSrc, (PWSTR)a3, v5);
  }
  return (unsigned int)v9;
}
