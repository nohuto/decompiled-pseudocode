/*
 * XREFs of RtlDoesFileExists_U @ 0x1800A4CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlDoesFileExists_U(PCWSTR FileName)
{
  char v1; // dl

  v1 = 1;
  return RtlDoesFileExists_UEx(FileName, v1);
}
