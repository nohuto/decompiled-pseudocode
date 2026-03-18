/*
 * XREFs of ?AllowDesktopDestruction@@YAXPEAX@Z @ 0x14020E980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AllowDesktopDestruction(void *a1)
{
  ObCloseHandle(a1, 0);
}
