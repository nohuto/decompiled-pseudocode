/*
 * XREFs of ?SetShellContentOrientation@Mouse@InputTraceLogging@@SAXW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1401C5A7C
 * Callers:
 *     NtSetShellCursorState @ 0x1401E1D00 (NtSetShellCursorState.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x14008BEF4 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ?OrientationToString@InputTraceLogging@@CAPEBDK@Z @ 0x1401C0094 (-OrientationToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void InputTraceLogging::Mouse::SetShellContentOrientation()
{
  int v0; // r8d
  const char *v1; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_1402A9E40 > 4 && tlgKeywordOn((__int64)&dword_1402A9E40, 64LL) )
  {
    v1 = InputTraceLogging::OrientationToString(v0);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (__int64)&dword_1402A9E40,
      byte_14028C5F2,
      0LL,
      0LL,
      (void **)&v1);
  }
}
