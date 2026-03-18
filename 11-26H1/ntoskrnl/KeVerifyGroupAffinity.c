/*
 * XREFs of KeVerifyGroupAffinity @ 0x140483914
 * Callers:
 *     sub_140542730 @ 0x140542730 (sub_140542730.c)
 *     IopConnectInterruptFullySpecified @ 0x14079F708 (IopConnectInterruptFullySpecified.c)
 *     ExpProfileCreate @ 0x140842064 (ExpProfileCreate.c)
 *     PspBuildCreateProcessContext @ 0x140A00BC4 (PspBuildCreateProcessContext.c)
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeVerifyGroupAffinity(__int64 a1, char a2)
{
  __int64 v2; // rax

  v2 = *(unsigned __int16 *)(a1 + 8);
  return (unsigned __int16)v2 < (unsigned __int16)KiActiveGroups
      && (a2 || *(_QWORD *)a1)
      && (*(_QWORD *)((char *)&stru_140FC01F0.116 + 8 * v2 + 4) & *(_QWORD *)a1) == *(_QWORD *)a1
      && !(*(_WORD *)(a1 + 10) | (unsigned __int16)(*(_WORD *)(a1 + 12) | *(_WORD *)(a1 + 14)));
}
