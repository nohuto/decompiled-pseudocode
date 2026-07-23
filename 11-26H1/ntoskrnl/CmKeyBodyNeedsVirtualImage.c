/*
 * XREFs of CmKeyBodyNeedsVirtualImage @ 0x140AB0548
 * Callers:
 *     NtRenameKey @ 0x140855BA0 (NtRenameKey.c)
 *     NtSetInformationKey @ 0x1408B6800 (NtSetInformationKey.c)
 *     NtDeleteValueKey @ 0x14093ED10 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14093FE40 (NtSetValueKey.c)
 *     NtDeleteKey @ 0x140AB0060 (NtDeleteKey.c)
 * Callees:
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

bool __fastcall CmKeyBodyNeedsVirtualImage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // di
  bool v6; // bl
  __int64 v7; // rbp
  ULONG_PTR v8; // rcx
  bool v9; // r8
  __int64 v10; // rcx

  v4 = 0;
  v6 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
  CmpLockRegistry(a1, a2, a3, a4);
  CmpLockKcbShared(*(_QWORD *)(a1 + 8));
  if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    v6 = (*(_BYTE *)(v7 + 4120) & 0x10) != 0;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = 0;
  if ( !*(_WORD *)(v8 + 66) )
    v9 = v6;
  if ( (*(_BYTE *)(a1 + 48) & 0x10) == 0 )
    v4 = v9;
  CmpUnlockKcb(v8);
  CmpUnlockRegistry(v10);
  return v4;
}
