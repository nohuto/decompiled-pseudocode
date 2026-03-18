/*
 * XREFs of ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x140056518
 * Callers:
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1401DFD40 (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 *     DxgSetPowerComponentActiveCB @ 0x1403DF620 (DxgSetPowerComponentActiveCB.c)
 * Callees:
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x140012110 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentActiveCB(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  unsigned int v4; // edi

  v4 = (unsigned __int16)a2 + *((unsigned __int16 *)this + ((unsigned __int64)a2 >> 16) + 1640);
  if ( v4 >= *((_DWORD *)this + 852) )
  {
    WdLogSingleEntry5(0LL, 275LL, 23LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 1435;
  }
  if ( *((_BYTE *)this + 3705) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(520LL * v4 + *((_QWORD *)this + 408) + 348));
    LOBYTE(a3) = 1;
    DXGADAPTER::SetPowerComponentActiveCBWorker(this, v4, a3, 0);
  }
  else
  {
    WdLogSingleEntry5(0LL, 275LL, 23LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 1440;
  }
}
