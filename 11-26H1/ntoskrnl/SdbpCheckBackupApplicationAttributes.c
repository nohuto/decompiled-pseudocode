/*
 * XREFs of SdbpCheckBackupApplicationAttributes @ 0x1408888A0
 * Callers:
 *     <none>
 * Callees:
 *     SdbpCheckApplicationTypeAttributes @ 0x140718E64 (SdbpCheckApplicationTypeAttributes.c)
 */

__int64 __fastcall SdbpCheckBackupApplicationAttributes(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 result; // rax

  result = SdbpCheckApplicationTypeAttributes(a1, a3, a5, *(_QWORD **)(a6 + 96));
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
