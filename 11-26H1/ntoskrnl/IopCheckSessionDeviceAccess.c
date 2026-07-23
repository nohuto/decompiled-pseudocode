/*
 * XREFs of IopCheckSessionDeviceAccess @ 0x14043FA30
 * Callers:
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     PsGetSessionId @ 0x14043FD70 (PsGetSessionId.c)
 *     IopGetSessionIdFromPDO @ 0x140A9C068 (IopGetSessionIdFromPDO.c)
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
