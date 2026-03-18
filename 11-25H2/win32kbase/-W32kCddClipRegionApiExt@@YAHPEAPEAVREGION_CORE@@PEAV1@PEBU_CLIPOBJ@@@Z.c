/*
 * XREFs of ?W32kCddClipRegionApiExt@@YAHPEAPEAVREGION_CORE@@PEAV1@PEBU_CLIPOBJ@@@Z @ 0x1401D0580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall W32kCddClipRegionApiExt(struct REGION_CORE **a1, struct REGION_CORE *a2, const struct _CLIPOBJ *a3)
{
  unsigned int v6; // ebx
  int (*v7)(void); // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int (__fastcall *v10)(struct REGION_CORE **, struct REGION_CORE *, const struct _CLIPOBJ *); // rax

  v6 = 0;
  v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 464LL);
  if ( v7 )
  {
    if ( v7() >= 0 )
    {
      v10 = *(unsigned int (__fastcall **)(struct REGION_CORE **, struct REGION_CORE *, const struct _CLIPOBJ *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9, v8) + 24) + 472LL);
      if ( v10 )
        return v10(a1, a2, a3);
    }
  }
  return v6;
}
