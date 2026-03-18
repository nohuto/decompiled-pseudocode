/*
 * XREFs of PspDisablePrimaryTokenExchange @ 0x1409EB314
 * Callers:
 *     PspSystemThreadStartup @ 0x1404FD910 (PspSystemThreadStartup.c)
 *     PspSecureThreadStartup @ 0x140955DE0 (PspSecureThreadStartup.c)
 *     PspUserThreadStartup @ 0x1409EB210 (PspUserThreadStartup.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     PspLockUnlockProcessExclusive @ 0x140449A80 (PspLockUnlockProcessExclusive.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x1404C6128 (PspSynchronizeThreadIsolationDomains.c)
 *     KeSynchronizeAddressPolicy @ 0x1404CC778 (KeSynchronizeAddressPolicy.c)
 *     KeKvaShadowingActive @ 0x1404E6308 (KeKvaShadowingActive.c)
 *     SeTokenIsAdmin @ 0x140920530 (SeTokenIsAdmin.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1409FE890 (PspOneDirectionSecurityDomainCombine.c)
 *     MmSynchronizeAddressPolicy @ 0x140B256A0 (MmSynchronizeAddressPolicy.c)
 */

__int64 __fastcall PspDisablePrimaryTokenExchange(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rsi
  __int64 result; // rax
  void *v6; // rbx
  BOOL v7; // edi
  int v8; // ecx
  int v9; // ebx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v4 + 496) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v4 + 496), 0xFu);
    PspLockUnlockProcessExclusive(v4, a1);
  }
  result = *(unsigned int *)(v4 + 1532);
  if ( (result & 0x400000) == 0 )
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
    result = KeKvaShadowingActive();
    if ( !(_DWORD)result || (result = *(unsigned int *)(v4 + 1532), (result & 0x4000) != 0) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(v4 + 1532), 0xEu);
    }
    else
    {
      if ( v9 )
      {
        *(_BYTE *)(v4 + 352) = 1;
        _InterlockedOr(v10, 0);
      }
      result = (__int64)KeSynchronizeAddressPolicy(v4);
      if ( !_interlockedbittestandset((volatile signed __int32 *)(v4 + 1532), 0xEu) && *(_BYTE *)(v4 + 352) == 1 )
        result = MmSynchronizeAddressPolicy(v4);
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)(v4 + 1532), 0x16u) )
      result = PspOneDirectionSecurityDomainCombine((PVOID)v4);
  }
  _InterlockedOr(v10, 0);
  return result;
}
