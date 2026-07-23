/*
 * XREFs of RtlLockBootStatusData @ 0x180141AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlLockBootStatusData(PHANDLE FileHandle)
{
  if ( FileHandle )
    *FileHandle = 0LL;
  return -1073741637;
}
