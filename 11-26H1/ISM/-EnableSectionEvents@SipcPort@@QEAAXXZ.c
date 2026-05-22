/*
 * XREFs of ?EnableSectionEvents@SipcPort@@QEAAXXZ @ 0x1801118C0
 * Callers:
 *     ?DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z @ 0x1800606A0 (-DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z.c)
 *     ?Disconnect@SipcEndpoint@@UEAAXXZ @ 0x1801117D0 (-Disconnect@SipcEndpoint@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SipcPort::EnableSectionEvents(SipcPort *this)
{
  bool v1; // zf

  if ( !*((_BYTE *)this + 44) )
  {
    v1 = *((_DWORD *)this + 10) == 0;
    *((_BYTE *)this + 44) = 1;
    if ( !v1 )
      SetEvent(*((HANDLE *)this + 4));
  }
}
