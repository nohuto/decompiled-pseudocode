/*
 * XREFs of ?AllowDesktopDestruction@@YAXPEAX@Z @ 0x140247D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AllowDesktopDestruction(void *a1)
{
  ObCloseHandle(a1, 0);
}
