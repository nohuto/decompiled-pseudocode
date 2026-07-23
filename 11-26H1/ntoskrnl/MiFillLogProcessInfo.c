/*
 * XREFs of MiFillLogProcessInfo @ 0x14046E5B0
 * Callers:
 *     MiLogHotPatchRundownForProcess @ 0x14070101C (MiLogHotPatchRundownForProcess.c)
 *     MiLogWsEmptyControl @ 0x14070900C (MiLogWsEmptyControl.c)
 *     MiLogHotPatchOperation @ 0x140877E0C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140878288 (MiLogHotPatchOperationStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFillLogProcessInfo(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
  {
    result = 0LL;
    *a2 = 0;
    *a3 = 0LL;
  }
  else
  {
    result = *(unsigned int *)(a1 - 560);
    *a2 = result;
    *a3 = a1 - 200;
  }
  return result;
}
