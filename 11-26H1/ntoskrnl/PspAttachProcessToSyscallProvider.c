/*
 * XREFs of PspAttachProcessToSyscallProvider @ 0x1407ED5EC
 * Callers:
 *     PspSyscallProviderOptIn @ 0x1407EDA50 (PspSyscallProviderOptIn.c)
 *     PspInheritSyscallProvider @ 0x140984984 (PspInheritSyscallProvider.c)
 * Callees:
 *     PspLockSyscallProviderExclusive @ 0x140614664 (PspLockSyscallProviderExclusive.c)
 *     PspUnlockSyscallProviderExclusive @ 0x1406147FC (PspUnlockSyscallProviderExclusive.c)
 */

void __fastcall PspAttachProcessToSyscallProvider(_QWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD *v6; // rdx
  _QWORD *v7; // rax

  if ( _InterlockedIncrement64((volatile signed __int64 *)(a2 + 48)) <= 1 )
    __fastfail(0xEu);
  a1[247] = a2;
  a1[250] = *(_QWORD *)(a2 + 8LL * (unsigned int)a3 + 88);
  PspLockSyscallProviderExclusive(a2, a2, a3, a4);
  v6 = *(_QWORD **)(a2 + 80);
  v7 = a1 + 248;
  if ( *v6 != a2 + 72 )
    __fastfail(3u);
  *v7 = a2 + 72;
  a1[249] = v6;
  *v6 = v7;
  *(_QWORD *)(a2 + 80) = v7;
  PspUnlockSyscallProviderExclusive(a2);
}
