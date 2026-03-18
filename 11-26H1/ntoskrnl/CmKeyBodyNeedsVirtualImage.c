/*
 * XREFs of CmKeyBodyNeedsVirtualImage @ 0x140AB2878
 * Callers:
 *     NtRenameKey @ 0x14084F890 (NtRenameKey.c)
 *     NtSetInformationKey @ 0x1408B0310 (NtSetInformationKey.c)
 *     NtDeleteValueKey @ 0x14097CD00 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14097DE30 (NtSetValueKey.c)
 *     NtDeleteKey @ 0x140AB2390 (NtDeleteKey.c)
 * Callees:
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C583F0 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C58750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

bool __fastcall CmKeyBodyNeedsVirtualImage(__int64 a1)
{
  bool v1; // di
  bool v3; // bl
  __int64 v4; // rbp
  ULONG_PTR v5; // rcx
  bool v6; // r8
  __int64 v7; // rcx

  v1 = 0;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
  CmpLockRegistry(a1);
  CmpLockKcbShared(*(_QWORD *)(a1 + 8));
  if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    v3 = (*(_BYTE *)(v4 + 4120) & 0x10) != 0;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0;
  if ( !*(_WORD *)(v5 + 66) )
    v6 = v3;
  if ( (*(_BYTE *)(a1 + 48) & 0x10) == 0 )
    v1 = v6;
  CmpUnlockKcb(v5);
  CmpUnlockRegistry(v7);
  return v1;
}
