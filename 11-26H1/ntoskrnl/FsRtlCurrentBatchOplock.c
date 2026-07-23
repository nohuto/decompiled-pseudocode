/*
 * XREFs of FsRtlCurrentBatchOplock @ 0x140AF8510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlCurrentBatchOplock(POPLOCK Oplock)
{
  BOOLEAN v1; // dl

  v1 = 0;
  if ( *Oplock )
    return (*((_DWORD *)*Oplock + 36) & 0xC) != 0;
  return v1;
}
