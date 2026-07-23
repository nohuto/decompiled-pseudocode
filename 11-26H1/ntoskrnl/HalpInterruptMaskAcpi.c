/*
 * XREFs of HalpInterruptMaskAcpi @ 0x140C0EDD0
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x1404F8640 (HalpDispatchSystemStateTransition.c)
 * Callees:
 *     HalpInterruptSetLineStateInternal @ 0x14032FC8C (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptApplyOverrides @ 0x140433248 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptFindLines @ 0x1404336FC (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x140433DA8 (HalpInterruptLookupController.c)
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     HalpInterruptPicLine @ 0x1404EB35C (HalpInterruptPicLine.c)
 */

__int64 __fastcall HalpInterruptMaskAcpi(char a1)
{
  _QWORD *Lines; // rax
  __int64 v3; // rdx
  ULONG_PTR *v4; // rcx
  unsigned int v5; // r8d
  __int64 v6; // r9
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  HalpInterruptPicLine(&v8, HIWORD(HalpDeviceBlockUnblockPushLock.UserAffinity));
  HalpInterruptApplyOverrides((int *)&v8, 0LL, 0LL);
  Lines = HalpInterruptFindLines((unsigned int *)&v8);
  if ( !Lines )
    return HalpInterruptSetProblemEx(0LL, 18, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x90Cu);
  v3 = Lines[5];
  if ( a1 )
    *(_DWORD *)(v3 + 12) |= 0x10u;
  else
    *(_DWORD *)(v3 + 12) &= ~0x10u;
  v4 = HalpInterruptLookupController(*((_DWORD *)Lines + 4));
  if ( v4 )
    return HalpInterruptSetLineStateInternal((__int64)v4, (__int64)&v8, *(_QWORD *)(v6 + 40) + 56LL * v5);
  else
    return HalpInterruptSetProblemEx(0LL, 17, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x91Cu);
}
