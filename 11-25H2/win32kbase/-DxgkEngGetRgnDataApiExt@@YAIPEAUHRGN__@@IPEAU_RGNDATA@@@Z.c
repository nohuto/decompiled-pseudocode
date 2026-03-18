/*
 * XREFs of ?DxgkEngGetRgnDataApiExt@@YAIPEAUHRGN__@@IPEAU_RGNDATA@@@Z @ 0x1400EF6C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngGetRgnDataApiExt(HRGN a1, __int64 a2, struct _RGNDATA *a3)
{
  unsigned int v4; // esi
  unsigned int v6; // ebx
  int (*v7)(void); // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int (__fastcall *v10)(HRGN, _QWORD, struct _RGNDATA *); // rax

  v4 = a2;
  v6 = 0;
  v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 208LL);
  if ( v7 )
  {
    if ( v7() >= 0 )
    {
      v10 = *(unsigned int (__fastcall **)(HRGN, _QWORD, struct _RGNDATA *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                           v9,
                                                                                           v8)
                                                                                       + 24)
                                                                           + 216LL);
      if ( v10 )
        return v10(a1, v4, a3);
    }
  }
  return v6;
}
