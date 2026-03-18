/*
 * XREFs of ?DpiKsrRestoreMemoryCallback@@YAJPEAU_FDO_CONTEXT@@PEAX@Z @ 0x140251C70
 * Callers:
 *     <none>
 * Callees:
 *     ?DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDATE@@@Z @ 0x140251848 (-DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDAT.c)
 */

__int64 __fastcall DpiKsrRestoreMemoryCallback(struct _FDO_CONTEXT *a1, void *a2)
{
  _OWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( (*((_DWORD *)a1 + 1398) & 2) != 0 )
  {
    memset(v3, 0, sizeof(v3));
    LODWORD(v3[0]) = 1;
    DpiDxgkDdiRestoreMemoryForHotUpdate(a1, (const struct _DXGKARG_RESTOREMEMORYFORHOTUPDATE *)v3);
  }
  return 0LL;
}
