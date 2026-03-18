/*
 * XREFs of FxpLibraryBugCheckCallback @ 0x1400AC3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxpLibraryBugCheckCallback(
        _KBUGCHECK_CALLBACK_REASON Reason,
        _KBUGCHECK_REASON_CALLBACK_RECORD *__formal,
        _GUID *ReasonSpecificData,
        unsigned int ReasonSpecificLength)
{
  unsigned int v4; // edx

  v4 = 56 * dword_1400C9028;
  if ( *(_DWORD *)&ReasonSpecificData->Data4[4] < 56 * dword_1400C9028 )
    v4 = 56 * (*(_DWORD *)&ReasonSpecificData->Data4[4] / 0x38u);
  if ( v4 )
  {
    *(_QWORD *)&ReasonSpecificData[2].Data1 = qword_1400C9030;
    *(_DWORD *)ReasonSpecificData[2].Data4 = v4;
    ReasonSpecificData[1] = WdfDumpGuid2;
  }
}
