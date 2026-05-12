/*
 * XREFs of TcglibpCheckError @ 0x1401321A4
 * Callers:
 *     RaidGetTcgLockingObject @ 0x140094918 (RaidGetTcgLockingObject.c)
 *     TcglibActivateLockingSpEx @ 0x140130754 (TcglibActivateLockingSpEx.c)
 *     TcglibAssignNamespaceLocking @ 0x1401308D4 (TcglibAssignNamespaceLocking.c)
 *     TcglibCloseSession @ 0x140130A70 (TcglibCloseSession.c)
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
 *     TcglibpOpenSessionWithRetry @ 0x140136870 (TcglibpOpenSessionWithRetry.c)
 * Callees:
 *     TcglibStackReset @ 0x140131DA0 (TcglibStackReset.c)
 */

__int64 __fastcall TcglibpCheckError(__int64 a1, volatile __int32 *a2, int a3)
{
  if ( a3 == -1073741643 || a3 == -1073741618 || a3 == -1073741436 || a3 == -1073741435 || a3 == -1073741434 )
  {
    a3 = TcglibStackReset(a1, (__int64)a2);
    if ( a3 >= 0 )
    {
      a3 = -1073741309;
      _InterlockedExchange(a2, 4);
    }
  }
  else if ( a3 == -1073741309 )
  {
    _InterlockedExchange(a2, 4);
  }
  return (unsigned int)a3;
}
