/*
 * XREFs of OnPTPMouseOperation @ 0x1402AF870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 OnPTPMouseOperation()
{
  return CPTPProcessor::ProcessMouseQueue();
}
