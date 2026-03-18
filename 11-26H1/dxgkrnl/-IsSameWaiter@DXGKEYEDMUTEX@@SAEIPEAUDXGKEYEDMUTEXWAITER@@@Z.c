/*
 * XREFs of ?IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z @ 0x1400613F8
 * Callers:
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1402B20F4 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1403B7978 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

bool __fastcall DXGKEYEDMUTEX::IsSameWaiter(int a1, struct DXGKEYEDMUTEXWAITER *a2)
{
  char v2; // di
  struct DXGPROCESS *v4; // rbx

  v2 = 0;
  if ( a2 && a1 == *((_DWORD *)a2 + 2) )
  {
    v4 = (struct DXGPROCESS *)*((_QWORD *)a2 + 2);
    return DXGPROCESS::GetCurrent() == v4;
  }
  return v2;
}
