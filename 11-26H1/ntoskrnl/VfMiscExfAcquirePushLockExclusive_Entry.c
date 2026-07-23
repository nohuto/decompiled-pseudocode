/*
 * XREFs of VfMiscExfAcquirePushLockExclusive_Entry @ 0x140C42B20
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscExCheckAPCsDisabled @ 0x140C444A8 (ViMiscExCheckAPCsDisabled.c)
 */

__int64 __fastcall VfMiscExfAcquirePushLockExclusive_Entry(__int64 a1)
{
  return ViMiscExCheckAPCsDisabled(0xEAuLL, *(_QWORD *)(a1 + 8), *(_QWORD *)a1);
}
