/*
 * XREFs of InitializeDefaultHeap @ 0x1800E97C0
 * Callers:
 *     _DllMainStartup @ 0x1800EA1D0 (_DllMainStartup.c)
 * Callees:
 *     <none>
 */

HANDLE InitializeDefaultHeap()
{
  HANDLE result; // rax

  result = GetProcessHeap();
  g_hProcessHeap = result;
  return result;
}
