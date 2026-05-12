/*
 * XREFs of TcglibpCheckContext @ 0x14013215C
 * Callers:
 *     RaidGetTcgLockingObject @ 0x140094918 (RaidGetTcgLockingObject.c)
 *     TcglibActivateLockingSpEx @ 0x140130754 (TcglibActivateLockingSpEx.c)
 *     TcglibAssignNamespaceLocking @ 0x1401308D4 (TcglibAssignNamespaceLocking.c)
 *     TcglibConfigureLockingSpEx @ 0x140130B4C (TcglibConfigureLockingSpEx.c)
 *     TcglibDeassignNamespaceLocking @ 0x140130CEC (TcglibDeassignNamespaceLocking.c)
 *     TcglibEraseBand @ 0x140130ED0 (TcglibEraseBand.c)
 *     TcglibGetBandMetadata @ 0x140130FE4 (TcglibGetBandMetadata.c)
 *     TcglibGetLockingObjects @ 0x1401310E0 (TcglibGetLockingObjects.c)
 *     TcglibGetMsid @ 0x1401311AC (TcglibGetMsid.c)
 *     TcglibRevertLockingSpEx @ 0x14013130C (TcglibRevertLockingSpEx.c)
 *     TcglibSetAdmin1Pin @ 0x14013148C (TcglibSetAdmin1Pin.c)
 *     TcglibSetBand @ 0x1401315C4 (TcglibSetBand.c)
 *     TcglibSetBandLocationEx @ 0x1401317C0 (TcglibSetBandLocationEx.c)
 *     TcglibSetBandMetadata @ 0x1401319A4 (TcglibSetBandMetadata.c)
 *     TcglibSetBandPin @ 0x140131AF8 (TcglibSetBandPin.c)
 *     TcglibSetSidPin @ 0x140131C64 (TcglibSetSidPin.c)
 *     TcglibStartTransaction @ 0x140131F98 (TcglibStartTransaction.c)
 *     TcglibStopTransaction @ 0x140132028 (TcglibStopTransaction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TcglibpCheckContext(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 3221225987LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( *(_QWORD *)(a2 + 40)
    && *(_QWORD *)(a2 + 48)
    && *(_DWORD *)(a1 + 8)
    && a2 == *(_QWORD *)(a1 + 16)
    && (*(_DWORD *)a2 == 1 || *(_DWORD *)a2 == 2) )
  {
    return 0LL;
  }
  return result;
}
