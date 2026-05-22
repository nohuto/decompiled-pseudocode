/*
 * XREFs of ?DisconnectSection@SipcPort@@IEAAXPEAVSipcSection@@@Z @ 0x180111884
 * Callers:
 *     ?GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z @ 0x18006A1F0 (-GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z.c)
 *     ?AddReceivedSection@SipcPort@@IEAAXPEAVSipcSection@@PEAUSipcPortEvent@@@Z @ 0x18011004C (-AddReceivedSection@SipcPort@@IEAAXPEAVSipcSection@@PEAUSipcPortEvent@@@Z.c)
 *     ?Disconnect@SipcPort@@UEAAXXZ @ 0x180111830 (-Disconnect@SipcPort@@UEAAXXZ.c)
 * Callees:
 *     ?IncreaseSectionEventCount@SipcPort@@AEAAXI@Z @ 0x180112030 (-IncreaseSectionEventCount@SipcPort@@AEAAXI@Z.c)
 */

void __fastcall SipcPort::DisconnectSection(SipcPort *this, struct SipcSection *a2)
{
  if ( *((_DWORD *)a2 + 22) == 1 )
  {
    *((_DWORD *)a2 + 22) = 2;
    SipcPort::IncreaseSectionEventCount(this, (unsigned int)a2);
  }
}
