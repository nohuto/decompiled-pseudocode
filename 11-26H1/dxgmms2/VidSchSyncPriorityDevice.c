/*
 * XREFs of VidSchSyncPriorityDevice @ 0x1401195B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N0@Z @ 0x14004502C (-UpdatePriorityClass@DXGDEVICE@@QEAAX_N0@Z.c)
 */

__int64 __fastcall VidSchSyncPriorityDevice(__int64 a1, __int64 a2, __int64 a3)
{
  DXGDEVICE::UpdatePriorityClass(*(DXGDEVICE **)(a1 + 8), a2, a3);
  return 0LL;
}
