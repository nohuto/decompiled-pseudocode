/*
 * XREFs of ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x14004CF3C
 * Callers:
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1403B7978 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

bool __fastcall DXGKEYEDMUTEX::IsOwner(DXGKEYEDMUTEX *this, int a2)
{
  char v2; // di
  struct DXGPROCESS *v3; // rbx

  v2 = 0;
  if ( !*((_DWORD *)this + 14) && a2 && *((_DWORD *)this + 15) == a2 )
  {
    v3 = (struct DXGPROCESS *)*((_QWORD *)this + 8);
    return v3 == DXGPROCESS::GetCurrent();
  }
  return v2;
}
