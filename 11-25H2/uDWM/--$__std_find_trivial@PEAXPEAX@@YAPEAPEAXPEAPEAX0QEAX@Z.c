/*
 * XREFs of ??$__std_find_trivial@PEAXPEAX@@YAPEAPEAXPEAPEAX0QEAX@Z @ 0x180099F40
 * Callers:
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x180081F14 (-DoStackCapture@@YAXJIPEAX@Z.c)
 *     ?OnWindowDataDeleted@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x1800BA128 (-OnWindowDataDeleted@CLivePreview@@QEAAXPEBVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall __std_find_trivial<void *,void *>(__int64 a1, __int64 a2, __int64 a3)
{
  return __std_find_trivial<CWindowData *,unsigned __int64>(a1, a2, a3);
}
