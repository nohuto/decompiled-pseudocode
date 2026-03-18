/*
 * XREFs of HUBDSM_CompletingClientRequestInConfiguredWithSpecialFile @ 0x140021280
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_CompleteClientSerialRequestWithStatusSuccess @ 0x140015088 (HUBPDO_CompleteClientSerialRequestWithStatusSuccess.c)
 */

__int64 __fastcall HUBDSM_CompletingClientRequestInConfiguredWithSpecialFile(__int64 a1)
{
  HUBPDO_CompleteClientSerialRequestWithStatusSuccess(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
