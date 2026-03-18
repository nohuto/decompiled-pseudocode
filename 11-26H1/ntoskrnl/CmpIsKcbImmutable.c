/*
 * XREFs of CmpIsKcbImmutable @ 0x140931B20
 * Callers:
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     NtSetInformationKey @ 0x1408B0310 (NtSetInformationKey.c)
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1408BE00C (CmpSetKeySecurity.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x1408DF4A0 (CmpCreateChild.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140930F10 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmSetLastWriteTimeKey @ 0x140B53BB0 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbImmutable(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 160LL) & 0x100000) != 0;
}
