/*
 * XREFs of ?IncreaseSectionEventCount@SipcPort@@AEAAXI@Z @ 0x180112030
 * Callers:
 *     ?DisconnectSection@SipcPort@@IEAAXPEAVSipcSection@@@Z @ 0x180111884 (-DisconnectSection@SipcPort@@IEAAXPEAVSipcSection@@@Z.c)
 *     ?Reconnect@SipcEndpoint@@UEAAJ_K@Z @ 0x180112AE0 (-Reconnect@SipcEndpoint@@UEAAJ_K@Z.c)
 * Callees:
 *     SipcFailFast @ 0x18011347C (SipcFailFast.c)
 */

void __fastcall SipcPort::IncreaseSectionEventCount(SipcPort *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 10);
  if ( v1 == -1 )
  {
    SipcFailFast(2147549183LL);
    __debugbreak();
  }
  *((_DWORD *)this + 10) = v1 + 1;
  if ( !v1 )
  {
    if ( *((_BYTE *)this + 44) )
      SetEvent(*((HANDLE *)this + 4));
  }
}
