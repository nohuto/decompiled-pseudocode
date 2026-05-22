/*
 * XREFs of ?DisableSectionEvents@SipcPort@@QEAAXXZ @ 0x180111634
 * Callers:
 *     ?Reconnect@SipcEndpoint@@UEAAJ_K@Z @ 0x180112AE0 (-Reconnect@SipcEndpoint@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SipcPort::DisableSectionEvents(SipcPort *this)
{
  if ( *((_BYTE *)this + 44) )
  {
    *((_BYTE *)this + 44) = 0;
    if ( *((_DWORD *)this + 10) )
      ResetEvent(*((HANDLE *)this + 4));
  }
}
