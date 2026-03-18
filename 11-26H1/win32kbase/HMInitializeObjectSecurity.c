/*
 * XREFs of HMInitializeObjectSecurity @ 0x140107ECC
 * Callers:
 *     ?UserSetWindowMessageCapability@@YAHPEAUHWND__@@IPEAXH@Z @ 0x140107D30 (-UserSetWindowMessageCapability@@YAHPEAUHWND__@@IPEAXH@Z.c)
 *     ?UserSetUserObjectCapability@@YAHPEAXK0H@Z @ 0x1401D4CD0 (-UserSetUserObjectCapability@@YAHPEAXK0H@Z.c)
 * Callees:
 *     HMInitializeSecurityDescriptor @ 0x140107F60 (HMInitializeSecurityDescriptor.c)
 */

__int64 __fastcall HMInitializeObjectSecurity(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 UserSessionState; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi

  v3 = (unsigned __int8)a2;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = UserSessionState;
  if ( (_BYTE)v3 == 1 || (_BYTE)v3 == 23 )
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(v6 + 40),
      CompareCapabilityTableEntries,
      AllocateCapabilityTableEntry,
      rimUserMemAllocNodeFree,
      0LL);
  return HMInitializeSecurityDescriptor(v6, v7 + 16 * v3 + 42616);
}
