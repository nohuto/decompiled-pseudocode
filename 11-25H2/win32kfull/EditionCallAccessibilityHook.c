/*
 * XREFs of EditionCallAccessibilityHook @ 0x1402206E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall EditionCallAccessibilityHook(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v3 = PtiCurrent(a1, a2);
  if ( ((*((_DWORD *)v3 + 180) | *(_DWORD *)(**((_QWORD **)PtiCurrent(v5, v4) + 63) + 16LL)) & 0x800) != 0 )
    return xxxCallHook(11LL, a1, 0LL, 10);
  else
    return 0LL;
}
