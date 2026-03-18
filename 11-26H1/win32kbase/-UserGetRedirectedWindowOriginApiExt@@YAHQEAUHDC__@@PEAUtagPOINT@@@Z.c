/*
 * XREFs of ?UserGetRedirectedWindowOriginApiExt@@YAHQEAUHDC__@@PEAUtagPOINT@@@Z @ 0x140137EF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UserGetRedirectedWindowOriginApiExt(HDC a1, struct tagPOINT *a2)
{
  unsigned int v4; // ebx
  int (*v5)(void); // rax
  __int64 v6; // rcx
  unsigned int (__fastcall *v7)(HDC, struct tagPOINT *); // rax

  *a2 = 0LL;
  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 448LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v7 = *(unsigned int (__fastcall **)(HDC, struct tagPOINT *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 24)
                                                                 + 456LL);
      if ( v7 )
        return v7(a1, a2);
    }
  }
  return v4;
}
