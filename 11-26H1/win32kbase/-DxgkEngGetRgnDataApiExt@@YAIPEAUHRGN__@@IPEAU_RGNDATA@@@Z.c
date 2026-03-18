/*
 * XREFs of ?DxgkEngGetRgnDataApiExt@@YAIPEAUHRGN__@@IPEAU_RGNDATA@@@Z @ 0x140135AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngGetRgnDataApiExt(HRGN a1, unsigned int a2, struct _RGNDATA *a3)
{
  unsigned int v6; // ebx
  int (*v7)(void); // rax
  __int64 v8; // rcx
  unsigned int (__fastcall *v9)(HRGN, _QWORD, struct _RGNDATA *); // rax

  v6 = 0;
  v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 208LL);
  if ( v7 )
  {
    if ( v7() >= 0 )
    {
      v9 = *(unsigned int (__fastcall **)(HRGN, _QWORD, struct _RGNDATA *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8)
                                                                                      + 24)
                                                                          + 216LL);
      if ( v9 )
        return v9(a1, a2, a3);
    }
  }
  return v6;
}
