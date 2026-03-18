/*
 * XREFs of IopCheckSessionDeviceAccess @ 0x140446F40
 * Callers:
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     PsGetSessionId @ 0x140447280 (PsGetSessionId.c)
 *     IopGetSessionIdFromPDO @ 0x140A97EE8 (IopGetSessionIdFromPDO.c)
 */

bool __fastcall IopCheckSessionDeviceAccess(__int64 a1)
{
  int SessionId; // ebx
  unsigned __int64 CurrentServerSilo; // rax
  int SessionIdFromPDO; // eax
  bool result; // al

  SessionId = PsGetSessionId(KeGetCurrentThread()->ApcState.Process);
  CurrentServerSilo = PsGetCurrentServerSilo();
  result = SessionId == **((_DWORD **)PsGetServerSiloGlobals(CurrentServerSilo) + 161)
        && !IopSessionZeroAccessCheckEnabled
        || (SessionIdFromPDO = IopGetSessionIdFromPDO(a1), SessionIdFromPDO == -1)
        || SessionId == SessionIdFromPDO;
  return result;
}
