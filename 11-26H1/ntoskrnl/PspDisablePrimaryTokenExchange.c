/*
 * XREFs of PspDisablePrimaryTokenExchange @ 0x1409E7AE4
 * Callers:
 *     PspSystemThreadStartup @ 0x1404F6E50 (PspSystemThreadStartup.c)
 *     PspSecureThreadStartup @ 0x140949BA0 (PspSecureThreadStartup.c)
 *     PspUserThreadStartup @ 0x1409E79E0 (PspUserThreadStartup.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     PspLockUnlockProcessExclusive @ 0x140441BB0 (PspLockUnlockProcessExclusive.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x1404BFAD8 (PspSynchronizeThreadIsolationDomains.c)
 *     KeSynchronizeAddressPolicy @ 0x1404C5F18 (KeSynchronizeAddressPolicy.c)
 *     KeKvaShadowingActive @ 0x1404DF8A8 (KeKvaShadowingActive.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14091B690 (PspOneDirectionSecurityDomainCombine.c)
 *     SeTokenIsAdmin @ 0x1409238F0 (SeTokenIsAdmin.c)
 *     MmSynchronizeAddressPolicy @ 0x140B27900 (MmSynchronizeAddressPolicy.c)
 */

char __fastcall PspDisablePrimaryTokenExchange(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rsi
  int v5; // eax
  void *v6; // rbx
  BOOL v7; // edi
  int v8; // ecx
  int v9; // ebx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v4 + 496) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v4 + 496), 0xFu);
    PspLockUnlockProcessExclusive(v4, a1);
  }
  v5 = *(_DWORD *)(v4 + 1532);
  if ( (v5 & 0x400000) == 0 )
  {
    v6 = (void *)PsReferencePrimaryTokenWithTag(v4, 0x746C6644u, a3, a4);
    v7 = SeTokenIsAdmin(v6) != 0;
    ObfDereferenceObject(v6);
    v8 = 1;
    v9 = 0;
    if ( (*(_BYTE *)(v4 + 368) & 1) == 0 )
      v8 = v7;
    if ( (*(_DWORD *)(v4 + 1532) & 0x800000) == 0 )
      v9 = v8;
    if ( v9 )
    {
      *(_QWORD *)(v4 + 1888) = 0LL;
      *(_QWORD *)(v4 + 1896) = 0LL;
      PspSynchronizeThreadIsolationDomains(v4);
    }
    v5 = KeKvaShadowingActive();
    if ( !v5 || (v5 = *(_DWORD *)(v4 + 1532), (v5 & 0x4000) != 0) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(v4 + 1532), 0xEu);
    }
    else
    {
      if ( v9 )
      {
        *(_BYTE *)(v4 + 352) = 1;
        _InterlockedOr(v11, 0);
      }
      LOBYTE(v5) = (unsigned __int8)KeSynchronizeAddressPolicy(v4);
      if ( !_interlockedbittestandset((volatile signed __int32 *)(v4 + 1532), 0xEu) && *(_BYTE *)(v4 + 352) == 1 )
        LOBYTE(v5) = MmSynchronizeAddressPolicy(v4);
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)(v4 + 1532), 0x16u) )
      LOBYTE(v5) = PspOneDirectionSecurityDomainCombine(v4);
  }
  _InterlockedOr(v11, 0);
  return v5;
}
