/*
 * XREFs of ?IsInteractive@CProcess@@UEAAHXZ @ 0x180028350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CProcess::IsInteractive(CProcess *this)
{
  return *(_DWORD *)(*((_QWORD *)this + 28) + 208LL) != 0;
}
