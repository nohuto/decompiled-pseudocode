/*
 * XREFs of ObInitializeFastReference @ 0x140A2BC10
 * Callers:
 *     PspLocateSystemDll @ 0x1407EE38C (PspLocateSystemDll.c)
 *     PspAllocateThread @ 0x140A01BF0 (PspAllocateThread.c)
 *     PspInitializeProcessSecurity @ 0x140A2B070 (PspInitializeProcessSecurity.c)
 *     SeAssignPrimaryToken @ 0x140A2C3D0 (SeAssignPrimaryToken.c)
 *     SepInitializationPhase0 @ 0x140CDD1A0 (SepInitializationPhase0.c)
 * Callees:
 *     ObpIncrPointerCountEx @ 0x140431EE0 (ObpIncrPointerCountEx.c)
 */

__int64 __fastcall ObInitializeFastReference(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    ObpIncrPointerCountEx((volatile signed __int64 *)(a2 - 48), 15);
  result = (a2 + 15) & -(__int64)(a2 != 0);
  *a1 = result;
  return result;
}
